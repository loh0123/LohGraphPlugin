// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohGraphPlugin/Public/MyLGPGraphWriter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyLGPGraphWriter() {}
// Cross Module References
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_UMyLGPGraphWriter_NoRegister();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_UMyLGPGraphWriter();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGraphComponentBase();
	UPackage* Z_Construct_UPackage__Script_LohGraphPlugin();
// End Cross Module References
	void UMyLGPGraphWriter::StaticRegisterNativesUMyLGPGraphWriter()
	{
	}
	UClass* Z_Construct_UClass_UMyLGPGraphWriter_NoRegister()
	{
		return UMyLGPGraphWriter::StaticClass();
	}
	struct Z_Construct_UClass_UMyLGPGraphWriter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyLGPGraphWriter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULGPGraphComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LohGraphPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyLGPGraphWriter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyLGPGraphWriter.h" },
		{ "ModuleRelativePath", "Public/MyLGPGraphWriter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyLGPGraphWriter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyLGPGraphWriter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyLGPGraphWriter_Statics::ClassParams = {
		&UMyLGPGraphWriter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMyLGPGraphWriter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyLGPGraphWriter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyLGPGraphWriter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyLGPGraphWriter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyLGPGraphWriter, 13749072);
	template<> LOHGRAPHPLUGIN_API UClass* StaticClass<UMyLGPGraphWriter>()
	{
		return UMyLGPGraphWriter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyLGPGraphWriter(Z_Construct_UClass_UMyLGPGraphWriter, &UMyLGPGraphWriter::StaticClass, TEXT("/Script/LohGraphPlugin"), TEXT("UMyLGPGraphWriter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyLGPGraphWriter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
