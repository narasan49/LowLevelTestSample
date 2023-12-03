// Copyright Epic Games, Inc. All Rights Reserved.

#include "LowLevelTestSampleGameMode.h"
#include "LowLevelTestSampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALowLevelTestSampleGameMode::ALowLevelTestSampleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
