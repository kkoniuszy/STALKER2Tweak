#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_TaskMenuWidget

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_TaskMenuWidget.W_TaskMenuWidget_C
// 0x0000 (0x02B0 - 0x02B0)
class UW_TaskMenuWidget_C final : public UTaskMenuWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_TaskMenuWidget_C">();
	}
	static class UW_TaskMenuWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_TaskMenuWidget_C>();
	}
};
static_assert(alignof(UW_TaskMenuWidget_C) == 0x000008, "Wrong alignment on UW_TaskMenuWidget_C");
static_assert(sizeof(UW_TaskMenuWidget_C) == 0x0002B0, "Wrong size on UW_TaskMenuWidget_C");

}

