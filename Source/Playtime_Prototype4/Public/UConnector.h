#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UConnector.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PLAYTIME_PROTOTYPE4_API UUConnector : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Targets;
    
    UUConnector(const FObjectInitializer& ObjectInitializer);

};

