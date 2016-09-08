// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankTurret.h"


void UTankTurret::Rotate(float RelativeSpeed)
{
	// Clamp RelativeSpeed to -1 to 1
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, 1);

	// Get how much the rotation change will be for this frame
	float RotationChange = RelativeSpeed * MaxDegreesPerSecond * GetWorld()->GetDeltaSeconds();

	// Get the new rotation value
	float NewRotation = RelativeRotation.Yaw + RotationChange;

	// Rotate the turret by that much using yaw
	SetRelativeRotation(FRotator(0, NewRotation, 0));

}


