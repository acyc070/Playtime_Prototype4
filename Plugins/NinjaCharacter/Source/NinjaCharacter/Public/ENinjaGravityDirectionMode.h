#pragma once
#include "CoreMinimal.h"
#include "ENinjaGravityDirectionMode.generated.h"

UENUM(BlueprintType)
enum class ENinjaGravityDirectionMode : uint8 {
    Fixed,
    SplineTangent,
    Point,
    Line,
    Segment,
    Spline,
    Plane,
    SplinePlane,
    Box,
    Collision,
    Unused1,
    Unused2,
    Unused3,
    Unused4,
    Unused5,
    Unused6,
    Unused7,
    Unused8,
    Unused9,
};

