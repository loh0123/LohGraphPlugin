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
	LOHGRAPHPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLGPNodeGroupData();
	UPackage* Z_Construct_UPackage__Script_LohGraphPlugin();
	LOHGRAPHPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLGPGroupMemberData();
	LOHGRAPHPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLGPGroupPathData();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPNode_NoRegister();
	LOHGRAPHPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLGPNodePathData();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPNodeBase_NoRegister();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPNodeBase();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPNodeCache_NoRegister();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPNodeCache();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGraphWriter_NoRegister();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGraphNavigator_NoRegister();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPNode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
// End Cross Module References
class UScriptStruct* FLGPNodeGroupData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOHGRAPHPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FLGPNodeGroupData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLGPNodeGroupData, Z_Construct_UPackage__Script_LohGraphPlugin(), TEXT("LGPNodeGroupData"), sizeof(FLGPNodeGroupData), Get_Z_Construct_UScriptStruct_FLGPNodeGroupData_Hash());
	}
	return Singleton;
}
template<> LOHGRAPHPLUGIN_API UScriptStruct* StaticStruct<FLGPNodeGroupData>()
{
	return FLGPNodeGroupData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLGPNodeGroupData(FLGPNodeGroupData::StaticStruct, TEXT("/Script/LohGraphPlugin"), TEXT("LGPNodeGroupData"), false, nullptr, nullptr);
static struct FScriptStruct_LohGraphPlugin_StaticRegisterNativesFLGPNodeGroupData
{
	FScriptStruct_LohGraphPlugin_StaticRegisterNativesFLGPNodeGroupData()
	{
		UScriptStruct::DeferCppStructOps<FLGPNodeGroupData>(FName(TEXT("LGPNodeGroupData")));
	}
} ScriptStruct_LohGraphPlugin_StaticRegisterNativesFLGPNodeGroupData;
	struct Z_Construct_UScriptStruct_FLGPNodeGroupData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupMember_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupMember_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GroupMember;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupPath_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_GroupPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPNodeGroupData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLGPNodeGroupData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLGPNodeGroupData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLGPNodeGroupData_Statics::NewProp_GroupMember_Inner = { "GroupMember", nullptr, (EPropertyFlags)0x0000008000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLGPGroupMemberData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPNodeGroupData_Statics::NewProp_GroupMember_MetaData[] = {
		{ "Category", "LGPNodeGroupData" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLGPNodeGroupData_Statics::NewProp_GroupMember = { "GroupMember", nullptr, (EPropertyFlags)0x0010008000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLGPNodeGroupData, GroupMember), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPNodeGroupData_Statics::NewProp_GroupMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPNodeGroupData_Statics::NewProp_GroupMember_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLGPNodeGroupData_Statics::NewProp_GroupPath_ElementProp = { "GroupPath", nullptr, (EPropertyFlags)0x0000008000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLGPGroupPathData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPNodeGroupData_Statics::NewProp_GroupPath_MetaData[] = {
		{ "Category", "LGPNodeGroupData" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FLGPNodeGroupData_Statics::NewProp_GroupPath = { "GroupPath", nullptr, (EPropertyFlags)0x0010008000020001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLGPNodeGroupData, GroupPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPNodeGroupData_Statics::NewProp_GroupPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPNodeGroupData_Statics::NewProp_GroupPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLGPNodeGroupData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPNodeGroupData_Statics::NewProp_GroupMember_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPNodeGroupData_Statics::NewProp_GroupMember,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPNodeGroupData_Statics::NewProp_GroupPath_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPNodeGroupData_Statics::NewProp_GroupPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLGPNodeGroupData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohGraphPlugin,
		nullptr,
		&NewStructOps,
		"LGPNodeGroupData",
		sizeof(FLGPNodeGroupData),
		alignof(FLGPNodeGroupData),
		Z_Construct_UScriptStruct_FLGPNodeGroupData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPNodeGroupData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPNodeGroupData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPNodeGroupData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLGPNodeGroupData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLGPNodeGroupData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LohGraphPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LGPNodeGroupData"), sizeof(FLGPNodeGroupData), Get_Z_Construct_UScriptStruct_FLGPNodeGroupData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLGPNodeGroupData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLGPNodeGroupData_Hash() { return 2616049662U; }
class UScriptStruct* FLGPGroupMemberData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOHGRAPHPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FLGPGroupMemberData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLGPGroupMemberData, Z_Construct_UPackage__Script_LohGraphPlugin(), TEXT("LGPGroupMemberData"), sizeof(FLGPGroupMemberData), Get_Z_Construct_UScriptStruct_FLGPGroupMemberData_Hash());
	}
	return Singleton;
}
template<> LOHGRAPHPLUGIN_API UScriptStruct* StaticStruct<FLGPGroupMemberData>()
{
	return FLGPGroupMemberData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLGPGroupMemberData(FLGPGroupMemberData::StaticStruct, TEXT("/Script/LohGraphPlugin"), TEXT("LGPGroupMemberData"), false, nullptr, nullptr);
static struct FScriptStruct_LohGraphPlugin_StaticRegisterNativesFLGPGroupMemberData
{
	FScriptStruct_LohGraphPlugin_StaticRegisterNativesFLGPGroupMemberData()
	{
		UScriptStruct::DeferCppStructOps<FLGPGroupMemberData>(FName(TEXT("LGPGroupMemberData")));
	}
} ScriptStruct_LohGraphPlugin_StaticRegisterNativesFLGPGroupMemberData;
	struct Z_Construct_UScriptStruct_FLGPGroupMemberData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Member_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Member;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FlowFieldStep_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlowFieldStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FlowFieldStep;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPGroupMemberData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLGPGroupMemberData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLGPGroupMemberData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPGroupMemberData_Statics::NewProp_Member_MetaData[] = {
		{ "Category", "LGPGroupMemberData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLGPGroupMemberData_Statics::NewProp_Member = { "Member", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLGPGroupMemberData, Member), Z_Construct_UClass_ULGPNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPGroupMemberData_Statics::NewProp_Member_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPGroupMemberData_Statics::NewProp_Member_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLGPGroupMemberData_Statics::NewProp_FlowFieldStep_Inner = { "FlowFieldStep", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPGroupMemberData_Statics::NewProp_FlowFieldStep_MetaData[] = {
		{ "Category", "LGPGroupMemberData" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLGPGroupMemberData_Statics::NewProp_FlowFieldStep = { "FlowFieldStep", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLGPGroupMemberData, FlowFieldStep), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPGroupMemberData_Statics::NewProp_FlowFieldStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPGroupMemberData_Statics::NewProp_FlowFieldStep_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLGPGroupMemberData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPGroupMemberData_Statics::NewProp_Member,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPGroupMemberData_Statics::NewProp_FlowFieldStep_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPGroupMemberData_Statics::NewProp_FlowFieldStep,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLGPGroupMemberData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohGraphPlugin,
		nullptr,
		&NewStructOps,
		"LGPGroupMemberData",
		sizeof(FLGPGroupMemberData),
		alignof(FLGPGroupMemberData),
		Z_Construct_UScriptStruct_FLGPGroupMemberData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPGroupMemberData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPGroupMemberData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPGroupMemberData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLGPGroupMemberData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLGPGroupMemberData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LohGraphPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LGPGroupMemberData"), sizeof(FLGPGroupMemberData), Get_Z_Construct_UScriptStruct_FLGPGroupMemberData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLGPGroupMemberData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLGPGroupMemberData_Hash() { return 3832260078U; }
class UScriptStruct* FLGPGroupPathData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOHGRAPHPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FLGPGroupPathData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLGPGroupPathData, Z_Construct_UPackage__Script_LohGraphPlugin(), TEXT("LGPGroupPathData"), sizeof(FLGPGroupPathData), Get_Z_Construct_UScriptStruct_FLGPGroupPathData_Hash());
	}
	return Singleton;
}
template<> LOHGRAPHPLUGIN_API UScriptStruct* StaticStruct<FLGPGroupPathData>()
{
	return FLGPGroupPathData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLGPGroupPathData(FLGPGroupPathData::StaticStruct, TEXT("/Script/LohGraphPlugin"), TEXT("LGPGroupPathData"), false, nullptr, nullptr);
static struct FScriptStruct_LohGraphPlugin_StaticRegisterNativesFLGPGroupPathData
{
	FScriptStruct_LohGraphPlugin_StaticRegisterNativesFLGPGroupPathData()
	{
		UScriptStruct::DeferCppStructOps<FLGPGroupPathData>(FName(TEXT("LGPGroupPathData")));
	}
} ScriptStruct_LohGraphPlugin_StaticRegisterNativesFLGPGroupPathData;
	struct Z_Construct_UScriptStruct_FLGPGroupPathData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndNode;
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProxyPath_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxyPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ProxyPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLGPGroupPathData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_StartNode_MetaData[] = {
		{ "Category", "LGPGroupPathData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_StartNode = { "StartNode", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLGPGroupPathData, StartNode), Z_Construct_UClass_ULGPNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_StartNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_StartNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_EndNode_MetaData[] = {
		{ "Category", "LGPGroupPathData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_EndNode = { "EndNode", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLGPGroupPathData, EndNode), Z_Construct_UClass_ULGPNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_EndNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_EndNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_IsWalkable_MetaData[] = {
		{ "Category", "LGPGroupPathData" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_IsWalkable_SetBit(void* Obj)
	{
		((FLGPGroupPathData*)Obj)->IsWalkable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_IsWalkable = { "IsWalkable", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FLGPGroupPathData), &Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_IsWalkable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_IsWalkable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_IsWalkable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_IsReturnable_MetaData[] = {
		{ "Category", "LGPGroupPathData" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_IsReturnable_SetBit(void* Obj)
	{
		((FLGPGroupPathData*)Obj)->IsReturnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_IsReturnable = { "IsReturnable", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FLGPGroupPathData), &Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_IsReturnable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_IsReturnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_IsReturnable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_ProxyPath_ElementProp = { "ProxyPath", nullptr, (EPropertyFlags)0x0000008000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLGPNodePathData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_ProxyPath_MetaData[] = {
		{ "Category", "LGPGroupPathData" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_ProxyPath = { "ProxyPath", nullptr, (EPropertyFlags)0x0020088000020001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLGPGroupPathData, ProxyPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_ProxyPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_ProxyPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_StartNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_EndNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_IsWalkable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_IsReturnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_ProxyPath_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::NewProp_ProxyPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohGraphPlugin,
		nullptr,
		&NewStructOps,
		"LGPGroupPathData",
		sizeof(FLGPGroupPathData),
		alignof(FLGPGroupPathData),
		Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLGPGroupPathData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLGPGroupPathData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LohGraphPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LGPGroupPathData"), sizeof(FLGPGroupPathData), Get_Z_Construct_UScriptStruct_FLGPGroupPathData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLGPGroupPathData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLGPGroupPathData_Hash() { return 3395274384U; }
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndNode;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTrigger_MetaData[];
#endif
		static void NewProp_bIsTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTrigger;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_StartNode_MetaData[] = {
		{ "Category", "LGPNodePathData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_StartNode = { "StartNode", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLGPNodePathData, StartNode), Z_Construct_UClass_ULGPNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_StartNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_StartNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_EndNode_MetaData[] = {
		{ "Category", "LGPNodePathData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_EndNode = { "EndNode", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLGPNodePathData, EndNode), Z_Construct_UClass_ULGPNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_EndNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_EndNode_MetaData)) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_bIsTrigger_MetaData[] = {
		{ "Category", "LGPNodePathData" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_bIsTrigger_SetBit(void* Obj)
	{
		((FLGPNodePathData*)Obj)->bIsTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_bIsTrigger = { "bIsTrigger", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FLGPNodePathData), &Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_bIsTrigger_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_bIsTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_bIsTrigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLGPNodePathData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_StartNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_EndNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_PathWeightType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_IsWalkable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_IsReturnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLGPNodePathData_Statics::NewProp_bIsTrigger,
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
	uint32 Get_Z_Construct_UScriptStruct_FLGPNodePathData_Hash() { return 3085821242U; }
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
			{ "GetPathArray", &ULGPNodeBase::execGetPathArray },
			{ "RemovePath", &ULGPNodeBase::execRemovePath },
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPNodeBase_GetPathArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPNodeBase, nullptr, "GetPathArray", nullptr, nullptr, sizeof(LGPNodeBase_eventGetPathArray_Parms), Z_Construct_UFunction_ULGPNodeBase_GetPathArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNodeBase_GetPathArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPNodeBase_GetPathArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNodeBase_GetPathArray_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTrigger_MetaData[];
#endif
		static void NewProp_bIsTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeWeightType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NodeWeightType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathList_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathList_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_PathList;
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
		{ &Z_Construct_UFunction_ULGPNodeBase_GetPathArray, "GetPathArray" }, // 2006773125
		{ &Z_Construct_UFunction_ULGPNodeBase_RemovePath, "RemovePath" }, // 3211535296
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPNodeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base Class Of Graph Node \n * For\n * - Register / Unregister With Graph Writer At ( Begin Play )\n * - Add / Remove Path Function\n * - All Base Spawn Variable\n */" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "LGPNode.h" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
		{ "ToolTip", "Base Class Of Graph Node\nFor\n- Register / Unregister With Graph Writer At ( Begin Play )\n- Add / Remove Path Function\n- All Base Spawn Variable" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_bIsTrigger_MetaData[] = {
		{ "Category", "LGPNodeBase | Variable" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	void Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_bIsTrigger_SetBit(void* Obj)
	{
		((ULGPNodeBase*)Obj)->bIsTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_bIsTrigger = { "bIsTrigger", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULGPNodeBase), &Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_bIsTrigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_bIsTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_bIsTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_NodeWeightType_MetaData[] = {
		{ "Category", "LGPNodeBase | Variable" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_NodeWeightType = { "NodeWeightType", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPNodeBase, NodeWeightType), nullptr, METADATA_PARAMS(Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_NodeWeightType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_NodeWeightType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_PathList_ElementProp = { "PathList", nullptr, (EPropertyFlags)0x0000008000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLGPNodePathData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_PathList_MetaData[] = {
		{ "Category", "LGPNodeBase" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_PathList = { "PathList", nullptr, (EPropertyFlags)0x0020088000030001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPNodeBase, PathList), METADATA_PARAMS(Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_PathList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_PathList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULGPNodeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_bIsTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_NodeWeightType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_PathList_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPNodeBase_Statics::NewProp_PathList,
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
		0x04B000A4u,
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
	IMPLEMENT_CLASS(ULGPNodeBase, 1792272117);
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeGraphWriter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeGraphWriter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupMemberIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupMemberIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PassWeight;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PassWeightReader_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassWeightReader_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_PassWeightReader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPassWeightDirty_MetaData[];
#endif
		static void NewProp_IsPassWeightDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPassWeightDirty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULGPNodeCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULGPNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LohGraphPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPNodeCache_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Cache Class Of Graph Node\n * For\n * - Storing All Writer Cook Data\n * - Handle All Writer Send Event\n */" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "LGPNode.h" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
		{ "ToolTip", "Cache Class Of Graph Node\nFor\n- Storing All Writer Cook Data\n- Handle All Writer Send Event" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_NodeGraphWriter_MetaData[] = {
		{ "Category", "LGPNodeCache" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_NodeGraphWriter = { "NodeGraphWriter", nullptr, (EPropertyFlags)0x00200800000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPNodeCache, NodeGraphWriter), Z_Construct_UClass_ULGPGraphWriter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_NodeGraphWriter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_NodeGraphWriter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_GroupMemberIndex_MetaData[] = {
		{ "Category", "LGPNodeCache" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_GroupMemberIndex = { "GroupMemberIndex", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPNodeCache, GroupMemberIndex), METADATA_PARAMS(Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_GroupMemberIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_GroupMemberIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_GroupID_MetaData[] = {
		{ "Category", "LGPNodeCache" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_GroupID = { "GroupID", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPNodeCache, GroupID), METADATA_PARAMS(Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_GroupID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_GroupID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_PassWeight_MetaData[] = {
		{ "Category", "LGPNodeCache" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_PassWeight = { "PassWeight", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPNodeCache, PassWeight), METADATA_PARAMS(Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_PassWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_PassWeight_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_PassWeightReader_ElementProp = { "PassWeightReader", nullptr, (EPropertyFlags)0x00000000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULGPGraphNavigator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_PassWeightReader_MetaData[] = {
		{ "Category", "LGPNodeCache" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_PassWeightReader = { "PassWeightReader", nullptr, (EPropertyFlags)0x0020088000030009, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPNodeCache, PassWeightReader), METADATA_PARAMS(Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_PassWeightReader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_PassWeightReader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_IsPassWeightDirty_MetaData[] = {
		{ "Category", "LGPNodeCache" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	void Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_IsPassWeightDirty_SetBit(void* Obj)
	{
		((ULGPNodeCache*)Obj)->IsPassWeightDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_IsPassWeightDirty = { "IsPassWeightDirty", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULGPNodeCache), &Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_IsPassWeightDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_IsPassWeightDirty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_IsPassWeightDirty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULGPNodeCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_NodeGraphWriter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_GroupMemberIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_GroupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_PassWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_PassWeightReader_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_PassWeightReader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPNodeCache_Statics::NewProp_IsPassWeightDirty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULGPNodeCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULGPNodeCache>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULGPNodeCache_Statics::ClassParams = {
		&ULGPNodeCache::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULGPNodeCache_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULGPNodeCache_Statics::PropPointers),
		0,
		0x04B000A4u,
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
	IMPLEMENT_CLASS(ULGPNodeCache, 3025201200);
	template<> LOHGRAPHPLUGIN_API UClass* StaticClass<ULGPNodeCache>()
	{
		return ULGPNodeCache::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULGPNodeCache(Z_Construct_UClass_ULGPNodeCache, &ULGPNodeCache::StaticClass, TEXT("/Script/LohGraphPlugin"), TEXT("ULGPNodeCache"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULGPNodeCache);
	DEFINE_FUNCTION(ULGPNode::execSetIsDebug)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsDebug(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPNode::execClearCollisionVertex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCollisionVertex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPNode::execSetCollisionSphere)
	{
		P_GET_TARRAY_REF(FVector4,Z_Param_Out_Spheres);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionSphere(Z_Param_Out_Spheres);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPNode::execSetCollisionBox)
	{
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Boxs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionBox(Z_Param_Out_Boxs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULGPNode::execSetCollisionVertex)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertexs);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Indexs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionVertex(Z_Param_Out_Vertexs,Z_Param_Out_Indexs);
		P_NATIVE_END;
	}
	void ULGPNode::StaticRegisterNativesULGPNode()
	{
		UClass* Class = ULGPNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearCollisionVertex", &ULGPNode::execClearCollisionVertex },
			{ "SetCollisionBox", &ULGPNode::execSetCollisionBox },
			{ "SetCollisionSphere", &ULGPNode::execSetCollisionSphere },
			{ "SetCollisionVertex", &ULGPNode::execSetCollisionVertex },
			{ "SetIsDebug", &ULGPNode::execSetIsDebug },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULGPNode_ClearCollisionVertex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPNode_ClearCollisionVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGSNodeBase | Collision" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPNode_ClearCollisionVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPNode, nullptr, "ClearCollisionVertex", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPNode_ClearCollisionVertex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNode_ClearCollisionVertex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPNode_ClearCollisionVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPNode_ClearCollisionVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPNode_SetCollisionBox_Statics
	{
		struct LGPNode_eventSetCollisionBox_Parms
		{
			TArray<FTransform> Boxs;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Boxs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boxs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Boxs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGPNode_SetCollisionBox_Statics::NewProp_Boxs_Inner = { "Boxs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPNode_SetCollisionBox_Statics::NewProp_Boxs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULGPNode_SetCollisionBox_Statics::NewProp_Boxs = { "Boxs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPNode_eventSetCollisionBox_Parms, Boxs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULGPNode_SetCollisionBox_Statics::NewProp_Boxs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNode_SetCollisionBox_Statics::NewProp_Boxs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPNode_SetCollisionBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPNode_SetCollisionBox_Statics::NewProp_Boxs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPNode_SetCollisionBox_Statics::NewProp_Boxs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPNode_SetCollisionBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGSNodeBase | Collision" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPNode_SetCollisionBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPNode, nullptr, "SetCollisionBox", nullptr, nullptr, sizeof(LGPNode_eventSetCollisionBox_Parms), Z_Construct_UFunction_ULGPNode_SetCollisionBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNode_SetCollisionBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPNode_SetCollisionBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNode_SetCollisionBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPNode_SetCollisionBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPNode_SetCollisionBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPNode_SetCollisionSphere_Statics
	{
		struct LGPNode_eventSetCollisionSphere_Parms
		{
			TArray<FVector4> Spheres;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spheres_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spheres_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Spheres;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGPNode_SetCollisionSphere_Statics::NewProp_Spheres_Inner = { "Spheres", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPNode_SetCollisionSphere_Statics::NewProp_Spheres_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULGPNode_SetCollisionSphere_Statics::NewProp_Spheres = { "Spheres", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPNode_eventSetCollisionSphere_Parms, Spheres), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULGPNode_SetCollisionSphere_Statics::NewProp_Spheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNode_SetCollisionSphere_Statics::NewProp_Spheres_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPNode_SetCollisionSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPNode_SetCollisionSphere_Statics::NewProp_Spheres_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPNode_SetCollisionSphere_Statics::NewProp_Spheres,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPNode_SetCollisionSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGSNodeBase | Collision" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPNode_SetCollisionSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPNode, nullptr, "SetCollisionSphere", nullptr, nullptr, sizeof(LGPNode_eventSetCollisionSphere_Parms), Z_Construct_UFunction_ULGPNode_SetCollisionSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNode_SetCollisionSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPNode_SetCollisionSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNode_SetCollisionSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPNode_SetCollisionSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPNode_SetCollisionSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPNode_SetCollisionVertex_Statics
	{
		struct LGPNode_eventSetCollisionVertex_Parms
		{
			TArray<FVector> Vertexs;
			TArray<int32> Indexs;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertexs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertexs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertexs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Indexs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Indexs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Indexs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULGPNode_SetCollisionVertex_Statics::NewProp_Vertexs_Inner = { "Vertexs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPNode_SetCollisionVertex_Statics::NewProp_Vertexs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULGPNode_SetCollisionVertex_Statics::NewProp_Vertexs = { "Vertexs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPNode_eventSetCollisionVertex_Parms, Vertexs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULGPNode_SetCollisionVertex_Statics::NewProp_Vertexs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNode_SetCollisionVertex_Statics::NewProp_Vertexs_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULGPNode_SetCollisionVertex_Statics::NewProp_Indexs_Inner = { "Indexs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPNode_SetCollisionVertex_Statics::NewProp_Indexs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULGPNode_SetCollisionVertex_Statics::NewProp_Indexs = { "Indexs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LGPNode_eventSetCollisionVertex_Parms, Indexs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULGPNode_SetCollisionVertex_Statics::NewProp_Indexs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNode_SetCollisionVertex_Statics::NewProp_Indexs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPNode_SetCollisionVertex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPNode_SetCollisionVertex_Statics::NewProp_Vertexs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPNode_SetCollisionVertex_Statics::NewProp_Vertexs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPNode_SetCollisionVertex_Statics::NewProp_Indexs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPNode_SetCollisionVertex_Statics::NewProp_Indexs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPNode_SetCollisionVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGSNodeBase | Collision" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPNode_SetCollisionVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPNode, nullptr, "SetCollisionVertex", nullptr, nullptr, sizeof(LGPNode_eventSetCollisionVertex_Parms), Z_Construct_UFunction_ULGPNode_SetCollisionVertex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNode_SetCollisionVertex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPNode_SetCollisionVertex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNode_SetCollisionVertex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPNode_SetCollisionVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPNode_SetCollisionVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULGPNode_SetIsDebug_Statics
	{
		struct LGPNode_eventSetIsDebug_Parms
		{
			bool bNewValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNewValue_MetaData[];
#endif
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPNode_SetIsDebug_Statics::NewProp_bNewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULGPNode_SetIsDebug_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((LGPNode_eventSetIsDebug_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULGPNode_SetIsDebug_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LGPNode_eventSetIsDebug_Parms), &Z_Construct_UFunction_ULGPNode_SetIsDebug_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULGPNode_SetIsDebug_Statics::NewProp_bNewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNode_SetIsDebug_Statics::NewProp_bNewValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULGPNode_SetIsDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULGPNode_SetIsDebug_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULGPNode_SetIsDebug_Statics::Function_MetaDataParams[] = {
		{ "Category", "LGSNodeBase | Collision" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULGPNode_SetIsDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULGPNode, nullptr, "SetIsDebug", nullptr, nullptr, sizeof(LGPNode_eventSetIsDebug_Parms), Z_Construct_UFunction_ULGPNode_SetIsDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNode_SetIsDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULGPNode_SetIsDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULGPNode_SetIsDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULGPNode_SetIsDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULGPNode_SetIsDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULGPNode_NoRegister()
	{
		return ULGPNode::StaticClass();
	}
	struct Z_Construct_UClass_ULGPNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDebug_MetaData[];
#endif
		static void NewProp_bIsDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDebug;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULGPNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULGPNodeCache,
		(UObject* (*)())Z_Construct_UPackage__Script_LohGraphPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULGPNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULGPNode_ClearCollisionVertex, "ClearCollisionVertex" }, // 1176029170
		{ &Z_Construct_UFunction_ULGPNode_SetCollisionBox, "SetCollisionBox" }, // 780093976
		{ &Z_Construct_UFunction_ULGPNode_SetCollisionSphere, "SetCollisionSphere" }, // 1433478689
		{ &Z_Construct_UFunction_ULGPNode_SetCollisionVertex, "SetCollisionVertex" }, // 371994093
		{ &Z_Construct_UFunction_ULGPNode_SetIsDebug, "SetIsDebug" }, // 2714663539
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "LGPGraphComponent" },
		{ "Comment", "/**\n * Top Class Of Graph Node\n * For\n * - Debug Information And Viewer\n */" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "LGPNode.h" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
		{ "ToolTip", "Top Class Of Graph Node\nFor\n- Debug Information And Viewer" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPNode_Statics::NewProp_NodeCollision_MetaData[] = {
		{ "Comment", "/** Collision data */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
		{ "ToolTip", "Collision data" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULGPNode_Statics::NewProp_NodeCollision = { "NodeCollision", nullptr, (EPropertyFlags)0x0042000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPNode, NodeCollision), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULGPNode_Statics::NewProp_NodeCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPNode_Statics::NewProp_NodeCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPNode_Statics::NewProp_bIsDebug_MetaData[] = {
		{ "Category", "LGPNode" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	void Z_Construct_UClass_ULGPNode_Statics::NewProp_bIsDebug_SetBit(void* Obj)
	{
		((ULGPNode*)Obj)->bIsDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULGPNode_Statics::NewProp_bIsDebug = { "bIsDebug", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULGPNode), &Z_Construct_UClass_ULGPNode_Statics::NewProp_bIsDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULGPNode_Statics::NewProp_bIsDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPNode_Statics::NewProp_bIsDebug_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULGPNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPNode_Statics::NewProp_NodeCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPNode_Statics::NewProp_bIsDebug,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULGPNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULGPNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULGPNode_Statics::ClassParams = {
		&ULGPNode::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULGPNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULGPNode_Statics::PropPointers),
		0,
		0x04B000A4u,
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
	IMPLEMENT_CLASS(ULGPNode, 2492021422);
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
