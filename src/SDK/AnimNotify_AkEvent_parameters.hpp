#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_AkEvent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Received_Notify
// 0x0118 (0x0118 - 0x0000)
struct AnimNotify_AkEvent_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           TargetAkComponent;                                 // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0048(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           CallFunc_GetAkComponentForSocket_ReturnValue;      // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x3];                                       // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x00FC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAkComponent_ComponentCreated;          // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_105[0x3];                                      // 0x0105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           CallFunc_GetAkComponent_ReturnValue;               // 0x0108(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEventAtLocation_ReturnValue;          // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimNotify_AkEvent_C_Received_Notify) == 0x000008, "Wrong alignment on AnimNotify_AkEvent_C_Received_Notify");
static_assert(sizeof(AnimNotify_AkEvent_C_Received_Notify) == 0x000118, "Wrong size on AnimNotify_AkEvent_C_Received_Notify");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, MeshComp) == 0x000000, "Member 'AnimNotify_AkEvent_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, Animation) == 0x000008, "Member 'AnimNotify_AkEvent_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, EventReference) == 0x000010, "Member 'AnimNotify_AkEvent_C_Received_Notify::EventReference' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, ReturnValue) == 0x000038, "Member 'AnimNotify_AkEvent_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, TargetAkComponent) == 0x000040, "Member 'AnimNotify_AkEvent_C_Received_Notify::TargetAkComponent' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, Temp_delegate_Variable) == 0x000048, "Member 'AnimNotify_AkEvent_C_Received_Notify::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000060, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_Conv_StringToName_ReturnValue) == 0x000078, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000080, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_GetAkComponentForSocket_ReturnValue) == 0x000088, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_GetAkComponentForSocket_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_GetDisplayName_ReturnValue) == 0x000090, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_GetDisplayName_ReturnValue_1) == 0x0000A0, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_Concat_StrStr_ReturnValue) == 0x0000B0, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000C0, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000D0, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_PostAkEvent_ReturnValue) == 0x0000E0, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000E8, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_IsValid_ReturnValue_1) == 0x0000F8, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_Conv_StringToName_ReturnValue_1) == 0x0000FC, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_GetAkComponent_ComponentCreated) == 0x000104, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_GetAkComponent_ComponentCreated' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_GetAkComponent_ReturnValue) == 0x000108, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_GetAkComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_AkEvent_C_Received_Notify, CallFunc_PostEventAtLocation_ReturnValue) == 0x000110, "Member 'AnimNotify_AkEvent_C_Received_Notify::CallFunc_PostEventAtLocation_ReturnValue' has a wrong offset!");

}
