#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_AkEvent

#include "Basic.hpp"

#include "Stalker2_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_AkEvent.AnimNotify_AkEvent_C
// 0x0030 (0x0068 - 0x0038)
class UAnimNotify_AkEvent_C final : public UAnimNotify_RetargetedAkEvent
{
public:
	class FString                                 Attach_Name;                                       // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Event;                                             // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Follow;                                            // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 EventName;                                         // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_AkEvent_C">();
	}
	static class UAnimNotify_AkEvent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_AkEvent_C>();
	}
};
static_assert(alignof(UAnimNotify_AkEvent_C) == 0x000008, "Wrong alignment on UAnimNotify_AkEvent_C");
static_assert(sizeof(UAnimNotify_AkEvent_C) == 0x000068, "Wrong size on UAnimNotify_AkEvent_C");
static_assert(offsetof(UAnimNotify_AkEvent_C, Attach_Name) == 0x000038, "Member 'UAnimNotify_AkEvent_C::Attach_Name' has a wrong offset!");
static_assert(offsetof(UAnimNotify_AkEvent_C, Event) == 0x000048, "Member 'UAnimNotify_AkEvent_C::Event' has a wrong offset!");
static_assert(offsetof(UAnimNotify_AkEvent_C, Follow) == 0x000050, "Member 'UAnimNotify_AkEvent_C::Follow' has a wrong offset!");
static_assert(offsetof(UAnimNotify_AkEvent_C, EventName) == 0x000058, "Member 'UAnimNotify_AkEvent_C::EventName' has a wrong offset!");

}
