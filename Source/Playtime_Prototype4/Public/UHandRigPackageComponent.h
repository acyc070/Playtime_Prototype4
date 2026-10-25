#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ELimb.h"
#include "Templates/SubclassOf.h"
#include "UHandRigPackageComponent.generated.h"

class AANetworkHand;
class ANetworkRope;
class USceneComponent;
class USkeletalMeshComponent;
class USpringArmComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PLAYTIME_PROTOTYPE4_API UUHandRigPackageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELimb Limb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PressedBeforeAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AANetworkHand* NetworkHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANetworkRope* NetworkRope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* SpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SM_LauncherGun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SK_Hand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* HandSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExtended;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AANetworkHand> NetworkHandClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ANetworkRope> NetworkRopeClass;
    
    UUHandRigPackageComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TryExtendHand(const FVector Direction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TryDetachAndRetractHand();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_StartRetractBackwards(const bool NeedsGrabbedPrimitiveToRetract, const bool SetHasBeenCancelled);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_TryExtendHand(const FVector Direction);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_TryDetachAndRetractHand();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ExtensionIsComplete();
    
};

