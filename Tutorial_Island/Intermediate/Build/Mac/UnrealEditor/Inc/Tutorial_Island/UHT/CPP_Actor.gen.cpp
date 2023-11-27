// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tutorial_Island/Public/CPP_Actor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Actor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TUTORIAL_ISLAND_API UClass* Z_Construct_UClass_ACPP_Actor();
	TUTORIAL_ISLAND_API UClass* Z_Construct_UClass_ACPP_Actor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Tutorial_Island();
// End Cross Module References
	void ACPP_Actor::StaticRegisterNativesACPP_Actor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_Actor);
	UClass* Z_Construct_UClass_ACPP_Actor_NoRegister()
	{
		return ACPP_Actor::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_Actor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_Actor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tutorial_Island,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Actor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_Actor.h" },
		{ "ModuleRelativePath", "Public/CPP_Actor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_Actor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Actor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Actor_Statics::ClassParams = {
		&ACPP_Actor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACPP_Actor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Actor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_Actor()
	{
		if (!Z_Registration_Info_UClass_ACPP_Actor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_Actor.OuterSingleton, Z_Construct_UClass_ACPP_Actor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_Actor.OuterSingleton;
	}
	template<> TUTORIAL_ISLAND_API UClass* StaticClass<ACPP_Actor>()
	{
		return ACPP_Actor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_Actor);
	ACPP_Actor::~ACPP_Actor() {}
	struct Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Actor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Actor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_Actor, ACPP_Actor::StaticClass, TEXT("ACPP_Actor"), &Z_Registration_Info_UClass_ACPP_Actor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_Actor), 1256788654U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Actor_h_436437946(TEXT("/Script/Tutorial_Island"),
		Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Actor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Actor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
