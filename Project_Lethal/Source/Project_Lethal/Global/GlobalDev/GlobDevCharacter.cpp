// Fill out your copyright notice in the Description page of Project Settings.


#include "Global/GlobalDev/GlobDevCharacter.h"

// Sets default values
AGlobDevCharacter::AGlobDevCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGlobDevCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGlobDevCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGlobDevCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

