// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohGraphPlugin/Public/LGPGraphWriter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLGPGraphWriter() {}
// Cross Module References
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGraphWriter_NoRegister();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGraphWriter();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGraphComponentBase();
	UPackage* Z_Construct_UPackage__Script_LohGraphPlugin();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPNode_NoRegister();
	LOHGRAPHPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLGPNodeGroupData();
// End Cross Module References
	void ULGPGraphWriter::StaticRegisterNativesULGPGraphWriter()
	{
	}
	UClass* Z_Construct_UClass_ULGPGraphWriter_NoRegister()
	{
		return ULGPGraphWriter::StaticClass();
	}
	struct Z_Construct_UClass_ULGPGraphWriter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RegisteredNode_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_RegisteredNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_BuildVersion;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathProcessQueue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathProcessQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathProcessQueue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeGroupList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeGroupList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NodeGroupList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULGPGraphWriter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULGPGraphComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LohGraphPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphWriter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "LGPGraphComponent" },
		{ "Comment", "/**\n *  Graph Writer\n * \n *  - Register / Unregister Graph Node\n *  - Store / Create Group List\n *  - Calculate Path Map For Nodes\n */" },
		{ "IncludePath", "LGPGraphWriter.h" },
		{ "ModuleRelativePath", "Public/LGPGraphWriter.h" },
		{ "ToolTip", "Graph Writer\n\n- Register / Unregister Graph Node\n- Store / Create Group List\n- Calculate Path Map For Nodes" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_RegisteredNode_ElementProp = { "RegisteredNode", nullptr, (EPropertyFlags)0x00000000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULGPNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_RegisteredNode_MetaData[] = {
		{ "Category", "LGPGraphWriter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LGPGraphWriter.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_RegisteredNode = { "RegisteredNode", nullptr, (EPropertyFlags)0x0020088000020009, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGraphWriter, RegisteredNode), METADATA_PARAMS(Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_RegisteredNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_RegisteredNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_BuildVersion_MetaData[] = {
		{ "Category", "LGPGraphWriter" },
		{ "Comment", "// Null If Thread Running Or Index Not Found\n" },
		{ "ModuleRelativePath", "Public/LGPGraphWriter.h" },
		{ "ToolTip", "Null If Thread Running Or Index Not Found" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_BuildVersion = { "BuildVersion", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGraphWriter, BuildVersion), METADATA_PARAMS(Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_BuildVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_BuildVersion_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_PathProcessQueue_Inner = { "PathProcessQueue", nullptr, (EPropertyFlags)0x00000000000a0008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULGPNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_PathProcessQueue_MetaData[] = {
		{ "Category", "LGPGraphWriter" },
		{ "Comment", "// Use To Check If Data Is Outdated\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LGPGraphWriter.h" },
		{ "ToolTip", "Use To Check If Data Is Outdated" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_PathProcessQueue = { "PathProcessQueue", nullptr, (EPropertyFlags)0x0020088000020009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGraphWriter, PathProcessQueue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_PathProcessQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_PathProcessQueue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_NodeGroupList_Inner = { "NodeGroupList", nullptr, (EPropertyFlags)0x0000008000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLGPNodeGroupData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_NodeGroupList_MetaData[] = {
		{ "Category", "LGPGraphWriter" },
		{ "ModuleRelativePath", "Public/LGPGraphWriter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_NodeGroupList = { "NodeGroupList", nullptr, (EPropertyFlags)0x0020088000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULGPGraphWriter, NodeGroupList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_NodeGroupList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_NodeGroupList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULGPGraphWriter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_RegisteredNode_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_RegisteredNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_BuildVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_PathProcessQueue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_PathProcessQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_NodeGroupList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_NodeGroupList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULGPGraphWriter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULGPGraphWriter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULGPGraphWriter_Statics::ClassParams = {
		&ULGPGraphWriter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULGPGraphWriter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphWriter_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULGPGraphWriter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPGraphWriter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULGPGraphWriter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULGPGraphWriter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULGPGraphWriter, 2655252295);
	template<> LOHGRAPHPLUGIN_API UClass* StaticClass<ULGPGraphWriter>()
	{
		return ULGPGraphWriter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULGPGraphWriter(Z_Construct_UClass_ULGPGraphWriter, &ULGPGraphWriter::StaticClass, TEXT("/Script/LohGraphPlugin"), TEXT("ULGPGraphWriter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULGPGraphWriter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
