#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Latch_Cit

#include "Basic.hpp"

#include "BP_Latch_Cit_classes.hpp"
#include "BP_Latch_Cit_parameters.hpp"


namespace SDK
{

// Function BP_Latch_Cit.BP_Latch_Cit_C.BndEvt__BP_Latch_ReceiverUnlock_K2Node_ComponentBoundEvent_1_SignalReceiverComponentReceiveSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          DataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Latch_Cit_C::BndEvt__BP_Latch_ReceiverUnlock_K2Node_ComponentBoundEvent_1_SignalReceiverComponentReceiveSignature__DelegateSignature(class UObject* DataObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Latch_Cit_C", "BndEvt__BP_Latch_ReceiverUnlock_K2Node_ComponentBoundEvent_1_SignalReceiverComponentReceiveSignature__DelegateSignature");

	Params::BP_Latch_Cit_C_BndEvt__BP_Latch_ReceiverUnlock_K2Node_ComponentBoundEvent_1_SignalReceiverComponentReceiveSignature__DelegateSignature Parms{};

	Parms.DataObject = DataObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Latch_Cit.BP_Latch_Cit_C.BndEvt__BP_Latch_SingleClick_K2Node_ComponentBoundEvent_0_InteractSignature__DelegateSignature
// (BlueprintEvent)

void ABP_Latch_Cit_C::BndEvt__BP_Latch_SingleClick_K2Node_ComponentBoundEvent_0_InteractSignature__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Latch_Cit_C", "BndEvt__BP_Latch_SingleClick_K2Node_ComponentBoundEvent_0_InteractSignature__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Latch_Cit.BP_Latch_Cit_C.ExecuteUbergraph_BP_Latch_Cit
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Latch_Cit_C::ExecuteUbergraph_BP_Latch_Cit(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Latch_Cit_C", "ExecuteUbergraph_BP_Latch_Cit");

	Params::BP_Latch_Cit_C_ExecuteUbergraph_BP_Latch_Cit Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Latch_Cit.BP_Latch_Cit_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Latch_Cit_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Latch_Cit_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
