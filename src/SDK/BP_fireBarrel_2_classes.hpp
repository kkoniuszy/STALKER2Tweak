#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_fireBarrel_2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_fireBarrel_2.BP_fireBarrel_2_C
// 0x0098 (0x0330 - 0x0298)
class ABP_fireBarrel_2_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_Sphere;                                         // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Sphere;                                            // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      BurnTriggerCollider;                               // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UApplyEffectComponent*                  ApplyEffect;                                       // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   MainLight;                                         // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   InnerLight;                                        // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           Ak;                                                // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticEnvironmentNiagaraComponent*     StaticEnvironmentNiagara;                          // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_FireBarrel_01;                                  // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_emitter;                                        // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   barrel;                                            // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_LightInt_Coefficient_02_1453C969424451CB8FBEEB9F9506515C; // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_1453C969424451CB8FBEEB9F9506515C; // 0x0304(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_305[0x3];                                      // 0x0305(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_LightInt_Coefficient_01_916275B14E114003AD69EF9A80DC08FE; // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_916275B14E114003AD69EF9A80DC08FE; // 0x0314(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_315[0x3];                                      // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         InBarrelLight_Int;                                 // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MainLight_Int;                                     // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Fake_Fog_Intensity;                                // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_BonFire_BurnTriggerCollider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BP_fireBarrel_BurnTriggerCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_fireBarrel_2(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_fireBarrel_2_C">();
	}
	static class ABP_fireBarrel_2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_fireBarrel_2_C>();
	}
};
static_assert(alignof(ABP_fireBarrel_2_C) == 0x000008, "Wrong alignment on ABP_fireBarrel_2_C");
static_assert(sizeof(ABP_fireBarrel_2_C) == 0x000330, "Wrong size on ABP_fireBarrel_2_C");
static_assert(offsetof(ABP_fireBarrel_2_C, UberGraphFrame) == 0x000298, "Member 'ABP_fireBarrel_2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_fireBarrel_2_C, SM_Sphere) == 0x0002A0, "Member 'ABP_fireBarrel_2_C::SM_Sphere' has a wrong offset!");
static_assert(offsetof(ABP_fireBarrel_2_C, Sphere) == 0x0002A8, "Member 'ABP_fireBarrel_2_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_fireBarrel_2_C, BurnTriggerCollider) == 0x0002B0, "Member 'ABP_fireBarrel_2_C::BurnTriggerCollider' has a wrong offset!");
static_assert(offsetof(ABP_fireBarrel_2_C, ApplyEffect) == 0x0002B8, "Member 'ABP_fireBarrel_2_C::ApplyEffect' has a wrong offset!");
static_assert(offsetof(ABP_fireBarrel_2_C, MainLight) == 0x0002C0, "Member 'ABP_fireBarrel_2_C::MainLight' has a wrong offset!");
static_assert(offsetof(ABP_fireBarrel_2_C, InnerLight) == 0x0002C8, "Member 'ABP_fireBarrel_2_C::InnerLight' has a wrong offset!");
static_assert(offsetof(ABP_fireBarrel_2_C, Ak) == 0x0002D0, "Member 'ABP_fireBarrel_2_C::Ak' has a wrong offset!");
static_assert(offsetof(ABP_fireBarrel_2_C, StaticEnvironmentNiagara) == 0x0002D8, "Member 'ABP_fireBarrel_2_C::StaticEnvironmentNiagara' has a wrong offset!");
static_assert(offsetof(ABP_fireBarrel_2_C, SM_FireBarrel_01) == 0x0002E0, "Member 'ABP_fireBarrel_2_C::SM_FireBarrel_01' has a wrong offset!");
static_assert(offsetof(ABP_fireBarrel_2_C, Capsule) == 0x0002E8, "Member 'ABP_fireBarrel_2_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABP_fireBarrel_2_C, SM_emitter) == 0x0002F0, "Member 'ABP_fireBarrel_2_C::SM_emitter' has a wrong offset!");
static_assert(offsetof(ABP_fireBarrel_2_C, barrel) == 0x0002F8, "Member 'ABP_fireBarrel_2_C::barrel' has a wrong offset!");
static_assert(offsetof(ABP_fireBarrel_2_C, Timeline_0_LightInt_Coefficient_02_1453C969424451CB8FBEEB9F9506515C) == 0x000300, "Member 'ABP_fireBarrel_2_C::Timeline_0_LightInt_Coefficient_02_1453C969424451CB8FBEEB9F9506515C' has a wrong offset!");
static_assert(offsetof(ABP_fireBarrel_2_C, Timeline_0__Direction_1453C969424451CB8FBEEB9F9506515C) == 0x000304, "Member 'ABP_fireBarrel_2_C::Timeline_0__Direction_1453C969424451CB8FBEEB9F9506515C' has a wrong offset!");
static_assert(offsetof(ABP_fireBarrel_2_C, Timeline_0) == 0x000308, "Member 'ABP_fireBarrel_2_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ABP_fireBarrel_2_C, Timeline_LightInt_Coefficient_01_916275B14E114003AD69EF9A80DC08FE) == 0x000310, "Member 'ABP_fireBarrel_2_C::Timeline_LightInt_Coefficient_01_916275B14E114003AD69EF9A80DC08FE' has a wrong offset!");
static_assert(offsetof(ABP_fireBarrel_2_C, Timeline__Direction_916275B14E114003AD69EF9A80DC08FE) == 0x000314, "Member 'ABP_fireBarrel_2_C::Timeline__Direction_916275B14E114003AD69EF9A80DC08FE' has a wrong offset!");
static_assert(offsetof(ABP_fireBarrel_2_C, Timeline) == 0x000318, "Member 'ABP_fireBarrel_2_C::Timeline' has a wrong offset!");
static_assert(offsetof(ABP_fireBarrel_2_C, InBarrelLight_Int) == 0x000320, "Member 'ABP_fireBarrel_2_C::InBarrelLight_Int' has a wrong offset!");
static_assert(offsetof(ABP_fireBarrel_2_C, MainLight_Int) == 0x000324, "Member 'ABP_fireBarrel_2_C::MainLight_Int' has a wrong offset!");
static_assert(offsetof(ABP_fireBarrel_2_C, Fake_Fog_Intensity) == 0x000328, "Member 'ABP_fireBarrel_2_C::Fake_Fog_Intensity' has a wrong offset!");

}
