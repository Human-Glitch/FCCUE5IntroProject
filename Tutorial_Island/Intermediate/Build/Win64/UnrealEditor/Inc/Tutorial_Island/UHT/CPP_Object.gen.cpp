// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tutorial_Island/Public/CPP_Object.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Object() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TUTORIAL_ISLAND_API UClass* Z_Construct_UClass_UCPP_Object();
	TUTORIAL_ISLAND_API UClass* Z_Construct_UClass_UCPP_Object_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Tutorial_Island();
// End Cross Module References
	DEFINE_FUNCTION(UCPP_Object::execSetOurPrivateInteger)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_newValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOurPrivateInteger(Z_Param_Out_newValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCPP_Object::execGetOurPrivateInteger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetOurPrivateInteger();
		P_NATIVE_END;
	}
	void UCPP_Object::StaticRegisterNativesUCPP_Object()
	{
		UClass* Class = UCPP_Object::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOurPrivateInteger", &UCPP_Object::execGetOurPrivateInteger },
			{ "SetOurPrivateInteger", &UCPP_Object::execSetOurPrivateInteger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCPP_Object_GetOurPrivateInteger_Statics
	{
		struct CPP_Object_eventGetOurPrivateInteger_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCPP_Object_GetOurPrivateInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_Object_eventGetOurPrivateInteger_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_Object_GetOurPrivateInteger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_Object_GetOurPrivateInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_Object_GetOurPrivateInteger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPP_Object.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_Object_GetOurPrivateInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_Object, nullptr, "GetOurPrivateInteger", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCPP_Object_GetOurPrivateInteger_Statics::CPP_Object_eventGetOurPrivateInteger_Parms), Z_Construct_UFunction_UCPP_Object_GetOurPrivateInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_Object_GetOurPrivateInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPP_Object_GetOurPrivateInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_Object_GetOurPrivateInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPP_Object_GetOurPrivateInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_Object_GetOurPrivateInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPP_Object_SetOurPrivateInteger_Statics
	{
		struct CPP_Object_eventSetOurPrivateInteger_Parms
		{
			int32 newValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_newValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCPP_Object_SetOurPrivateInteger_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_Object_eventSetOurPrivateInteger_Parms, newValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_Object_SetOurPrivateInteger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_Object_SetOurPrivateInteger_Statics::NewProp_newValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_Object_SetOurPrivateInteger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPP_Object.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_Object_SetOurPrivateInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_Object, nullptr, "SetOurPrivateInteger", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCPP_Object_SetOurPrivateInteger_Statics::CPP_Object_eventSetOurPrivateInteger_Parms), Z_Construct_UFunction_UCPP_Object_SetOurPrivateInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_Object_SetOurPrivateInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPP_Object_SetOurPrivateInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_Object_SetOurPrivateInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPP_Object_SetOurPrivateInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_Object_SetOurPrivateInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCPP_Object);
	UClass* Z_Construct_UClass_UCPP_Object_NoRegister()
	{
		return UCPP_Object::StaticClass();
	}
	struct Z_Construct_UClass_UCPP_Object_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ourPublicIntegerVariable_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ourPublicIntegerVariable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCPP_Object_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Tutorial_Island,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCPP_Object_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPP_Object_GetOurPrivateInteger, "GetOurPrivateInteger" }, // 2422169150
		{ &Z_Construct_UFunction_UCPP_Object_SetOurPrivateInteger, "SetOurPrivateInteger" }, // 619133141
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPP_Object_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CPP_Object.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CPP_Object.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPP_Object_Statics::NewProp_ourPublicIntegerVariable_MetaData[] = {
		{ "Category", "CPP_Object" },
		{ "ModuleRelativePath", "Public/CPP_Object.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCPP_Object_Statics::NewProp_ourPublicIntegerVariable = { "ourPublicIntegerVariable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCPP_Object, ourPublicIntegerVariable), METADATA_PARAMS(Z_Construct_UClass_UCPP_Object_Statics::NewProp_ourPublicIntegerVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_Object_Statics::NewProp_ourPublicIntegerVariable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPP_Object_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_Object_Statics::NewProp_ourPublicIntegerVariable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCPP_Object_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_Object>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_Object_Statics::ClassParams = {
		&UCPP_Object::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCPP_Object_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_Object_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCPP_Object_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_Object_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCPP_Object()
	{
		if (!Z_Registration_Info_UClass_UCPP_Object.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_Object.OuterSingleton, Z_Construct_UClass_UCPP_Object_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCPP_Object.OuterSingleton;
	}
	template<> TUTORIAL_ISLAND_API UClass* StaticClass<UCPP_Object>()
	{
		return UCPP_Object::StaticClass();
	}
	UCPP_Object::UCPP_Object(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_Object);
	UCPP_Object::~UCPP_Object() {}
	struct Z_CompiledInDeferFile_FID_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_Object, UCPP_Object::StaticClass, TEXT("UCPP_Object"), &Z_Registration_Info_UClass_UCPP_Object, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_Object), 2538396776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_4205199501(TEXT("/Script/Tutorial_Island"),
		Z_CompiledInDeferFile_FID_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tutorial_Island_Source_Tutorial_Island_Public_CPP_Object_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
