#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Stalker2Character

#include "Basic.hpp"

#include "BP_Stalker2Character_classes.hpp"
#include "BP_Stalker2Character_parameters.hpp"


namespace SDK
{

// Function BP_Stalker2Character.BP_Stalker2Character_C.ExecuteUbergraph_BP_Stalker2Character
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Stalker2Character_C::ExecuteUbergraph_BP_Stalker2Character(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stalker2Character_C", "ExecuteUbergraph_BP_Stalker2Character");

	Params::BP_Stalker2Character_C_ExecuteUbergraph_BP_Stalker2Character Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stalker2Character.BP_Stalker2Character_C.InpActEvt_Zero_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Stalker2Character_C::InpActEvt_Zero_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stalker2Character_C", "InpActEvt_Zero_K2Node_InputKeyEvent_0");

	Params::BP_Stalker2Character_C_InpActEvt_Zero_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stalker2Character.BP_Stalker2Character_C.OnJumped
// (Event, Public, BlueprintEvent)

void ABP_Stalker2Character_C::OnJumped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stalker2Character_C", "OnJumped");

	UObject::ProcessEvent(Func, nullptr);
}

}
