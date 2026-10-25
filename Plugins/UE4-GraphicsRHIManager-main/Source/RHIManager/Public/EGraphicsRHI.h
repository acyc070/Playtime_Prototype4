#pragma once
#include "CoreMinimal.h"
#include "EGraphicsRHI.generated.h"

UENUM(BlueprintType)
enum class EGraphicsRHI : uint8 {
    RHI_DX11,
    RHI_DX12,
    RHI_VULKAN,
};

