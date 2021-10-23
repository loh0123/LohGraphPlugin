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
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LGPGraphWriter.h" },
		{ "ModuleRelativePath", "Public/LGPGraphWriter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULGPGraphWriter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULGPGraphWriter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULGPGraphWriter_Statics::ClassParams = {
		&ULGPGraphWriter::StaticClass,
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
	IMPLEMENT_CLASS(ULGPGraphWriter, 1680750445);
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
