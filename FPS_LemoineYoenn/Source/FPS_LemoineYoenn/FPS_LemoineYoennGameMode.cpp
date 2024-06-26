// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS_LemoineYoennGameMode.h"
#include "AFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS_LemoineYoennGameMode::AFPS_LemoineYoennGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Script/FPS_LemoineYoenn.AFPSCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
