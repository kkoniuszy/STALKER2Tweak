#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_JiraBookmarksFlag

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_JiraBookmarksFlag.BP_JiraBookmarksFlag_C.ExecuteUbergraph_BP_JiraBookmarksFlag
// 0x0088 (0x0088 - 0x0000)
struct BP_JiraBookmarksFlag_C_ExecuteUbergraph_BP_JiraBookmarksFlag final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_JiraBookmarksFlag_C_ExecuteUbergraph_BP_JiraBookmarksFlag) == 0x000008, "Wrong alignment on BP_JiraBookmarksFlag_C_ExecuteUbergraph_BP_JiraBookmarksFlag");
static_assert(sizeof(BP_JiraBookmarksFlag_C_ExecuteUbergraph_BP_JiraBookmarksFlag) == 0x000088, "Wrong size on BP_JiraBookmarksFlag_C_ExecuteUbergraph_BP_JiraBookmarksFlag");
static_assert(offsetof(BP_JiraBookmarksFlag_C_ExecuteUbergraph_BP_JiraBookmarksFlag, EntryPoint) == 0x000000, "Member 'BP_JiraBookmarksFlag_C_ExecuteUbergraph_BP_JiraBookmarksFlag::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_JiraBookmarksFlag_C_ExecuteUbergraph_BP_JiraBookmarksFlag, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000008, "Member 'BP_JiraBookmarksFlag_C_ExecuteUbergraph_BP_JiraBookmarksFlag::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_JiraBookmarksFlag_C_ExecuteUbergraph_BP_JiraBookmarksFlag, K2Node_Event_DeltaSeconds) == 0x000020, "Member 'BP_JiraBookmarksFlag_C_ExecuteUbergraph_BP_JiraBookmarksFlag::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_JiraBookmarksFlag_C_ExecuteUbergraph_BP_JiraBookmarksFlag, CallFunc_GetPlayerPawn_ReturnValue) == 0x000028, "Member 'BP_JiraBookmarksFlag_C_ExecuteUbergraph_BP_JiraBookmarksFlag::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_JiraBookmarksFlag_C_ExecuteUbergraph_BP_JiraBookmarksFlag, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_JiraBookmarksFlag_C_ExecuteUbergraph_BP_JiraBookmarksFlag::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_JiraBookmarksFlag_C_ExecuteUbergraph_BP_JiraBookmarksFlag, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'BP_JiraBookmarksFlag_C_ExecuteUbergraph_BP_JiraBookmarksFlag::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_JiraBookmarksFlag_C_ExecuteUbergraph_BP_JiraBookmarksFlag, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000050, "Member 'BP_JiraBookmarksFlag_C_ExecuteUbergraph_BP_JiraBookmarksFlag::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_JiraBookmarksFlag_C_ExecuteUbergraph_BP_JiraBookmarksFlag, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000068, "Member 'BP_JiraBookmarksFlag_C_ExecuteUbergraph_BP_JiraBookmarksFlag::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_JiraBookmarksFlag_C_ExecuteUbergraph_BP_JiraBookmarksFlag, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000080, "Member 'BP_JiraBookmarksFlag_C_ExecuteUbergraph_BP_JiraBookmarksFlag::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");

// Function BP_JiraBookmarksFlag.BP_JiraBookmarksFlag_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_JiraBookmarksFlag_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_JiraBookmarksFlag_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_JiraBookmarksFlag_C_ReceiveTick");
static_assert(sizeof(BP_JiraBookmarksFlag_C_ReceiveTick) == 0x000004, "Wrong size on BP_JiraBookmarksFlag_C_ReceiveTick");
static_assert(offsetof(BP_JiraBookmarksFlag_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_JiraBookmarksFlag_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}
