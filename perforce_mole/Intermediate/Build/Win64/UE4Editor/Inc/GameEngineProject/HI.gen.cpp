// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameEngineProject/Public/HI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHI() {}
// Cross Module References
	GAMEENGINEPROJECT_API UClass* Z_Construct_UClass_AHI_NoRegister();
	GAMEENGINEPROJECT_API UClass* Z_Construct_UClass_AHI();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GameEngineProject();
// End Cross Module References
	void AHI::StaticRegisterNativesAHI()
	{
	}
	UClass* Z_Construct_UClass_AHI_NoRegister()
	{
		return AHI::StaticClass();
	}
	struct Z_Construct_UClass_AHI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GameEngineProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHI_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HI.h" },
		{ "ModuleRelativePath", "Public/HI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHI_Statics::ClassParams = {
		&AHI::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHI, 626147701);
	template<> GAMEENGINEPROJECT_API UClass* StaticClass<AHI>()
	{
		return AHI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHI(Z_Construct_UClass_AHI, &AHI::StaticClass, TEXT("/Script/GameEngineProject"), TEXT("AHI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
