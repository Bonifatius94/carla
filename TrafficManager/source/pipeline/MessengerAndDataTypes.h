#pragma once

#include <memory>
<<<<<<< HEAD:TrafficManager/source/pipeline/MessengerAndDataTypes.h
=======
#include <tuple>
#include <unordered_map>
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd:LibCarla/source/carla/trafficmanager/MessengerAndDataTypes.h
#include <vector>

#include "carla/client/Actor.h"
#include "carla/geom/Vector3D.h"
#include "carla/geom/Transform.h"
#include "carla/Memory.h"
#include "carla/rpc/ActorId.h"

#include "Messenger.h"
#include "SimpleWaypoint.h"

namespace traffic_manager {

<<<<<<< HEAD:TrafficManager/source/pipeline/MessengerAndDataTypes.h
namespace cc = carla::client;
=======
  namespace cc = carla::client;
  namespace cg = carla::geom;
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd:LibCarla/source/carla/trafficmanager/MessengerAndDataTypes.h

  /// Convenience typing.

  /// Alias for waypoint buffer used in the localization stage.
  using Buffer = std::deque<std::shared_ptr<SimpleWaypoint>>;
  /// Alias used for the list of buffers in the localization stage.
  using BufferList = std::vector<Buffer>;

  /// Data types.

  /// Type of data sent by the localization stage to the motion planner stage.
  struct LocalizationToPlannerData {
    carla::SharedPtr<cc::Actor> actor;
    float deviation;
    bool approaching_true_junction;
    cg::Vector3D velocity;
    bool physics_enabled;
    std::vector<std::shared_ptr<SimpleWaypoint>> position_window;
  };

  /// Type of data sent by the motion planner stage to the batch control stage.
  struct PlannerToControlData {
    carla::ActorId actor_id;
    float throttle;
    float brake;
    float steer;
    bool physics_enabled;
    cg::Transform transform;
  };

  /// Type of data sent by the localization stage to the collision stage.
  struct LocalizationToCollisionData {
<<<<<<< HEAD:TrafficManager/source/pipeline/MessengerAndDataTypes.h
    carla::SharedPtr<cc::Actor> actor;
    Buffer *buffer;
=======
    Actor actor;
    Buffer buffer;
    std::vector<std::tuple<ActorId, Actor, cg::Vector3D>> overlapping_actors;
    std::shared_ptr<SimpleWaypoint> safe_point_after_junction;
    std::shared_ptr<SimpleWaypoint> closest_waypoint;
    std::shared_ptr<SimpleWaypoint> junction_look_ahead_waypoint;
    cg::Vector3D velocity;
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd:LibCarla/source/carla/trafficmanager/MessengerAndDataTypes.h
  };

  /// Type of data sent by the collision stage to the motion planner stage.
  struct CollisionToPlannerData {
    bool hazard;
    float distance_to_other_vehicle;
    cg::Vector3D other_vehicle_velocity;
  };

  /// Type of data sent by the localization stage to the traffic light stage.
  struct LocalizationToTrafficLightData {
    carla::SharedPtr<cc::Actor> actor;
    std::shared_ptr<SimpleWaypoint> closest_waypoint;
    std::shared_ptr<SimpleWaypoint> junction_look_ahead_waypoint;
  };

  /// Type of data sent by the traffic light stage to the motion planner stage.
  struct TrafficLightToPlannerData {
    bool traffic_light_hazard;
  };

  /// Data frame types.

  /// Array types of data flowing between stages.

  using LocalizationToPlannerFrame = std::vector<LocalizationToPlannerData>;
  using PlannerToControlFrame = std::vector<PlannerToControlData>;
  using LocalizationToCollisionFrame = std::vector<LocalizationToCollisionData>;
  using LocalizationToTrafficLightFrame = std::vector<LocalizationToTrafficLightData>;
  using CollisionToPlannerFrame = std::vector<CollisionToPlannerData>;
  using TrafficLightToPlannerFrame = std::vector<TrafficLightToPlannerData>;

  /// Messenger types

  using LocalizationToPlannerMessenger = Messenger<std::shared_ptr<LocalizationToPlannerFrame>>;
  using PlannerToControlMessenger = Messenger<std::shared_ptr<PlannerToControlFrame>>;
  using LocalizationToCollisionMessenger = Messenger<std::shared_ptr<LocalizationToCollisionFrame>>;
  using LocalizationToTrafficLightMessenger = Messenger<std::shared_ptr<LocalizationToTrafficLightFrame>>;
  using CollisionToPlannerMessenger = Messenger<std::shared_ptr<CollisionToPlannerFrame>>;
  using TrafficLightToPlannerMessenger = Messenger<std::shared_ptr<TrafficLightToPlannerFrame>>;
}
