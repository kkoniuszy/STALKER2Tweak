#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_AKU_tp

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct AnimBP_AKU_tp.AnimBP_AKU_tp_C.AnimBlueprintGeneratedConstantData
// 0x011F (0x0120 - 0x0001)
struct AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_50;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      __AnimSequenceBase_51;                             // 0x0010(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                      __AnimSequenceBase_52;                             // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBlendProfile*                          __BlendProfile_53;                                 // 0x0020(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_54;                                   // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_55;                                 // 0x0030(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_56;                                 // 0x0031(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_57;                                // 0x0038(0x0010)(BlueprintVisible, EditFixedSize)
	struct FAnimNodeFunctionRef                   __StructProperty_58;                               // 0x0048(0x0020)(BlueprintVisible, NoDestructor)
	ESequenceEvalReinit                           __ByteProperty_59;                                 // 0x0068(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_60;                                 // 0x0069(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A[0x2];                                       // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_61;                                // 0x006C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      __AnimSequenceBase_62;                             // 0x0070(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_63;                                 // 0x0078(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_64;                                 // 0x0079(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_65;                                 // 0x007A(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B[0x1];                                       // 0x007B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_66;                                 // 0x007C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0088(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0108(0x0018)()
};
static_assert(alignof(AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData) == 0x000120, "Wrong size on AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData, __NameProperty_50) == 0x000004, "Member 'AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData::__NameProperty_50' has a wrong offset!");
static_assert(offsetof(AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData, __AnimSequenceBase_51) == 0x000010, "Member 'AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData::__AnimSequenceBase_51' has a wrong offset!");
static_assert(offsetof(AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData, __AnimSequenceBase_52) == 0x000018, "Member 'AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData::__AnimSequenceBase_52' has a wrong offset!");
static_assert(offsetof(AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData, __BlendProfile_53) == 0x000020, "Member 'AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData::__BlendProfile_53' has a wrong offset!");
static_assert(offsetof(AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData, __CurveFloat_54) == 0x000028, "Member 'AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData::__CurveFloat_54' has a wrong offset!");
static_assert(offsetof(AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData, __EnumProperty_55) == 0x000030, "Member 'AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData::__EnumProperty_55' has a wrong offset!");
static_assert(offsetof(AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData, __EnumProperty_56) == 0x000031, "Member 'AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData::__EnumProperty_56' has a wrong offset!");
static_assert(offsetof(AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData, __ArrayProperty_57) == 0x000038, "Member 'AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData::__ArrayProperty_57' has a wrong offset!");
static_assert(offsetof(AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData, __StructProperty_58) == 0x000048, "Member 'AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData::__StructProperty_58' has a wrong offset!");
static_assert(offsetof(AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData, __ByteProperty_59) == 0x000068, "Member 'AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData::__ByteProperty_59' has a wrong offset!");
static_assert(offsetof(AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData, __BoolProperty_60) == 0x000069, "Member 'AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData::__BoolProperty_60' has a wrong offset!");
static_assert(offsetof(AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData, __FloatProperty_61) == 0x00006C, "Member 'AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData::__FloatProperty_61' has a wrong offset!");
static_assert(offsetof(AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData, __AnimSequenceBase_62) == 0x000070, "Member 'AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData::__AnimSequenceBase_62' has a wrong offset!");
static_assert(offsetof(AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData, __BoolProperty_63) == 0x000078, "Member 'AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData::__BoolProperty_63' has a wrong offset!");
static_assert(offsetof(AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData, __EnumProperty_64) == 0x000079, "Member 'AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData::__EnumProperty_64' has a wrong offset!");
static_assert(offsetof(AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData, __ByteProperty_65) == 0x00007A, "Member 'AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData::__ByteProperty_65' has a wrong offset!");
static_assert(offsetof(AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData, __NameProperty_66) == 0x00007C, "Member 'AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData::__NameProperty_66' has a wrong offset!");
static_assert(offsetof(AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000088, "Member 'AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000108, "Member 'AnimBP_AKU_tp::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct AnimBP_AKU_tp.AnimBP_AKU_tp_C.AnimBlueprintGeneratedMutableData
// 0x0002 (0x0003 - 0x0001)
struct AnimBP_AKU_tp::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_0;                                  // 0x0002(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimBP_AKU_tp::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on AnimBP_AKU_tp::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(AnimBP_AKU_tp::FAnimBlueprintGeneratedMutableData) == 0x000003, "Wrong size on AnimBP_AKU_tp::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(AnimBP_AKU_tp::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'AnimBP_AKU_tp::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");
static_assert(offsetof(AnimBP_AKU_tp::FAnimBlueprintGeneratedMutableData, __BoolProperty_0) == 0x000002, "Member 'AnimBP_AKU_tp::FAnimBlueprintGeneratedMutableData::__BoolProperty_0' has a wrong offset!");

}
