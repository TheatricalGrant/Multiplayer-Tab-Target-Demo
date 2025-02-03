// Copyright Epic Games, Inc. All Rights Reserved.

#include "MRPGProjectDemoGameMode.h"
#include "MRPGProjectDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMRPGProjectDemoGameMode::AMRPGProjectDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
