#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Interactable_Note_Base

#include "Basic.hpp"

#include "BP_Interactable_Note_Base_classes.hpp"
#include "BP_Interactable_Note_Base_parameters.hpp"


namespace SDK
{

// Function BP_Interactable_Note_Base.BP_Interactable_Note_Base_C.BndEvt__BP_Interactable_Note_SingleClick_K2Node_ComponentBoundEvent_0_InteractSignature__DelegateSignature
// (BlueprintEvent)

void ABP_Interactable_Note_Base_C::BndEvt__BP_Interactable_Note_SingleClick_K2Node_ComponentBoundEvent_0_InteractSignature__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Interactable_Note_Base_C", "BndEvt__BP_Interactable_Note_SingleClick_K2Node_ComponentBoundEvent_0_InteractSignature__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Interactable_Note_Base.BP_Interactable_Note_Base_C.ExecuteUbergraph_BP_Interactable_Note_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Interactable_Note_Base_C::ExecuteUbergraph_BP_Interactable_Note_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Interactable_Note_Base_C", "ExecuteUbergraph_BP_Interactable_Note_Base");

	Params::BP_Interactable_Note_Base_C_ExecuteUbergraph_BP_Interactable_Note_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Interactable_Note_Base.BP_Interactable_Note_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Interactable_Note_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Interactable_Note_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

