// Copyright Epic Games, Inc. All Rights Reserved.

#include "WarNeverChangesGameMode.h"
#include "WarNeverChangesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWarNeverChangesGameMode::AWarNeverChangesGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
