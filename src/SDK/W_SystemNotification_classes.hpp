#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SystemNotification

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_SystemNotification.W_SystemNotification_C
// 0x0000 (0x04B0 - 0x04B0)
class UW_SystemNotification_C final : public USystemNotificationWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_SystemNotification_C">();
	}
	static class UW_SystemNotification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_SystemNotification_C>();
	}
};
static_assert(alignof(UW_SystemNotification_C) == 0x000010, "Wrong alignment on UW_SystemNotification_C");
static_assert(sizeof(UW_SystemNotification_C) == 0x0004B0, "Wrong size on UW_SystemNotification_C");

}
