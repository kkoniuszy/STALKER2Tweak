#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_LocalizationWidget

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_LocalizationWidget.W_LocalizationWidget_C
// 0x0000 (0x02B8 - 0x02B8)
class UW_LocalizationWidget_C final : public ULocalizationWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_LocalizationWidget_C">();
	}
	static class UW_LocalizationWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_LocalizationWidget_C>();
	}
};
static_assert(alignof(UW_LocalizationWidget_C) == 0x000008, "Wrong alignment on UW_LocalizationWidget_C");
static_assert(sizeof(UW_LocalizationWidget_C) == 0x0002B8, "Wrong size on UW_LocalizationWidget_C");

}
