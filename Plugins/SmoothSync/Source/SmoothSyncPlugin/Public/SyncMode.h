#pragma once
#include "CoreMinimal.h"
#include "SyncMode.generated.h"

UENUM(BlueprintType)
enum class SyncMode : uint8 {
    XYZ,
    XY,
    XZ,
    YZ,
    X,
    Y,
    Z,
    NONE,
};

