#pragma once
#include "CoreMinimal.h"
#include "EDDGIRaysPerProbe.generated.h"

UENUM()
enum class EDDGIRaysPerProbe : int32 {
    n144 = 144,
    n288 = 288,
    n432 = 432,
    n576 = 576,
    n720 = 720,
    n864 = 864,
    n1008 = 1008,
};

