#include "ANetworkCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "UHandRigPackageComponent.h"

AANetworkCharacter::AANetworkCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->ExtendoHands = CreateDefaultSubobject<USpringArmComponent>(TEXT("Extendo Hands"));
    this->LeftSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Left Spring Arm"));
    this->SM_LeftLauncherGun = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Left Launcher Gun"));
    this->SK_LeftHand = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Left Hand"));
    this->LeftHandSpawn = CreateDefaultSubobject<USceneComponent>(TEXT("Left Hand Spawn"));
    this->LeftHandPkg = CreateDefaultSubobject<UUHandRigPackageComponent>(TEXT("Left Hand Rig Package Component"));
    this->RightSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Right Spring Arm"));
    this->SM_RightLauncherGun = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Right Launcher Gun"));
    this->SK_RightHand = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Right Hand"));
    this->RightHandSpawn = CreateDefaultSubobject<USceneComponent>(TEXT("Right Hand Spawn"));
    this->RightHandPkg = CreateDefaultSubobject<UUHandRigPackageComponent>(TEXT("Right Hand Rig Package Component"));
    this->AvailableWireLength = 0.00f;
    this->SharedLookPitch = 0.00f;
    this->MaxWireLength = 2000.00f;
    this->NetworkHandClass = NULL;
    this->TraceTag = TEXT("Debug");
    this->CameraComponent->SetupAttachment(RootComponent);
    this->ExtendoHands->SetupAttachment(CameraComponent);
    this->LeftHandSpawn->SetupAttachment(SM_LeftLauncherGun);
    this->LeftSpringArm->SetupAttachment(ExtendoHands);
    this->RightHandSpawn->SetupAttachment(SM_RightLauncherGun);
    this->RightSpringArm->SetupAttachment(ExtendoHands);
    this->SK_LeftHand->SetupAttachment(SM_LeftLauncherGun);
    this->SK_RightHand->SetupAttachment(SM_RightLauncherGun);
    this->SM_LeftLauncherGun->SetupAttachment(LeftSpringArm);
    this->SM_RightLauncherGun->SetupAttachment(RightSpringArm);
}

void AANetworkCharacter::Server_SetSharedLookPitch_Implementation(float Pitch) {
}

void AANetworkCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AANetworkCharacter, SharedLookPitch);
}


