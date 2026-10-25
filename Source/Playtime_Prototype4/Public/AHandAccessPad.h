#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AHandAccessPad.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class PLAYTIME_PROTOTYPE4_API AAHandAccessPad : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* HandPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Plane;
    
public:
    AAHandAccessPad(const FObjectInitializer& ObjectInitializer);

};

