#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharMovementAxisChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharMovementAxisChangedSignature, const FVector&, OldAxisZ, const FVector&, CurrentAxisZ);

