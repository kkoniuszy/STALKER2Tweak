#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_KeyboardMappingSettings

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_KeyboardMappingSettings.W_KeyboardMappingSettings_C
// 0x0000 (0x02F0 - 0x02F0)
class UW_KeyboardMappingSettings_C final : public UKeyboardMappingSettingsPage
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_KeyboardMappingSettings_C">();
	}
	static class UW_KeyboardMappingSettings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_KeyboardMappingSettings_C>();
	}
};
static_assert(alignof(UW_KeyboardMappingSettings_C) == 0x000008, "Wrong alignment on UW_KeyboardMappingSettings_C");
static_assert(sizeof(UW_KeyboardMappingSettings_C) == 0x0002F0, "Wrong size on UW_KeyboardMappingSettings_C");

}

