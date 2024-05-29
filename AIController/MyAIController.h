// MyAIController.h
#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MyAIController.generated.h"

UCLASS()
class YOURPROJECTNAME_API AMyAIController : public AAIController
{
    GENERATED_BODY()

public:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaSeconds) override;

private:
    APawn* TargetPawn;
    void SearchForTarget();
};
