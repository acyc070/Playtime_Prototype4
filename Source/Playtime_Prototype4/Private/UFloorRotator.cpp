#include "UFloorRotator.h"
#include "Net/UnrealNetwork.h"

UUFloorRotator::UUFloorRotator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MoveSpeed = 10.00f;
    this->RotationalIncrements = 45.00f;
    this->CurrentAngle = 0.00f;
    this->TargetAngle = 0.00f;
    this->CurrentIncrement = 0;
    this->MaxIncrements = 0;
}

void UUFloorRotator::SetRandom() {
}

void UUFloorRotator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUFloorRotator, TargetAngle);
}


