// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIGHTER_FighterGameMode_generated_h
#error "FighterGameMode.generated.h already included, missing '#pragma once' in FighterGameMode.h"
#endif
#define FIGHTER_FighterGameMode_generated_h

#define Fighter_Source_Fighter_FighterGameMode_h_12_RPC_WRAPPERS
#define Fighter_Source_Fighter_FighterGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Fighter_Source_Fighter_FighterGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFighterGameMode(); \
	friend FIGHTER_API class UClass* Z_Construct_UClass_AFighterGameMode(); \
public: \
	DECLARE_CLASS(AFighterGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Fighter"), FIGHTER_API) \
	DECLARE_SERIALIZER(AFighterGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Fighter_Source_Fighter_FighterGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFighterGameMode(); \
	friend FIGHTER_API class UClass* Z_Construct_UClass_AFighterGameMode(); \
public: \
	DECLARE_CLASS(AFighterGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Fighter"), FIGHTER_API) \
	DECLARE_SERIALIZER(AFighterGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Fighter_Source_Fighter_FighterGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FIGHTER_API AFighterGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFighterGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIGHTER_API, AFighterGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFighterGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FIGHTER_API AFighterGameMode(AFighterGameMode&&); \
	FIGHTER_API AFighterGameMode(const AFighterGameMode&); \
public:


#define Fighter_Source_Fighter_FighterGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FIGHTER_API AFighterGameMode(AFighterGameMode&&); \
	FIGHTER_API AFighterGameMode(const AFighterGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIGHTER_API, AFighterGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFighterGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFighterGameMode)


#define Fighter_Source_Fighter_FighterGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Fighter_Source_Fighter_FighterGameMode_h_9_PROLOG
#define Fighter_Source_Fighter_FighterGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fighter_Source_Fighter_FighterGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Fighter_Source_Fighter_FighterGameMode_h_12_RPC_WRAPPERS \
	Fighter_Source_Fighter_FighterGameMode_h_12_INCLASS \
	Fighter_Source_Fighter_FighterGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Fighter_Source_Fighter_FighterGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fighter_Source_Fighter_FighterGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Fighter_Source_Fighter_FighterGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Fighter_Source_Fighter_FighterGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Fighter_Source_Fighter_FighterGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Fighter_Source_Fighter_FighterGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
