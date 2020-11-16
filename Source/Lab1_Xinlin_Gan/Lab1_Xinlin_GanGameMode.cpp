// Copyright Epic Games, Inc. All Rights Reserved.

#include "Lab1_Xinlin_GanGameMode.h"
#include "Lab1_Xinlin_GanHUD.h"
#include "Lab1_Xinlin_GanCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALab1_Xinlin_GanGameMode::ALab1_Xinlin_GanGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALab1_Xinlin_GanHUD::StaticClass();
}
