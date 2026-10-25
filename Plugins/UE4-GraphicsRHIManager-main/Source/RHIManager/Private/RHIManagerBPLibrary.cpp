#include "RHIManagerBPLibrary.h"

URHIManagerBPLibrary::URHIManagerBPLibrary() {
}

void URHIManagerBPLibrary::SetGraphicsRHI(EGraphicsRHI GraphicsRHI) {
}

float URHIManagerBPLibrary::RHIManagerSampleFunction(float Param) {
    return 0.0f;
}

EGraphicsRHI URHIManagerBPLibrary::GetCurrentGraphicsRHI() {
    return EGraphicsRHI::RHI_DX11;
}


