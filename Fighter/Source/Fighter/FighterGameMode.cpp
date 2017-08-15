// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FighterGameMode.h"
#include "FighterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFighterGameMode::AFighterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
