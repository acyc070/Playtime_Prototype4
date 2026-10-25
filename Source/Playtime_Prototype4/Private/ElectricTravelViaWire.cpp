#include "ElectricTravelViaWire.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"

AElectricTravelViaWire::AElectricTravelViaWire(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->bElectricalCurrentRunning = false;
    this->SplineLength = 0.00f;
    this->SplineComponent = (USplineComponent*)RootComponent;
    this->ParticleParent = CreateDefaultSubobject<USceneComponent>(TEXT("ParticleParent"));
    this->ParticleSystemComponent = NULL;
    this->StaticMesh = NULL;
    this->SparksParticleSystem = NULL;
    this->CurrentDistanceAlongSpline = 0.00f;
    this->MovementSpeed = 500.00f;
    this->ParticleScalar = 1.00f;
    this->ParticleParent->SetupAttachment(RootComponent);
}

void AElectricTravelViaWire::StartElectricalCurrent() {
}


