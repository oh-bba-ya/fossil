// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameEngineProject/PlayerMarker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerMarker() {}
// Cross Module References
	GAMEENGINEPROJECT_API UClass* Z_Construct_UClass_APlayerMarker_NoRegister();
	GAMEENGINEPROJECT_API UClass* Z_Construct_UClass_APlayerMarker();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GameEngineProject();
// End Cross Module References
	void APlayerMarker::StaticRegisterNativesAPlayerMarker()
	{
	}
	UClass* Z_Construct_UClass_APlayerMarker_NoRegister()
	{
		return APlayerMarker::StaticClass();
	}
	struct Z_Construct_UClass_APlayerMarker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerMarker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameEngineProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerMarker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerMarker.h" },
		{ "ModuleRelativePath", "PlayerMarker.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerMarker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerMarker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerMarker_Statics::ClassParams = {
		&APlayerMarker::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APlayerMarker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerMarker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerMarker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerMarker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerMarker, 3739272837);
	template<> GAMEENGINEPROJECT_API UClass* StaticClass<APlayerMarker>()
	{
		return APlayerMarker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerMarker(Z_Construct_UClass_APlayerMarker, &APlayerMarker::StaticClass, TEXT("/Script/GameEngineProject"), TEXT("APlayerMarker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerMarker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
