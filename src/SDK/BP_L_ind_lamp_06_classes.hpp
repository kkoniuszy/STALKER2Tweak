#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_L_ind_lamp_06

#include "Basic.hpp"

#include "BP_Light_Param_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_L_ind_lamp_06.BP_L_ind_lamp_06_C
// 0x0060 (0x07E8 - 0x0788)
class ABP_L_ind_lamp_06_C final : public ABP_Light_Param_C
{
public:
	class UNiagaraComponent*                      Insects1;                                          // 0x0788(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    InnerLight1;                                       // 0x0790(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    InnerLight;                                        // 0x0798(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Glow1;                                             // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Glow;                                              // 0x07A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    MainLight;                                         // 0x07B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_ind_lamp_06_c;                                  // 0x07B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_ind_lamp_06_b;                                  // 0x07C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_ind_lamp_06_a;                                  // 0x07C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Attenuation_Radius;                                // 0x07D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Outer_Cone_Angle;                                  // 0x07D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Light_Falloff_Exponent;                            // 0x07E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void PlaySound(class UAkAudioEvent* Sound);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_L_ind_lamp_06_C">();
	}
	static class ABP_L_ind_lamp_06_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_L_ind_lamp_06_C>();
	}
};
static_assert(alignof(ABP_L_ind_lamp_06_C) == 0x000008, "Wrong alignment on ABP_L_ind_lamp_06_C");
static_assert(sizeof(ABP_L_ind_lamp_06_C) == 0x0007E8, "Wrong size on ABP_L_ind_lamp_06_C");
static_assert(offsetof(ABP_L_ind_lamp_06_C, Insects1) == 0x000788, "Member 'ABP_L_ind_lamp_06_C::Insects1' has a wrong offset!");
static_assert(offsetof(ABP_L_ind_lamp_06_C, InnerLight1) == 0x000790, "Member 'ABP_L_ind_lamp_06_C::InnerLight1' has a wrong offset!");
static_assert(offsetof(ABP_L_ind_lamp_06_C, InnerLight) == 0x000798, "Member 'ABP_L_ind_lamp_06_C::InnerLight' has a wrong offset!");
static_assert(offsetof(ABP_L_ind_lamp_06_C, Glow1) == 0x0007A0, "Member 'ABP_L_ind_lamp_06_C::Glow1' has a wrong offset!");
static_assert(offsetof(ABP_L_ind_lamp_06_C, Glow) == 0x0007A8, "Member 'ABP_L_ind_lamp_06_C::Glow' has a wrong offset!");
static_assert(offsetof(ABP_L_ind_lamp_06_C, MainLight) == 0x0007B0, "Member 'ABP_L_ind_lamp_06_C::MainLight' has a wrong offset!");
static_assert(offsetof(ABP_L_ind_lamp_06_C, SM_ind_lamp_06_c) == 0x0007B8, "Member 'ABP_L_ind_lamp_06_C::SM_ind_lamp_06_c' has a wrong offset!");
static_assert(offsetof(ABP_L_ind_lamp_06_C, SM_ind_lamp_06_b) == 0x0007C0, "Member 'ABP_L_ind_lamp_06_C::SM_ind_lamp_06_b' has a wrong offset!");
static_assert(offsetof(ABP_L_ind_lamp_06_C, SM_ind_lamp_06_a) == 0x0007C8, "Member 'ABP_L_ind_lamp_06_C::SM_ind_lamp_06_a' has a wrong offset!");
static_assert(offsetof(ABP_L_ind_lamp_06_C, Attenuation_Radius) == 0x0007D0, "Member 'ABP_L_ind_lamp_06_C::Attenuation_Radius' has a wrong offset!");
static_assert(offsetof(ABP_L_ind_lamp_06_C, Outer_Cone_Angle) == 0x0007D8, "Member 'ABP_L_ind_lamp_06_C::Outer_Cone_Angle' has a wrong offset!");
static_assert(offsetof(ABP_L_ind_lamp_06_C, Light_Falloff_Exponent) == 0x0007E0, "Member 'ABP_L_ind_lamp_06_C::Light_Falloff_Exponent' has a wrong offset!");

}
