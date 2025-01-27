#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BulbAnomaly

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Stalker2_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BulbAnomaly.BP_BulbAnomaly_C
// 0x0020 (0x03E0 - 0x03C0)
class ABP_BulbAnomaly_C final : public ABulbAnomaly
{
public:
	bool                                          IsStarted;                                         // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C1[0x7];                                      // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Position_FX;                                       // 0x03C8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BulbAnomaly_C">();
	}
	static class ABP_BulbAnomaly_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BulbAnomaly_C>();
	}
};
static_assert(alignof(ABP_BulbAnomaly_C) == 0x000008, "Wrong alignment on ABP_BulbAnomaly_C");
static_assert(sizeof(ABP_BulbAnomaly_C) == 0x0003E0, "Wrong size on ABP_BulbAnomaly_C");
static_assert(offsetof(ABP_BulbAnomaly_C, IsStarted) == 0x0003C0, "Member 'ABP_BulbAnomaly_C::IsStarted' has a wrong offset!");
static_assert(offsetof(ABP_BulbAnomaly_C, Position_FX) == 0x0003C8, "Member 'ABP_BulbAnomaly_C::Position_FX' has a wrong offset!");

}

