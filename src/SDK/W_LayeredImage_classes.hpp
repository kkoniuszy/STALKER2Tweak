#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_LayeredImage

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_LayeredImage.W_LayeredImage_C
// 0x0000 (0x0420 - 0x0420)
class UW_LayeredImage_C final : public ULayeredItemImage
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_LayeredImage_C">();
	}
	static class UW_LayeredImage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_LayeredImage_C>();
	}
};
static_assert(alignof(UW_LayeredImage_C) == 0x000010, "Wrong alignment on UW_LayeredImage_C");
static_assert(sizeof(UW_LayeredImage_C) == 0x000420, "Wrong size on UW_LayeredImage_C");

}

