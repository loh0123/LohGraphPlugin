// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohGraphPlugin/Public/LGPGameCoreSystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLGPGameCoreSystem() {}
// Cross Module References
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGameCoreSystem_NoRegister();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGameCoreSystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_LohGraphPlugin();
	LOHGRAPHPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLGPWeightPrefab();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGraphComponentBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULGPGameCoreSystem::execGetWeightPrefab)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FLGPWeightPrefab,Z_Param_Out_Prefab);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWeightPrefab(Z_Param_ID,Z_Param_Out_Prefab);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPGameCoreSystem::execClearWeightPrefabList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ClearWeightPrefabList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPGameCoreSystem::execSetWeightPrefabList)
	{
		P_GET_TARRAY_REF(FLGPWeightPrefab,Z_Param_Out_NewList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetWeightPrefabList(Z_Param_Out_NewList);
		P_NATIVE_END;
	}
	void ULGPGameCoreSystem::StaticRegisterNativesULGPGameCoreSystem()
	{
		UClass* Class = ULGPGameCoreSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearWeightPrefabList", &ULGPGameCoreSystem::execClearWeightPrefabList },
			{ "GetWeightPrefab", &ULGPGameCoreSystem::execGetWeightPrefab },
			{ "SetWeightPrefabList", &ULGPGameCoreSystem::execSetWeightPrefabList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULGPGameCoreSystem_ClearWeightPrefabList_Statics
	{
		struct LGPGameCoreSystem_eventClearWeightPrefabList_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULGPGameCoreSystem_ClearWeightPrefabList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGameCoreSystem_eventClearWeightPrefabList_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPGameCoreSystem_ClearWeightPrefabList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGameCoreSystem_ClearWeightPrefabList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGameCoreSystem_ClearWeightPrefabList_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPGameCoreSystem" },
		{ "ModuleRelativePath", "Public/LGPGameCoreSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPGameCoreSystem_ClearWeightPrefabList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGameCoreSystem, nullptr, "ClearWeightPrefabList", nullptr, nullptr, sizeof(LGPGameCoreSystem_eventClearWeightPrefabList_Parms), Z_Construct_UFunction_ULGPGameCoreSystem_ClearWeightPrefabList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGameCoreSystem_ClearWeightPrefabList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPGameCoreSystem_ClearWeightPrefabList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGameCoreSystem_ClearWeightPrefabList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPGameCoreSystem_ClearWeightPrefabList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPGameCoreSystem_ClearWeightPrefabList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPGameCoreSystem_GetWeightPrefab_Statics
	{
		struct LGPGameCoreSystem_eventGetWeightPrefab_Parms
		{
			uint8 ID;
			FLGPWeightPrefab Prefab;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Prefab;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGameCoreSystem_GetWeightPrefab_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULGPGameCoreSystem_GetWeightPrefab_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGameCoreSystem_eventGetWeightPrefab_Parms, ID), nullptr, METADATA_PARAMS(Z_Construct_UFunction_ULGPGameCoreSystem_GetWeightPrefab_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGameCoreSystem_GetWeightPrefab_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGPGameCoreSystem_GetWeightPrefab_Statics::NewProp_Prefab = { "Prefab", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGameCoreSystem_eventGetWeightPrefab_Parms, Prefab), Z_Construct_UScriptStruct_FLGPWeightPrefab, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULGPGameCoreSystem_GetWeightPrefab_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LGPGameCoreSystem_eventGetWeightPrefab_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGPGameCoreSystem_GetWeightPrefab_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LGPGameCoreSystem_eventGetWeightPrefab_Parms), &Z_Construct_UFunction_ULGPGameCoreSystem_GetWeightPrefab_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPGameCoreSystem_GetWeightPrefab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGameCoreSystem_GetWeightPrefab_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGameCoreSystem_GetWeightPrefab_Statics::NewProp_Prefab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGameCoreSystem_GetWeightPrefab_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGameCoreSystem_GetWeightPrefab_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPGameCoreSystem" },
		{ "ModuleRelativePath", "Public/LGPGameCoreSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPGameCoreSystem_GetWeightPrefab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGameCoreSystem, nullptr, "GetWeightPrefab", nullptr, nullptr, sizeof(LGPGameCoreSystem_eventGetWeightPrefab_Parms), Z_Construct_UFunction_ULGPGameCoreSystem_GetWeightPrefab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGameCoreSystem_GetWeightPrefab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPGameCoreSystem_GetWeightPrefab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGameCoreSystem_GetWeightPrefab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPGameCoreSystem_GetWeightPrefab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPGameCoreSystem_GetWeightPrefab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPGameCoreSystem_SetWeightPrefabList_Statics
	{
		struct LGPGameCoreSystem_eventSetWeightPrefabList_Parms
		{
			TArray<FLGPWeightPrefab> NewList;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewList;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGPGameCoreSystem_SetWeightPrefabList_Statics::NewProp_NewList_Inner = { "NewList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLGPWeightPrefab, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULGPGameCoreSystem_SetWeightPrefabList_Statics::NewProp_NewList = { "NewList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGameCoreSystem_eventSetWeightPrefabList_Parms, NewList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULGPGameCoreSystem_SetWeightPrefabList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGameCoreSystem_eventSetWeightPrefabList_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPGameCoreSystem_SetWeightPrefabList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGameCoreSystem_SetWeightPrefabList_Statics::NewProp_NewList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGameCoreSystem_SetWeightPrefabList_Statics::NewProp_NewList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGameCoreSystem_SetWeightPrefabList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGameCoreSystem_SetWeightPrefabList_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPGameCoreSystem" },
		{ "Comment", "// Weight Prefab List /////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/LGPGameCoreSystem.h" },
		{ "ToolTip", "Weight Prefab List /" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPGameCoreSystem_SetWeightPrefabList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGameCoreSystem, nullptr, "SetWeightPrefabList", nullptr, nullptr, sizeof(LGPGameCoreSystem_eventSetWeightPrefabList_Parms), Z_Construct_UFunction_ULGPGameCoreSystem_SetWeightPrefabList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGameCoreSystem_SetWeightPrefabList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPGameCoreSystem_SetWeightPrefabList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGameCoreSystem_SetWeightPrefabList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPGameCoreSystem_SetWeightPrefabList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPGameCoreSystem_SetWeightPrefabList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULGPGameCoreSystem_NoRegister()
	{
		return ULGPGameCoreSystem::StaticClass();
	}
	struct Z_Construct_UClass_ULGPGameCoreSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProcessReaderTask_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessReaderTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ProcessReaderTask;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProcessWriterTask_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessWriterTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ProcessWriterTask;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndEventReaderTask_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndEventReaderTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_EndEventReaderTask;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndEventWriterTask_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndEventWriterTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_EndEventWriterTask;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RegisteredComponents_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_RegisteredComponents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeightPrefabList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightPrefabList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeightPrefabList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULGPGameCoreSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_LohGraphPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULGPGameCoreSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULGPGameCoreSystem_ClearWeightPrefabList, "ClearWeightPrefabList" }, // 2189287294
		{ &Z_Construct_UFunction_ULGPGameCoreSystem_GetWeightPrefab, "GetWeightPrefab" }, // 1869307680
		{ &Z_Construct_UFunction_ULGPGameCoreSystem_SetWeightPrefabList, "SetWeightPrefabList" }, // 1486932823
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGameCoreSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Core System\n * \n * For Recording Writer / Reader Creation\n * - On Writer Create Add To List\n * - On Reader Create Add To List\n * For Thread Pool And Task Management\n * - Stop Reader Thread If Detect Writer Thread Need Work\n * - Auto Start Reader Thread After All Writer Thread Done\n */" },
		{ "IncludePath", "LGPGameCoreSystem.h" },
		{ "ModuleRelativePath", "Public/LGPGameCoreSystem.h" },
		{ "ToolTip", "Core System\n\nFor Recording Writer / Reader Creation\n- On Writer Create Add To List\n- On Reader Create Add To List\nFor Thread Pool And Task Management\n- Stop Reader Thread If Detect Writer Thread Need Work\n- Auto Start Reader Thread After All Writer Thread Done" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessReaderTask_ElementProp = { "ProcessReaderTask", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULGPGraphComponentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessReaderTask_MetaData[] = {
		{ "Comment", "// Process Counter /////////////////////////\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LGPGameCoreSystem.h" },
		{ "ToolTip", "Process Counter /" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessReaderTask = { "ProcessReaderTask", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGameCoreSystem, ProcessReaderTask), METADATA_PARAMS(Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessReaderTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessReaderTask_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessWriterTask_ElementProp = { "ProcessWriterTask", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULGPGraphComponentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessWriterTask_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LGPGameCoreSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessWriterTask = { "ProcessWriterTask", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGameCoreSystem, ProcessWriterTask), METADATA_PARAMS(Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessWriterTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessWriterTask_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_EndEventReaderTask_ElementProp = { "EndEventReaderTask", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULGPGraphComponentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_EndEventReaderTask_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LGPGameCoreSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_EndEventReaderTask = { "EndEventReaderTask", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGameCoreSystem, EndEventReaderTask), METADATA_PARAMS(Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_EndEventReaderTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_EndEventReaderTask_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_EndEventWriterTask_ElementProp = { "EndEventWriterTask", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULGPGraphComponentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_EndEventWriterTask_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LGPGameCoreSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_EndEventWriterTask = { "EndEventWriterTask", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGameCoreSystem, EndEventWriterTask), METADATA_PARAMS(Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_EndEventWriterTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_EndEventWriterTask_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_RegisteredComponents_ElementProp = { "RegisteredComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULGPGraphComponentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_RegisteredComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LGPGameCoreSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_RegisteredComponents = { "RegisteredComponents", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGameCoreSystem, RegisteredComponents), METADATA_PARAMS(Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_RegisteredComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_RegisteredComponents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_WeightPrefabList_Inner = { "WeightPrefabList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLGPWeightPrefab, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_WeightPrefabList_MetaData[] = {
		{ "ModuleRelativePath", "Public/LGPGameCoreSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_WeightPrefabList = { "WeightPrefabList", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGameCoreSystem, WeightPrefabList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_WeightPrefabList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_WeightPrefabList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULGPGameCoreSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessReaderTask_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessReaderTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessWriterTask_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_ProcessWriterTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_EndEventReaderTask_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_EndEventReaderTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_EndEventWriterTask_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_EndEventWriterTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_RegisteredComponents_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_RegisteredComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_WeightPrefabList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGameCoreSystem_Statics::NewProp_WeightPrefabList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULGPGameCoreSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULGPGameCoreSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULGPGameCoreSystem_Statics::ClassParams = {
		&ULGPGameCoreSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULGPGameCoreSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGameCoreSystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULGPGameCoreSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGameCoreSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULGPGameCoreSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULGPGameCoreSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULGPGameCoreSystem, 1840266281);
	template<> LOHGRAPHPLUGIN_API UClass* StaticClass<ULGPGameCoreSystem>()
	{
		return ULGPGameCoreSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULGPGameCoreSystem(Z_Construct_UClass_ULGPGameCoreSystem, &ULGPGameCoreSystem::StaticClass, TEXT("/Script/LohGraphPlugin"), TEXT("ULGPGameCoreSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULGPGameCoreSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
