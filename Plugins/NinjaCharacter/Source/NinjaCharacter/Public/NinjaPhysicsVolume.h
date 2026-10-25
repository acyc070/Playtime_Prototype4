#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PhysicsVolume.h"
#include "ENinjaGravityDirectionMode.h"
#include "NinjaPhysicsVolume.generated.h"

class AActor;
class ANinjaCharacter;

UCLASS(Blueprintable)
class NINJACHARACTER_API ANinjaPhysicsVolume : public APhysicsVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TrackedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ANinjaCharacter*> TrackedNinjas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENinjaGravityDirectionMode GravityDirectionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GravityVectorA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GravityVectorB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* GravityActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityScale;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NinjaFallVelocity;
    
    ANinjaPhysicsVolume(const FObjectInitializer& ObjectInitializer);

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
    void SetGravityScale(float NewGravityScale);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionGravityDirection(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable)
    void SetBoxGravityDirectionFromActor(AActor* NewGravityActor);
    
    UFUNCTION(BlueprintCallable)
    void SetBoxGravityDirection(const FVector& NewGravityBoxOrigin, const FVector& NewGravityBoxExtent);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetPlaneGravityDirection(const FVector& NewGravityPlaneBase, const FVector& NewGravityPlaneNormal);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetFixedGravityDirection(const FVector& NewGravityDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGravityScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGravityMagnitude(const FVector& Point) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetGravityDirection(const FVector& Point) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetGravity(const FVector& Point) const;
    
};

