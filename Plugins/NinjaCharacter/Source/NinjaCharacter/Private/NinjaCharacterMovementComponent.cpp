#include "NinjaCharacterMovementComponent.h"
#include "Engine/EngineTypes.h"

UNinjaCharacterMovementComponent::UNinjaCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetworkSmoothingMode = ENetworkSmoothingMode::Disabled;
    this->bForceSimulateMovement = false;
    this->bRevertToDefaultGravity = false;
    this->bLandOnAnySurface = false;
    this->bTriggerUnwalkableHits = false;
    this->GravityDirectionMode = ENinjaGravityDirectionMode::Fixed;
    this->GravityActor = NULL;
    this->bDisableGravityReplication = false;
    this->bAlignGravityToBase = false;
    this->bAlignComponentToFloor = false;
    this->bAlignComponentToGravity = false;
    this->bAlwaysRotateAroundCenter = false;
    this->bRotateVelocityOnGround = false;
    this->ThresholdParallelAngle = 1.00f;
    this->ThresholdOrthogonalCosine = 0.02f;
    this->ThresholdParallelCosine = 1.00f;
}

void UNinjaCharacterMovementComponent::SetSplineTangentGravityDirection(AActor* NewGravityActor) {
}

void UNinjaCharacterMovementComponent::SetSplinePlaneGravityDirection(AActor* NewGravityActor) {
}

void UNinjaCharacterMovementComponent::SetSplineGravityDirection(AActor* NewGravityActor) {
}

void UNinjaCharacterMovementComponent::SetSegmentGravityDirection(const FVector& NewGravitySegmentStart, const FVector& NewGravitySegmentEnd) {
}

void UNinjaCharacterMovementComponent::SetPointGravityDirectionFromActor(AActor* NewGravityActor) {
}

void UNinjaCharacterMovementComponent::SetPointGravityDirection(const FVector& NewGravityPoint) {
}

void UNinjaCharacterMovementComponent::SetLineGravityDirection(const FVector& NewGravityLineStart, const FVector& NewGravityLineEnd) {
}

void UNinjaCharacterMovementComponent::SetCollisionGravityDirection(AActor* NewGravityActor) {
}

void UNinjaCharacterMovementComponent::SetBoxGravityDirectionFromActor(AActor* NewGravityActor) {
}

void UNinjaCharacterMovementComponent::SetBoxGravityDirection(const FVector& NewGravityBoxOrigin, const FVector& NewGravityBoxExtent) {
}

void UNinjaCharacterMovementComponent::SetAlignGravityToBase(bool bNewAlignGravityToBase) {
}

void UNinjaCharacterMovementComponent::SetAlignComponentToGravity(bool bNewAlignComponentToGravity) {
}

void UNinjaCharacterMovementComponent::SetAlignComponentToFloor(bool bNewAlignComponentToFloor) {
}

void UNinjaCharacterMovementComponent::OnComponentHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UNinjaCharacterMovementComponent::MulticastSetSplineTangentGravityDirection_Implementation(AActor* NewGravityActor) {
}

void UNinjaCharacterMovementComponent::MulticastSetSplinePlaneGravityDirection_Implementation(AActor* NewGravityActor) {
}

void UNinjaCharacterMovementComponent::MulticastSetSplineGravityDirection_Implementation(AActor* NewGravityActor) {
}

void UNinjaCharacterMovementComponent::MulticastSetSegmentGravityDirection_Implementation(const FVector& NewGravitySegmentStart, const FVector& NewGravitySegmentEnd) {
}

void UNinjaCharacterMovementComponent::MulticastSetPointGravityDirectionFromActor_Implementation(AActor* NewGravityActor) {
}

void UNinjaCharacterMovementComponent::MulticastSetPointGravityDirection_Implementation(const FVector& NewGravityPoint) {
}

void UNinjaCharacterMovementComponent::MulticastSetPlaneGravityDirection_Implementation(const FVector& NewGravityPlaneBase, const FVector& NewGravityPlaneNormal) {
}

void UNinjaCharacterMovementComponent::MulticastSetLineGravityDirection_Implementation(const FVector& NewGravityLineStart, const FVector& NewGravityLineEnd) {
}

void UNinjaCharacterMovementComponent::MulticastSetGravityScale_Implementation(float NewGravityScale) {
}

void UNinjaCharacterMovementComponent::MulticastSetFixedGravityDirection_Implementation(const FVector& NewFixedGravityDirection) {
}

void UNinjaCharacterMovementComponent::MulticastSetCollisionGravityDirection_Implementation(AActor* NewGravityActor) {
}

void UNinjaCharacterMovementComponent::MulticastSetBoxGravityDirectionFromActor_Implementation(AActor* NewGravityActor) {
}

void UNinjaCharacterMovementComponent::MulticastSetBoxGravityDirection_Implementation(const FVector& NewGravityBoxOrigin, const FVector& NewGravityBoxExtent) {
}

void UNinjaCharacterMovementComponent::MulticastEnableAlignGravityToBase_Implementation() {
}

void UNinjaCharacterMovementComponent::MulticastEnableAlignComponentToGravity_Implementation() {
}

void UNinjaCharacterMovementComponent::MulticastEnableAlignComponentToFloor_Implementation() {
}

void UNinjaCharacterMovementComponent::MulticastDisableAlignGravityToBase_Implementation() {
}

void UNinjaCharacterMovementComponent::MulticastDisableAlignComponentToGravity_Implementation() {
}

void UNinjaCharacterMovementComponent::MulticastDisableAlignComponentToFloor_Implementation() {
}

void UNinjaCharacterMovementComponent::K2_SetPlaneGravityDirection(const FVector& NewGravityPlaneBase, const FVector& NewGravityPlaneNormal) {
}

void UNinjaCharacterMovementComponent::K2_SetFixedGravityDirection(const FVector& NewGravityDirection) {
}

float UNinjaCharacterMovementComponent::GetGravityMagnitude() const {
    return 0.0f;
}

FVector UNinjaCharacterMovementComponent::GetGravityDirection(bool bAvoidZeroGravity) const {
    return FVector{};
}


