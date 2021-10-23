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
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPNodeBase_NoRegister();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPNodeBase();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_LohGraphPlugin();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPNodeGroup_NoRegister();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPNodeGroup();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPNodeCache_NoRegister();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPNodeCache();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPNode_NoRegister();
	LOHGRAPHPLUGIN_API UClass* Z_Construct_UClass_ULGPNode();
// End Cross Module References
	void ULGPNodeBase::StaticRegisterNativesULGPNodeBase()
	{
	}
	UClass* Z_Construct_UClass_ULGPNodeBase_NoRegister()
	{
		return ULGPNodeBase::StaticClass();
	}
	struct Z_Construct_UClass_ULGPNodeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULGPNodeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LohGraphPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPNodeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "LGPNode.h" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULGPNodeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULGPNodeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULGPNodeBase_Statics::ClassParams = {
		&ULGPNodeBase::StaticClass,
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
	IMPLEMENT_CLASS(ULGPNodeBase, 4051476850);
	template<> LOHGRAPHPLUGIN_API UClass* StaticClass<ULGPNodeBase>()
	{
		return ULGPNodeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULGPNodeBase(Z_Construct_UClass_ULGPNodeBase, &ULGPNodeBase::StaticClass, TEXT("/Script/LohGraphPlugin"), TEXT("ULGPNodeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULGPNodeBase);
	void ULGPNodeGroup::StaticRegisterNativesULGPNodeGroup()
	{
	}
	UClass* Z_Construct_UClass_ULGPNodeGroup_NoRegister()
	{
		return ULGPNodeGroup::StaticClass();
	}
	struct Z_Construct_UClass_ULGPNodeGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULGPNodeGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULGPNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LohGraphPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULGPNodeGroup_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "LGPNode.h" },
		{ "ModuleRelativePath", "Public/LGPNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULGPNodeGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULGPNodeGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULGPNodeGroup_Statics::ClassParams = {
		&ULGPNodeGroup::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULGPNodeGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULGPNodeGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULGPNodeGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULGPNodeGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULGPNodeGroup, 63457031);
	template<> LOHGRAPHPLUGIN_API UClass* StaticClass<ULGPNodeGroup>()
	{
		return ULGPNodeGroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULGPNodeGroup(Z_Construct_UClass_ULGPNodeGroup, &ULGPNodeGroup::StaticClass, TEXT("/Script/LohGraphPlugin"), TEXT("ULGPNodeGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULGPNodeGroup);
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
		(UObject* (*)())Z_Construct_UClass_ULGPNodeGroup,
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
	IMPLEMENT_CLASS(ULGPNodeCache, 1973561412);
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
	IMPLEMENT_CLASS(ULGPNode, 3867757792);
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
