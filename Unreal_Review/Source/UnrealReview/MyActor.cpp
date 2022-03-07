// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MESH"));
	
	RootComponent = Mesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM(TEXT("StaticMesh'/Game/StarterContent/Props/SM_Statue.SM_Statue'"));

	if (SM.Succeeded()) {
		Mesh->SetStaticMesh(SM.Object);
	}
}

// 게임이 시작되거나 스폰될 때 호출됩니다. (1회만 실행)
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// 매 프레임마다 호출됨
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

