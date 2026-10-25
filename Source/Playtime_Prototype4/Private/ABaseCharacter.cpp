#include "ABaseCharacter.h"
#include "UBaseCharacterMovementComponent.h"

AABaseCharacter::AABaseCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UUBaseCharacterMovementComponent>(TEXT("CharMoveComp"))) {
}


