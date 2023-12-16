// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tutorial_Island/Public/CPP_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Character() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	TUTORIAL_ISLAND_API UClass* Z_Construct_UClass_ACPP_Character();
	TUTORIAL_ISLAND_API UClass* Z_Construct_UClass_ACPP_Character_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Tutorial_Island();
// End Cross Module References
	DEFINE_FUNCTION(ACPP_Character::execRemovePickup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePickup();
		P_NATIVE_END;
	}
	struct CPP_Character_eventTestBPFunc_Parms
	{
		int32 x;
	};
	static FName NAME_ACPP_Character_TestBPFunc = FName(TEXT("TestBPFunc"));
	void ACPP_Character::TestBPFunc(int32 x)
	{
		CPP_Character_eventTestBPFunc_Parms Parms;
		Parms.x=x;
		ProcessEvent(FindFunctionChecked(NAME_ACPP_Character_TestBPFunc),&Parms);
	}
	void ACPP_Character::StaticRegisterNativesACPP_Character()
	{
		UClass* Class = ACPP_Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemovePickup", &ACPP_Character::execRemovePickup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPP_Character_RemovePickup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_RemovePickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPP_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_RemovePickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "RemovePickup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_RemovePickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_RemovePickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_RemovePickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_Character_RemovePickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_TestBPFunc_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_x;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACPP_Character_TestBPFunc_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_Character_eventTestBPFunc_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Character_TestBPFunc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Character_TestBPFunc_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_TestBPFunc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPP_Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_TestBPFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "TestBPFunc", nullptr, nullptr, sizeof(CPP_Character_eventTestBPFunc_Parms), Z_Construct_UFunction_ACPP_Character_TestBPFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_TestBPFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_TestBPFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_TestBPFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_TestBPFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_Character_TestBPFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_Character);
	UClass* Z_Construct_UClass_ACPP_Character_NoRegister()
	{
		return ACPP_Character::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Tutorial_Island,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPP_Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_Character_RemovePickup, "RemovePickup" }, // 227308208
		{ &Z_Construct_UFunction_ACPP_Character_TestBPFunc, "TestBPFunc" }, // 707734348
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CPP_Character.h" },
		{ "ModuleRelativePath", "Public/CPP_Character.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Character_Statics::ClassParams = {
		&ACPP_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_Character()
	{
		if (!Z_Registration_Info_UClass_ACPP_Character.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_Character.OuterSingleton, Z_Construct_UClass_ACPP_Character_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_Character.OuterSingleton;
	}
	template<> TUTORIAL_ISLAND_API UClass* StaticClass<ACPP_Character>()
	{
		return ACPP_Character::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_Character);
	ACPP_Character::~ACPP_Character() {}
	struct Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Character_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Character_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_Character, ACPP_Character::StaticClass, TEXT("ACPP_Character"), &Z_Registration_Info_UClass_ACPP_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_Character), 361790663U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Character_h_58562369(TEXT("/Script/Tutorial_Island"),
		Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UnrealPlayground_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Character_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
