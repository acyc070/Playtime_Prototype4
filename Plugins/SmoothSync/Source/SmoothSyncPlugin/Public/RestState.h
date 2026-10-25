#pragma once
#include "CoreMinimal.h"
#include "RestState.generated.h"

UENUM(BlueprintType)
enum class RestState : uint8 {
    AT_REST,
    JUST_STARTED_MOVING,
    MOVING,
};

