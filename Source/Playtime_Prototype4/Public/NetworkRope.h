#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BendPoint.h"
#include "NetworkRope.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class PLAYTIME_PROTOTYPE4_API ANetworkRope : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Hand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBendPoint> BendPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* StartScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* EndScene;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RetractMode;
    
public:
    ANetworkRope(const FObjectInitializer& ObjectInitializer);

};

