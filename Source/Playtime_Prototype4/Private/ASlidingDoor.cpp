#include "ASlidingDoor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AASlidingDoor::AASlidingDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->InteractBox = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractBox"));
    this->MoveSpeed = 500.00f;
    this->bOpen = false;
    this->InteractBox->SetupAttachment(SceneRoot);
    this->StaticMesh->SetupAttachment(SceneRoot);
}

void AASlidingDoor::ServerOnly_SetOpen(const bool Value) {
}

void AASlidingDoor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AASlidingDoor, bOpen);
}


