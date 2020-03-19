#pragma once

#include "GameFramework/Pawn.h"

#include "Carla/Scoomatic/ScoomaticControl.h"

#include "CarlaScoomaticVehicle.generated.h"

UCLASS()
class CARLA_API ACarlaScoomaticVehicle : public APawn
{
    GENERATED_BODY()

public:

    ACarlaScoomaticVehicle(const FObjectInitializer &ObjectInitializer);

    ~ACarlaScoomaticVehicle();

public:

    UFUNCTION(Category = "CARLA Scoomatic Vehicle", BlueprintCallable)
    const FScoomaticControl &GetScoomaticControl() const
    {
        return ScoomaticControl;
    };

    UFUNCTION(Category = "Carla Scoomatic Vehicle", BlueprintCallable)
    float GetLeftVelocity();

    UFUNCTION(Category = "Carla Scoomatic Vehicle", BlueprintCallable)
    float GetRightVelocity();

public:

    UFUNCTION(Category = "Carla Scoomatic Vehicle", BlueprintCallable)
    void ApplyVehicleControl(const FScoomaticControl &Control)
    {
        ScoomaticControl = Control;
    };

    UFUNCTION(Category = "Carla Scoomatic Vehicle", BlueprintCallable)
    void SetLeftVelocity(float Value);

    UFUNCTION(Category = "Carla Scoomatic Vehicle", BlueprintCallable)
    void SetRightVelocity(float Value);

private:

    FScoomaticControl ScoomaticControl;

};
