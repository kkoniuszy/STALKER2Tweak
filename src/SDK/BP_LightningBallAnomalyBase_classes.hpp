#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LightningBallAnomalyBase

#include "Basic.hpp"

#include "Stalker2_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LightningBallAnomalyBase.BP_LightningBallAnomalyBase_C
// 0x0008 (0x0460 - 0x0458)
class ABP_LightningBallAnomalyBase_C : public ALightningBallAnomaly
{
public:
	class UNiagaraTimeOfDayNormalizedProvider*    NiagaraTimeOfDayNormalizedProvider;                // 0x0458(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LightningBallAnomalyBase_C">();
	}
	static class ABP_LightningBallAnomalyBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LightningBallAnomalyBase_C>();
	}
};
static_assert(alignof(ABP_LightningBallAnomalyBase_C) == 0x000008, "Wrong alignment on ABP_LightningBallAnomalyBase_C");
static_assert(sizeof(ABP_LightningBallAnomalyBase_C) == 0x000460, "Wrong size on ABP_LightningBallAnomalyBase_C");
static_assert(offsetof(ABP_LightningBallAnomalyBase_C, NiagaraTimeOfDayNormalizedProvider) == 0x000458, "Member 'ABP_LightningBallAnomalyBase_C::NiagaraTimeOfDayNormalizedProvider' has a wrong offset!");

}
