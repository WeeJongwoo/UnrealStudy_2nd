// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "O2PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class UNREALSTUDY_2ND_API AO2PlayerController : public APlayerController
{
	GENERATED_BODY()
	
	
protected:
	virtual void BeginPlay() override;
	
	
};
