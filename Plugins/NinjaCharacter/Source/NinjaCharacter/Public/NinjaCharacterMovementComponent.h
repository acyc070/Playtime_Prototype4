#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/EngineTypes.h"
#include "ENinjaGravityDirectionMode.h"
#include "NinjaCharacterMovementComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NINJACHARACTER_API UNinjaCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceSimulateMovement: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRevertToDefaultGravity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLandOnAnySurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTriggerUnwalkableHits: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENinjaGravityDirectionMode GravityDirectionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GravityVectorA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GravityVectorB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* GravityActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableGravityReplication: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlignGravityToBase: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlignComponentToFloor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlignComponentToGravity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysRotateAroundCenter: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRotateVelocityOnGround: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThresholdParallelAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThresholdOrthogonalCosine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThresholdParallelCosine;
    
public:
    UNinjaCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSplineTangentGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable)
    void SetSplinePlaneGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable)
    void SetSegmentGravityDirection(const FVector& NewGravitySegmentStart, const FVector& NewGravitySegmentEnd);
    
    UFUNCTION(BlueprintCallable)
    void SetPointGravityDirectionFromActor(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable)
    void SetPointGravityDirection(const FVector& NewGravityPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetLineGravityDirection(const FVector& NewGravityLineStart, const FVector& NewGravityLineEnd);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable)
    void SetBoxGravityDirectionFromActor(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable)
    void SetBoxGravityDirection(const FVector& NewGravityBoxOrigin, const FVector& NewGravityBoxExtent);
    
    UFUNCTION(BlueprintCallable)
    void SetAlignGravityToBase(bool bNewAlignGravityToBase);
    
    UFUNCTION(BlueprintCallable)
    void SetAlignComponentToGravity(bool bNewAlignComponentToGravity);
    
    UFUNCTION(BlueprintCallable)
    void SetAlignComponentToFloor(bool bNewAlignComponentToFloor);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetSplineTangentGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetSplinePlaneGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetSplineGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetSegmentGravityDirection(const FVector& NewGravitySegmentStart, const FVector& NewGravitySegmentEnd);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetPointGravityDirectionFromActor(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetPointGravityDirection(const FVector& NewGravityPoint);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetPlaneGravityDirection(const FVector& NewGravityPlaneBase, const FVector& NewGravityPlaneNormal);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetLineGravityDirection(const FVector& NewGravityLineStart, const FVector& NewGravityLineEnd);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetGravityScale(float NewGravityScale);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetFixedGravityDirection(const FVector& NewFixedGravityDirection);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetCollisionGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetBoxGravityDirectionFromActor(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetBoxGravityDirection(const FVector& NewGravityBoxOrigin, const FVector& NewGravityBoxExtent);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastEnableAlignGravityToBase();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastEnableAlignComponentToGravity();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastEnableAlignComponentToFloor();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastDisableAlignGravityToBase();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastDisableAlignComponentToGravity();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastDisableAlignComponentToFloor();
    
public:
    UFUNCTION(BlueprintCallable)
    void K2_SetPlaneGravityDirection(const FVector& NewGravityPlaneBase, const FVector& NewGravityPlaneNormal);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetFixedGravityDirection(const FVector& NewGravityDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGravityMagnitude() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetGravityDirection(bool bAvoidZeroGravity) const;
    
};

