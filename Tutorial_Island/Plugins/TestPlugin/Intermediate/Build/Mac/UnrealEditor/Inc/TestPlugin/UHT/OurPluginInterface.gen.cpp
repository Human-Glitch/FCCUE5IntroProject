// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestPlugin/Public/OurPluginInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOurPluginInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	TESTPLUGIN_API UClass* Z_Construct_UClass_UOurPluginInterface();
	TESTPLUGIN_API UClass* Z_Construct_UClass_UOurPluginInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TestPlugin();
// End Cross Module References
	void UOurPluginInterface::StaticRegisterNativesUOurPluginInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOurPluginInterface);
	UClass* Z_Construct_UClass_UOurPluginInterface_NoRegister()
	{
		return UOurPluginInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOurPluginInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOurPluginInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TestPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOurPluginInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OurPluginInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOurPluginInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOurPluginInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOurPluginInterface_Statics::ClassParams = {
		&UOurPluginInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOurPluginInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOurPluginInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOurPluginInterface()
	{
		if (!Z_Registration_Info_UClass_UOurPluginInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOurPluginInterface.OuterSingleton, Z_Construct_UClass_UOurPluginInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOurPluginInterface.OuterSingleton;
	}
	template<> TESTPLUGIN_API UClass* StaticClass<UOurPluginInterface>()
	{
		return UOurPluginInterface::StaticClass();
	}
	UOurPluginInterface::UOurPluginInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOurPluginInterface);
	UOurPluginInterface::~UOurPluginInterface() {}
	struct Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_Unreal5FreeCodeCampTutorial_Tutorial_Island_Plugins_TestPlugin_Source_TestPlugin_Public_OurPluginInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_Unreal5FreeCodeCampTutorial_Tutorial_Island_Plugins_TestPlugin_Source_TestPlugin_Public_OurPluginInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOurPluginInterface, UOurPluginInterface::StaticClass, TEXT("UOurPluginInterface"), &Z_Registration_Info_UClass_UOurPluginInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOurPluginInterface), 991015966U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_Unreal5FreeCodeCampTutorial_Tutorial_Island_Plugins_TestPlugin_Source_TestPlugin_Public_OurPluginInterface_h_3474116193(TEXT("/Script/TestPlugin"),
		Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_Unreal5FreeCodeCampTutorial_Tutorial_Island_Plugins_TestPlugin_Source_TestPlugin_Public_OurPluginInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_Unreal5FreeCodeCampTutorial_Tutorial_Island_Plugins_TestPlugin_Source_TestPlugin_Public_OurPluginInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
