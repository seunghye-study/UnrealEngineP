// Copyright Epic Games, Inc. All Rights Reserved.

#include "PuzzleProjectGameMode.h"
#include "PuzzleProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

APuzzleProjectGameMode::APuzzleProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
