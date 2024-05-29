// MyAIController.cpp
#include "MyAIController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"

void AMyAIController::BeginPlay()
{
    Super::BeginPlay();
    SearchForTarget();
}

void AMyAIController::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    if (TargetPawn)
    {
        MoveToActor(TargetPawn, 5.0f); // TargetPawn을 추적
    }
}

void AMyAIController::SearchForTarget()
{
    // 모든 캐릭터를 검색
    TArray<AActor*> FoundCharacters;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACharacter::StaticClass(), FoundCharacters);

    if (FoundCharacters.Num() > 0)
    {
        // 첫 번째 캐릭터를 타겟으로 설정
        TargetPawn = Cast<APawn>(FoundCharacters[0]);
    }
}
