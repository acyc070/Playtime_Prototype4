#pragma once
#include "CoreMinimal.h"
#include "NinjaPhysicsVolume.h"
#include "NinjaPhysicsVolumeSpline.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class NINJACHARACTER_API ANinjaPhysicsVolumeSpline : public ANinjaPhysicsVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
public:
    ANinjaPhysicsVolumeSpline(const FObjectInitializer& ObjectInitializer);

};

