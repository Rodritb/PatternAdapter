// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AdapterInterface.h"
#include "PowerFullEnemy.h"
#include "EnemyAdapter.generated.h"
UCLASS()
class ADAPTER_API AEnemyAdapter : public AActor, public IAdapterInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEnemyAdapter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	class APowerFullEnemy* EnemigoA;
	void MovimientoY() override;

	float IncrementoY;
	bool MoverseY;

};
