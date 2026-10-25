#pragma once
#include "CoreMinimal.h"
#include "DoorSequenceEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDoorSequenceEnd, bool, bOpen);

