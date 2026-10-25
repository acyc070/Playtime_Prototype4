#include "NetworkRope.h"

ANetworkRope::ANetworkRope(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Hand = NULL;
    this->StartScene = NULL;
    this->EndScene = NULL;
    this->RetractMode = false;
}


