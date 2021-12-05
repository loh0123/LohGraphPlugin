// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLohGraphPlugin_init() {}
	LOHGRAPHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnPathReceiveSignature__DelegateSignature();
	LOHGRAPHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnBeginFollowingPathSignature__DelegateSignature();
	LOHGRAPHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnEndFollowingPathSignature__DelegateSignature();
	LOHGRAPHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ULGPGraphWriter_OnAlertPathUsedSignature__DelegateSignature();
	LOHGRAPHPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ULGPGraphWriter_OnAlertNodeUsedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LohGraphPlugin()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnPathReceiveSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnBeginFollowingPathSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ULGPGraphNavigator_OnEndFollowingPathSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ULGPGraphWriter_OnAlertPathUsedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ULGPGraphWriter_OnAlertNodeUsedSignature__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/LohGraphPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x74F5E129,
				0xD94D6242,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
