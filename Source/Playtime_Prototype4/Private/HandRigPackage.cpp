#include "HandRigPackage.h"

FHandRigPackage::FHandRigPackage() {
    this->Limb = ELimb::EL_Left;
    this->NetworkHand = NULL;
    this->SpringArm = NULL;
    this->SM_LauncherGun = NULL;
    this->SK_Hand = NULL;
    this->HandSpawn = NULL;
    this->bExtended = false;
}

