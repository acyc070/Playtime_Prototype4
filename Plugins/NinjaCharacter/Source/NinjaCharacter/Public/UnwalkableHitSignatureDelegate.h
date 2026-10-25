#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "UnwalkableHitSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUnwalkableHitSignature, const FHitResult&, Hit);

