#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UAttachToFloor.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PLAYTIME_PROTOTYPE4_API UUAttachToFloor : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorToAttachTo;
    
    UUAttachToFloor(const FObjectInitializer& ObjectInitializer);

};

