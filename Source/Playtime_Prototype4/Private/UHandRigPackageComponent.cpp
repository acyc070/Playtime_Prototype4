#include "UHandRigPackageComponent.h"

UUHandRigPackageComponent::UUHandRigPackageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Limb = ELimb::EL_Left;
    this->PressedBeforeAttachment = false;
    this->NetworkHand = NULL;
    this->NetworkRope = NULL;
    this->SpringArm = NULL;
    this->SM_LauncherGun = NULL;
    this->SK_Hand = NULL;
    this->HandSpawn = NULL;
    this->bExtended = false;
    this->NetworkHandClass = NULL;
    this->NetworkRopeClass = NULL;
}

void UUHandRigPackageComponent::Server_TryExtendHand_Implementation(const FVector Direction) {
}

void UUHandRigPackageComponent::Server_TryDetachAndRetractHand_Implementation() {
}

void UUHandRigPackageComponent::Server_StartRetractBackwards_Implementation(const bool NeedsGrabbedPrimitiveToRetract, const bool SetHasBeenCancelled) {
}

void UUHandRigPackageComponent::Multicast_TryExtendHand_Implementation(const FVector Direction) {
}

void UUHandRigPackageComponent::Multicast_TryDetachAndRetractHand_Implementation() {
}

void UUHandRigPackageComponent::Multicast_ExtensionIsComplete_Implementation() {
}


