#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_Human_bh

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "AnimBP_Human_bh_structs.hpp"
#include "Stalker2_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AnimBP_Human_bh.AnimBP_Human_bh_C
// 0x04B0 (0x1690 - 0x11E0)
class UAnimBP_Human_bh_C final : public UAnimInstanceHuman
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x11E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct AnimBP_Human_bh::FAnimBlueprintGeneratedMutableData m_AnimBlueprintMutables;                           // 0x11E8(0x0003)(HasGetValueTypeHash)
	uint8                                         Pad_11EB[0x5];                                     // 0x11EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x11F0(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x11F8(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1200(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x1220(0x00C8)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x12E8(0x0048)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer;                        // 0x1330(0x0078)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone;                            // 0x13A8(0x00F0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1498(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x14B8(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x14D8(0x0128)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x1600(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x1648(0x0048)()

public:
	void AnimGraph(const struct FPoseLink& Locomotion, struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_AnimBP_Human_bh(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimBP_Human_bh_C">();
	}
	static class UAnimBP_Human_bh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBP_Human_bh_C>();
	}
};
static_assert(alignof(UAnimBP_Human_bh_C) == 0x000010, "Wrong alignment on UAnimBP_Human_bh_C");
static_assert(sizeof(UAnimBP_Human_bh_C) == 0x001690, "Wrong size on UAnimBP_Human_bh_C");
static_assert(offsetof(UAnimBP_Human_bh_C, UberGraphFrame) == 0x0011E0, "Member 'UAnimBP_Human_bh_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAnimBP_Human_bh_C, m_AnimBlueprintMutables) == 0x0011E8, "Member 'UAnimBP_Human_bh_C::m_AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UAnimBP_Human_bh_C, AnimBlueprintExtension_PropertyAccess) == 0x0011F0, "Member 'UAnimBP_Human_bh_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAnimBP_Human_bh_C, AnimBlueprintExtension_Base) == 0x0011F8, "Member 'UAnimBP_Human_bh_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UAnimBP_Human_bh_C, AnimGraphNode_Root) == 0x001200, "Member 'UAnimBP_Human_bh_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAnimBP_Human_bh_C, AnimGraphNode_LinkedInputPose) == 0x001220, "Member 'UAnimBP_Human_bh_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UAnimBP_Human_bh_C, AnimGraphNode_BlendListByBool_1) == 0x0012E8, "Member 'UAnimBP_Human_bh_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_Human_bh_C, AnimGraphNode_RandomPlayer) == 0x001330, "Member 'UAnimBP_Human_bh_C::AnimGraphNode_RandomPlayer' has a wrong offset!");
static_assert(offsetof(UAnimBP_Human_bh_C, AnimGraphNode_CopyBone) == 0x0013A8, "Member 'UAnimBP_Human_bh_C::AnimGraphNode_CopyBone' has a wrong offset!");
static_assert(offsetof(UAnimBP_Human_bh_C, AnimGraphNode_LocalToComponentSpace) == 0x001498, "Member 'UAnimBP_Human_bh_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UAnimBP_Human_bh_C, AnimGraphNode_ComponentToLocalSpace) == 0x0014B8, "Member 'UAnimBP_Human_bh_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UAnimBP_Human_bh_C, AnimGraphNode_ModifyBone) == 0x0014D8, "Member 'UAnimBP_Human_bh_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UAnimBP_Human_bh_C, AnimGraphNode_BlendListByBool) == 0x001600, "Member 'UAnimBP_Human_bh_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UAnimBP_Human_bh_C, AnimGraphNode_SequencePlayer) == 0x001648, "Member 'UAnimBP_Human_bh_C::AnimGraphNode_SequencePlayer' has a wrong offset!");

}
