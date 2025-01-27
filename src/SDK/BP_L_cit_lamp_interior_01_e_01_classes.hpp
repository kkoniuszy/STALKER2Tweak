#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_L_cit_lamp_interior_01_e_01

#include "Basic.hpp"

#include "BP_Light_Param_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_L_cit_lamp_interior_01_e_01.BP_L_cit_lamp_interior_01_e_01_C
// 0x0070 (0x07F8 - 0x0788)
class ABP_L_cit_lamp_interior_01_e_01_C final : public ABP_Light_Param_C
{
public:
	class UDecalComponent*                        Decal_fake_Inner_light;                            // 0x0788(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_cit_lamp_interior_01_f1;                        // 0x0790(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_cit_lamp_interior_01_e_02;                      // 0x0798(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Glow;                                              // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    MainLight;                                         // 0x07A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_cit_lamp_interior_01_f;                         // 0x07B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_cit_lamp_interior_01_e_01;                      // 0x07B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Attenuation_Radius;                                // 0x07C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Outer_Cone_Angle;                                  // 0x07C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Light_Falloff_Exponent;                            // 0x07D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Intensity_Decal;                                   // 0x07D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Scale_DecalMinus_Z;                                // 0x07E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Offset_DecalMinus_Z;                               // 0x07E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Turn_OF_Decal;                                     // 0x07F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void PlayOffSound();
	void PlayOnSound();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_L_cit_lamp_interior_01_e_01_C">();
	}
	static class ABP_L_cit_lamp_interior_01_e_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_L_cit_lamp_interior_01_e_01_C>();
	}
};
static_assert(alignof(ABP_L_cit_lamp_interior_01_e_01_C) == 0x000008, "Wrong alignment on ABP_L_cit_lamp_interior_01_e_01_C");
static_assert(sizeof(ABP_L_cit_lamp_interior_01_e_01_C) == 0x0007F8, "Wrong size on ABP_L_cit_lamp_interior_01_e_01_C");
static_assert(offsetof(ABP_L_cit_lamp_interior_01_e_01_C, Decal_fake_Inner_light) == 0x000788, "Member 'ABP_L_cit_lamp_interior_01_e_01_C::Decal_fake_Inner_light' has a wrong offset!");
static_assert(offsetof(ABP_L_cit_lamp_interior_01_e_01_C, SM_cit_lamp_interior_01_f1) == 0x000790, "Member 'ABP_L_cit_lamp_interior_01_e_01_C::SM_cit_lamp_interior_01_f1' has a wrong offset!");
static_assert(offsetof(ABP_L_cit_lamp_interior_01_e_01_C, SM_cit_lamp_interior_01_e_02) == 0x000798, "Member 'ABP_L_cit_lamp_interior_01_e_01_C::SM_cit_lamp_interior_01_e_02' has a wrong offset!");
static_assert(offsetof(ABP_L_cit_lamp_interior_01_e_01_C, Glow) == 0x0007A0, "Member 'ABP_L_cit_lamp_interior_01_e_01_C::Glow' has a wrong offset!");
static_assert(offsetof(ABP_L_cit_lamp_interior_01_e_01_C, MainLight) == 0x0007A8, "Member 'ABP_L_cit_lamp_interior_01_e_01_C::MainLight' has a wrong offset!");
static_assert(offsetof(ABP_L_cit_lamp_interior_01_e_01_C, SM_cit_lamp_interior_01_f) == 0x0007B0, "Member 'ABP_L_cit_lamp_interior_01_e_01_C::SM_cit_lamp_interior_01_f' has a wrong offset!");
static_assert(offsetof(ABP_L_cit_lamp_interior_01_e_01_C, SM_cit_lamp_interior_01_e_01) == 0x0007B8, "Member 'ABP_L_cit_lamp_interior_01_e_01_C::SM_cit_lamp_interior_01_e_01' has a wrong offset!");
static_assert(offsetof(ABP_L_cit_lamp_interior_01_e_01_C, Attenuation_Radius) == 0x0007C0, "Member 'ABP_L_cit_lamp_interior_01_e_01_C::Attenuation_Radius' has a wrong offset!");
static_assert(offsetof(ABP_L_cit_lamp_interior_01_e_01_C, Outer_Cone_Angle) == 0x0007C8, "Member 'ABP_L_cit_lamp_interior_01_e_01_C::Outer_Cone_Angle' has a wrong offset!");
static_assert(offsetof(ABP_L_cit_lamp_interior_01_e_01_C, Light_Falloff_Exponent) == 0x0007D0, "Member 'ABP_L_cit_lamp_interior_01_e_01_C::Light_Falloff_Exponent' has a wrong offset!");
static_assert(offsetof(ABP_L_cit_lamp_interior_01_e_01_C, Intensity_Decal) == 0x0007D8, "Member 'ABP_L_cit_lamp_interior_01_e_01_C::Intensity_Decal' has a wrong offset!");
static_assert(offsetof(ABP_L_cit_lamp_interior_01_e_01_C, Scale_DecalMinus_Z) == 0x0007E0, "Member 'ABP_L_cit_lamp_interior_01_e_01_C::Scale_DecalMinus_Z' has a wrong offset!");
static_assert(offsetof(ABP_L_cit_lamp_interior_01_e_01_C, Offset_DecalMinus_Z) == 0x0007E8, "Member 'ABP_L_cit_lamp_interior_01_e_01_C::Offset_DecalMinus_Z' has a wrong offset!");
static_assert(offsetof(ABP_L_cit_lamp_interior_01_e_01_C, Turn_OF_Decal) == 0x0007F0, "Member 'ABP_L_cit_lamp_interior_01_e_01_C::Turn_OF_Decal' has a wrong offset!");

}

