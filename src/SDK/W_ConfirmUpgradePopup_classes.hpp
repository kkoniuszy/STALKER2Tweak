#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ConfirmUpgradePopup

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_ConfirmUpgradePopup.W_ConfirmUpgradePopup_C
// 0x0018 (0x02B0 - 0x0298)
class UW_ConfirmUpgradePopup_C final : public UConfirmUpgradePopup
{
public:
	class UImage*                                 Bot;                                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MiddleTile;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Top;                                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_ConfirmUpgradePopup_C">();
	}
	static class UW_ConfirmUpgradePopup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_ConfirmUpgradePopup_C>();
	}
};
static_assert(alignof(UW_ConfirmUpgradePopup_C) == 0x000008, "Wrong alignment on UW_ConfirmUpgradePopup_C");
static_assert(sizeof(UW_ConfirmUpgradePopup_C) == 0x0002B0, "Wrong size on UW_ConfirmUpgradePopup_C");
static_assert(offsetof(UW_ConfirmUpgradePopup_C, Bot) == 0x000298, "Member 'UW_ConfirmUpgradePopup_C::Bot' has a wrong offset!");
static_assert(offsetof(UW_ConfirmUpgradePopup_C, MiddleTile) == 0x0002A0, "Member 'UW_ConfirmUpgradePopup_C::MiddleTile' has a wrong offset!");
static_assert(offsetof(UW_ConfirmUpgradePopup_C, Top) == 0x0002A8, "Member 'UW_ConfirmUpgradePopup_C::Top' has a wrong offset!");

}
