// Copyright Epic Games, Inc. All Rights Reserved.

#include "AdapterGameMode.h"
#include "AdapterCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "PowerFullEnemy.h"

AAdapterGameMode::AAdapterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AAdapterGameMode::SpawnEnemigo()
{
	FVector SpawnLocation(1200.0f, 1000.0f, 200.0f);

	GetWorld()->SpawnActor<APowerFullEnemy>(APowerFullEnemy::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Enemigo Spawneado"));
}

void AAdapterGameMode::BeginPlay()
{
	Super::BeginPlay();
	SpawnEnemigo();

	// Adapter

	EnemyAdapter = GetWorld()->SpawnActor<AEnemyAdapter>(AEnemyAdapter::StaticClass());
	if (EnemyAdapter)
	{
		EnemyAdapter->MovimientoY();
	}
}
