#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ABaseCharacter.generated.h"

UCLASS(Blueprintable)
class PLAYTIME_PROTOTYPE4_API AABaseCharacter : public ACharacter {
    GENERATED_BODY()
public:
    AABaseCharacter(const FObjectInitializer& ObjectInitializer);

};

