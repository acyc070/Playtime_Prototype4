#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UHandRig.generated.h"

class USpringArmComponent;

UCLASS(Blueprintable)
class PLAYTIME_PROTOTYPE4_API UUHandRig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* SpringArmComponent;
    
    UUHandRig();

};

