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
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LGPGraphWriter.h" },
		{ "ModuleRelativePath", "Public/LGPGraphWriter.h" },
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
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULGPGraphWriter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_RegisteredNode_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULGPGraphWriter_Statics::NewProp_RegisteredNode,
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
	IMPLEMENT_CLASS(ULGPGraphWriter, 2545663301);
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
