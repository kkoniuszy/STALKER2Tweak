#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_UserWaterElementText

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_UserWaterElementText.W_UserWaterElementText_C
// 0x0000 (0x0290 - 0x0290)
class UW_UserWaterElementText_C final : public UUserWaterElementText
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_UserWaterElementText_C">();
	}
	static class UW_UserWaterElementText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_UserWaterElementText_C>();
	}
};
static_assert(alignof(UW_UserWaterElementText_C) == 0x000008, "Wrong alignment on UW_UserWaterElementText_C");
static_assert(sizeof(UW_UserWaterElementText_C) == 0x000290, "Wrong size on UW_UserWaterElementText_C");

}
