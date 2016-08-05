// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" // MUST BE LAST INCLUDE

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;
	
	ATank* GetControlledTank() const;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	// Aim barrel at where xhair is pointing
	void AimTowardsCrosshair();
};
