// Copyright (c) 2017 Computer Vision Center (CVC) at the Universitat Autonoma
// de Barcelona (UAB).
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#pragma once

#include "GameFramework/Pawn.h"

#include "Scoomatic/CarlaScoomaticBaseState.h"
#include "Scoomatic/ScoomaticControl.h"
#include "Scoomatic/ScoomaticInputPriority.h"

#include "CoreMinimal.h"

#include "CarlaScoomaticBase.generated.h"

class UBoxComponent;

/// Base class for CARLA Scoomatic Bases.
UCLASS()
class CARLA_API ACarlaScoomaticBase : public APawn
{
  GENERATED_BODY()

  // ===========================================================================
  /// @name Constructor and destructor
  // ===========================================================================
  /// @{
public:

  ACarlaScoomaticBase(const FObjectInitializer &ObjectInitializer);

  ~ACarlaScoomaticBase();

  /// @}
  // ===========================================================================
  /// @name Get functions
  // ===========================================================================
  /// @{
public:

  /// Scoomatic control currently applied to this Scoomatic.
  UFUNCTION(Category = "CARLA Scoomatic Base", BlueprintCallable)
  const FScoomaticControl &GetScoomaticControl() const
  {
    return LastAppliedControl;
  }

  /// Transform of the Scoomatic. Location is shifted so it matches center of the
  /// Scoomatic bounds rather than the actor's location.
  UFUNCTION(Category = "CARLA Scoomatic Base", BlueprintCallable)
  FTransform GetScoomaticTransform() const
  {
    return GetActorTransform();
  }

  /// Get Scoomatic's bounding box component.
  UFUNCTION(Category = "CARLA Scoomatic Base", BlueprintCallable)
  UBoxComponent *GetScoomaticBoundingBox() const
  {
    return ScoomaticBounds;
  }

  /// Transform of the vehicle's bounding box relative to the vehicle.
  UFUNCTION(Category = "CARLA Scoomatic Base", BlueprintCallable)
  FTransform GetScoomaticBoundingBoxTransform() const;

  /// Extent of the vehicle's bounding box.
  UFUNCTION(Category = "CARLA Scoomatic Base", BlueprintCallable)
  FVector GetScoomaticBoundingBoxExtent() const;

  /// @}
  // ===========================================================================
  /// @name Scoomatic input control
  // ===========================================================================
  /// @{
public:

  UFUNCTION(Category = "CARLA Scoomatic Base", BlueprintCallable)
  void ApplyScoomaticControl(const FScoomaticControl &Control, EScoomaticInputPriority Priority)
  {
    if (InputControl.Priority <= Priority)
    {
      InputControl.Control = Control;
      InputControl.Priority = Priority;
    }
  }

  /// @todo This function should be private to AScoomaticBaseAIController.
  void FlushScoomaticControl();

  /// @}
  // ===========================================================================
  /// @name DEPRECATED Set functions
  // ===========================================================================
  /// @{
public:

  UFUNCTION(Category = "CARLA Scoomatic Base", BlueprintCallable)
  void SetLeftVelocity(float Value);

  UFUNCTION(Category = "CARLA Scoomatic Base", BlueprintCallable)
  void SetRightVelocity(float Value);

  /// @}
  // ===========================================================================
  /// @name Overriden from AActor
  // ===========================================================================
  /// @{

protected:

  virtual void BeginPlay() override;

private:

  /// Current state of the Scoomatic controller (for debugging purposes).
  UPROPERTY(Category = "AI Controller", VisibleAnywhere)
  ECarlaScoomaticBaseState State = ECarlaScoomaticBaseState::UNKNOWN;

  UPROPERTY(Category = "CARLA Scoomatic Base", EditAnywhere)
  UBoxComponent *ScoomaticBounds;

  struct
  {
    EScoomaticInputPriority Priority = EScoomaticInputPriority::INVALID;
    FScoomaticControl Control;
  }
  InputControl;

  FScoomaticControl LastAppliedControl;
};
