// Fill out your copyright notice in the Description page of Project Settings.


#include "AFPSCharacter.h"

// Sets default values
AAFPSCharacter::AAFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	CameraComponent->SetupAttachment(RootComponent); // Attach to the character's root component
	CameraComponent->SetRelativeLocation(FVector(0.0f, 0.0f, BaseEyeHeight)); // Adjust BaseEyeHeight as needed
	CameraComponent->bUsePawnControlRotation = true; // Allow the pawn to control the camera rotation


	BaseTurnRate = 45.0f;
	BaseLookUpRate = 45.0f;
}

// Called when the game starts or when spawned
void AAFPSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveZS", this, &AAFPSCharacter::MoveZS);
	PlayerInputComponent->BindAxis("MoveQD", this, &AAFPSCharacter::MoveQD);

	PlayerInputComponent->BindAxis("CameraY", this, &AAFPSCharacter::CameraY);
	PlayerInputComponent->BindAxis("CameraX", this, &AAFPSCharacter::CameraX);

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AAFPSCharacter::Fire);
	}

void AAFPSCharacter::MoveZS(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AAFPSCharacter::MoveQD(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Value);
	}
}


void AAFPSCharacter::CameraX(float Rate)
{
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AAFPSCharacter::CameraY(float Rate)
{
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AAFPSCharacter::Fire()
{
	if (ProjectileClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("Firing projectile!"));

		FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * 100.0f;

		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		GetWorld()->SpawnActor<AAFPSProjectile>(ProjectileClass, SpawnLocation, GetActorRotation(), SpawnParams);
	}
}

////////Au début j'ai essayé avec cette méthode mais ça marchait vraiment pas bien et le personnage bougeait à peine meme avec des hautes valeurs/////////////////////////////
// 
//void AAFPSCharacter::MoveForward()
//{
//	AddMovementInput(GetActorForwardVector(), 10000.0f);
//}
//
//void AAFPSCharacter::MoveBackward()
//{
//	AddMovementInput(GetActorForwardVector(), -1.0f);
//}
//
//void AAFPSCharacter::MoveLeft()
//{
//	AddMovementInput(GetActorRightVector(), -1.0f);
//}
//
//void AAFPSCharacter::MoveRight()
//{
//	AddMovementInput(GetActorRightVector(), 1.0f);
//}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
