// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameEngineProject/Tomato.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTomato() {}
// Cross Module References
	GAMEENGINEPROJECT_API UClass* Z_Construct_UClass_ATomato_NoRegister();
	GAMEENGINEPROJECT_API UClass* Z_Construct_UClass_ATomato();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GameEngineProject();
// End Cross Module References
	void ATomato::StaticRegisterNativesATomato()
	{
	}
	UClass* Z_Construct_UClass_ATomato_NoRegister()
	{
		return ATomato::StaticClass();
	}
	struct Z_Construct_UClass_ATomato_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATomato_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameEngineProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATomato_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tomato.h" },
		{ "ModuleRelativePath", "Tomato.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATomato_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATomato>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATomato_Statics::ClassParams = {
		&ATomato::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATomato_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATomato_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATomato()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATomato_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATomato, 1194176389);
	template<> GAMEENGINEPROJECT_API UClass* StaticClass<ATomato>()
	{
		return ATomato::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATomato(Z_Construct_UClass_ATomato, &ATomato::StaticClass, TEXT("/Script/GameEngineProject"), TEXT("ATomato"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATomato);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
