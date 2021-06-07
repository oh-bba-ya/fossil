// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameEngineProject/CropChar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCropChar() {}
// Cross Module References
	GAMEENGINEPROJECT_API UClass* Z_Construct_UClass_ACropChar_NoRegister();
	GAMEENGINEPROJECT_API UClass* Z_Construct_UClass_ACropChar();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GameEngineProject();
// End Cross Module References
	void ACropChar::StaticRegisterNativesACropChar()
	{
	}
	UClass* Z_Construct_UClass_ACropChar_NoRegister()
	{
		return ACropChar::StaticClass();
	}
	struct Z_Construct_UClass_ACropChar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACropChar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GameEngineProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACropChar_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CropChar.h" },
		{ "ModuleRelativePath", "CropChar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACropChar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACropChar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACropChar_Statics::ClassParams = {
		&ACropChar::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACropChar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACropChar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACropChar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACropChar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACropChar, 185156010);
	template<> GAMEENGINEPROJECT_API UClass* StaticClass<ACropChar>()
	{
		return ACropChar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACropChar(Z_Construct_UClass_ACropChar, &ACropChar::StaticClass, TEXT("/Script/GameEngineProject"), TEXT("ACropChar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACropChar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
