// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EnemyAdapter.h"
#include "GameFramework/GameModeBase.h"
#include "AdapterGameMode.generated.h"
UCLASS(minimalapi)
class AAdapterGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AAdapterGameMode();

	void SpawnEnemigo();
	virtual void BeginPlay() override;

private:
	UPROPERTY()
	AEnemyAdapter* EnemyAdapter;
};



