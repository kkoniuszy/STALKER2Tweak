#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_HintViewGamepad

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_HintViewGamepad.W_HintViewGamepad_C
// 0x0000 (0x0340 - 0x0340)
class UW_HintViewGamepad_C final : public UHintViewBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_HintViewGamepad_C">();
	}
	static class UW_HintViewGamepad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_HintViewGamepad_C>();
	}
};
static_assert(alignof(UW_HintViewGamepad_C) == 0x000008, "Wrong alignment on UW_HintViewGamepad_C");
static_assert(sizeof(UW_HintViewGamepad_C) == 0x000340, "Wrong size on UW_HintViewGamepad_C");

}
