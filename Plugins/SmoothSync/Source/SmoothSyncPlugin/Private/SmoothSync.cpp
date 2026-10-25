#include "SmoothSync.h"

USmoothSync::USmoothSync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->interpolationBackTime = 0.10f;
    this->ExtrapolationMode = ExtrapolationMode::LIMITED;
    this->useExtrapolationTimeLimit = true;
    this->extrapolationTimeLimit = 1.00f;
    this->useExtrapolationDistanceLimit = false;
    this->extrapolationDistanceLimit = 100.00f;
    this->sendPositionThreshold = 0.00f;
    this->sendRotationThreshold = 0.00f;
    this->sendScaleThreshold = 0.00f;
    this->sendVelocityThreshold = 0.00f;
    this->sendAngularVelocityThreshold = 0.00f;
    this->receivedPositionThreshold = 0.00f;
    this->receivedRotationThreshold = 0.00f;
    this->positionSnapThreshold = 500.00f;
    this->rotationSnapThreshold = 100.00f;
    this->scaleSnapThreshold = 3.00f;
    this->timeSmoothing = 2.00f;
    this->positionLerpSpeed = 0.85f;
    this->rotationLerpSpeed = 0.85f;
    this->scaleLerpSpeed = 0.85f;
    this->syncPosition = SyncMode::XYZ;
    this->syncRotation = SyncMode::XYZ;
    this->syncScale = SyncMode::XYZ;
    this->syncVelocity = SyncMode::XYZ;
    this->syncAngularVelocity = SyncMode::XYZ;
    this->syncMovementMode = true;
    this->isPositionCompressed = false;
    this->isRotationCompressed = false;
    this->isScaleCompressed = false;
    this->isVelocityCompressed = false;
    this->isAngularVelocityCompressed = false;
    this->sendRate = 30.00f;
    this->isUsingOriginRebasing = false;
    this->alwaysSendOrigin = false;
    this->syncOwnershipChange = false;
    this->realComponentToSync = NULL;
    this->InterpolationTime = 0.00f;
    this->atRestPositionThreshold = 0.05f;
    this->atRestRotationThreshold = 0.10f;
}

void USmoothSync::teleport() {
}

void USmoothSync::SmoothSyncTeleportServerToClients_Implementation(FVector position, FVector Rotation, FVector Scale, float tempOwnerTime) {
}
bool USmoothSync::SmoothSyncTeleportServerToClients_Validate(FVector position, FVector Rotation, FVector Scale, float tempOwnerTime) {
    return true;
}

void USmoothSync::SmoothSyncTeleportClientToServer_Implementation(FVector position, FVector Rotation, FVector Scale, float tempOwnerTime) {
}
bool USmoothSync::SmoothSyncTeleportClientToServer_Validate(FVector position, FVector Rotation, FVector Scale, float tempOwnerTime) {
    return true;
}

void USmoothSync::SmoothSyncEnableServerToClients_Implementation(bool enable) {
}
bool USmoothSync::SmoothSyncEnableServerToClients_Validate(bool enable) {
    return true;
}

void USmoothSync::SmoothSyncEnableClientToServer_Implementation(bool enable) {
}
bool USmoothSync::SmoothSyncEnableClientToServer_Validate(bool enable) {
    return true;
}

void USmoothSync::setSceneComponentToSync(USceneComponent* theComponent) {
}

void USmoothSync::ServerSendsTransformToEveryone_Implementation(const TArray<uint8>& Value) {
}
bool USmoothSync::ServerSendsTransformToEveryone_Validate(const TArray<uint8>& Value) {
    return true;
}

void USmoothSync::forceStateSendNextFrame() {
}

void USmoothSync::enableSmoothSync(bool enable) {
}

void USmoothSync::ClientSendsTransformToServer_Implementation(const TArray<uint8>& Value) {
}
bool USmoothSync::ClientSendsTransformToServer_Validate(const TArray<uint8>& Value) {
    return true;
}

void USmoothSync::clearBuffer() {
}


