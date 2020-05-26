// Copyright (c) 2019 Computer Vision Center (CVC) at the Universitat Autonoma
// de Barcelona (UAB).
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#include "Carla.h"
#include "InertialMeasurementUnit.h"

#include <compiler/disable-ue4-macros.h>
#include "carla/geom/Math.h"
#include "carla/geom/Vector3D.h"
#include <compiler/enable-ue4-macros.h>

#include "Carla/Vehicle/CarlaWheeledVehicle.h"
#include "Carla/Sensor/WorldObserver.h"
#include "Carla/Actor/ActorBlueprintFunctionLibrary.h"

// Based on OpenDRIVE's lon and lat
const FVector AInertialMeasurementUnit::CarlaNorthVector =
    FVector(0.0f, -1.0f, 0.0f);

AInertialMeasurementUnit::AInertialMeasurementUnit(
    const FObjectInitializer &ObjectInitializer)
  : Super(ObjectInitializer)
{
  PrimaryActorTick.bCanEverTick = true;
  PrimaryActorTick.TickGroup = TG_PostPhysics;
}

FActorDefinition AInertialMeasurementUnit::GetSensorDefinition()
{
  return UActorBlueprintFunctionLibrary::MakeGenericSensorDefinition(
      TEXT("other"),
      TEXT("imu"));
}

void AInertialMeasurementUnit::Set(const FActorDescription &ActorDescription)
{
  Super::Set(ActorDescription);
  // Fill the parameters that the user requested
  // Not currently needed in this sensor
}

void AInertialMeasurementUnit::SetOwner(AActor *Owner)
{
  Super::SetOwner(Owner);
}

// Copy of FWorldObserver_GetAngularVelocity but using radiants
static FVector carla_GetActorAngularVelocityInRadians(AActor &Actor)
{
  const auto RootComponent = Cast<UPrimitiveComponent>(Actor.GetRootComponent());
  const FVector AngularVelocity =
      RootComponent != nullptr ?
          RootComponent->GetPhysicsAngularVelocityInRadians() :
          FVector { 0.0f, 0.0f, 0.0f };

  return AngularVelocity;
}

void AInertialMeasurementUnit::Tick(float DeltaTime)
{
  Super::Tick(DeltaTime);

  namespace cg = carla::geom;

  // Accelerometer measures linear acceleration in m/s2
  constexpr float TO_METERS = 1e-2;
<<<<<<< HEAD

  ACarlaWheeledVehicle *vehicle = Cast<ACarlaWheeledVehicle>(GetOwner());
  const FVector CurrentVelocity = vehicle->GetVehicleForwardSpeed() * vehicle->GetVehicleOrientation();
  float CurrentSimulationTime = GetWorld()->GetTimeSeconds();
  FVector FVectorAccelerometer =
      TO_METERS * (CurrentVelocity - PrevVelocity) / DeltaTime;

  PrevVelocity = CurrentVelocity;
=======
  // Earth's gravitational acceleration is approximately 9.81 m/s^2
  constexpr float GRAVITY = 9.81f;

  // 2nd derivative of the polynomic (quadratic) interpolation
  // using the point in current time and two previous steps:
  // d2[i] = -2.0*(y1/(h1*h2)-y2/((h2+h1)*h2)-y0/(h1*(h2+h1)))
  const FVector CurrentLocation = GetActorLocation();

  const FVector Y2 = PrevLocation[0];
  const FVector Y1 = PrevLocation[1];
  const FVector Y0 = CurrentLocation;
  const float H1 = DeltaTime;
  const float H2 = PrevDeltaTime;

  const float H1AndH2 = H2 + H1;
  const FVector A = Y1 / ( H1 * H2 );
  const FVector B = Y2 / ( H2 * (H1AndH2) );
  const FVector C = Y0 / ( H1 * (H1AndH2) );
  FVector FVectorAccelerometer = TO_METERS * -2.0f * ( A - B - C );

  // Update the previous locations
  PrevLocation[0] = PrevLocation[1];
  PrevLocation[1] = CurrentLocation;
  PrevDeltaTime = DeltaTime;

  // Add gravitational acceleration
  FVectorAccelerometer.Z += GRAVITY;

  FQuat ImuRotation =
      GetRootComponent()->GetComponentTransform().GetRotation();
  FVectorAccelerometer = ImuRotation.UnrotateVector(FVectorAccelerometer);

  // Cast from FVector to our Vector3D to correctly send the data in m/s^2
  // and apply the desired noise function, in this case a normal distribution
  const carla::geom::Vector3D Accelerometer =
      ComputeAccelerometerNoise(FVectorAccelerometer);
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

  FQuat ImuRotation = GetRootComponent()->GetComponentTransform().GetRotation();
  FVectorAccelerometer = ImuRotation.UnrotateVector(FVectorAccelerometer);

  // Cast from FVector to our Vector3D to correctly send the data in m/s2
  const cg::Vector3D Accelerometer (
      FVectorAccelerometer.X,
      FVectorAccelerometer.Y,
      FVectorAccelerometer.Z
  );

  // Gyroscope measures angular velocity in rad/sec
  const FVector AngularVelocity =
      carla_GetActorAngularVelocityInRadians(*GetOwner());

  const FQuat SensorLocalRotation =
      RootComponent->GetRelativeTransform().GetRotation();

  const FVector FVectorGyroscope =
      SensorLocalRotation.RotateVector(AngularVelocity);

  // Cast from FVector to our Vector3D to correctly send the data in rad/s
  const cg::Vector3D Gyroscope (
      FVectorGyroscope.X,
      FVectorGyroscope.Y,
      FVectorGyroscope.Z
  );

  // Magnetometer: orientation with respect to the North in rad
  const FVector ForwVect = GetActorForwardVector().GetSafeNormal2D();
  float Compass = std::acos(FVector::DotProduct(CarlaNorthVector, ForwVect));

  // Keep the angle between [0, 2pi)
  if (FVector::CrossProduct(CarlaNorthVector, ForwVect).Z > 0.0f)
  {
    Compass = cg::Math::Pi2<float>() - Compass;
  }

  auto Stream = GetDataStream(*this);
  Stream.Send(
      *this,
      Accelerometer,
      Gyroscope,
      Compass);
}

void AInertialMeasurementUnit::BeginPlay()
{
  Super::BeginPlay();

  constexpr float TO_METERS = 1e-2;
  PrevVelocity = GetOwner()->GetVelocity();
}
