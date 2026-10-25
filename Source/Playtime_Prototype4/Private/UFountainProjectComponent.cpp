#include "UFountainProjectComponent.h"

UUFountainProjectComponent::UUFountainProjectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PaintDecalActorClass = NULL;
    this->ActivateOnPlay = false;
    this->Iterations = 5;
    this->SubIterations = 5;
    this->DistancePerRay = 10.00f;
    this->SprayDistance = 30.00f;
    this->StartingAngle = 70.00f;
    this->SprayAngle = 30.00f;
    this->SprayAngle2 = 50.00f;
    this->TurnRadius = 270.00f;
    this->DecalScalar = 8.00f;
}


