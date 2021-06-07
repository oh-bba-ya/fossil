// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameEngineProject/CropChar_AI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCropChar_AI() {}
// Cross Module References
	GAMEENGINEPROJECT_API UClass* Z_Construct_UClass_ACropChar_AI_NoRegister();
	GAMEENGINEPROJECT_API UClass* Z_Construct_UClass_ACropChar_AI();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_GameEngineProject();
// End Cross Module References
	void ACropChar_AI::StaticRegisterNativesACropChar_AI()
	{
	}
	UClass* Z_Construct_UClass_ACropChar_AI_NoRegister()
	{
		return ACropChar_AI::StaticClass();
	}
	struct Z_Construct_UClass_ACropChar_AI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACropChar_AI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_GameEngineProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACropChar_AI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CropChar_AI.h" },
		{ "ModuleRelativePath", "CropChar_AI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACropChar_AI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACropChar_AI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACropChar_AI_Statics::ClassParams = {
		&ACropChar_AI::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACropChar_AI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACropChar_AI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACropChar_AI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACropChar_AI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACropChar_AI, 1644205833);
	template<> GAMEENGINEPROJECT_API UClass* StaticClass<ACropChar_AI>()
	{
		return ACropChar_AI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACropChar_AI(Z_Construct_UClass_ACropChar_AI, &ACropChar_AI::StaticClass, TEXT("/Script/GameEngineProject"), TEXT("ACropChar_AI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACropChar_AI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
