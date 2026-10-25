#include "AHandAccessPad.h"
#include "Components/StaticMeshComponent.h"

AAHandAccessPad::AAHandAccessPad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HandPanel"));
    this->HandPanel = (UStaticMeshComponent*)RootComponent;
    this->Plane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plane"));
    this->Plane->SetupAttachment(RootComponent);
}


