#include "Elevator.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"

AElevator::AElevator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ElevatorBase"));
    this->ElevatorBase = (UStaticMeshComponent*)RootComponent;
    this->TopDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TopDoor"));
    this->BottomDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BottomDoor"));
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->TargetLocationSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Target Location"));
    this->SwitchHook = CreateDefaultSubobject<USceneComponent>(TEXT("SwitchHook"));
    this->SkeletalDoor = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalDoor"));
    this->MoveSpeed = 100.00f;
    this->DoorSpeed = 1.00f;
    this->TimeBetweenDoorAndMoveSequences = 1.00f;
    this->DoorOpenBackUpDelay = 1.00f;
    this->bCurrentlyOpen = false;
    this->Switch = NULL;
    this->bDoorSequencePlaying = false;
    this->bMoveElevatorSequencePlaying = false;
    this->bPlayerIsInElevator = false;
    this->bGoToOpen = false;
    this->DoorAlpha = 0.00f;
    this->bReachedTarget = false;
    this->BottomDoor->SetupAttachment(RootComponent);
    this->BoxComponent->SetupAttachment(RootComponent);
    this->SkeletalDoor->SetupAttachment(RootComponent);
    this->SwitchHook->SetupAttachment(RootComponent);
    this->TargetLocationSceneComponent->SetupAttachment(RootComponent);
    this->TopDoor->SetupAttachment(RootComponent);
}

void AElevator::StartMoveElevatorSequence() {
}

void AElevator::StartDoorSequence(const bool bOpen) {
}



