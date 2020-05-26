// Copyright (c) 2019 Computer Vision Center (CVC) at the Universitat Autonoma
// de Barcelona (UAB).
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#include "carla/road/element/Geometry.h"

#include "carla/Debug.h"
#include "carla/Exception.h"
#include "carla/geom/Location.h"
#include "carla/geom/Math.h"

#include <cephes/fresnel.h>

#include <cmath>
#include <stdexcept>

namespace carla {
namespace road {
namespace element {

  void DirectedPoint::ApplyLateralOffset(float lateral_offset) {
    /// @todo Z axis??
    auto normal_x =  std::sin(static_cast<float>(tangent));
    auto normal_y = -std::cos(static_cast<float>(tangent));
    location.x += lateral_offset * normal_x;
    location.y += lateral_offset * normal_y;
  }

  DirectedPoint GeometryLine::PosFromDist(double dist) const {
    DEBUG_ASSERT(_length > 0.0);
    dist = geom::Math::Clamp(dist, 0.0, _length);
    DirectedPoint p(_start_position, _heading);
    p.location.x += static_cast<float>(dist * std::cos(p.tangent));
    p.location.y += static_cast<float>(dist * std::sin(p.tangent));
    return p;
  }

  DirectedPoint GeometryArc::PosFromDist(double dist) const {
    dist = geom::Math::Clamp(dist, 0.0, _length);
    DEBUG_ASSERT(_length > 0.0);
    DEBUG_ASSERT(std::fabs(_curvature) > 1e-15);
    const double radius = 1.0 / _curvature;
    constexpr double pi_half = geom::Math::Pi<double>() / 2.0;
    DirectedPoint p(_start_position, _heading);
    p.location.x += static_cast<float>(radius * std::cos(p.tangent + pi_half));
    p.location.y += static_cast<float>(radius * std::sin(p.tangent + pi_half));
    p.tangent += dist * _curvature;
    p.location.x -= static_cast<float>(radius * std::cos(p.tangent + pi_half));
    p.location.y -= static_cast<float>(radius * std::sin(p.tangent + pi_half));
    return p;
  }

  DirectedPoint GeometrySpiral::PosFromDist(double dist) const {
    // not working yet with negative values
    dist = geom::Math::Clamp(dist, 0.0, _length);
    DEBUG_ASSERT(_length > 0.0);
    DEBUG_ASSERT(std::fabs(_curve_end) > 1e-15);
    const double radius = 1.0 / _curve_end;
    const double extra_norm = 1.0 / std::sqrt(geom::Math::Pi<double>() / 2.0);
    const double norm = 1.0 / std::sqrt(2.0 * radius * _length);
    const double length = dist * norm;
    double S, C;
    fresnl(length * extra_norm, &S, &C);
    S /= (norm * extra_norm);
    C /= (norm * extra_norm);
    DirectedPoint p(_start_position, _heading);
    const double cos_a = std::cos(p.tangent);
    const double sin_a = std::sin(p.tangent);
    p.location.x += static_cast<float>(C * cos_a - S * sin_a);
    p.location.y += static_cast<float>(S * cos_a + C * sin_a);
    p.tangent += length * length;

    return p;
  }

  /// @todo
  std::pair<float, float> GeometrySpiral::DistanceTo(const geom::Location &) const {
    throw_exception(std::runtime_error("not implemented"));
  }

<<<<<<< HEAD
=======
  void GeometryPoly3::PreComputeSpline() {
    const double delta_u = 0.01; // interval between values of u
    double current_s = 0;
    double current_u = 0;
    double last_u = 0;
    double last_v = _poly.Evaluate(current_u);
    double last_s = 0;
    RtreeValue last_val{last_u, last_v, last_s, _poly.Tangent(current_u)};
    while (current_s < _length + delta_u) {
      current_u += delta_u;
      double current_v = _poly.Evaluate(current_u);
      double du = current_u - last_u;
      double dv = current_v - last_v;
      double ds = sqrt(du * du + dv * dv);
      current_s += ds;
      double current_t = _poly.Tangent(current_u);
      RtreeValue current_val{current_u, current_v, current_s, current_t};

      Rtree::BPoint p1(static_cast<float>(last_s));
      Rtree::BPoint p2(static_cast<float>(current_s));
      _rtree.InsertElement(Rtree::BSegment(p1, p2), last_val, current_val);

      last_u = current_u;
      last_v = current_v;
      last_s = current_s;
      last_val = current_val;

    }
  }

  DirectedPoint GeometryParamPoly3::PosFromDist(double dist) const {
    auto result = _rtree.GetNearestNeighbours(
        Rtree::BPoint(static_cast<float>(dist))).front();

    auto &val1 = result.second.first;
    auto &val2 = result.second.second;
    double rate = (val2.s - dist) / (val2.s - val1.s);
    double u = rate * val1.u + (1.0 - rate) * val2.u;
    double v = rate * val1.v + (1.0 - rate) * val2.v;
    double t_u = (rate * val1.t_u + (1.0 - rate) * val2.t_u);
    double t_v = (rate * val1.t_v + (1.0 - rate) * val2.t_v);
    double tangent = atan2(t_v, t_u); // ?

    geom::Vector2D pos = RotatebyAngle(_heading, u, v);
    DirectedPoint p(_start_position, _heading + tangent);
    p.location.x += pos.x;
    p.location.y += pos.y;
    return p;
  }
  std::pair<float, float> GeometryParamPoly3::DistanceTo(const geom::Location &) const {
    // No analytical expression (Newton-Raphson?/point search)
    // throw_exception(std::runtime_error("not implemented"));
    return {_start_position.x, _start_position.y};
  }

  void GeometryParamPoly3::PreComputeSpline() {
    size_t number_intervals = 1000;
    double delta_p = 1.0 / number_intervals;
    if (_arcLength) {
        delta_p *= _length;
    }
    double param_p = 0;
    double current_s = 0;
    double last_u = _polyU.Evaluate(param_p);
    double last_v = _polyV.Evaluate(param_p);
    double last_s = 0;
    RtreeValue last_val{
        last_u,
        last_v,
        last_s,
        _polyU.Tangent(param_p),
        _polyV.Tangent(param_p) };
    for(size_t i = 0; i < number_intervals; ++i) {
      param_p += delta_p;
      double current_u = _polyU.Evaluate(param_p);
      double current_v = _polyV.Evaluate(param_p);
      double du = current_u - last_u;
      double dv = current_v - last_v;
      double ds = sqrt(du * du + dv * dv);
      current_s += ds;
      double current_t_u = _polyU.Tangent(param_p);
      double current_t_v = _polyV.Tangent(param_p);
      RtreeValue current_val{
          current_u,
          current_v,
          current_s,
          current_t_u,
          current_t_v };

      Rtree::BPoint p1(static_cast<float>(last_s));
      Rtree::BPoint p2(static_cast<float>(current_s));
      _rtree.InsertElement(Rtree::BSegment(p1, p2), last_val, current_val);

      last_u = current_u;
      last_v = current_v;
      last_s = current_s;
      last_val = current_val;

      if(current_s > _length){
        break;
      }
    }
  }
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd
} // namespace element
} // namespace road
} // namespace carla
