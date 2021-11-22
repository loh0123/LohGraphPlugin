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
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGraphReader_NoRegister();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGraphReader();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGraphComponentBase();
	UPackage* Z_Construct_UPackage__Script_LohGraphPlugin();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPNode_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	LOHGRAPHPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLGPWeightPrefab();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGraphNavigator_NoRegister();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGraphNavigator();
// End Cross Module References
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
		{ "Category", "LGPGraphReader | Variable" },
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
		{ "Category", "LGPGraphReader | Finder" },
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
		{ "Category", "LGPGraphReader | Finder" },
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
		{ "Category", "LGPGraphReader | Variable" },
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
		{ &Z_Construct_UFunction_ULGPGraphReader_GetNodeWeight, "GetNodeWeight" }, // 2449144880
		{ &Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNode, "GetOverlappingNode" }, // 1810208640
		{ &Z_Construct_UFunction_ULGPGraphReader_GetOverlappingNodeByLocation, "GetOverlappingNodeByLocation" }, // 3759529760
		{ &Z_Construct_UFunction_ULGPGraphReader_GetWeightData, "GetWeightData" }, // 1891249583
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
		{ "Category", "LGPGraphReader | Setting" },
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
	IMPLEMENT_CLASS(ULGPGraphReader, 220571255);
	template<> LOHGRAPHPLUGIN_API UClass* StaticClass<ULGPGraphReader>()
	{
		return ULGPGraphReader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULGPGraphReader(Z_Construct_UClass_ULGPGraphReader, &ULGPGraphReader::StaticClass, TEXT("/Script/LohGraphPlugin"), TEXT("ULGPGraphReader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULGPGraphReader);
	void ULGPGraphNavigator::StaticRegisterNativesULGPGraphNavigator()
	{
	}
	UClass* Z_Construct_UClass_ULGPGraphNavigator_NoRegister()
	{
		return ULGPGraphNavigator::StaticClass();
	}
	struct Z_Construct_UClass_ULGPGraphNavigator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigatorBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NavigatorBuffer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULGPGraphNavigator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULGPGraphReader,
		(UObject* (*)())Z_Construct_UPackage__Script_LohGraphPlugin,
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_PathData_Inner = { "PathData", nullptr, (EPropertyFlags)0x00000000000a0008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULGPNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_PathData_MetaData[] = {
		{ "Category", "LGPGraphNavigator" },
		{ "Comment", "//virtual void OnThreadWorkDone() override;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
		{ "ToolTip", "virtual void OnThreadWorkDone() override;" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_PathData = { "PathData", nullptr, (EPropertyFlags)0x0020088000020009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGraphNavigator, PathData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_PathData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_PathData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_NavigatorBuffer_MetaData[] = {
		{ "Category", "LGPGraphReader | Setting" },
		{ "ModuleRelativePath", "Public/LGPGraphReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_NavigatorBuffer = { "NavigatorBuffer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGraphNavigator, NavigatorBuffer), METADATA_PARAMS(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_NavigatorBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_NavigatorBuffer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULGPGraphNavigator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_PathData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_PathData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphNavigator_Statics::NewProp_NavigatorBuffer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULGPGraphNavigator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULGPGraphNavigator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULGPGraphNavigator_Statics::ClassParams = {
		&ULGPGraphNavigator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULGPGraphNavigator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(ULGPGraphNavigator, 4130554946);
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
