// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPP_Object.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TUTORIAL_ISLAND_CPP_Object_generated_h
#error "CPP_Object.generated.h already included, missing '#pragma once' in CPP_Object.h"
#endif
#define TUTORIAL_ISLAND_CPP_Object_generated_h

#define FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_15_SPARSE_DATA
#define FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetOurPrivateInteger); \
	DECLARE_FUNCTION(execGetOurPrivateInteger);


#define FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetOurPrivateInteger); \
	DECLARE_FUNCTION(execGetOurPrivateInteger);


#define FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_15_ACCESSORS
#define FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCPP_Object(); \
	friend struct Z_Construct_UClass_UCPP_Object_Statics; \
public: \
	DECLARE_CLASS(UCPP_Object, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tutorial_Island"), NO_API) \
	DECLARE_SERIALIZER(UCPP_Object)


#define FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCPP_Object(); \
	friend struct Z_Construct_UClass_UCPP_Object_Statics; \
public: \
	DECLARE_CLASS(UCPP_Object, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tutorial_Island"), NO_API) \
	DECLARE_SERIALIZER(UCPP_Object)


#define FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCPP_Object(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPP_Object) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPP_Object); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPP_Object); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCPP_Object(UCPP_Object&&); \
	NO_API UCPP_Object(const UCPP_Object&); \
public: \
	NO_API virtual ~UCPP_Object();


#define FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCPP_Object(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCPP_Object(UCPP_Object&&); \
	NO_API UCPP_Object(const UCPP_Object&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPP_Object); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPP_Object); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPP_Object) \
	NO_API virtual ~UCPP_Object();


#define FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_12_PROLOG
#define FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_15_SPARSE_DATA \
	FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_15_RPC_WRAPPERS \
	FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_15_ACCESSORS \
	FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_15_INCLASS \
	FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_15_SPARSE_DATA \
	FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_15_ACCESSORS \
	FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_15_INCLASS_NO_PURE_DECLS \
	FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TUTORIAL_ISLAND_API UClass* StaticClass<class UCPP_Object>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
