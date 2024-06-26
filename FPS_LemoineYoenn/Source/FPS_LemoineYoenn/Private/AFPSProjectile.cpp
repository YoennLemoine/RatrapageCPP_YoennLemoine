// Fill out your copyright notice in the Description page of Project Settings.


#include "AFPSProjectile.h"

// Sets default values
AAFPSProjectile::AAFPSProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
    RootComponent = Mesh;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/FPWeapon/Mesh/FirstPersonProjectileMesh.FirstPersonProjectileMesh"));

    Projectile = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    Projectile->UpdatedComponent = Mesh;
    Projectile->InitialSpeed = 3000.0f; 
    Projectile->MaxSpeed = 3000.0f;
    Projectile->bRotationFollowsVelocity = true;
    Projectile->bShouldBounce = false;
}

// Called when the game starts or when spawned
void AAFPSProjectile::BeginPlay()
{
	Super::BeginPlay();
	
    Projectile->Velocity = GetActorForwardVector() * Projectile->InitialSpeed;

}

// Called every frame
void AAFPSProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

