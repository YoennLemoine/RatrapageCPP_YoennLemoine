// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Blueprint/WidgetTree.h"
#include "MyHUD.generated.h"

/**
 *
 */
UCLASS()
class FPS_LEMOINEYOENN_API AMyHUD : public AHUD
{
	GENERATED_BODY()

public:
	virtual void DrawHUD() override;
	AMyHUD();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ProjectilesLeft;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> UW_HUDClass;

protected:
	virtual void BeginPlay();

private:
	UUserWidget* UW_HUD;
};
