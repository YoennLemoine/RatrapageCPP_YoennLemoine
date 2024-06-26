// Fill out your copyright notice in the Description page of Project Settings.


#include "MyHUD.h"
#include "Engine/Canvas.h"
#include "Engine/Font.h"
#include "UObject/ConstructorHelpers.h"

AMyHUD::AMyHUD() {
    ProjectilesLeft = 0;
}

void AMyHUD::BeginPlay() {
    Super::BeginPlay();

    if (UW_HUDClass) {
        UW_HUD = CreateWidget<UUserWidget>(GetWorld(), UW_HUDClass);

        if (UW_HUD) {
            UW_HUD->AddToViewport();
        }
    }
}

void AMyHUD::DrawHUD()
{
    Super::DrawHUD();

    FString ScoreText = FString::Printf(TEXT("Projectiles left: %d"), ProjectilesLeft);
    DrawText(ScoreText, FColor::White, 50, 50, nullptr, 1.5f, false);
}