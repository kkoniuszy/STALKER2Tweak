#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CustomSimplifiedGridSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_CustomSimplifiedGridSlot.W_CustomSimplifiedGridSlot_C
// 0x0090 (0x0510 - 0x0480)
class UW_CustomSimplifiedGridSlot_C final : public UCustomSimplifiedGridSlot
{
public:
	struct FRuntimeFloatCurve                     NewVar_0;                                          // 0x0480(0x0088)(Edit, BlueprintVisible)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_CustomSimplifiedGridSlot_C">();
	}
	static class UW_CustomSimplifiedGridSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_CustomSimplifiedGridSlot_C>();
	}
};
static_assert(alignof(UW_CustomSimplifiedGridSlot_C) == 0x000010, "Wrong alignment on UW_CustomSimplifiedGridSlot_C");
static_assert(sizeof(UW_CustomSimplifiedGridSlot_C) == 0x000510, "Wrong size on UW_CustomSimplifiedGridSlot_C");
static_assert(offsetof(UW_CustomSimplifiedGridSlot_C, NewVar_0) == 0x000480, "Member 'UW_CustomSimplifiedGridSlot_C::NewVar_0' has a wrong offset!");

}
