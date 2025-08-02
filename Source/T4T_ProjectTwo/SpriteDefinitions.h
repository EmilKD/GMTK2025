// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PaperFlipbook.h"
#include "SpriteDefinitions.generated.h"

UENUM(BlueprintType)
enum class ESpriteAnimState : uint8{
	Idle	 			= 0		UMETA(DisplayName = "Idle"),
	Crouch				= 1		UMETA(DisplayName = "Crouch"),
	CrouchTransition	= 2		UMETA(DisplayName = "CrouchTransition"),
	CrouchWalk	 		= 3		UMETA(DisplayName = "CrouchWalk"),
	Fall	 			= 4		UMETA(DisplayName = "Fall"),
	Death	 			= 5		UMETA(DisplayName = "Death"),
	Hang	 			= 6		UMETA(DisplayName = "Hang"),
	Jump	 			= 7		UMETA(DisplayName = "Jump"),
	Walk	 			= 8		UMETA(DisplayName = "Walk"),
	Hurt	 			= 9		UMETA(DisplayName = "Hurt"),
	Roll	 			= 10	UMETA(DisplayName = "Roll"),
	Shield	 			= 11	UMETA(DisplayName = "Shield"),
	Turn	 			= 12	UMETA(DisplayName = "Turn"),
	Run	 				= 13	UMETA(DisplayName = "Run"),
	Attack1  			= 14	UMETA(DisplayName = "Attack1"),
	Attack2 			= 15	UMETA(DisplayName = "Attack2"),
	Attack3 			= 16 	UMETA(DisplayName = "Attack3"),
	Shoot1 				= 17 	UMETA(DisplayName = "Shoot1"),
	Shoot2 				= 18 	UMETA(DisplayName = "Shoot2"),
	RunN_Attack			= 19	UMETA(DisplayName = "Run and Attack"),
	ShieldHit			= 20	UMETA(DisplayName = "Shield Hit")
};

USTRUCT(BlueprintType)
struct FAnimFB
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ESpriteAnimState AnimName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UPaperFlipbook* TheFlipBook;
};

UCLASS(Blueprintable, BlueprintType)
class T4T_PROJECTTWO_API USpriteCharacterDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString CharacterName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CapsuleHalfHeight;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CapsuleRadius;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector SpriteOffset;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FAnimFB> SpriteAnimations;
};
