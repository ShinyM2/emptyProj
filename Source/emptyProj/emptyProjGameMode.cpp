// Copyright Epic Games, Inc. All Rights Reserved.

#include "emptyProjGameMode.h"
#include "emptyProjCharacter.h"
#include "UObject/ConstructorHelpers.h"

AemptyProjGameMode::AemptyProjGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
