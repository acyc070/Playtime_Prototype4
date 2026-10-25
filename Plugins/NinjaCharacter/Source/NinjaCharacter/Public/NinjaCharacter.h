#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "ENinjaGravityDirectionMode.h"
#include "NinjaCharacter.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class NINJACHARACTER_API ANinjaCharacter : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCapsuleRotatesControlRotation: 1;
    
    ANinjaCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SmoothComponentRotation(USceneComponent* SceneComponent, float DeltaTime, float RotationSpeed, const FRotator& RelativeRotation);
    
    UFUNCTION(BlueprintCallable)
    void SmoothComponentLocationAndRotation(USceneComponent* SceneComponent, float DeltaTime, float LocationSpeed, float RotationSpeed, const FVector& RelativeLocation, const FRotator& RelativeRotation);
    
    UFUNCTION(BlueprintCallable)
    void SmoothComponentLocation(USceneComponent* SceneComponent, float DeltaTime, float LocationSpeed, const FVector& RelativeLocation);
    
    UFUNCTION(BlueprintCallable)
    bool SetCharMovementAxis(const FVector& NewAxisZ, bool bForceFindFloor);
    
    UFUNCTION(BlueprintCallable)
    void LaunchCharacterRotated(FVector LaunchVelocity, bool bHorizontalOverride, bool bVerticalOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnUnwalkableHit(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnGravityDirectionChanged(ENinjaGravityDirectionMode OldGravityDirectionMode, ENinjaGravityDirectionMode CurrentGravityDirectionMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnCharMovementAxisChanged(const FVector& OldAxisZ, const FVector& CurrentAxisZ);
    
};

