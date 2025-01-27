#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IntChestItemContainer

#include "Basic.hpp"

#include "BP_AnimatedItemContainer_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_IntChestItemContainer.BP_IntChestItemContainer_C
// 0x0010 (0x0418 - 0x0408)
class ABP_IntChestItemContainer_C final : public ABP_AnimatedItemContainer_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_IntChestItemContainer_C;         // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        ArrowLookAt;                                       // 0x0410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void OnPaintSettingsChanged(const bool bInteractPaint);
	void ExecuteUbergraph_BP_IntChestItemContainer(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_IntChestItemContainer_C">();
	}
	static class ABP_IntChestItemContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_IntChestItemContainer_C>();
	}
};
static_assert(alignof(ABP_IntChestItemContainer_C) == 0x000008, "Wrong alignment on ABP_IntChestItemContainer_C");
static_assert(sizeof(ABP_IntChestItemContainer_C) == 0x000418, "Wrong size on ABP_IntChestItemContainer_C");
static_assert(offsetof(ABP_IntChestItemContainer_C, UberGraphFrame_BP_IntChestItemContainer_C) == 0x000408, "Member 'ABP_IntChestItemContainer_C::UberGraphFrame_BP_IntChestItemContainer_C' has a wrong offset!");
static_assert(offsetof(ABP_IntChestItemContainer_C, ArrowLookAt) == 0x000410, "Member 'ABP_IntChestItemContainer_C::ArrowLookAt' has a wrong offset!");

}

