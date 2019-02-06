// Copyright (c) 2017 Computer Vision Center (CVC) at the Universitat Autonoma
// de Barcelona (UAB).
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#pragma once

#include "Carla/Actor/ActorDispatcher.h"
#include "Carla/Sensor/WorldObserver.h"
#include "Carla/Weather/Weather.h"
#include "Carla/Server/TheNewCarlaServer.h"

#include <compiler/disable-ue4-macros.h>
#include <carla/rpc/Actor.h>
#include <carla/rpc/ActorDescription.h>
#include <carla/geom/BoundingBox.h>
#include <carla/recorder/Recorder.h>
#include <carla/recorder/RecorderEvent.h>
#include <carla/recorder/Replayer.h>
#include <carla/streaming/Server.h>
#include <compiler/enable-ue4-macros.h>

#include <tuple>

#include "CarlaEpisode.generated.h"

namespace crec = carla::recorder;

/// A simulation episode.
///
/// Each time the level is restarted a new episode is created.
UCLASS(BlueprintType, Blueprintable)
class CARLA_API UCarlaEpisode : public UObject
{
  GENERATED_BODY()

public:

  UCarlaEpisode(const FObjectInitializer &ObjectInitializer);

  auto GetId() const
  {
    return Id;
  }

  UFUNCTION(BlueprintCallable)
  const FString &GetMapName() const
  {
    return MapName;
  }

  UFUNCTION(BlueprintCallable)
  APawn *GetSpectatorPawn() const
  {
    return Spectator;
  }

  UFUNCTION(BlueprintCallable)
  AWeather *GetWeather() const
  {
    return Weather;
  }

  /// Return the list of actor definitions that are available to be spawned this
  /// episode.
  UFUNCTION(BlueprintCallable)
  const TArray<FActorDefinition> &GetActorDefinitions() const
  {
    return ActorDispatcher.GetActorDefinitions();
  }

  /// Return the list of recommended start positions.
  UFUNCTION(BlueprintCallable)
  TArray<FTransform> GetRecommendedStartTransforms() const;

  /// Spawns an actor based on @a ActorDescription at @a Transform. To properly
  /// despawn an actor created with this function call DestroyActor.
  ///
  /// @return A pair containing the result of the spawn function and a view over
  /// the actor and its properties. If the status is different of Success the
  /// view is invalid.
  TPair<EActorSpawnResultStatus, FActorView> SpawnActorWithInfo(
      const FTransform &Transform,
      FActorDescription thisActorDescription,
      FActorView::IdType DesiredId = 0)
  {
    auto result = ActorDispatcher.SpawnActor(Transform, thisActorDescription, DesiredId);

    if (result.Key == EActorSpawnResultStatus::Success) {
      CreateRecorderEventAdd(
        static_cast<carla::rpc::actor_id_type>(result.Value.GetActorId()),
        Transform,
        std::move(thisActorDescription)
      );
    }
    return result;
  }

  /// Spawns an actor based on @a ActorDescription at @a Transform. To properly
  /// despawn an actor created with this function call DestroyActor.
  ///
  /// @return nullptr on failure.
  ///
  /// @note Special overload for blueprints.
  UFUNCTION(BlueprintCallable)
  AActor *SpawnActor(
      const FTransform &Transform,
      FActorDescription ActorDescription)
  {
    return SpawnActorWithInfo(Transform, std::move(ActorDescription)).Value.GetActor();
  }

  /// @copydoc FActorDispatcher::DestroyActor(AActor*)
  UFUNCTION(BlueprintCallable)
  bool DestroyActor(AActor *Actor)
  {
      // recorder event
      crec::RecorderEventDel recEvent {
        GetActorRegistry().Find(Actor).GetActorId(),
      };
      Recorder.addEvent(std::move(recEvent));

    return ActorDispatcher.DestroyActor(Actor);
  }

  const FActorRegistry &GetActorRegistry() const
  {
    return ActorDispatcher.GetActorRegistry();
  }

  const AWorldObserver *StartWorldObserver(carla::streaming::MultiStream Stream);

  const AWorldObserver *GetWorldObserver() const
  {
    return WorldObserver;
  }

  carla::recorder::Recorder &GetRecorder()
  {
    return Recorder;
  }

  carla::recorder::Replayer &GetReplayer()
  {
    return Recorder.getReplayer();
  }

  std::string StartRecorder(std::string name);

  void SetServer(FTheNewCarlaServer *newServer) {
    server = newServer;
  }

private:

  friend class ATheNewCarlaGameModeBase;

  void InitializeAtBeginPlay();

  void RegisterActorFactory(ACarlaActorFactory &ActorFactory)
  {
    ActorDispatcher.Bind(ActorFactory);
  }

  void CreateRecorderEventAdd(
    unsigned int databaseId,
    const FTransform &Transform,
    FActorDescription thisActorDescription);

  bool SetActorSimulatePhysics(FActorView &ActorView, bool bEnabled);

  const uint32 Id = 0u;

  UPROPERTY(VisibleAnywhere)
  FString MapName;

  FActorDispatcher ActorDispatcher;

  UPROPERTY(VisibleAnywhere)
  APawn *Spectator = nullptr;

  UPROPERTY(VisibleAnywhere)
  AWeather *Weather = nullptr;

  UPROPERTY(VisibleAnywhere)
  AWorldObserver *WorldObserver = nullptr;

  carla::recorder::Recorder Recorder;
  FTheNewCarlaServer *server {nullptr};
};
