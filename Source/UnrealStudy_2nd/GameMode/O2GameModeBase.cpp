// Fill out your copyright notice in the Description page of Project Settings.


#include "O2GameModeBase.h"

AO2GameModeBase::AO2GameModeBase()
{
	static ConstructorHelpers::FClassFinder<APawn> DefaultPawnRef(TEXT("/Game/Character/BP_Player.BP_Player_C"));
	if (DefaultPawnRef.Class)
	{
		DefaultPawnClass = DefaultPawnRef.Class;
	}

	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerRef(TEXT("/Game/Player/BP_PlayerController.BP_PlayerController_C"));
	if (PlayerControllerRef.Class)
	{
		PlayerControllerClass = PlayerControllerRef.Class;
	}
}
