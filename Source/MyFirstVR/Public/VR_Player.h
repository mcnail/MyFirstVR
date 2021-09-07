// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "VR_Player.generated.h"

UCLASS()
class MYFIRSTVR_API AVR_Player : public APawn
{
	GENERATED_BODY()

public:
	AVR_Player();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
	class UCapsuleComponent* capsuleComp;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
	class UStaticMeshComponent* bodyComp;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
	class USceneComponent* cameraRoot;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
	class UCameraComponent* playerCam;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
	class UMotionControllerComponent* leftController;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
	class UMotionControllerComponent* rightController;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
	class USkeletalMeshComponent* leftHand;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
	class USkeletalMeshComponent* rightHand;
};
