// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "PrototypeGameMode.h"
#include "PrototypePlayerController.h"
#include "PrototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"

APrototypeGameMode::APrototypeGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = APrototypePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}