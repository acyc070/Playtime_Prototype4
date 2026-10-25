#include "NinjaPhysicsVolumeSpline.h"
#include "Components/SplineComponent.h"
#include "ENinjaGravityDirectionMode.h"

ANinjaPhysicsVolumeSpline::ANinjaPhysicsVolumeSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GravityDirectionMode = ENinjaGravityDirectionMode::Spline;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->SplineComponent->SetupAttachment(RootComponent);
}


