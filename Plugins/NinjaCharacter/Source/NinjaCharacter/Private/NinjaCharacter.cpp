#include "NinjaCharacter.h"
#include "NinjaCharacterMovementComponent.h"

ANinjaCharacter::ANinjaCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UNinjaCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->bCapsuleRotatesControlRotation = false;
}

void ANinjaCharacter::SmoothComponentRotation(USceneComponent* SceneComponent, float DeltaTime, float RotationSpeed, const FRotator& RelativeRotation) {
}

void ANinjaCharacter::SmoothComponentLocationAndRotation(USceneComponent* SceneComponent, float DeltaTime, float LocationSpeed, float RotationSpeed, const FVector& RelativeLocation, const FRotator& RelativeRotation) {
}

void ANinjaCharacter::SmoothComponentLocation(USceneComponent* SceneComponent, float DeltaTime, float LocationSpeed, const FVector& RelativeLocation) {
}

bool ANinjaCharacter::SetCharMovementAxis(const FVector& NewAxisZ, bool bForceFindFloor) {
    return false;
}

void ANinjaCharacter::LaunchCharacterRotated(FVector LaunchVelocity, bool bHorizontalOverride, bool bVerticalOverride) {
}





