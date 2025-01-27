#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_bloodsucker

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Stalker2_classes.hpp"
#include "PoseSearch_structs.hpp"
#include "AnimBP_bloodsucker_structs.hpp"
#include "AnimationWarpingRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AnimBP_bloodsucker.AnimBP_bloodsucker_C
// 0x2050 (0x2BC0 - 0x0B70)
class UAnimBP_bloodsucker_C final : public UAnimInstanceMutant
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct AnimBP_bloodsucker::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0B78(0x000B)(HasGetValueTypeHash)
	uint8                                         Pad_B83[0x5];                                      // 0x0B83(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Tag;                        // 0x0B88(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0B90(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0B98(0x0008)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_4;                              // 0x0BA0(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_3;                              // 0x0BE8(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x0C30(0x0048)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0C78(0x0020)()
	struct FAnimNode_Mirror                       AnimGraphNode_Mirror;                              // 0x0C98(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x0CE0(0x0048)()
	uint8                                         Pad_D28[0x8];                                      // 0x0D28(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_MotionMatching               AnimGraphNode_MotionMatching;                      // 0x0D30(0x02E0)()
	struct FAnimNode_PoseSearchHistoryCollector   AnimGraphNode_PoseSearchHistoryCollector;          // 0x1010(0x0050)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x1060(0x0020)()
	struct FAnimNode_StrideWarping                AnimGraphNode_StrideWarping;                       // 0x1080(0x0238)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x12B8(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;                   // 0x1300(0x0048)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer_3;                      // 0x1348(0x0078)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer_2;                      // 0x13C0(0x0078)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer_1;                      // 0x1438(0x0078)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_26;                   // 0x14B0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_25;                   // 0x14F8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_24;                   // 0x1540(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_23;                   // 0x1588(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_22;                   // 0x15D0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_21;                   // 0x1618(0x0048)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_4;                   // 0x1660(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_20;                   // 0x16A8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_19;                   // 0x16F0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_18;                   // 0x1738(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_17;                   // 0x1780(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_16;                   // 0x17C8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_15;                   // 0x1810(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_14;                   // 0x1858(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_13;                   // 0x18A0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_12;                   // 0x18E8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_11;                   // 0x1930(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_10;                   // 0x1978(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_9;                    // 0x19C0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;                    // 0x1A08(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x1A50(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x1A98(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x1AE0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x1B28(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x1B70(0x0048)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_3;                   // 0x1BB8(0x0048)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_2;                   // 0x1C00(0x0048)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_1;                   // 0x1C48(0x0048)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x1C90(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x1CD8(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x1CF8(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x1DC0(0x0108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x1EC8(0x0020)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x1EE8(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x1F30(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x1F58(0x0048)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x1FA0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x1FC8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x1FF0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x2018(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x2040(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x2088(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x20A8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x20F0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x2110(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x2158(0x0020)()
	struct FAnimNode_RandomPlayer                 AnimGraphNode_RandomPlayer;                        // 0x2178(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x21F0(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x2210(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x22D8(0x0108)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x23E0(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x2408(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x2450(0x0028)()
	struct FAnimNode_Inertialization              AnimGraphNode_Inertialization;                     // 0x2478(0x0100)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x2578(0x0028)()
	struct FAnimNode_FootPlacement                AnimGraphNode_FootPlacement;                       // 0x25A0(0x04E0)()
	struct FAnimNode_LegIK                        AnimGraphNode_LegIK;                               // 0x2A80(0x00F8)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2B78(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x2B98(0x0020)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AnimBP_bloodsucker(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimBP_bloodsucker_C">();
	}
	static class UAnimBP_bloodsucker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBP_bloodsucker_C>();
	}
};
static_assert(alignof(UAnimBP_bloodsucker_C) == 0x000010, "Wrong alignment on UAnimBP_bloodsucker_C");
static_assert(sizeof(UAnimBP_bloodsucker_C) == 0x002BC0, "Wrong size on UAnimBP_bloodsucker_C");
static_assert(offsetof(UAnimBP_bloodsucker_C, UberGraphFrame) == 0x000B70, "Member 'UAnimBP_bloodsucker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, __AnimBlueprintMutables) == 0x000B78, "Member 'UAnimBP_bloodsucker_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimBlueprintExtension_Tag) == 0x000B88, "Member 'UAnimBP_bloodsucker_C::AnimBlueprintExtension_Tag' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimBlueprintExtension_PropertyAccess) == 0x000B90, "Member 'UAnimBP_bloodsucker_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimBlueprintExtension_Base) == 0x000B98, "Member 'UAnimBP_bloodsucker_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_Slot_4) == 0x000BA0, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_Slot_4' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_Slot_3) == 0x000BE8, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_Slot_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_Slot_2) == 0x000C30, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_Slot_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_Root) == 0x000C78, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_Mirror) == 0x000C98, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_Mirror' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_Slot_1) == 0x000CE0, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_MotionMatching) == 0x000D30, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_MotionMatching' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_PoseSearchHistoryCollector) == 0x001010, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_PoseSearchHistoryCollector' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_LocalToComponentSpace_1) == 0x001060, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_LocalToComponentSpace_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_StrideWarping) == 0x001080, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_StrideWarping' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_Slot) == 0x0012B8, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_BlendListByBool_3) == 0x001300, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_RandomPlayer_3) == 0x001348, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_RandomPlayer_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_RandomPlayer_2) == 0x0013C0, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_RandomPlayer_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_RandomPlayer_1) == 0x001438, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_RandomPlayer_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_26) == 0x0014B0, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_26' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_25) == 0x0014F8, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_25' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_24) == 0x001540, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_24' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_23) == 0x001588, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_23' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_22) == 0x0015D0, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_22' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_21) == 0x001618, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_21' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_BlendListByEnum_4) == 0x001660, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_BlendListByEnum_4' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_20) == 0x0016A8, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_20' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_19) == 0x0016F0, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_19' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_18) == 0x001738, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_18' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_17) == 0x001780, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_17' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_16) == 0x0017C8, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_16' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_15) == 0x001810, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_15' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_14) == 0x001858, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_14' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_13) == 0x0018A0, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_13' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_12) == 0x0018E8, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_12' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_11) == 0x001930, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_11' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_10) == 0x001978, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_10' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_9) == 0x0019C0, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_9' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_8) == 0x001A08, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_7) == 0x001A50, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_6) == 0x001A98, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_5) == 0x001AE0, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_4) == 0x001B28, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_3) == 0x001B70, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_BlendListByEnum_3) == 0x001BB8, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_BlendListByEnum_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_BlendListByEnum_2) == 0x001C00, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_BlendListByEnum_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_BlendListByEnum_1) == 0x001C48, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_BlendListByEnum_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_BlendListByEnum) == 0x001C90, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_StateResult_4) == 0x001CD8, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_StateMachine_1) == 0x001CF8, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SaveCachedPose_1) == 0x001DC0, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_ComponentToLocalSpace_1) == 0x001EC8, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_ComponentToLocalSpace_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_BlendListByBool_2) == 0x001EE8, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_UseCachedPose_3) == 0x001F30, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_BlendListByBool_1) == 0x001F58, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_TransitionResult_3) == 0x001FA0, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_TransitionResult_2) == 0x001FC8, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_TransitionResult_1) == 0x001FF0, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_TransitionResult) == 0x002018, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_2) == 0x002040, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_StateResult_3) == 0x002088, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer_1) == 0x0020A8, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_StateResult_2) == 0x0020F0, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SequencePlayer) == 0x002110, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_StateResult_1) == 0x002158, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_RandomPlayer) == 0x002178, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_RandomPlayer' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_StateResult) == 0x0021F0, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_StateMachine) == 0x002210, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_SaveCachedPose) == 0x0022D8, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_UseCachedPose_2) == 0x0023E0, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_BlendListByBool) == 0x002408, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_UseCachedPose_1) == 0x002450, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_Inertialization) == 0x002478, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_Inertialization' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_UseCachedPose) == 0x002578, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_FootPlacement) == 0x0025A0, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_FootPlacement' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_LegIK) == 0x002A80, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_LegIK' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_ComponentToLocalSpace) == 0x002B78, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UAnimBP_bloodsucker_C, AnimGraphNode_LocalToComponentSpace) == 0x002B98, "Member 'UAnimBP_bloodsucker_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");

}

