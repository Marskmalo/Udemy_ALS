// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FlatNodesSettings.h"

#ifdef FLATNODES_FlatNodesSettings_generated_h
#error "FlatNodesSettings.generated.h already included, missing '#pragma once' in FlatNodesSettings.h"
#endif
#define FLATNODES_FlatNodesSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFlatNodesSettings *******************************************************
FLATNODES_API UClass* Z_Construct_UClass_UFlatNodesSettings_NoRegister();

#define FID_Unreal_Project_SOD_Plugins_FlatNode18f35655bb7eV9_Source_FlatNodes_Public_FlatNodesSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlatNodesSettings(); \
	friend struct Z_Construct_UClass_UFlatNodesSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FLATNODES_API UClass* Z_Construct_UClass_UFlatNodesSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UFlatNodesSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FlatNodes"), Z_Construct_UClass_UFlatNodesSettings_NoRegister) \
	DECLARE_SERIALIZER(UFlatNodesSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Unreal_Project_SOD_Plugins_FlatNode18f35655bb7eV9_Source_FlatNodes_Public_FlatNodesSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFlatNodesSettings(UFlatNodesSettings&&) = delete; \
	UFlatNodesSettings(const UFlatNodesSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlatNodesSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlatNodesSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFlatNodesSettings) \
	NO_API virtual ~UFlatNodesSettings();


#define FID_Unreal_Project_SOD_Plugins_FlatNode18f35655bb7eV9_Source_FlatNodes_Public_FlatNodesSettings_h_13_PROLOG
#define FID_Unreal_Project_SOD_Plugins_FlatNode18f35655bb7eV9_Source_FlatNodes_Public_FlatNodesSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_SOD_Plugins_FlatNode18f35655bb7eV9_Source_FlatNodes_Public_FlatNodesSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_SOD_Plugins_FlatNode18f35655bb7eV9_Source_FlatNodes_Public_FlatNodesSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFlatNodesSettings;

// ********** End Class UFlatNodesSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_SOD_Plugins_FlatNode18f35655bb7eV9_Source_FlatNodes_Public_FlatNodesSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
