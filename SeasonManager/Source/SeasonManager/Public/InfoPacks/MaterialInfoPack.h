#pragma once

#include "CoreMinimal.h"
#include "SeasonInfoPackBase.h"   
#include "SeasonBlendTypes.h"   
#include "Materials/MaterialParameterCollection.h"
#include "MaterialInfoPack.generated.h"

UENUM(BlueprintType)
enum class EParamUpdateMode : uint8
{
	Immediate UMETA(DisplayName="Immediate"),
	OffScreen UMETA(DisplayName="Only When Off-Screen")
};

USTRUCT(BlueprintType)
struct FSeasonMPCScalar
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, Category="MPC")
	FName   ParameterName;
	UPROPERTY(EditAnywhere, Category="MPC")
	float   Value = 0.f;
    
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Season|MPC")
	ESeasonBlendType BlendType = ESeasonBlendType::Linear;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Season|MPC")
	EParamUpdateMode UpdateMode = EParamUpdateMode::Immediate;
    
};

USTRUCT(BlueprintType)
struct FSeasonMPCVector
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, Category="MPC")
	FName          ParameterName;
	UPROPERTY(EditAnywhere, Category="MPC")
	FLinearColor   Value = FLinearColor::White;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Season|MPC")
	ESeasonBlendType BlendType = ESeasonBlendType::Linear;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Season|MPC")
	EParamUpdateMode UpdateMode = EParamUpdateMode::Immediate;
};


UCLASS(BlueprintType)
class SEASONMANAGER_API UMaterialInfoPack : public USeasonInfoPackBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Blend")
	bool bBlendColorInHSV = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Deferred")
	bool bUseDeferredTag = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Deferred")
	FName DeferredActorTag = FName("None");
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Material")
	UMaterialParameterCollection* ParameterCollection = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Material")
	TArray<FSeasonMPCScalar> ScalarParameters;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Material")
	TArray<FSeasonMPCVector> VectorParameters;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override
	{
		Super::PostEditChangeProperty(PropertyChangedEvent);
		const FName Prop = PropertyChangedEvent.Property
						   ? PropertyChangedEvent.Property->GetFName()
						   : NAME_None;
		if (Prop == GET_MEMBER_NAME_CHECKED(UMaterialInfoPack, ParameterCollection)
			&& ParameterCollection)
		{
			ScalarParameters.Empty();
			VectorParameters.Empty();
			// Scalar
			for (const auto& ScalarParameter : ParameterCollection->ScalarParameters)
			{
				FSeasonMPCScalar C;
				C.ParameterName = ScalarParameter.ParameterName; C.Value = ScalarParameter.DefaultValue;
				ScalarParameters.Add(C);
			}
			// Vector
			for (const auto& VectorParameter : ParameterCollection->VectorParameters)
			{
				FSeasonMPCVector C;
				C.ParameterName = VectorParameter.ParameterName; C.Value = VectorParameter.DefaultValue;
				VectorParameters.Add(C);
			}
		}
	}
#endif
};
