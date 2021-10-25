// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohGraphPlugin/Public/LGPNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLGPNode() {}
// Cross Module References
	LOHGRAPHPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLGPNodePathData();
	UPackage* Z_Construct_UPackage__Script_LohGraphPlugin();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPNode_NoRegister();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPNodeBase_NoRegister();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPNodeBase();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGraphReader_NoRegister();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGraphWriter_NoRegister();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPNodeCache_NoRegister();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPNodeCache();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPNode();
// End Cross Module References
class UScriptStruct* FLGPNodePathData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOHGRAPHPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FLGPNodePathData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLGPNodePathData, Z_Construct_UPackage__Script_LohGraphPlugin(), TEXT("LGPNodePathData"), sizeof(FLGPNodePathData), Get_Z_Construct_UScriptStruct_FLGPNodePathData_Hash());
	}
	return Singleton;
}
template<> LOHGRAPHPLUGIN_API UScriptStruct* StaticStruct<FLGPNodePathData>()
{
	return FLGPNodePathData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLGPNodePathData(FLGPNodePathData::StaticStruct, TEXT("/Script/LohGraphPlugin"), TEXT("LGPNodePathData"), false, nullptr, nullptr);
static struct FScriptStruct_LohGraphPlugin_StaticRegisterNativesFLGPNodePathData
{
	FScriptStruct_LohGraphPlugin_StaticRegisterNativesFLGPNodePathData()
	{
		UScriptStruct::DeferCppStructOps<FLGPNodePathData>(FName(TEXT("LGPNodePathData")));
	}
} ScriptStruct_LohGraphPlugin_StaticRegisterNativesFLGPNodePathData;
	struct Z_Construct_UScriptStruct_FLGPNodePathData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConnectNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathWeightType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PathWeightType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsWalkable_MetaData[];
#endif
		static void NewProp_IsWalkable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsWalkable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsReturnable_MetaData[];
#endif
		static void NewProp_IsReturnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsReturnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsTrigger_MetaData[];
#endif
		static void NewProp_IsTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTrigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPNodePathData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLGPNodePathData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_ConnectNode_MetaData[] = {
		{ "Category", "LGPNodePathData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_ConnectNode = { "ConnectNode", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLGPNodePathData, ConnectNode), Z_Construct_UClass_ULGPNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_ConnectNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_ConnectNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_PathWeightType_MetaData[] = {
		{ "Category", "LGPNodePathData" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_PathWeightType = { "PathWeightType", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLGPNodePathData, PathWeightType), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_PathWeightType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_PathWeightType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_IsWalkable_MetaData[] = {
		{ "Category", "LGPNodePathData" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_IsWalkable_SetBit(void* Obj)
	{
		((FLGPNodePathData*)Obj)->IsWalkable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_IsWalkable = { "IsWalkable", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FLGPNodePathData), &Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_IsWalkable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_IsWalkable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_IsWalkable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_IsReturnable_MetaData[] = {
		{ "Category", "LGPNodePathData" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_IsReturnable_SetBit(void* Obj)
	{
		((FLGPNodePathData*)Obj)->IsReturnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_IsReturnable = { "IsReturnable", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FLGPNodePathData), &Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_IsReturnable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_IsReturnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_IsReturnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_IsTrigger_MetaData[] = {
		{ "Category", "LGPNodePathData" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_IsTrigger_SetBit(void* Obj)
	{
		((FLGPNodePathData*)Obj)->IsTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_IsTrigger = { "IsTrigger", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FLGPNodePathData), &Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_IsTrigger_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_IsTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_IsTrigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLGPNodePathData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_ConnectNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_PathWeightType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_IsWalkable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_IsReturnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_IsTrigger,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLGPNodePathData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohGraphPlugin,
		nullptr,
		&NewStructOps,
		"LGPNodePathData",
		sizeof(FLGPNodePathData),
		alignof(FLGPNodePathData),
		Z_Construct_UScriptStruct_FLGPNodePathData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPNodePathData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPNodePathData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPNodePathData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLGPNodePathData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLGPNodePathData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LohGraphPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LGPNodePathData"), sizeof(FLGPNodePathData), Get_Z_Construct_UScriptStruct_FLGPNodePathData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLGPNodePathData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLGPNodePathData_Hash() { return 334625385U; }
	DEFINE_FUNCTION(ULGPNodeBase::execSetNodeWeightType)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->SetNodeWeightType(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPNodeBase::execGetNodeWeightType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetNodeWeightType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPNodeBase::execGetNodeWeight)
	{
		P_GET_OBJECT(ULGPGraphReader,Z_Param_Reader);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNodeWeight(Z_Param_Reader);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPNodeBase::execClearPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPNodeBase::execRemovePath)
	{
		P_GET_OBJECT(ULGPNode,Z_Param_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemovePath(Z_Param_Node);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPNodeBase::execAddPath)
	{
		P_GET_OBJECT(ULGPNode,Z_Param_Node);
		P_GET_PROPERTY(FByteProperty,Z_Param_WeightType);
		P_GET_UBOOL(Z_Param_IsReturnable);
		P_GET_UBOOL(Z_Param_Trigger);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddPath(Z_Param_Node,Z_Param_WeightType,Z_Param_IsReturnable,Z_Param_Trigger);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPNodeBase::execGetPathArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLGPNodePathData>*)Z_Param__Result=P_THIS->GetPathArray();
		P_NATIVE_END;
	}
	void ULGPNodeBase::StaticRegisterNativesULGPNodeBase()
	{
		UClass* Class = ULGPNodeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPath", &ULGPNodeBase::execAddPath },
			{ "ClearPath", &ULGPNodeBase::execClearPath },
			{ "GetNodeWeight", &ULGPNodeBase::execGetNodeWeight },
			{ "GetNodeWeightType", &ULGPNodeBase::execGetNodeWeightType },
			{ "GetPathArray", &ULGPNodeBase::execGetPathArray },
			{ "RemovePath", &ULGPNodeBase::execRemovePath },
			{ "SetNodeWeightType", &ULGPNodeBase::execSetNodeWeightType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics
	{
		struct LGPNodeBase_eventAddPath_Parms
		{
			ULGPNode* Node;
			uint8 WeightType;
			bool IsReturnable;
			bool Trigger;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeightType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsReturnable_MetaData[];
#endif
		static void NewProp_IsReturnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsReturnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[];
#endif
		static void NewProp_Trigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Trigger;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_Node_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPNodeBase_eventAddPath_Parms, Node), Z_Construct_UClass_ULGPNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_Node_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_WeightType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_WeightType = { "WeightType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPNodeBase_eventAddPath_Parms, WeightType), nullptr, METADATA_PARAMS(Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_WeightType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_WeightType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_IsReturnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_IsReturnable_SetBit(void* Obj)
	{
		((LGPNodeBase_eventAddPath_Parms*)Obj)->IsReturnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_IsReturnable = { "IsReturnable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LGPNodeBase_eventAddPath_Parms), &Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_IsReturnable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_IsReturnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_IsReturnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_Trigger_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_Trigger_SetBit(void* Obj)
	{
		((LGPNodeBase_eventAddPath_Parms*)Obj)->Trigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LGPNodeBase_eventAddPath_Parms), &Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_Trigger_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_Trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_Trigger_MetaData)) };
	void Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LGPNodeBase_eventAddPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LGPNodeBase_eventAddPath_Parms), &Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_Node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_WeightType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_IsReturnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_Trigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPNodeBase | Graph Path" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPNodeBase, nullptr, "AddPath", nullptr, nullptr, sizeof(LGPNodeBase_eventAddPath_Parms), Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPNodeBase_AddPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPNodeBase_AddPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPNodeBase_ClearPath_Statics
	{
		struct LGPNodeBase_eventClearPath_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULGPNodeBase_ClearPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LGPNodeBase_eventClearPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGPNodeBase_ClearPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LGPNodeBase_eventClearPath_Parms), &Z_Construct_UFunction_ULGPNodeBase_ClearPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPNodeBase_ClearPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPNodeBase_ClearPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPNodeBase_ClearPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPNodeBase | Graph Path" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPNodeBase_ClearPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPNodeBase, nullptr, "ClearPath", nullptr, nullptr, sizeof(LGPNodeBase_eventClearPath_Parms), Z_Construct_UFunction_ULGPNodeBase_ClearPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNodeBase_ClearPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPNodeBase_ClearPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNodeBase_ClearPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPNodeBase_ClearPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPNodeBase_ClearPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPNodeBase_GetNodeWeight_Statics
	{
		struct LGPNodeBase_eventGetNodeWeight_Parms
		{
			ULGPGraphReader* Reader;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reader_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Reader;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPNodeBase_GetNodeWeight_Statics::NewProp_Reader_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGPNodeBase_GetNodeWeight_Statics::NewProp_Reader = { "Reader", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPNodeBase_eventGetNodeWeight_Parms, Reader), Z_Construct_UClass_ULGPGraphReader_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULGPNodeBase_GetNodeWeight_Statics::NewProp_Reader_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNodeBase_GetNodeWeight_Statics::NewProp_Reader_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULGPNodeBase_GetNodeWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPNodeBase_eventGetNodeWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPNodeBase_GetNodeWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPNodeBase_GetNodeWeight_Statics::NewProp_Reader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPNodeBase_GetNodeWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPNodeBase_GetNodeWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPNodeBase | Weight Type" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPNodeBase_GetNodeWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPNodeBase, nullptr, "GetNodeWeight", nullptr, nullptr, sizeof(LGPNodeBase_eventGetNodeWeight_Parms), Z_Construct_UFunction_ULGPNodeBase_GetNodeWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNodeBase_GetNodeWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPNodeBase_GetNodeWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNodeBase_GetNodeWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPNodeBase_GetNodeWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPNodeBase_GetNodeWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPNodeBase_GetNodeWeightType_Statics
	{
		struct LGPNodeBase_eventGetNodeWeightType_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULGPNodeBase_GetNodeWeightType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPNodeBase_eventGetNodeWeightType_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPNodeBase_GetNodeWeightType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPNodeBase_GetNodeWeightType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPNodeBase_GetNodeWeightType_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPNodeBase | Weight Type" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPNodeBase_GetNodeWeightType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPNodeBase, nullptr, "GetNodeWeightType", nullptr, nullptr, sizeof(LGPNodeBase_eventGetNodeWeightType_Parms), Z_Construct_UFunction_ULGPNodeBase_GetNodeWeightType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNodeBase_GetNodeWeightType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPNodeBase_GetNodeWeightType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNodeBase_GetNodeWeightType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPNodeBase_GetNodeWeightType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPNodeBase_GetNodeWeightType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPNodeBase_GetPathArray_Statics
	{
		struct LGPNodeBase_eventGetPathArray_Parms
		{
			TArray<FLGPNodePathData> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGPNodeBase_GetPathArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLGPNodePathData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULGPNodeBase_GetPathArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPNodeBase_eventGetPathArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPNodeBase_GetPathArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPNodeBase_GetPathArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPNodeBase_GetPathArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPNodeBase_GetPathArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPNodeBase | Graph Path" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPNodeBase_GetPathArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPNodeBase, nullptr, "GetPathArray", nullptr, nullptr, sizeof(LGPNodeBase_eventGetPathArray_Parms), Z_Construct_UFunction_ULGPNodeBase_GetPathArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNodeBase_GetPathArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPNodeBase_GetPathArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNodeBase_GetPathArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPNodeBase_GetPathArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPNodeBase_GetPathArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPNodeBase_RemovePath_Statics
	{
		struct LGPNodeBase_eventRemovePath_Parms
		{
			ULGPNode* Node;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Node;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPNodeBase_RemovePath_Statics::NewProp_Node_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGPNodeBase_RemovePath_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPNodeBase_eventRemovePath_Parms, Node), Z_Construct_UClass_ULGPNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULGPNodeBase_RemovePath_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNodeBase_RemovePath_Statics::NewProp_Node_MetaData)) };
	void Z_Construct_UFunction_ULGPNodeBase_RemovePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LGPNodeBase_eventRemovePath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGPNodeBase_RemovePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LGPNodeBase_eventRemovePath_Parms), &Z_Construct_UFunction_ULGPNodeBase_RemovePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPNodeBase_RemovePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPNodeBase_RemovePath_Statics::NewProp_Node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPNodeBase_RemovePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPNodeBase_RemovePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPNodeBase | Graph Path" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPNodeBase_RemovePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPNodeBase, nullptr, "RemovePath", nullptr, nullptr, sizeof(LGPNodeBase_eventRemovePath_Parms), Z_Construct_UFunction_ULGPNodeBase_RemovePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNodeBase_RemovePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPNodeBase_RemovePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNodeBase_RemovePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPNodeBase_RemovePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPNodeBase_RemovePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPNodeBase_SetNodeWeightType_Statics
	{
		struct LGPNodeBase_eventSetNodeWeightType_Parms
		{
			uint8 ID;
			uint8 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPNodeBase_SetNodeWeightType_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULGPNodeBase_SetNodeWeightType_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPNodeBase_eventSetNodeWeightType_Parms, ID), nullptr, METADATA_PARAMS(Z_Construct_UFunction_ULGPNodeBase_SetNodeWeightType_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNodeBase_SetNodeWeightType_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULGPNodeBase_SetNodeWeightType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPNodeBase_eventSetNodeWeightType_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPNodeBase_SetNodeWeightType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPNodeBase_SetNodeWeightType_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPNodeBase_SetNodeWeightType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPNodeBase_SetNodeWeightType_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPNodeBase | Weight Type" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPNodeBase_SetNodeWeightType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPNodeBase, nullptr, "SetNodeWeightType", nullptr, nullptr, sizeof(LGPNodeBase_eventSetNodeWeightType_Parms), Z_Construct_UFunction_ULGPNodeBase_SetNodeWeightType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNodeBase_SetNodeWeightType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPNodeBase_SetNodeWeightType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNodeBase_SetNodeWeightType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPNodeBase_SetNodeWeightType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPNodeBase_SetNodeWeightType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULGPNodeBase_NoRegister()
	{
		return ULGPNodeBase::StaticClass();
	}
	struct Z_Construct_UClass_ULGPNodeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeGraphWriter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeGraphWriter;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathList_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathList_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_PathList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeWeightType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NodeWeightType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsTrigger_MetaData[];
#endif
		static void NewProp_IsTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTrigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULGPNodeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LohGraphPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULGPNodeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULGPNodeBase_AddPath, "AddPath" }, // 1886337862
		{ &Z_Construct_UFunction_ULGPNodeBase_ClearPath, "ClearPath" }, // 2501074026
		{ &Z_Construct_UFunction_ULGPNodeBase_GetNodeWeight, "GetNodeWeight" }, // 3738608671
		{ &Z_Construct_UFunction_ULGPNodeBase_GetNodeWeightType, "GetNodeWeightType" }, // 727419856
		{ &Z_Construct_UFunction_ULGPNodeBase_GetPathArray, "GetPathArray" }, // 588580164
		{ &Z_Construct_UFunction_ULGPNodeBase_RemovePath, "RemovePath" }, // 3211535296
		{ &Z_Construct_UFunction_ULGPNodeBase_SetNodeWeightType, "SetNodeWeightType" }, // 1961251515
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPNodeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base Class Of Graph Node \n * For\n * - Register / Unregister With Graph Writer At ( Begin Play )\n * - Add / Remove Path Function\n */" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "LGPNode.h" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
		{ "ToolTip", "Base Class Of Graph Node\nFor\n- Register / Unregister With Graph Writer At ( Begin Play )\n- Add / Remove Path Function" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_NodeGraphWriter_MetaData[] = {
		{ "Category", "LGPNodeBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_NodeGraphWriter = { "NodeGraphWriter", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPNodeBase, NodeGraphWriter), Z_Construct_UClass_ULGPGraphWriter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_NodeGraphWriter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_NodeGraphWriter_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_PathList_ElementProp = { "PathList", nullptr, (EPropertyFlags)0x0000008000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLGPNodePathData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_PathList_MetaData[] = {
		{ "Category", "LGPNodeBase" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_PathList = { "PathList", nullptr, (EPropertyFlags)0x0020088000020001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPNodeBase, PathList), METADATA_PARAMS(Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_PathList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_PathList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_NodeWeightType_MetaData[] = {
		{ "Category", "LGPNodeBase" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_NodeWeightType = { "NodeWeightType", nullptr, (EPropertyFlags)0x0021080000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPNodeBase, NodeWeightType), nullptr, METADATA_PARAMS(Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_NodeWeightType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_NodeWeightType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_IsTrigger_MetaData[] = {
		{ "Category", "LGPNodeBase" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	void Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_IsTrigger_SetBit(void* Obj)
	{
		((ULGPNodeBase*)Obj)->IsTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_IsTrigger = { "IsTrigger", nullptr, (EPropertyFlags)0x0021080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULGPNodeBase), &Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_IsTrigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_IsTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_IsTrigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULGPNodeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_NodeGraphWriter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_PathList_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_PathList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_NodeWeightType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_IsTrigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULGPNodeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULGPNodeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULGPNodeBase_Statics::ClassParams = {
		&ULGPNodeBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULGPNodeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULGPNodeBase_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULGPNodeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPNodeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULGPNodeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULGPNodeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULGPNodeBase, 3788568219);
	template<> LOHGRAPHPLUGIN_API UClass* StaticClass<ULGPNodeBase>()
	{
		return ULGPNodeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULGPNodeBase(Z_Construct_UClass_ULGPNodeBase, &ULGPNodeBase::StaticClass, TEXT("/Script/LohGraphPlugin"), TEXT("ULGPNodeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULGPNodeBase);
	void ULGPNodeCache::StaticRegisterNativesULGPNodeCache()
	{
	}
	UClass* Z_Construct_UClass_ULGPNodeCache_NoRegister()
	{
		return ULGPNodeCache::StaticClass();
	}
	struct Z_Construct_UClass_ULGPNodeCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULGPNodeCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULGPNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LohGraphPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPNodeCache_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "LGPNode.h" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULGPNodeCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULGPNodeCache>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULGPNodeCache_Statics::ClassParams = {
		&ULGPNodeCache::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULGPNodeCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPNodeCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULGPNodeCache()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULGPNodeCache_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULGPNodeCache, 1179550626);
	template<> LOHGRAPHPLUGIN_API UClass* StaticClass<ULGPNodeCache>()
	{
		return ULGPNodeCache::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULGPNodeCache(Z_Construct_UClass_ULGPNodeCache, &ULGPNodeCache::StaticClass, TEXT("/Script/LohGraphPlugin"), TEXT("ULGPNodeCache"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULGPNodeCache);
	void ULGPNode::StaticRegisterNativesULGPNode()
	{
	}
	UClass* Z_Construct_UClass_ULGPNode_NoRegister()
	{
		return ULGPNode::StaticClass();
	}
	struct Z_Construct_UClass_ULGPNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULGPNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULGPNodeCache,
		(UObject* (*)())Z_Construct_UPackage__Script_LohGraphPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPNode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "LGPNode.h" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULGPNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULGPNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULGPNode_Statics::ClassParams = {
		&ULGPNode::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULGPNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULGPNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULGPNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULGPNode, 1886068378);
	template<> LOHGRAPHPLUGIN_API UClass* StaticClass<ULGPNode>()
	{
		return ULGPNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULGPNode(Z_Construct_UClass_ULGPNode, &ULGPNode::StaticClass, TEXT("/Script/LohGraphPlugin"), TEXT("ULGPNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULGPNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
