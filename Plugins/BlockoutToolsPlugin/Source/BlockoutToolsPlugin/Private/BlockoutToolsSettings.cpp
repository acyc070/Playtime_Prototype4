#include "BlockoutToolsSettings.h"

UBlockoutToolsSettings::UBlockoutToolsSettings() {
    this->BlockoutMaterialType = BlockoutMaterialType_Grid;
    this->bBlockoutMaterialUseGrid = true;
    this->bBlockoutWorldAligned = false;
    this->BlockoutMaterialGridSize = 100.00f;
    this->BlockoutMaterialCheckerLuminance = 0.30f;
    this->BlockoutMaterialRoughness = 0.30f;
    this->bBlockoutMaterialUseTopColor = true;
}


