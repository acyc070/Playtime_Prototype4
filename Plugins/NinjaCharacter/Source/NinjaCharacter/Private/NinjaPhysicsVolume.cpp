#include "NinjaPhysicsVolume.h"

ANinjaPhysicsVolume::ANinjaPhysicsVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GravityDirectionMode = ENinjaGravityDirectionMode::Fixed;
    this->GravityActor = NULL;
    this->GravityScale = 1.00f;
}

void ANinjaPhysicsVolume::SetSplineTangentGravityDirection(AActor* NewGravityActor) {
}

void ANinjaPhysicsVolume::SetSplinePlaneGravityDirection(AActor* NewGravityActor) {
}

void ANinjaPhysicsVolume::SetSplineGravityDirection(AActor* NewGravityActor) {
}

void ANinjaPhysicsVolume::SetSegmentGravityDirection(const FVector& NewGravitySegmentStart, const FVector& NewGravitySegmentEnd) {
}

void ANinjaPhysicsVolume::SetPointGravityDirectionFromActor(AActor* NewGravityActor) {
}

void ANinjaPhysicsVolume::SetPointGravityDirection(const FVector& NewGravityPoint) {
}

void ANinjaPhysicsVolume::SetLineGravityDirection(const FVector& NewGravityLineStart, const FVector& NewGravityLineEnd) {
}

void ANinjaPhysicsVolume::SetGravityScale(float NewGravityScale) {
}

void ANinjaPhysicsVolume::SetCollisionGravityDirection(AActor* NewGravityActor) {
}

void ANinjaPhysicsVolume::SetBoxGravityDirectionFromActor(AActor* NewGravityActor) {
}

void ANinjaPhysicsVolume::SetBoxGravityDirection(const FVector& NewGravityBoxOrigin, const FVector& NewGravityBoxExtent) {
}

void ANinjaPhysicsVolume::K2_SetPlaneGravityDirection(const FVector& NewGravityPlaneBase, const FVector& NewGravityPlaneNormal) {
}

void ANinjaPhysicsVolume::K2_SetFixedGravityDirection(const FVector& NewGravityDirection) {
}

float ANinjaPhysicsVolume::GetGravityScale() const {
    return 0.0f;
}

float ANinjaPhysicsVolume::GetGravityMagnitude(const FVector& Point) const {
    return 0.0f;
}

FVector ANinjaPhysicsVolume::GetGravityDirection(const FVector& Point) const {
    return FVector{};
}

FVector ANinjaPhysicsVolume::GetGravity(const FVector& Point) const {
    return FVector{};
}


