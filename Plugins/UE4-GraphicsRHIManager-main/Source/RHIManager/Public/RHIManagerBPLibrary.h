#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGraphicsRHI.h"
#include "RHIManagerBPLibrary.generated.h"

UCLASS(Blueprintable)
class URHIManagerBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URHIManagerBPLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetGraphicsRHI(EGraphicsRHI GraphicsRHI);
    
    UFUNCTION(BlueprintCallable)
    static float RHIManagerSampleFunction(float Param);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGraphicsRHI GetCurrentGraphicsRHI();
    
};

