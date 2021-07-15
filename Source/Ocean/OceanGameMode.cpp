// Copyright Epic Games, Inc. All Rights Reserved.

#include "OceanGameMode.h"
#include "OceanPlayerController.h"
#include "OceanCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOceanGameMode::AOceanGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AOceanPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}