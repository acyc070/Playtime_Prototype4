#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UNetworkGrabComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PLAYTIME_PROTOTYPE4_API UUNetworkGrabComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UUNetworkGrabComponent(const FObjectInitializer& ObjectInitializer);

};

