#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "NinjaPlayerCameraManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class NINJACHARACTER_API ANinjaPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    ANinjaPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

};

