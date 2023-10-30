// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tutorial_Island/Tutorial_IslandGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorial_IslandGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TUTORIAL_ISLAND_API UClass* Z_Construct_UClass_ATutorial_IslandGameModeBase();
	TUTORIAL_ISLAND_API UClass* Z_Construct_UClass_ATutorial_IslandGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Tutorial_Island();
// End Cross Module References
	void ATutorial_IslandGameModeBase::StaticRegisterNativesATutorial_IslandGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATutorial_IslandGameModeBase);
	UClass* Z_Construct_UClass_ATutorial_IslandGameModeBase_NoRegister()
	{
		return ATutorial_IslandGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATutorial_IslandGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATutorial_IslandGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tutorial_Island,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATutorial_IslandGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Tutorial_IslandGameModeBase.h" },
		{ "ModuleRelativePath", "Tutorial_IslandGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATutorial_IslandGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATutorial_IslandGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATutorial_IslandGameModeBase_Statics::ClassParams = {
		&ATutorial_IslandGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATutorial_IslandGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATutorial_IslandGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATutorial_IslandGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ATutorial_IslandGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATutorial_IslandGameModeBase.OuterSingleton, Z_Construct_UClass_ATutorial_IslandGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATutorial_IslandGameModeBase.OuterSingleton;
	}
	template<> TUTORIAL_ISLAND_API UClass* StaticClass<ATutorial_IslandGameModeBase>()
	{
		return ATutorial_IslandGameModeBase::StaticClass();
	}
	ATutorial_IslandGameModeBase::ATutorial_IslandGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATutorial_IslandGameModeBase);
	ATutorial_IslandGameModeBase::~ATutorial_IslandGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Tutorial_Island_Source_Tutorial_Island_Tutorial_IslandGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tutorial_Island_Source_Tutorial_Island_Tutorial_IslandGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATutorial_IslandGameModeBase, ATutorial_IslandGameModeBase::StaticClass, TEXT("ATutorial_IslandGameModeBase"), &Z_Registration_Info_UClass_ATutorial_IslandGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATutorial_IslandGameModeBase), 527635898U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tutorial_Island_Source_Tutorial_Island_Tutorial_IslandGameModeBase_h_4073027357(TEXT("/Script/Tutorial_Island"),
		Z_CompiledInDeferFile_FID_Tutorial_Island_Source_Tutorial_Island_Tutorial_IslandGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tutorial_Island_Source_Tutorial_Island_Tutorial_IslandGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
