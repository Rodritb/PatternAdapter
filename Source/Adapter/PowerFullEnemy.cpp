// Fill out your copyright notice in the Description page of Project Settings.


#include "PowerFullEnemy.h"

// Sets default values
APowerFullEnemy::APowerFullEnemy()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Inicializar la malla
    static ConstructorHelpers::FObjectFinder<UStaticMesh> Enemigo(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));

    EnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Malla_Enemigo"));
    EnemigoMesh->SetStaticMesh(Enemigo.Object);

    SetRootComponent(EnemigoMesh);

    // Inicializar valores de movimiento
    incremento = 5.0f;
    moverseY = true;
    moverseZ = true;

}

// Called when the game starts or when spawned
void APowerFullEnemy::BeginPlay()
{
    Super::BeginPlay();
    inicialY = GetActorLocation();
    posicionInicialY = inicialY + FVector(0.f, 2000.f, 0.f); posicionFinalY = inicialY + FVector(0.f, -2000.f, 0.f);
    inicialZ = GetActorLocation();
    posicionInicialZ = inicialZ + FVector(0.f, 0.f, 50.f); posicionFinalZ = inicialZ + FVector(0.f, 0.f, -50.f);


}

// Called every frame
void APowerFullEnemy::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    posicionActualY = GetActorLocation();


    //if (moverse)
    //		{
    //		if (posicionActualY.Y > posicionFinalY.Y) posicionActualY.Y -= incremento;
    //		else moverse = false;
    //		}
    //	else
    //		{
    //		if (posicionActualY.Y < posicionInicialY.Y) posicionActualY.Y += incremento;
    //		else moverse = true;
    //		}
    //
    //	SetActorLocation(posicionActualY);
    //
    //if (moverse)
    //		{
    //		if (posicionActualZ.Z > posicionFinalZ.Z) posicionActualY.Z -= incremento;
    //		else moverse = false;
    //		}
    //else
    //		{
    //		if (posicionActualZ.Z < posicionInicialZ.Z) posicionActualZ.Z += incremento;
    //		else moverse = true;
    //		}
    //SetActorLocation(posicionActualZ);

    // Obtener la posición actual del actor
    FVector posicionActual = GetActorLocation();

    // Movimiento en Y
    if (moverseY)
    {
        if (posicionActual.Y > posicionFinalY.Y)
            posicionActual.Y -= incremento;
        else
            moverseY = false;
    }
    else
    {
        if (posicionActual.Y < posicionInicialY.Y)
            posicionActual.Y += incremento;
        else
            moverseY = true;
    }

    // Movimiento en Z
    if (moverseZ)
    {
        if (posicionActual.Z > posicionFinalZ.Z)
            posicionActual.Z -= incremento;
        else
            moverseZ = false;
    }
    else
    {
        if (posicionActual.Z < posicionInicialZ.Z)
            posicionActual.Z += incremento;
        else
            moverseZ = true;
    }

    // Actualizar la ubicación del actor
    SetActorLocation(posicionActual);


}


