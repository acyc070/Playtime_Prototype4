#pragma once
#include "CoreMinimal.h"
#include "ExtrapolationMode.generated.h"

UENUM(BlueprintType)
enum class ExtrapolationMode : uint8 {
    UNLIMITED,
    LIMITED,
    NONE,
};

