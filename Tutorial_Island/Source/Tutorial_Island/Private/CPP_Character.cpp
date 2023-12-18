#include "CPP_Character.h"

// Sets default values
ACPP_Character::ACPP_Character()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    OurIntArray = {223, 34};
    OurMap = 
    {
        { "Pi", 3.14 }
    };
}

// Called when the game starts or when spawned
void ACPP_Character::BeginPlay()
{
    Super::BeginPlay();

    if(IsValid(ActorToSpawn)){
        auto temp = GetWorld()->SpawnActor<ACPP_InteractionActor>();
        auto temp1 = GetWorld()->SpawnActorDeferred<ACPP_InteractionActor>(ActorToSpawn, FTransform());
        temp1->SomeVariable = 100;
        temp1->FinishSpawning(FTransform());
    }

    // OurIntArray.Reserve(6);
    // OurIntArray.Add(12);
    // OurIntArray.Emplace(244);
    // OurIntArray.Remove(12);
    // OurIntArray.RemoveAt(0);

    // // common
    // for(auto& element : OurIntArray)
    // {
    //     UKismetSystemLibrary::PrintString(this, FString::FromInt(element));
    // }

    // // basic
    // for (int i = 0; i < OurIntArray.Num(); i++){
    //     UKismetSystemLibrary::PrintString(this, FString::SanitizeFloat(OurIntArray[i]));
    // }

    // OurMap.Add("Num1", 43.14);
    
    // for(auto& element : OurMap)
    // {
    //     FString temp = element.Key;
    //     temp.Append(" : ");
    //     temp.Append(FString::SanitizeFloat(element.Value));

    //     UKismetSystemLibrary::PrintString(this, temp);
    // }
}

// Called every frame
void ACPP_Character::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPP_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACPP_Character::RemovePickup()
{
    auto Temp = UGameplayStatics::GetPlayerCameraManager(this, 0);

    TArray<AActor *> Ignore;
    FVector Start = Temp->GetCameraLocation();
    FVector End = Start + (Temp->GetActorForwardVector() * 50000);
    FHitResult Hit;

    UKismetSystemLibrary::LineTraceSingle
    (
        this, 
        Start, 
        End, 
        ETraceTypeQuery::TraceTypeQuery1, 
        0, 
        Ignore, 
        EDrawDebugTrace::ForDuration, 
        Hit, 
        true
    );

    UKismetSystemLibrary::DrawDebugSphere
    (
        this,
        Hit.Location,
        50.0F,
        20,
        FLinearColor::Green,
        10.0F,
        2.0F
    );

    if(Hit.GetActor())
    {
        if(Cast<IMyInterface>(Hit.GetActor()))
        {
            auto TEMP = Cast<IMyInterface>(Hit.GetActor());
            TEMP->Destruct();
        }
    }
}
