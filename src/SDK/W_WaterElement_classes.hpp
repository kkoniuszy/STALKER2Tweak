#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_WaterElement

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_WaterElement.W_WaterElement_C
// 0x0008 (0x0288 - 0x0280)
class UW_WaterElement_C final : public UWaterElement
{
public:
	class UW_UserWaterElement_C*                  UserWaterElement;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_WaterElement_C">();
	}
	static class UW_WaterElement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_WaterElement_C>();
	}
};
static_assert(alignof(UW_WaterElement_C) == 0x000008, "Wrong alignment on UW_WaterElement_C");
static_assert(sizeof(UW_WaterElement_C) == 0x000288, "Wrong size on UW_WaterElement_C");
static_assert(offsetof(UW_WaterElement_C, UserWaterElement) == 0x000280, "Member 'UW_WaterElement_C::UserWaterElement' has a wrong offset!");

}
