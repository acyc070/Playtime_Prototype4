#include "NinjaProjectileMovementComponent.h"

UNinjaProjectileMovementComponent::UNinjaProjectileMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bComponentShouldUpdatePhysicsVolume = true;
    this->bFollowGravityDirection = false;
}


