#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_player_dummy

#include "Basic.hpp"

#include "AnimBP_player_dummy_classes.hpp"
#include "AnimBP_player_dummy_parameters.hpp"


namespace SDK
{

// Function AnimBP_player_dummy.AnimBP_player_dummy_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UAnimBP_player_dummy_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_player_dummy_C", "AnimGraph");

	Params::AnimBP_player_dummy_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function AnimBP_player_dummy.AnimBP_player_dummy_C.ExecuteUbergraph_AnimBP_player_dummy
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_player_dummy_C::ExecuteUbergraph_AnimBP_player_dummy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_player_dummy_C", "ExecuteUbergraph_AnimBP_player_dummy");

	Params::AnimBP_player_dummy_C_ExecuteUbergraph_AnimBP_player_dummy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
