// MyCharacter.cpp
#include "MyCharacter.h"
#include "MyAIController.h"

AMyCharacter::AMyCharacter()
{
    AIControllerClass = AMyAIController::StaticClass();
    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}
