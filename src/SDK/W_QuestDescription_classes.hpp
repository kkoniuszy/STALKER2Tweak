#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_QuestDescription

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_QuestDescription.W_QuestDescription_C
// 0x0000 (0x02C8 - 0x02C8)
class UW_QuestDescription_C final : public UPDAQuestDescription
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_QuestDescription_C">();
	}
	static class UW_QuestDescription_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_QuestDescription_C>();
	}
};
static_assert(alignof(UW_QuestDescription_C) == 0x000008, "Wrong alignment on UW_QuestDescription_C");
static_assert(sizeof(UW_QuestDescription_C) == 0x0002C8, "Wrong size on UW_QuestDescription_C");

}
