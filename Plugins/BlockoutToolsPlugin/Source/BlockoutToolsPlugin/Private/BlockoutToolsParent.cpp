#include "BlockoutToolsParent.h"
#include "Components/SceneComponent.h"

ABlockoutToolsParent::ABlockoutToolsParent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->Billboard = NULL;
    this->BlockoutGridMID = NULL;
    this->BlockoutCurrentMaterial = NULL;
    this->BlockoutMaterialType = BlockoutMaterialType_Grid;
    this->bBlockoutMaterialUseGrid = true;
    this->bBlockoutWorldAligned = false;
    this->BlockoutMaterialGridSize = 100.00f;
    this->BlockoutMaterialCheckerLuminance = 0.30f;
    this->BlockoutMaterialRoughness = 0.30f;
    this->bBlockoutMaterialUseTopColor = true;
    this->bUseCustomMaterial = false;
    this->CustomMaterial = NULL;
    this->bBlockoutEnableCollisions = true;
    this->bBlockoutEnableCustomCollision = false;
    this->bBlockoutCastShadows = true;
}

void ABlockoutToolsParent::RerunConstructionScript() {
}

void ABlockoutToolsParent::BlockoutSetMaterial() {
}


