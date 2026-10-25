#include "USlidingDoorMover.h"
#include "Net/UnrealNetwork.h"

UUSlidingDoorMover::UUSlidingDoorMover(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOpen = false;
}

void UUSlidingDoorMover::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUSlidingDoorMover, bOpen);
}


