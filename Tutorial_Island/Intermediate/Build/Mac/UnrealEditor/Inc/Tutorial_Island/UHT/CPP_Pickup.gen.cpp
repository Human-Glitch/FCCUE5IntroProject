// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tutorial_Island/Public/CPP_Pickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Pickup() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TUTORIAL_ISLAND_API UClass* Z_Construct_UClass_ACPP_Pickup();
	TUTORIAL_ISLAND_API UClass* Z_Construct_UClass_ACPP_Pickup_NoRegister();
	TUTORIAL_ISLAND_API UClass* Z_Construct_UClass_UMyInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Tutorial_Island();
// End Cross Module References
	void ACPP_Pickup::StaticRegisterNativesACPP_Pickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_Pickup);
	UClass* Z_Construct_UClass_ACPP_Pickup_NoRegister()
	{
		return ACPP_Pickup::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_Pickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_Pickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tutorial_Island,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Pickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_Pickup.h" },
		{ "ModuleRelativePath", "Public/CPP_Pickup.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACPP_Pickup_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMyInterface_NoRegister, (int32)VTABLE_OFFSET(ACPP_Pickup, IMyInterface), false },  // 1638753654
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_Pickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Pickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Pickup_Statics::ClassParams = {
		&ACPP_Pickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_Pickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Pickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_Pickup()
	{
		if (!Z_Registration_Info_UClass_ACPP_Pickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_Pickup.OuterSingleton, Z_Construct_UClass_ACPP_Pickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_Pickup.OuterSingleton;
	}
	template<> TUTORIAL_ISLAND_API UClass* StaticClass<ACPP_Pickup>()
	{
		return ACPP_Pickup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_Pickup);
	ACPP_Pickup::~ACPP_Pickup() {}
	struct Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Pickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Pickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_Pickup, ACPP_Pickup::StaticClass, TEXT("ACPP_Pickup"), &Z_Registration_Info_UClass_ACPP_Pickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_Pickup), 279620382U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Pickup_h_933815451(TEXT("/Script/Tutorial_Island"),
		Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Pickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Pickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
