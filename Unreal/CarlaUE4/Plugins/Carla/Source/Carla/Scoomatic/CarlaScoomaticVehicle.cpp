#include "Carla/Scoomatic/CarlaScoomaticVehicle.h"

ACarlaScoomaticVehicle::ACarlaScoomaticVehicle(const FObjectInitializer& ObjectInitializer) :
    Super(ObjectInitializer)
{
    //Init stuff
}


float ACarlaScoomaticVehicle::GetLeftVelocity()
{
    FScoomaticControl Control = GetScoomaticControl();
    return Control.LeftVelocity;
}

float ACarlaScoomaticVehicle::GetRightVelocity() 
{
    FScoomaticControl Control = GetScoomaticControl();
    return Control.RightVelocity;
}


void ACarlaScoomaticVehicle::SetLeftVelocity(float Value)
{
    FScoomaticControl Control = GetScoomaticControl();
    Control.LeftVelocity = Value;
    ApplyVehicleControl(Control);
}

void ACarlaScoomaticVehicle::SetRightVelocity(float Value)
{
    FScoomaticControl Control = GetScoomaticControl();
    Control.RightVelocity = Value;
    ApplyVehicleControl(Control);
}
