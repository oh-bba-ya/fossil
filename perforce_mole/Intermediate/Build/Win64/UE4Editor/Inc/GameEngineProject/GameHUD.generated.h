// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEENGINEPROJECT_GameHUD_generated_h
#error "GameHUD.generated.h already included, missing '#pragma once' in GameHUD.h"
#endif
#define GAMEENGINEPROJECT_GameHUD_generated_h

#define perforce_mole_Source_GameEngineProject_GameHUD_h_15_SPARSE_DATA
#define perforce_mole_Source_GameEngineProject_GameHUD_h_15_RPC_WRAPPERS
#define perforce_mole_Source_GameEngineProject_GameHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define perforce_mole_Source_GameEngineProject_GameHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameHUD(); \
	friend struct Z_Construct_UClass_AGameHUD_Statics; \
public: \
	DECLARE_CLASS(AGameHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameEngineProject"), NO_API) \
	DECLARE_SERIALIZER(AGameHUD)


#define perforce_mole_Source_GameEngineProject_GameHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGameHUD(); \
	friend struct Z_Construct_UClass_AGameHUD_Statics; \
public: \
	DECLARE_CLASS(AGameHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameEngineProject"), NO_API) \
	DECLARE_SERIALIZER(AGameHUD)


#define perforce_mole_Source_GameEngineProject_GameHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameHUD(AGameHUD&&); \
	NO_API AGameHUD(const AGameHUD&); \
public:


#define perforce_mole_Source_GameEngineProject_GameHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameHUD(AGameHUD&&); \
	NO_API AGameHUD(const AGameHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameHUD)


#define perforce_mole_Source_GameEngineProject_GameHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HUDWidgetClass() { return STRUCT_OFFSET(AGameHUD, HUDWidgetClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(AGameHUD, CurrentWidget); }


#define perforce_mole_Source_GameEngineProject_GameHUD_h_12_PROLOG
#define perforce_mole_Source_GameEngineProject_GameHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	perforce_mole_Source_GameEngineProject_GameHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	perforce_mole_Source_GameEngineProject_GameHUD_h_15_SPARSE_DATA \
	perforce_mole_Source_GameEngineProject_GameHUD_h_15_RPC_WRAPPERS \
	perforce_mole_Source_GameEngineProject_GameHUD_h_15_INCLASS \
	perforce_mole_Source_GameEngineProject_GameHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define perforce_mole_Source_GameEngineProject_GameHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	perforce_mole_Source_GameEngineProject_GameHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	perforce_mole_Source_GameEngineProject_GameHUD_h_15_SPARSE_DATA \
	perforce_mole_Source_GameEngineProject_GameHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	perforce_mole_Source_GameEngineProject_GameHUD_h_15_INCLASS_NO_PURE_DECLS \
	perforce_mole_Source_GameEngineProject_GameHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEENGINEPROJECT_API UClass* StaticClass<class AGameHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID perforce_mole_Source_GameEngineProject_GameHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
