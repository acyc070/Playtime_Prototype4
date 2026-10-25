#include "DDGIVolume.h"
#include "DDGIVolumeComponent.h"

ADDGIVolume::ADDGIVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DDGIVolumeComponent = CreateDefaultSubobject<UDDGIVolumeComponent>(TEXT("DDGI"));
}


