// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameEngineProject/ProjectCatCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectCatCharacter() {}
// Cross Module References
	GAMEENGINEPROJECT_API UClass* Z_Construct_UClass_AProjectCatCharacter_NoRegister();
	GAMEENGINEPROJECT_API UClass* Z_Construct_UClass_AProjectCatCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GameEngineProject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
// End Cross Module References
	void AProjectCatCharacter::StaticRegisterNativesAProjectCatCharacter()
	{
	}
	UClass* Z_Construct_UClass_AProjectCatCharacter_NoRegister()
	{
		return AProjectCatCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AProjectCatCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_catAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_catAnim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectCatCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GameEngineProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectCatCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ProjectCatCharacter.h" },
		{ "ModuleRelativePath", "ProjectCatCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectCatCharacter_Statics::NewProp_catAnim_MetaData[] = {
		{ "ModuleRelativePath", "ProjectCatCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectCatCharacter_Statics::NewProp_catAnim = { "catAnim", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectCatCharacter, catAnim), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectCatCharacter_Statics::NewProp_catAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectCatCharacter_Statics::NewProp_catAnim_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectCatCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectCatCharacter_Statics::NewProp_catAnim,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectCatCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectCatCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectCatCharacter_Statics::ClassParams = {
		&AProjectCatCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProjectCatCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjectCatCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectCatCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectCatCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectCatCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectCatCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectCatCharacter, 233604745);
	template<> GAMEENGINEPROJECT_API UClass* StaticClass<AProjectCatCharacter>()
	{
		return AProjectCatCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectCatCharacter(Z_Construct_UClass_AProjectCatCharacter, &AProjectCatCharacter::StaticClass, TEXT("/Script/GameEngineProject"), TEXT("AProjectCatCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectCatCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
