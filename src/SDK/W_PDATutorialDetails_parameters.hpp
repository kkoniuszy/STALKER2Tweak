#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PDATutorialDetails

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_PDATutorialDetails.W_PDATutorialDetails_C.Get_AudioPlayButton_bIsEnabled
// 0x0002 (0x0002 - 0x0000)
struct W_PDATutorialDetails_C_Get_AudioPlayButton_bIsEnabled final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanPlayAudiolog_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PDATutorialDetails_C_Get_AudioPlayButton_bIsEnabled) == 0x000001, "Wrong alignment on W_PDATutorialDetails_C_Get_AudioPlayButton_bIsEnabled");
static_assert(sizeof(W_PDATutorialDetails_C_Get_AudioPlayButton_bIsEnabled) == 0x000002, "Wrong size on W_PDATutorialDetails_C_Get_AudioPlayButton_bIsEnabled");
static_assert(offsetof(W_PDATutorialDetails_C_Get_AudioPlayButton_bIsEnabled, ReturnValue) == 0x000000, "Member 'W_PDATutorialDetails_C_Get_AudioPlayButton_bIsEnabled::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PDATutorialDetails_C_Get_AudioPlayButton_bIsEnabled, CallFunc_CanPlayAudiolog_ReturnValue) == 0x000001, "Member 'W_PDATutorialDetails_C_Get_AudioPlayButton_bIsEnabled::CallFunc_CanPlayAudiolog_ReturnValue' has a wrong offset!");

}

