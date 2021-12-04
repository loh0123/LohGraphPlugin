// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohGraphPlugin/Public/LGPGraphReader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLGPGraphReader() {}
// Cross Module References
	LOHGRAPHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnEndFollowingPathSignature__DelegateSignature();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGraphNavigator();
	LOHGRAPHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnBeginFollowingPathSignature__DelegateSignature();
	LOHGRAPHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnPathReceiveSignature__DelegateSignature();
	LOHGRAPHPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLGPGroupPathData();
	LOHGRAPHPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLGPAStarHelper();
	UPackage* Z_Construct_UPackage__Script_LohGraphPlugin();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGraphReader_NoRegister();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGraphReader();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGraphComponentBase();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPNode_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	LOHGRAPHPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLGPWeightPrefab();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGraphNavigator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnEndFollowingPathSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnEndFollowingPathSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnEndFollowingPathSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGraphNavigator, nullptr, "OnEndFollowingPathSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnEndFollowingPathSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnEndFollowingPathSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnEndFollowingPathSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnEndFollowingPathSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnBeginFollowingPathSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnBeginFollowingPathSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnBeginFollowingPathSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGraphNavigator, nullptr, "OnBeginFollowingPathSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnBeginFollowingPathSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnBeginFollowingPathSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnBeginFollowingPathSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnBeginFollowingPathSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnPathReceiveSignature__DelegateSignature_Statics
	{
		struct LGPGraphNavigator_eventOnPathReceiveSignature_Parms
		{
			TArray<FLGPGroupPathData> Path;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnPathReceiveSignature__DelegateSignature_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLGPGroupPathData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnPathReceiveSignature__DelegateSignature_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnPathReceiveSignature__DelegateSignature_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGraphNavigator_eventOnPathReceiveSignature_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnPathReceiveSignature__DelegateSignature_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnPathReceiveSignature__DelegateSignature_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnPathReceiveSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnPathReceiveSignature__DelegateSignature_Statics::NewProp_Path_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnPathReceiveSignature__DelegateSignature_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnPathReceiveSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnPathReceiveSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGraphNavigator, nullptr, "OnPathReceiveSignature__DelegateSignature", nullptr, nullptr, sizeof(LGPGraphNavigator_eventOnPathReceiveSignature_Parms), Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnPathReceiveSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnPathReceiveSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnPathReceiveSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnPathReceiveSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnPathReceiveSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnPathReceiveSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FLGPAStarHelper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOHGRAPHPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FLGPAStarHelper_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLGPAStarHelper, Z_Construct_UPackage__Script_LohGraphPlugin(), TEXT("LGPAStarHelper"), sizeof(FLGPAStarHelper), Get_Z_Construct_UScriptStruct_FLGPAStarHelper_Hash());
	}
	return Singleton;
}
template<> LOHGRAPHPLUGIN_API UScriptStruct* StaticStruct<FLGPAStarHelper>()
{
	return FLGPAStarHelper::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLGPAStarHelper(FLGPAStarHelper::StaticStruct, TEXT("/Script/LohGraphPlugin"), TEXT("LGPAStarHelper"), false, nullptr, nullptr);
static struct FScriptStruct_LohGraphPlugin_StaticRegisterNativesFLGPAStarHelper
{
	FScriptStruct_LohGraphPlugin_StaticRegisterNativesFLGPAStarHelper()
	{
		UScriptStruct::DeferCppStructOps<FLGPAStarHelper>(FName(TEXT("LGPAStarHelper")));
	}
} ScriptStruct_LohGraphPlugin_StaticRegisterNativesFLGPAStarHelper;
	struct Z_Construct_UScriptStruct_FLGPAStarHelper_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartWeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPAStarHelper_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLGPAStarHelper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLGPAStarHelper>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPAStarHelper_Statics::NewProp_EndWeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLGPAStarHelper_Statics::NewProp_EndWeight = { "EndWeight", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLGPAStarHelper, EndWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPAStarHelper_Statics::NewProp_EndWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPAStarHelper_Statics::NewProp_EndWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPAStarHelper_Statics::NewProp_StartWeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLGPAStarHelper_Statics::NewProp_StartWeight = { "StartWeight", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLGPAStarHelper, StartWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPAStarHelper_Statics::NewProp_StartWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPAStarHelper_Statics::NewProp_StartWeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLGPAStarHelper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPAStarHelper_Statics::NewProp_EndWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPAStarHelper_Statics::NewProp_StartWeight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLGPAStarHelper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohGraphPlugin,
		nullptr,
		&NewStructOps,
		"LGPAStarHelper",
		sizeof(FLGPAStarHelper),
		alignof(FLGPAStarHelper),
		Z_Construct_UScriptStruct_FLGPAStarHelper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPAStarHelper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPAStarHelper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPAStarHelper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLGPAStarHelper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLGPAStarHelper_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LohGraphPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LGPAStarHelper"), sizeof(FLGPAStarHelper), Get_Z_Construct_UScriptStruct_FLGPAStarHelper_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLGPAStarHelper_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLGPAStarHelper_Hash() { return 839581279U; }
	DEFINE_FUNCTION(ULGPGraphReader::execGetOverlappingNodeByLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_Point);
		P_GET_UBOOL(Z_Param_ReturnFirst);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULGPNode**)Z_Param__Result=P_THIS->GetOverlappingNodeByLocation(Z_Param_Point,Z_Param_ReturnFirst);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPGraphReader::execGetOverlappingNode)
	{
		P_GET_UBOOL(Z_Param_ReturnFirst);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULGPNode**)Z_Param__Result=P_THIS->GetOverlappingNode(Z_Param_ReturnFirst);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPGraphReader::execGetNodeWeight)
	{
		P_GET_OBJECT(ULGPNode,Z_Param_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNodeWeight(Z_Param_Node);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPGraphReader::execGetWeightData)
	{
		P_GET_STRUCT_REF(FLGPWeightPrefab,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWeightData(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	void ULGPGraphReader::StaticRegisterNativesULGPGraphReader()
	{
		UClass* Class = ULGPGraphReader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNodeWeight", &ULGPGraphReader::execGetNodeWeight },
			{ "GetOverlappingNode", &ULGPGraphReader::execGetOverlappingNode },
			{ "GetOverlappingNodeByLocation", &ULGPGraphReader::execGetOverlappingNodeByLocation },
			{ "GetWeightData", &ULGPGraphReader::execGetWeightData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULGPGraphReader_GetNodeWeight_Statics
	{
		struct LGPGraphReader_eventGetNodeWeight_Parms
		{
			ULGPNode* Node;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphReader_GetNodeWeight_Statics::NewProp_Node_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGPGraphReader_GetNodeWeight_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGraphReader_eventGetNodeWeight_Parms, Node), Z_Construct_UClass_ULGPNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphReader_GetNodeWeight_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphReader_GetNodeWeight_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULGPGraphReader_GetNodeWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGraphReader_eventGetNodeWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPGraphReader_GetNodeWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphReader_GetNodeWeight_Statics::NewProp_Node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphReader_GetNodeWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphReader_GetNodeWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPGraph | Setting" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPGraphReader_GetNodeWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGraphReader, nullptr, "GetNodeWeight", nullptr, nullptr, sizeof(LGPGraphReader_eventGetNodeWeight_Parms), Z_Construct_UFunction_ULGPGraphReader_GetNodeWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphReader_GetNodeWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphReader_GetNodeWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphReader_GetNodeWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPGraphReader_GetNodeWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPGraphReader_GetNodeWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNode_Statics
	{
		struct LGPGraphReader_eventGetOverlappingNode_Parms
		{
			bool ReturnFirst;
			ULGPNode* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnFirst_MetaData[];
#endif
		static void NewProp_ReturnFirst_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnFirst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNode_Statics::NewProp_ReturnFirst_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNode_Statics::NewProp_ReturnFirst_SetBit(void* Obj)
	{
		((LGPGraphReader_eventGetOverlappingNode_Parms*)Obj)->ReturnFirst = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNode_Statics::NewProp_ReturnFirst = { "ReturnFirst", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LGPGraphReader_eventGetOverlappingNode_Parms), &Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNode_Statics::NewProp_ReturnFirst_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNode_Statics::NewProp_ReturnFirst_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNode_Statics::NewProp_ReturnFirst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNode_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGraphReader_eventGetOverlappingNode_Parms, ReturnValue), Z_Construct_UClass_ULGPNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNode_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNode_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNode_Statics::NewProp_ReturnFirst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPGraph | Setting" },
		{ "CPP_Default_ReturnFirst", "false" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGraphReader, nullptr, "GetOverlappingNode", nullptr, nullptr, sizeof(LGPGraphReader_eventGetOverlappingNode_Parms), Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics
	{
		struct LGPGraphReader_eventGetOverlappingNodeByLocation_Parms
		{
			FVector Point;
			bool ReturnFirst;
			ULGPNode* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnFirst_MetaData[];
#endif
		static void NewProp_ReturnFirst_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnFirst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGraphReader_eventGetOverlappingNodeByLocation_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics::NewProp_Point_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics::NewProp_ReturnFirst_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics::NewProp_ReturnFirst_SetBit(void* Obj)
	{
		((LGPGraphReader_eventGetOverlappingNodeByLocation_Parms*)Obj)->ReturnFirst = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics::NewProp_ReturnFirst = { "ReturnFirst", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LGPGraphReader_eventGetOverlappingNodeByLocation_Parms), &Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics::NewProp_ReturnFirst_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics::NewProp_ReturnFirst_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics::NewProp_ReturnFirst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGraphReader_eventGetOverlappingNodeByLocation_Parms, ReturnValue), Z_Construct_UClass_ULGPNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics::NewProp_ReturnFirst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPGraph | Setting" },
		{ "CPP_Default_ReturnFirst", "false" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGraphReader, nullptr, "GetOverlappingNodeByLocation", nullptr, nullptr, sizeof(LGPGraphReader_eventGetOverlappingNodeByLocation_Parms), Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPGraphReader_GetWeightData_Statics
	{
		struct LGPGraphReader_eventGetWeightData_Parms
		{
			FLGPWeightPrefab Data;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGPGraphReader_GetWeightData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGraphReader_eventGetWeightData_Parms, Data), Z_Construct_UScriptStruct_FLGPWeightPrefab, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULGPGraphReader_GetWeightData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LGPGraphReader_eventGetWeightData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGPGraphReader_GetWeightData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LGPGraphReader_eventGetWeightData_Parms), &Z_Construct_UFunction_ULGPGraphReader_GetWeightData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPGraphReader_GetWeightData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphReader_GetWeightData_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphReader_GetWeightData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphReader_GetWeightData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPGraph | Setting" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPGraphReader_GetWeightData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGraphReader, nullptr, "GetWeightData", nullptr, nullptr, sizeof(LGPGraphReader_eventGetWeightData_Parms), Z_Construct_UFunction_ULGPGraphReader_GetWeightData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphReader_GetWeightData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphReader_GetWeightData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphReader_GetWeightData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPGraphReader_GetWeightData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPGraphReader_GetWeightData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULGPGraphReader_NoRegister()
	{
		return ULGPGraphReader::StaticClass();
	}
	struct Z_Construct_UClass_ULGPGraphReader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReaderType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReaderType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULGPGraphReader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULGPGraphComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LohGraphPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULGPGraphReader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULGPGraphReader_GetNodeWeight, "GetNodeWeight" }, // 2784652050
		{ &Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNode, "GetOverlappingNode" }, // 690048953
		{ &Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation, "GetOverlappingNodeByLocation" }, // 1821321849
		{ &Z_Construct_UFunction_ULGPGraphReader_GetWeightData, "GetWeightData" }, // 1255410138
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphReader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "LGPGraphComponent" },
		{ "Comment", "/**\n * For Reading Base Data Of Graph Node\n * - Find Graph Node\n * - Get Graph Data\n */" },
		{ "IncludePath", "LGPGraphReader.h" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
		{ "ToolTip", "For Reading Base Data Of Graph Node\n- Find Graph Node\n- Get Graph Data" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphReader_Statics::NewProp_ReaderType_MetaData[] = {
		{ "Category", "LGPGraph | Setting" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULGPGraphReader_Statics::NewProp_ReaderType = { "ReaderType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGraphReader, ReaderType), METADATA_PARAMS(Z_Construct_UClass_ULGPGraphReader_Statics::NewProp_ReaderType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphReader_Statics::NewProp_ReaderType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULGPGraphReader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphReader_Statics::NewProp_ReaderType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULGPGraphReader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULGPGraphReader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULGPGraphReader_Statics::ClassParams = {
		&ULGPGraphReader::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULGPGraphReader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphReader_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULGPGraphReader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphReader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULGPGraphReader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULGPGraphReader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULGPGraphReader, 2416226531);
	template<> LOHGRAPHPLUGIN_API UClass* StaticClass<ULGPGraphReader>()
	{
		return ULGPGraphReader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULGPGraphReader(Z_Construct_UClass_ULGPGraphReader, &ULGPGraphReader::StaticClass, TEXT("/Script/LohGraphPlugin"), TEXT("ULGPGraphReader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULGPGraphReader);
	DEFINE_FUNCTION(ULGPGraphNavigator::execContinualFollowingNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ContinualFollowingNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPGraphNavigator::execStopFollowingNode)
	{
		P_GET_UBOOL(Z_Param_ClearData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StopFollowingNode(Z_Param_ClearData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPGraphNavigator::execNextFollowingNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NextFollowingNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPGraphNavigator::execGetIsManualMoving)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsManualMoving();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPGraphNavigator::execGetIsFollowingPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsFollowingPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPGraphNavigator::execGetFollowIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFollowIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPGraphNavigator::execGetEndNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULGPNode**)Z_Param__Result=P_THIS->GetEndNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPGraphNavigator::execGetStartNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULGPNode**)Z_Param__Result=P_THIS->GetStartNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPGraphNavigator::execGetLocalNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULGPNode**)Z_Param__Result=P_THIS->GetLocalNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPGraphNavigator::execGetFollowingNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULGPNode**)Z_Param__Result=P_THIS->GetFollowingNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPGraphNavigator::execGetFollowingTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetFollowingTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPGraphNavigator::execGetFollowingLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetFollowingLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPGraphNavigator::execGoToActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GoToActor(Z_Param_Node);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPGraphNavigator::execGoToLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GoToLocation(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPGraphNavigator::execGoToNode)
	{
		P_GET_OBJECT(ULGPNode,Z_Param_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GoToNode(Z_Param_Node);
		P_NATIVE_END;
	}
	void ULGPGraphNavigator::StaticRegisterNativesULGPGraphNavigator()
	{
		UClass* Class = ULGPGraphNavigator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ContinualFollowingNode", &ULGPGraphNavigator::execContinualFollowingNode },
			{ "GetEndNode", &ULGPGraphNavigator::execGetEndNode },
			{ "GetFollowIndex", &ULGPGraphNavigator::execGetFollowIndex },
			{ "GetFollowingLocation", &ULGPGraphNavigator::execGetFollowingLocation },
			{ "GetFollowingNode", &ULGPGraphNavigator::execGetFollowingNode },
			{ "GetFollowingTarget", &ULGPGraphNavigator::execGetFollowingTarget },
			{ "GetIsFollowingPath", &ULGPGraphNavigator::execGetIsFollowingPath },
			{ "GetIsManualMoving", &ULGPGraphNavigator::execGetIsManualMoving },
			{ "GetLocalNode", &ULGPGraphNavigator::execGetLocalNode },
			{ "GetStartNode", &ULGPGraphNavigator::execGetStartNode },
			{ "GoToActor", &ULGPGraphNavigator::execGoToActor },
			{ "GoToLocation", &ULGPGraphNavigator::execGoToLocation },
			{ "GoToNode", &ULGPGraphNavigator::execGoToNode },
			{ "NextFollowingNode", &ULGPGraphNavigator::execNextFollowingNode },
			{ "StopFollowingNode", &ULGPGraphNavigator::execStopFollowingNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULGPGraphNavigator_ContinualFollowingNode_Statics
	{
		struct LGPGraphNavigator_eventContinualFollowingNode_Parms
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
	void Z_Construct_UFunction_ULGPGraphNavigator_ContinualFollowingNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LGPGraphNavigator_eventContinualFollowingNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGPGraphNavigator_ContinualFollowingNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LGPGraphNavigator_eventContinualFollowingNode_Parms), &Z_Construct_UFunction_ULGPGraphNavigator_ContinualFollowingNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPGraphNavigator_ContinualFollowingNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphNavigator_ContinualFollowingNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphNavigator_ContinualFollowingNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPGraphNavigator" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPGraphNavigator_ContinualFollowingNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGraphNavigator, nullptr, "ContinualFollowingNode", nullptr, nullptr, sizeof(LGPGraphNavigator_eventContinualFollowingNode_Parms), Z_Construct_UFunction_ULGPGraphNavigator_ContinualFollowingNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_ContinualFollowingNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphNavigator_ContinualFollowingNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_ContinualFollowingNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPGraphNavigator_ContinualFollowingNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPGraphNavigator_ContinualFollowingNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPGraphNavigator_GetEndNode_Statics
	{
		struct LGPGraphNavigator_eventGetEndNode_Parms
		{
			ULGPNode* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphNavigator_GetEndNode_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGPGraphNavigator_GetEndNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGraphNavigator_eventGetEndNode_Parms, ReturnValue), Z_Construct_UClass_ULGPNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphNavigator_GetEndNode_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GetEndNode_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPGraphNavigator_GetEndNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphNavigator_GetEndNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphNavigator_GetEndNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPGraphNavigator" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPGraphNavigator_GetEndNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGraphNavigator, nullptr, "GetEndNode", nullptr, nullptr, sizeof(LGPGraphNavigator_eventGetEndNode_Parms), Z_Construct_UFunction_ULGPGraphNavigator_GetEndNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GetEndNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphNavigator_GetEndNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GetEndNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPGraphNavigator_GetEndNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPGraphNavigator_GetEndNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPGraphNavigator_GetFollowIndex_Statics
	{
		struct LGPGraphNavigator_eventGetFollowIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULGPGraphNavigator_GetFollowIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGraphNavigator_eventGetFollowIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPGraphNavigator_GetFollowIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphNavigator_GetFollowIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphNavigator_GetFollowIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPGraphNavigator" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPGraphNavigator_GetFollowIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGraphNavigator, nullptr, "GetFollowIndex", nullptr, nullptr, sizeof(LGPGraphNavigator_eventGetFollowIndex_Parms), Z_Construct_UFunction_ULGPGraphNavigator_GetFollowIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GetFollowIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphNavigator_GetFollowIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GetFollowIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPGraphNavigator_GetFollowIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPGraphNavigator_GetFollowIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingLocation_Statics
	{
		struct LGPGraphNavigator_eventGetFollowingLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGraphNavigator_eventGetFollowingLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPGraphNavigator" },
		{ "Comment", "// Read Function /////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
		{ "ToolTip", "Read Function /" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGraphNavigator, nullptr, "GetFollowingLocation", nullptr, nullptr, sizeof(LGPGraphNavigator_eventGetFollowingLocation_Parms), Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingNode_Statics
	{
		struct LGPGraphNavigator_eventGetFollowingNode_Parms
		{
			ULGPNode* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingNode_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGraphNavigator_eventGetFollowingNode_Parms, ReturnValue), Z_Construct_UClass_ULGPNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingNode_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingNode_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPGraphNavigator" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGraphNavigator, nullptr, "GetFollowingNode", nullptr, nullptr, sizeof(LGPGraphNavigator_eventGetFollowingNode_Parms), Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingTarget_Statics
	{
		struct LGPGraphNavigator_eventGetFollowingTarget_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGraphNavigator_eventGetFollowingTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPGraphNavigator" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGraphNavigator, nullptr, "GetFollowingTarget", nullptr, nullptr, sizeof(LGPGraphNavigator_eventGetFollowingTarget_Parms), Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPGraphNavigator_GetIsFollowingPath_Statics
	{
		struct LGPGraphNavigator_eventGetIsFollowingPath_Parms
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
	void Z_Construct_UFunction_ULGPGraphNavigator_GetIsFollowingPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LGPGraphNavigator_eventGetIsFollowingPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGPGraphNavigator_GetIsFollowingPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LGPGraphNavigator_eventGetIsFollowingPath_Parms), &Z_Construct_UFunction_ULGPGraphNavigator_GetIsFollowingPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPGraphNavigator_GetIsFollowingPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphNavigator_GetIsFollowingPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphNavigator_GetIsFollowingPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPGraphNavigator" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPGraphNavigator_GetIsFollowingPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGraphNavigator, nullptr, "GetIsFollowingPath", nullptr, nullptr, sizeof(LGPGraphNavigator_eventGetIsFollowingPath_Parms), Z_Construct_UFunction_ULGPGraphNavigator_GetIsFollowingPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GetIsFollowingPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphNavigator_GetIsFollowingPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GetIsFollowingPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPGraphNavigator_GetIsFollowingPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPGraphNavigator_GetIsFollowingPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPGraphNavigator_GetIsManualMoving_Statics
	{
		struct LGPGraphNavigator_eventGetIsManualMoving_Parms
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
	void Z_Construct_UFunction_ULGPGraphNavigator_GetIsManualMoving_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LGPGraphNavigator_eventGetIsManualMoving_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGPGraphNavigator_GetIsManualMoving_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LGPGraphNavigator_eventGetIsManualMoving_Parms), &Z_Construct_UFunction_ULGPGraphNavigator_GetIsManualMoving_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPGraphNavigator_GetIsManualMoving_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphNavigator_GetIsManualMoving_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphNavigator_GetIsManualMoving_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPGraphNavigator" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPGraphNavigator_GetIsManualMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGraphNavigator, nullptr, "GetIsManualMoving", nullptr, nullptr, sizeof(LGPGraphNavigator_eventGetIsManualMoving_Parms), Z_Construct_UFunction_ULGPGraphNavigator_GetIsManualMoving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GetIsManualMoving_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphNavigator_GetIsManualMoving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GetIsManualMoving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPGraphNavigator_GetIsManualMoving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPGraphNavigator_GetIsManualMoving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPGraphNavigator_GetLocalNode_Statics
	{
		struct LGPGraphNavigator_eventGetLocalNode_Parms
		{
			ULGPNode* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphNavigator_GetLocalNode_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGPGraphNavigator_GetLocalNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGraphNavigator_eventGetLocalNode_Parms, ReturnValue), Z_Construct_UClass_ULGPNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphNavigator_GetLocalNode_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GetLocalNode_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPGraphNavigator_GetLocalNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphNavigator_GetLocalNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphNavigator_GetLocalNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPGraphNavigator" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPGraphNavigator_GetLocalNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGraphNavigator, nullptr, "GetLocalNode", nullptr, nullptr, sizeof(LGPGraphNavigator_eventGetLocalNode_Parms), Z_Construct_UFunction_ULGPGraphNavigator_GetLocalNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GetLocalNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphNavigator_GetLocalNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GetLocalNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPGraphNavigator_GetLocalNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPGraphNavigator_GetLocalNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPGraphNavigator_GetStartNode_Statics
	{
		struct LGPGraphNavigator_eventGetStartNode_Parms
		{
			ULGPNode* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphNavigator_GetStartNode_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGPGraphNavigator_GetStartNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGraphNavigator_eventGetStartNode_Parms, ReturnValue), Z_Construct_UClass_ULGPNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphNavigator_GetStartNode_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GetStartNode_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPGraphNavigator_GetStartNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphNavigator_GetStartNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphNavigator_GetStartNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPGraphNavigator" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPGraphNavigator_GetStartNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGraphNavigator, nullptr, "GetStartNode", nullptr, nullptr, sizeof(LGPGraphNavigator_eventGetStartNode_Parms), Z_Construct_UFunction_ULGPGraphNavigator_GetStartNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GetStartNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphNavigator_GetStartNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GetStartNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPGraphNavigator_GetStartNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPGraphNavigator_GetStartNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPGraphNavigator_GoToActor_Statics
	{
		struct LGPGraphNavigator_eventGoToActor_Parms
		{
			AActor* Node;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Node;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGPGraphNavigator_GoToActor_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGraphNavigator_eventGoToActor_Parms, Node), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULGPGraphNavigator_GoToActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LGPGraphNavigator_eventGoToActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGPGraphNavigator_GoToActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LGPGraphNavigator_eventGoToActor_Parms), &Z_Construct_UFunction_ULGPGraphNavigator_GoToActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPGraphNavigator_GoToActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphNavigator_GoToActor_Statics::NewProp_Node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphNavigator_GoToActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphNavigator_GoToActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPGraphNavigator" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPGraphNavigator_GoToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGraphNavigator, nullptr, "GoToActor", nullptr, nullptr, sizeof(LGPGraphNavigator_eventGoToActor_Parms), Z_Construct_UFunction_ULGPGraphNavigator_GoToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GoToActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphNavigator_GoToActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GoToActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPGraphNavigator_GoToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPGraphNavigator_GoToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPGraphNavigator_GoToLocation_Statics
	{
		struct LGPGraphNavigator_eventGoToLocation_Parms
		{
			FVector Location;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphNavigator_GoToLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGPGraphNavigator_GoToLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGraphNavigator_eventGoToLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphNavigator_GoToLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GoToLocation_Statics::NewProp_Location_MetaData)) };
	void Z_Construct_UFunction_ULGPGraphNavigator_GoToLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LGPGraphNavigator_eventGoToLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGPGraphNavigator_GoToLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LGPGraphNavigator_eventGoToLocation_Parms), &Z_Construct_UFunction_ULGPGraphNavigator_GoToLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPGraphNavigator_GoToLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphNavigator_GoToLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphNavigator_GoToLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphNavigator_GoToLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPGraphNavigator" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPGraphNavigator_GoToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGraphNavigator, nullptr, "GoToLocation", nullptr, nullptr, sizeof(LGPGraphNavigator_eventGoToLocation_Parms), Z_Construct_UFunction_ULGPGraphNavigator_GoToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GoToLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphNavigator_GoToLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GoToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPGraphNavigator_GoToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPGraphNavigator_GoToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPGraphNavigator_GoToNode_Statics
	{
		struct LGPGraphNavigator_eventGoToNode_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphNavigator_GoToNode_Statics::NewProp_Node_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULGPGraphNavigator_GoToNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPGraphNavigator_eventGoToNode_Parms, Node), Z_Construct_UClass_ULGPNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphNavigator_GoToNode_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GoToNode_Statics::NewProp_Node_MetaData)) };
	void Z_Construct_UFunction_ULGPGraphNavigator_GoToNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LGPGraphNavigator_eventGoToNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGPGraphNavigator_GoToNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LGPGraphNavigator_eventGoToNode_Parms), &Z_Construct_UFunction_ULGPGraphNavigator_GoToNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPGraphNavigator_GoToNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphNavigator_GoToNode_Statics::NewProp_Node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphNavigator_GoToNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphNavigator_GoToNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPGraphNavigator" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPGraphNavigator_GoToNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGraphNavigator, nullptr, "GoToNode", nullptr, nullptr, sizeof(LGPGraphNavigator_eventGoToNode_Parms), Z_Construct_UFunction_ULGPGraphNavigator_GoToNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GoToNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphNavigator_GoToNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_GoToNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPGraphNavigator_GoToNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPGraphNavigator_GoToNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPGraphNavigator_NextFollowingNode_Statics
	{
		struct LGPGraphNavigator_eventNextFollowingNode_Parms
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
	void Z_Construct_UFunction_ULGPGraphNavigator_NextFollowingNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LGPGraphNavigator_eventNextFollowingNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGPGraphNavigator_NextFollowingNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LGPGraphNavigator_eventNextFollowingNode_Parms), &Z_Construct_UFunction_ULGPGraphNavigator_NextFollowingNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPGraphNavigator_NextFollowingNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphNavigator_NextFollowingNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphNavigator_NextFollowingNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPGraphNavigator" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPGraphNavigator_NextFollowingNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGraphNavigator, nullptr, "NextFollowingNode", nullptr, nullptr, sizeof(LGPGraphNavigator_eventNextFollowingNode_Parms), Z_Construct_UFunction_ULGPGraphNavigator_NextFollowingNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_NextFollowingNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphNavigator_NextFollowingNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_NextFollowingNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPGraphNavigator_NextFollowingNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPGraphNavigator_NextFollowingNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPGraphNavigator_StopFollowingNode_Statics
	{
		struct LGPGraphNavigator_eventStopFollowingNode_Parms
		{
			bool ClearData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearData_MetaData[];
#endif
		static void NewProp_ClearData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ClearData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphNavigator_StopFollowingNode_Statics::NewProp_ClearData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULGPGraphNavigator_StopFollowingNode_Statics::NewProp_ClearData_SetBit(void* Obj)
	{
		((LGPGraphNavigator_eventStopFollowingNode_Parms*)Obj)->ClearData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGPGraphNavigator_StopFollowingNode_Statics::NewProp_ClearData = { "ClearData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LGPGraphNavigator_eventStopFollowingNode_Parms), &Z_Construct_UFunction_ULGPGraphNavigator_StopFollowingNode_Statics::NewProp_ClearData_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphNavigator_StopFollowingNode_Statics::NewProp_ClearData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_StopFollowingNode_Statics::NewProp_ClearData_MetaData)) };
	void Z_Construct_UFunction_ULGPGraphNavigator_StopFollowingNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LGPGraphNavigator_eventStopFollowingNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGPGraphNavigator_StopFollowingNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LGPGraphNavigator_eventStopFollowingNode_Parms), &Z_Construct_UFunction_ULGPGraphNavigator_StopFollowingNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPGraphNavigator_StopFollowingNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphNavigator_StopFollowingNode_Statics::NewProp_ClearData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPGraphNavigator_StopFollowingNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPGraphNavigator_StopFollowingNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGPGraphNavigator" },
		{ "CPP_Default_ClearData", "false" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPGraphNavigator_StopFollowingNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPGraphNavigator, nullptr, "StopFollowingNode", nullptr, nullptr, sizeof(LGPGraphNavigator_eventStopFollowingNode_Parms), Z_Construct_UFunction_ULGPGraphNavigator_StopFollowingNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_StopFollowingNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPGraphNavigator_StopFollowingNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPGraphNavigator_StopFollowingNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPGraphNavigator_StopFollowingNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPGraphNavigator_StopFollowingNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULGPGraphNavigator_NoRegister()
	{
		return ULGPGraphNavigator::StaticClass();
	}
	struct Z_Construct_UClass_ULGPGraphNavigator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPathReceive_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPathReceive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBeginFollowingPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginFollowingPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEndFollowingPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndFollowingPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowingTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowingTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowingNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowingNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FollowIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFollowingPath_MetaData[];
#endif
		static void NewProp_IsFollowingPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFollowingPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsManualMoving_MetaData[];
#endif
		static void NewProp_IsManualMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsManualMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFrameDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentFrameDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTargetDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentTargetDelay;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigatorWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NavigatorWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReachDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReachDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FrameDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULGPGraphNavigator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULGPGraphReader,
		(UObject* (*)())Z_Construct_UPackage__Script_LohGraphPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULGPGraphNavigator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULGPGraphNavigator_ContinualFollowingNode, "ContinualFollowingNode" }, // 986880914
		{ &Z_Construct_UFunction_ULGPGraphNavigator_GetEndNode, "GetEndNode" }, // 22764298
		{ &Z_Construct_UFunction_ULGPGraphNavigator_GetFollowIndex, "GetFollowIndex" }, // 1287832528
		{ &Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingLocation, "GetFollowingLocation" }, // 1358860670
		{ &Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingNode, "GetFollowingNode" }, // 1220530560
		{ &Z_Construct_UFunction_ULGPGraphNavigator_GetFollowingTarget, "GetFollowingTarget" }, // 1081405935
		{ &Z_Construct_UFunction_ULGPGraphNavigator_GetIsFollowingPath, "GetIsFollowingPath" }, // 3658875148
		{ &Z_Construct_UFunction_ULGPGraphNavigator_GetIsManualMoving, "GetIsManualMoving" }, // 1953087121
		{ &Z_Construct_UFunction_ULGPGraphNavigator_GetLocalNode, "GetLocalNode" }, // 4231444182
		{ &Z_Construct_UFunction_ULGPGraphNavigator_GetStartNode, "GetStartNode" }, // 4257414171
		{ &Z_Construct_UFunction_ULGPGraphNavigator_GoToActor, "GoToActor" }, // 2327005493
		{ &Z_Construct_UFunction_ULGPGraphNavigator_GoToLocation, "GoToLocation" }, // 2171841157
		{ &Z_Construct_UFunction_ULGPGraphNavigator_GoToNode, "GoToNode" }, // 1414576830
		{ &Z_Construct_UFunction_ULGPGraphNavigator_NextFollowingNode, "NextFollowingNode" }, // 4151375869
		{ &Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnBeginFollowingPathSignature__DelegateSignature, "OnBeginFollowingPathSignature__DelegateSignature" }, // 760507647
		{ &Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnEndFollowingPathSignature__DelegateSignature, "OnEndFollowingPathSignature__DelegateSignature" }, // 1322497208
		{ &Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnPathReceiveSignature__DelegateSignature, "OnPathReceiveSignature__DelegateSignature" }, // 1450988989
		{ &Z_Construct_UFunction_ULGPGraphNavigator_StopFollowingNode, "StopFollowingNode" }, // 2527643241
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphNavigator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "LGPGraphComponent" },
		{ "Comment", "/**\n * For Navigation And Graph Following\n */" },
		{ "IncludePath", "LGPGraphReader.h" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
		{ "ToolTip", "For Navigation And Graph Following" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_OnPathReceive_MetaData[] = {
		{ "Category", "LGPGraphNavigator | Event" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_OnPathReceive = { "OnPathReceive", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGraphNavigator, OnPathReceive), Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnPathReceiveSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_OnPathReceive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_OnPathReceive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_OnBeginFollowingPath_MetaData[] = {
		{ "Category", "LGPGraphNavigator | Event" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_OnBeginFollowingPath = { "OnBeginFollowingPath", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGraphNavigator, OnBeginFollowingPath), Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnBeginFollowingPathSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_OnBeginFollowingPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_OnBeginFollowingPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_OnEndFollowingPath_MetaData[] = {
		{ "Category", "LGPGraphNavigator | Event" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_OnEndFollowingPath = { "OnEndFollowingPath", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGraphNavigator, OnEndFollowingPath), Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnEndFollowingPathSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_OnEndFollowingPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_OnEndFollowingPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_FollowingTarget_MetaData[] = {
		{ "BlueprintGetter", "GetFollowingTarget" },
		{ "Category", "LGPGraphNavigator | Varaible" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_FollowingTarget = { "FollowingTarget", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGraphNavigator, FollowingTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_FollowingTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_FollowingTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_FollowingNode_MetaData[] = {
		{ "BlueprintGetter", "GetFollowingNode" },
		{ "Category", "LGPGraphNavigator | Varaible" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_FollowingNode = { "FollowingNode", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGraphNavigator, FollowingNode), Z_Construct_UClass_ULGPNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_FollowingNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_FollowingNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_LocalNode_MetaData[] = {
		{ "BlueprintGetter", "GetLocalNode" },
		{ "Category", "LGPGraphNavigator | Varaible" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_LocalNode = { "LocalNode", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGraphNavigator, LocalNode), Z_Construct_UClass_ULGPNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_LocalNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_LocalNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_StartNode_MetaData[] = {
		{ "BlueprintGetter", "GetStartNode" },
		{ "Category", "LGPGraphNavigator | Varaible" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_StartNode = { "StartNode", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGraphNavigator, StartNode), Z_Construct_UClass_ULGPNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_StartNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_StartNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_EndNode_MetaData[] = {
		{ "BlueprintGetter", "GetEndNode" },
		{ "Category", "LGPGraphNavigator | Varaible" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_EndNode = { "EndNode", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGraphNavigator, EndNode), Z_Construct_UClass_ULGPNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_EndNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_EndNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_FollowIndex_MetaData[] = {
		{ "BlueprintGetter", "GetFollowIndex" },
		{ "Category", "LGPGraphNavigator | Varaible" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_FollowIndex = { "FollowIndex", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGraphNavigator, FollowIndex), METADATA_PARAMS(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_FollowIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_FollowIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_IsFollowingPath_MetaData[] = {
		{ "BlueprintGetter", "GetIsFollowingPath" },
		{ "Category", "LGPGraphNavigator | Varaible" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	void Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_IsFollowingPath_SetBit(void* Obj)
	{
		((ULGPGraphNavigator*)Obj)->IsFollowingPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_IsFollowingPath = { "IsFollowingPath", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULGPGraphNavigator), &Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_IsFollowingPath_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_IsFollowingPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_IsFollowingPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_IsManualMoving_MetaData[] = {
		{ "BlueprintGetter", "GetIsManualMoving" },
		{ "Category", "LGPGraphNavigator | Varaible" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	void Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_IsManualMoving_SetBit(void* Obj)
	{
		((ULGPGraphNavigator*)Obj)->IsManualMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_IsManualMoving = { "IsManualMoving", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULGPGraphNavigator), &Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_IsManualMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_IsManualMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_IsManualMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_CurrentFrameDelay_MetaData[] = {
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_CurrentFrameDelay = { "CurrentFrameDelay", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGraphNavigator, CurrentFrameDelay), nullptr, METADATA_PARAMS(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_CurrentFrameDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_CurrentFrameDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_CurrentTargetDelay_MetaData[] = {
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_CurrentTargetDelay = { "CurrentTargetDelay", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGraphNavigator, CurrentTargetDelay), nullptr, METADATA_PARAMS(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_CurrentTargetDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_CurrentTargetDelay_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_PathData_Inner = { "PathData", nullptr, (EPropertyFlags)0x0000008000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLGPGroupPathData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_PathData_MetaData[] = {
		{ "Category", "LGPGraphNavigator | Varaible" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_PathData = { "PathData", nullptr, (EPropertyFlags)0x0020088000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGraphNavigator, PathData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_PathData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_PathData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_NavigatorWeight_MetaData[] = {
		{ "Category", "LGPGraphNavigator | Setting" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_NavigatorWeight = { "NavigatorWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGraphNavigator, NavigatorWeight), METADATA_PARAMS(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_NavigatorWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_NavigatorWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_ReachDistance_MetaData[] = {
		{ "Category", "LGPGraphNavigator | Setting" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_ReachDistance = { "ReachDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGraphNavigator, ReachDistance), METADATA_PARAMS(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_ReachDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_ReachDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_MovingSpeed_MetaData[] = {
		{ "Category", "LGPGraphNavigator | Setting" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_MovingSpeed = { "MovingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGraphNavigator, MovingSpeed), METADATA_PARAMS(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_MovingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_MovingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_FrameDelay_MetaData[] = {
		{ "Category", "LGPGraphNavigator | Setting" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_FrameDelay = { "FrameDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGraphNavigator, FrameDelay), nullptr, METADATA_PARAMS(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_FrameDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_FrameDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULGPGraphNavigator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_OnPathReceive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_OnBeginFollowingPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_OnEndFollowingPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_FollowingTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_FollowingNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_LocalNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_StartNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_EndNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_FollowIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_IsFollowingPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_IsManualMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_CurrentFrameDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_CurrentTargetDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_PathData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_PathData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_NavigatorWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_ReachDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_MovingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_FrameDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULGPGraphNavigator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULGPGraphNavigator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULGPGraphNavigator_Statics::ClassParams = {
		&ULGPGraphNavigator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULGPGraphNavigator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphNavigator_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULGPGraphNavigator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphNavigator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULGPGraphNavigator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULGPGraphNavigator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULGPGraphNavigator, 3748188452);
	template<> LOHGRAPHPLUGIN_API UClass* StaticClass<ULGPGraphNavigator>()
	{
		return ULGPGraphNavigator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULGPGraphNavigator(Z_Construct_UClass_ULGPGraphNavigator, &ULGPGraphNavigator::StaticClass, TEXT("/Script/LohGraphPlugin"), TEXT("ULGPGraphNavigator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULGPGraphNavigator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
