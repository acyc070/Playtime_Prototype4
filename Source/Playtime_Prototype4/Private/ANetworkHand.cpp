#include "ANetworkHand.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"

AANetworkHand::AANetworkHand(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->Limb = ELimb::EL_Left;
    this->FromPkg = NULL;
    this->AttachConstraint = NULL;
    this->GrabbedPrimitive = NULL;
    this->RootScene = (USceneComponent*)RootComponent;
    this->HandPivot = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HandPivot"));
    this->SK_Hand = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Hand"));
    this->RopeAttachmentScene = CreateDefaultSubobject<USceneComponent>(TEXT("RopeAttachmentScene"));
    this->PlayerHandsCollisionChannel = ECC_WorldStatic;
    this->ShootSpeed = 2000.00f;
    this->PullSpeed = 50.00f;
    this->MaxWireLength = 0.00f;
    this->CurrentWireLength = 0.00f;
    this->CancellationPause = 1.00f;
    this->HasBeenCancelled = false;
    this->bShootingForward = true;
    this->bRetractingBackward = false;
    this->OwningCharacter = NULL;
    this->SpawnPoint = NULL;
    this->HandPivot->SetupAttachment(RootComponent);
    this->RopeAttachmentScene->SetupAttachment(HandPivot);
    this->SK_Hand->SetupAttachment(HandPivot);
}


