#include "AFountainProject.h"
#include "Components/SceneComponent.h"

AAFountainProject::AAFountainProject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->PaintDecalActorClass = NULL;
    this->RootScene = (USceneComponent*)RootComponent;
    this->RotatorCuff = CreateDefaultSubobject<USceneComponent>(TEXT("RotatorCuff"));
    this->ActivateOnPlay = false;
    this->Iterations = 5;
    this->SubIterations = 5;
    this->DistancePerRay = 10.00f;
    this->DistancePerRay2 = 10.00f;
    this->SprayDistance = 30.00f;
    this->StartingAngle = 70.00f;
    this->StartingAngle2 = 70.00f;
    this->SprayAngle = 30.00f;
    this->SprayAngle2 = 50.00f;
    this->TurnRadius = 270.00f;
    this->TurnRadius2 = 270.00f;
    this->DecalScalar = 8.00f;
    this->RotatorCuff->SetupAttachment(RootComponent);
}

void AAFountainProject::ExecuteEffect(TArray<AActor*> In_IgnoredActors) {
}


