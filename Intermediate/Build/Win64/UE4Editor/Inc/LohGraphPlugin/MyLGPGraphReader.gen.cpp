// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohGraphPlugin/Public/MyLGPGraphReader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyLGPGraphReader() {}
// Cross Module References
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_UMyLGPGraphReader_NoRegister();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_UMyLGPGraphReader();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPGraphComponentBase();
	UPackage* Z_Construct_UPackage__Script_LohGraphPlugin();
// End Cross Module References
	void UMyLGPGraphReader::StaticRegisterNativesUMyLGPGraphReader()
	{
	}
	UClass* Z_Construct_UClass_UMyLGPGraphReader_NoRegister()
	{
		return UMyLGPGraphReader::StaticClass();
	}
	struct Z_Construct_UClass_UMyLGPGraphReader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyLGPGraphReader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULGPGraphComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LohGraphPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyLGPGraphReader_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyLGPGraphReader.h" },
		{ "ModuleRelativePath", "Public/MyLGPGraphReader.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyLGPGraphReader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyLGPGraphReader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyLGPGraphReader_Statics::ClassParams = {
		&UMyLGPGraphReader::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMyLGPGraphReader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyLGPGraphReader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyLGPGraphReader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyLGPGraphReader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyLGPGraphReader, 596218465);
	template<> LOHGRAPHPLUGIN_API UClass* StaticClass<UMyLGPGraphReader>()
	{
		return UMyLGPGraphReader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyLGPGraphReader(Z_Construct_UClass_UMyLGPGraphReader, &UMyLGPGraphReader::StaticClass, TEXT("/Script/LohGraphPlugin"), TEXT("UMyLGPGraphReader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyLGPGraphReader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
