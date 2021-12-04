// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohGraphPlugin/Public/LGPGraphLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLGPGraphLibrary() {}
// Cross Module References
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGraphLibrary_NoRegister();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGraphLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_LohGraphPlugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPNode_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULGPGraphLibrary::execAddGraphNodeGrid)
	{
		P_GET_OBJECT(AActor,Z_Param_SelfActor);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_StartTransform);
		P_GET_STRUCT(FVector,Z_Param_GridGap);
		P_GET_STRUCT(FIntVector,Z_Param_Size);
		P_GET_UBOOL(Z_Param_bDebug);
		P_GET_UBOOL(Z_Param_bBlockCheck);
		P_GET_TARRAY_REF(ULGPNode*,Z_Param_Out_ReturnList);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULGPGraphLibrary::AddGraphNodeGrid(Z_Param_SelfActor,Z_Param_Out_StartTransform,Z_Param_GridGap,Z_Param_Size,Z_Param_bDebug,Z_Param_bBlockCheck,Z_Param_Out_ReturnList);
		P_NATIVE_END;
	}
	void ULGPGraphLibrary::StaticRegisterNativesULGPGraphLibrary()
	{
		UClass* Class = ULGPGraphLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGraphNodeGrid", &ULGPGraphLibrary::execAddGraphNodeGrid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics
	{
		struct LGPGraphLibrary_eventAddGraphNodeGrid_Parms
		{
			AActor* SelfActor;
			FTransform StartTransform;
			FVector GridGap;
			FIntVector Size;
			bool bDebug;
			bool bBlockCheck;
			TArray<ULGPNode*> ReturnList;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridGap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridGap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlockCheck_MetaData[];
#endif
		static void NewProp_bBlockCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockCheck;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGraphLibrary_eventAddGraphNodeGrid_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_StartTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_StartTransform = { "StartTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGraphLibrary_eventAddGraphNodeGrid_Parms, StartTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_StartTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_StartTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_GridGap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_GridGap = { "GridGap", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGraphLibrary_eventAddGraphNodeGrid_Parms, GridGap), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_GridGap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_GridGap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGraphLibrary_eventAddGraphNodeGrid_Parms, Size), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_bDebug_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((LGPGraphLibrary_eventAddGraphNodeGrid_Parms*)Obj)->bDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LGPGraphLibrary_eventAddGraphNodeGrid_Parms), &Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_bBlockCheck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_bBlockCheck_SetBit(void* Obj)
	{
		((LGPGraphLibrary_eventAddGraphNodeGrid_Parms*)Obj)->bBlockCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_bBlockCheck = { "bBlockCheck", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LGPGraphLibrary_eventAddGraphNodeGrid_Parms), &Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_bBlockCheck_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_bBlockCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_bBlockCheck_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_ReturnList_Inner = { "ReturnList", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULGPNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_ReturnList_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_ReturnList = { "ReturnList", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGraphLibrary_eventAddGraphNodeGrid_Parms, ReturnList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_ReturnList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_ReturnList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_SelfActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_StartTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_GridGap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_bDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_bBlockCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_ReturnList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::NewProp_ReturnList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPGraphLibrary" },
		{ "ModuleRelativePath", "Public/LGPGraphLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGraphLibrary, nullptr, "AddGraphNodeGrid", nullptr, nullptr, sizeof(LGPGraphLibrary_eventAddGraphNodeGrid_Parms), Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULGPGraphLibrary_NoRegister()
	{
		return ULGPGraphLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULGPGraphLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULGPGraphLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LohGraphPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULGPGraphLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULGPGraphLibrary_AddGraphNodeGrid, "AddGraphNodeGrid" }, // 3249167843
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LGPGraphLibrary.h" },
		{ "ModuleRelativePath", "Public/LGPGraphLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULGPGraphLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULGPGraphLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULGPGraphLibrary_Statics::ClassParams = {
		&ULGPGraphLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULGPGraphLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULGPGraphLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULGPGraphLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULGPGraphLibrary, 2454736607);
	template<> LOHGRAPHPLUGIN_API UClass* StaticClass<ULGPGraphLibrary>()
	{
		return ULGPGraphLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULGPGraphLibrary(Z_Construct_UClass_ULGPGraphLibrary, &ULGPGraphLibrary::StaticClass, TEXT("/Script/LohGraphPlugin"), TEXT("ULGPGraphLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULGPGraphLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
