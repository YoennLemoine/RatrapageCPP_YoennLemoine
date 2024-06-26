// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <AFPSProjectile.h>
#include "Camera/CameraComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AFPSCharacter.generated.h"

UCLASS()
class FPS_LEMOINEYOENN_API AAFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAFPSCharacter();

	void Fire();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AAFPSProjectile> ProjectileClass;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* CameraComponent;

private: 
	void MoveZS(float value);
	//void MoveBackward();
	//void MoveLeft();
	void MoveQD(float value);
	void CameraX(float Rate);
	void CameraY(float Rate);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	float BaseTurnRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	float BaseLookUpRate;
};
