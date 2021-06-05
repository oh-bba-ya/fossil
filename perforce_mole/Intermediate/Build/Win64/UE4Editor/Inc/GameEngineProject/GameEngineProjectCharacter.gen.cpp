// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameEngineProject/GameEngineProjectCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameEngineProjectCharacter() {}
// Cross Module References
	GAMEENGINEPROJECT_API UClass* Z_Construct_UClass_AGameEngineProjectCharacter_NoRegister();
	GAMEENGINEPROJECT_API UClass* Z_Construct_UClass_AGameEngineProjectCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GameEngineProject();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEENGINEPROJECT_API UClass* Z_Construct_UClass_ADustParticle_NoRegister();
	GAMEENGINEPROJECT_API UClass* Z_Construct_UClass_AMoleHole_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGameEngineProjectCharacter::execCreateHole)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateHole();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameEngineProjectCharacter::execCreateDustParticle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateDustParticle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameEngineProjectCharacter::execEatTomato)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EatTomato();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameEngineProjectCharacter::execOnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameEngineProjectCharacter::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameEngineProjectCharacter::execViewChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ViewChange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameEngineProjectCharacter::execTurn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Turn(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameEngineProjectCharacter::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameEngineProjectCharacter::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameEngineProjectCharacter::execGetSurviveTimeText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetSurviveTimeText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameEngineProjectCharacter::execGetHungryPointText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetHungryPointText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameEngineProjectCharacter::execGetHungryPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHungryPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameEngineProjectCharacter::execUpdateDigTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDigTime(Z_Param_deltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameEngineProjectCharacter::execUpdateSurviveTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSurviveTime(Z_Param_deltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameEngineProjectCharacter::execUpdateHungryPoint)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHungryPoint(Z_Param_deltaTime);
		P_NATIVE_END;
	}
	void AGameEngineProjectCharacter::StaticRegisterNativesAGameEngineProjectCharacter()
	{
		UClass* Class = AGameEngineProjectCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateDustParticle", &AGameEngineProjectCharacter::execCreateDustParticle },
			{ "CreateHole", &AGameEngineProjectCharacter::execCreateHole },
			{ "EatTomato", &AGameEngineProjectCharacter::execEatTomato },
			{ "GetHungryPoint", &AGameEngineProjectCharacter::execGetHungryPoint },
			{ "GetHungryPointText", &AGameEngineProjectCharacter::execGetHungryPointText },
			{ "GetSurviveTimeText", &AGameEngineProjectCharacter::execGetSurviveTimeText },
			{ "MoveForward", &AGameEngineProjectCharacter::execMoveForward },
			{ "MoveRight", &AGameEngineProjectCharacter::execMoveRight },
			{ "OnOverlapBegin", &AGameEngineProjectCharacter::execOnOverlapBegin },
			{ "OnOverlapEnd", &AGameEngineProjectCharacter::execOnOverlapEnd },
			{ "Turn", &AGameEngineProjectCharacter::execTurn },
			{ "UpdateDigTime", &AGameEngineProjectCharacter::execUpdateDigTime },
			{ "UpdateHungryPoint", &AGameEngineProjectCharacter::execUpdateHungryPoint },
			{ "UpdateSurviveTime", &AGameEngineProjectCharacter::execUpdateSurviveTime },
			{ "ViewChange", &AGameEngineProjectCharacter::execViewChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameEngineProjectCharacter_CreateDustParticle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameEngineProjectCharacter_CreateDustParticle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameEngineProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameEngineProjectCharacter_CreateDustParticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameEngineProjectCharacter, nullptr, "CreateDustParticle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameEngineProjectCharacter_CreateDustParticle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_CreateDustParticle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameEngineProjectCharacter_CreateDustParticle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameEngineProjectCharacter_CreateDustParticle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameEngineProjectCharacter_CreateHole_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameEngineProjectCharacter_CreateHole_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameEngineProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameEngineProjectCharacter_CreateHole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameEngineProjectCharacter, nullptr, "CreateHole", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameEngineProjectCharacter_CreateHole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_CreateHole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameEngineProjectCharacter_CreateHole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameEngineProjectCharacter_CreateHole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameEngineProjectCharacter_EatTomato_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameEngineProjectCharacter_EatTomato_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameEngineProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameEngineProjectCharacter_EatTomato_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameEngineProjectCharacter, nullptr, "EatTomato", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameEngineProjectCharacter_EatTomato_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_EatTomato_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameEngineProjectCharacter_EatTomato()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameEngineProjectCharacter_EatTomato_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPoint_Statics
	{
		struct GameEngineProjectCharacter_eventGetHungryPoint_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEngineProjectCharacter_eventGetHungryPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameEngineProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameEngineProjectCharacter, nullptr, "GetHungryPoint", nullptr, nullptr, sizeof(GameEngineProjectCharacter_eventGetHungryPoint_Parms), Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPointText_Statics
	{
		struct GameEngineProjectCharacter_eventGetHungryPointText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPointText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEngineProjectCharacter_eventGetHungryPointText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPointText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPointText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPointText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameEngineProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPointText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameEngineProjectCharacter, nullptr, "GetHungryPointText", nullptr, nullptr, sizeof(GameEngineProjectCharacter_eventGetHungryPointText_Parms), Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPointText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPointText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPointText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPointText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPointText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPointText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameEngineProjectCharacter_GetSurviveTimeText_Statics
	{
		struct GameEngineProjectCharacter_eventGetSurviveTimeText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AGameEngineProjectCharacter_GetSurviveTimeText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEngineProjectCharacter_eventGetSurviveTimeText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameEngineProjectCharacter_GetSurviveTimeText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameEngineProjectCharacter_GetSurviveTimeText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameEngineProjectCharacter_GetSurviveTimeText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameEngineProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameEngineProjectCharacter_GetSurviveTimeText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameEngineProjectCharacter, nullptr, "GetSurviveTimeText", nullptr, nullptr, sizeof(GameEngineProjectCharacter_eventGetSurviveTimeText_Parms), Z_Construct_UFunction_AGameEngineProjectCharacter_GetSurviveTimeText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_GetSurviveTimeText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameEngineProjectCharacter_GetSurviveTimeText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_GetSurviveTimeText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameEngineProjectCharacter_GetSurviveTimeText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameEngineProjectCharacter_GetSurviveTimeText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameEngineProjectCharacter_MoveForward_Statics
	{
		struct GameEngineProjectCharacter_eventMoveForward_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameEngineProjectCharacter_MoveForward_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEngineProjectCharacter_eventMoveForward_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameEngineProjectCharacter_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameEngineProjectCharacter_MoveForward_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameEngineProjectCharacter_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameEngineProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameEngineProjectCharacter_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameEngineProjectCharacter, nullptr, "MoveForward", nullptr, nullptr, sizeof(GameEngineProjectCharacter_eventMoveForward_Parms), Z_Construct_UFunction_AGameEngineProjectCharacter_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameEngineProjectCharacter_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameEngineProjectCharacter_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameEngineProjectCharacter_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameEngineProjectCharacter_MoveRight_Statics
	{
		struct GameEngineProjectCharacter_eventMoveRight_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameEngineProjectCharacter_MoveRight_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEngineProjectCharacter_eventMoveRight_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameEngineProjectCharacter_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameEngineProjectCharacter_MoveRight_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameEngineProjectCharacter_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameEngineProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameEngineProjectCharacter_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameEngineProjectCharacter, nullptr, "MoveRight", nullptr, nullptr, sizeof(GameEngineProjectCharacter_eventMoveRight_Parms), Z_Construct_UFunction_AGameEngineProjectCharacter_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameEngineProjectCharacter_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameEngineProjectCharacter_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameEngineProjectCharacter_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics
	{
		struct GameEngineProjectCharacter_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEngineProjectCharacter_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEngineProjectCharacter_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEngineProjectCharacter_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEngineProjectCharacter_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((GameEngineProjectCharacter_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameEngineProjectCharacter_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEngineProjectCharacter_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameEngineProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameEngineProjectCharacter, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(GameEngineProjectCharacter_eventOnOverlapBegin_Parms), Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapEnd_Statics
	{
		struct GameEngineProjectCharacter_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEngineProjectCharacter_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEngineProjectCharacter_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEngineProjectCharacter_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEngineProjectCharacter_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameEngineProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameEngineProjectCharacter, nullptr, "OnOverlapEnd", nullptr, nullptr, sizeof(GameEngineProjectCharacter_eventOnOverlapEnd_Parms), Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameEngineProjectCharacter_Turn_Statics
	{
		struct GameEngineProjectCharacter_eventTurn_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameEngineProjectCharacter_Turn_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEngineProjectCharacter_eventTurn_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameEngineProjectCharacter_Turn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameEngineProjectCharacter_Turn_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameEngineProjectCharacter_Turn_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//UFUNCTION()\n//\x09void LookUp(float value);\n" },
		{ "ModuleRelativePath", "GameEngineProjectCharacter.h" },
		{ "ToolTip", "UFUNCTION()\n       void LookUp(float value);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameEngineProjectCharacter_Turn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameEngineProjectCharacter, nullptr, "Turn", nullptr, nullptr, sizeof(GameEngineProjectCharacter_eventTurn_Parms), Z_Construct_UFunction_AGameEngineProjectCharacter_Turn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_Turn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameEngineProjectCharacter_Turn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_Turn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameEngineProjectCharacter_Turn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameEngineProjectCharacter_Turn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateDigTime_Statics
	{
		struct GameEngineProjectCharacter_eventUpdateDigTime_Parms
		{
			float deltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateDigTime_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEngineProjectCharacter_eventUpdateDigTime_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateDigTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateDigTime_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateDigTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameEngineProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateDigTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameEngineProjectCharacter, nullptr, "UpdateDigTime", nullptr, nullptr, sizeof(GameEngineProjectCharacter_eventUpdateDigTime_Parms), Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateDigTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateDigTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateDigTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateDigTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateDigTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateDigTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateHungryPoint_Statics
	{
		struct GameEngineProjectCharacter_eventUpdateHungryPoint_Parms
		{
			float deltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateHungryPoint_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEngineProjectCharacter_eventUpdateHungryPoint_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateHungryPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateHungryPoint_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateHungryPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameEngineProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateHungryPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameEngineProjectCharacter, nullptr, "UpdateHungryPoint", nullptr, nullptr, sizeof(GameEngineProjectCharacter_eventUpdateHungryPoint_Parms), Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateHungryPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateHungryPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateHungryPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateHungryPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateHungryPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateHungryPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateSurviveTime_Statics
	{
		struct GameEngineProjectCharacter_eventUpdateSurviveTime_Parms
		{
			float deltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateSurviveTime_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameEngineProjectCharacter_eventUpdateSurviveTime_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateSurviveTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateSurviveTime_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateSurviveTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameEngineProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateSurviveTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameEngineProjectCharacter, nullptr, "UpdateSurviveTime", nullptr, nullptr, sizeof(GameEngineProjectCharacter_eventUpdateSurviveTime_Parms), Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateSurviveTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateSurviveTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateSurviveTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateSurviveTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateSurviveTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateSurviveTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameEngineProjectCharacter_ViewChange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameEngineProjectCharacter_ViewChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameEngineProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameEngineProjectCharacter_ViewChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameEngineProjectCharacter, nullptr, "ViewChange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameEngineProjectCharacter_ViewChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameEngineProjectCharacter_ViewChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameEngineProjectCharacter_ViewChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameEngineProjectCharacter_ViewChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameEngineProjectCharacter_NoRegister()
	{
		return AGameEngineProjectCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGameEngineProjectCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dust_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Dust;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hole_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Hole;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerCapsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerCapsule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerTomato_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerTomato;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameEngineProjectCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GameEngineProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameEngineProjectCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameEngineProjectCharacter_CreateDustParticle, "CreateDustParticle" }, // 2568771544
		{ &Z_Construct_UFunction_AGameEngineProjectCharacter_CreateHole, "CreateHole" }, // 3483771313
		{ &Z_Construct_UFunction_AGameEngineProjectCharacter_EatTomato, "EatTomato" }, // 3750263117
		{ &Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPoint, "GetHungryPoint" }, // 2522127852
		{ &Z_Construct_UFunction_AGameEngineProjectCharacter_GetHungryPointText, "GetHungryPointText" }, // 2598889089
		{ &Z_Construct_UFunction_AGameEngineProjectCharacter_GetSurviveTimeText, "GetSurviveTimeText" }, // 486702119
		{ &Z_Construct_UFunction_AGameEngineProjectCharacter_MoveForward, "MoveForward" }, // 35029540
		{ &Z_Construct_UFunction_AGameEngineProjectCharacter_MoveRight, "MoveRight" }, // 604837756
		{ &Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapBegin, "OnOverlapBegin" }, // 37267895
		{ &Z_Construct_UFunction_AGameEngineProjectCharacter_OnOverlapEnd, "OnOverlapEnd" }, // 4102680074
		{ &Z_Construct_UFunction_AGameEngineProjectCharacter_Turn, "Turn" }, // 2960003722
		{ &Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateDigTime, "UpdateDigTime" }, // 3624496148
		{ &Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateHungryPoint, "UpdateHungryPoint" }, // 1320303939
		{ &Z_Construct_UFunction_AGameEngineProjectCharacter_UpdateSurviveTime, "UpdateSurviveTime" }, // 2847596734
		{ &Z_Construct_UFunction_AGameEngineProjectCharacter_ViewChange, "ViewChange" }, // 998858126
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameEngineProjectCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GameEngineProjectCharacter.h" },
		{ "ModuleRelativePath", "GameEngineProjectCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_Dust_MetaData[] = {
		{ "Category", "DustParticle" },
		{ "ModuleRelativePath", "GameEngineProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_Dust = { "Dust", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameEngineProjectCharacter, Dust), Z_Construct_UClass_ADustParticle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_Dust_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_Dust_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_Hole_MetaData[] = {
		{ "ModuleRelativePath", "GameEngineProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_Hole = { "Hole", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameEngineProjectCharacter, Hole), Z_Construct_UClass_AMoleHole_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_Hole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_Hole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameEngineProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameEngineProjectCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameEngineProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameEngineProjectCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_TriggerCapsule_MetaData[] = {
		{ "Category", "GameEngineProjectCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameEngineProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_TriggerCapsule = { "TriggerCapsule", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameEngineProjectCharacter, TriggerCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_TriggerCapsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_TriggerCapsule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_TriggerTomato_MetaData[] = {
		{ "Category", "GameEngineProjectCharacter" },
		{ "ModuleRelativePath", "GameEngineProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_TriggerTomato = { "TriggerTomato", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameEngineProjectCharacter, TriggerTomato), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_TriggerTomato_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_TriggerTomato_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameEngineProjectCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_Dust,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_Hole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_TriggerCapsule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameEngineProjectCharacter_Statics::NewProp_TriggerTomato,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameEngineProjectCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameEngineProjectCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameEngineProjectCharacter_Statics::ClassParams = {
		&AGameEngineProjectCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameEngineProjectCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameEngineProjectCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameEngineProjectCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameEngineProjectCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameEngineProjectCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameEngineProjectCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameEngineProjectCharacter, 1888438750);
	template<> GAMEENGINEPROJECT_API UClass* StaticClass<AGameEngineProjectCharacter>()
	{
		return AGameEngineProjectCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameEngineProjectCharacter(Z_Construct_UClass_AGameEngineProjectCharacter, &AGameEngineProjectCharacter::StaticClass, TEXT("/Script/GameEngineProject"), TEXT("AGameEngineProjectCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameEngineProjectCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
