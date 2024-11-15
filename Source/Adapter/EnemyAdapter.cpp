// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAdapter.h"
#include "PowerFullEnemy.h"

// Sets default values
AEnemyAdapter::AEnemyAdapter()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    IncrementoY = 5.0f;
    MoverseY = true;
}

// Called when the game starts or when spawned
void AEnemyAdapter::BeginPlay()
{
    Super::BeginPlay();

    EnemigoA = GetWorld()->SpawnActor<APowerFullEnemy>(APowerFullEnemy::StaticClass());

    if (EnemigoA)
    {
        // Inicializar las posiciones de movimiento en el eje Y
        EnemigoA->inicialY = EnemigoA->GetActorLocation();
        EnemigoA->posicionInicialY = EnemigoA->inicialY + FVector(0.f, 2000.f, 0.f);
        EnemigoA->posicionFinalY = EnemigoA->inicialY + FVector(0.f, -2000.f, 0.f);
    }
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Enemigo Spawneado"));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Adapter Iniciado"));
}

// Called every frame
void AEnemyAdapter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    MovimientoY();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Movimiento Inicializado"));
}

void AEnemyAdapter::MovimientoY()
{
    if (EnemigoA)
    {
        // Obtiene la posición actual del enemigo
        FVector PosicionActual = EnemigoA->GetActorLocation();

        // Movimiento en el eje Y
        if (EnemigoA->moverseY)
        {
            if (PosicionActual.Y > EnemigoA->posicionFinalY.Y)
                PosicionActual.Y -= EnemigoA->incremento;
            else
                EnemigoA->moverseY = false;
        }
        else
        {
            if (PosicionActual.Y < EnemigoA->posicionInicialY.Y)
                PosicionActual.Y += EnemigoA->incremento;
            else
                EnemigoA->moverseY = true;
        }

        // Actualiza la posición del enemigo en el eje Y
        EnemigoA->SetActorLocation(PosicionActual);
    }
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Enemigo se esta moviendo"));
}


