#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SkipKeyHint

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_SkipKeyHint.W_SkipKeyHint_C
// 0x0000 (0x0280 - 0x0280)
class UW_SkipKeyHint_C final : public USkipKeyHint
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_SkipKeyHint_C">();
	}
	static class UW_SkipKeyHint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_SkipKeyHint_C>();
	}
};
static_assert(alignof(UW_SkipKeyHint_C) == 0x000008, "Wrong alignment on UW_SkipKeyHint_C");
static_assert(sizeof(UW_SkipKeyHint_C) == 0x000280, "Wrong size on UW_SkipKeyHint_C");

}
