#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CinematicRazerChromaTracks

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "MovieScene_structs.hpp"


namespace SDK
{

// ScriptStruct CinematicRazerChromaTracks.CinematicRazerChromaData
// 0x000C (0x000C - 0x0000)
struct FCinematicRazerChromaData final
{
public:
	struct FGameplayTag                           AnimationTag;                                      // 0x0000(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bContinuous;                                       // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCinematicRazerChromaData) == 0x000004, "Wrong alignment on FCinematicRazerChromaData");
static_assert(sizeof(FCinematicRazerChromaData) == 0x00000C, "Wrong size on FCinematicRazerChromaData");
static_assert(offsetof(FCinematicRazerChromaData, AnimationTag) == 0x000000, "Member 'FCinematicRazerChromaData::AnimationTag' has a wrong offset!");
static_assert(offsetof(FCinematicRazerChromaData, bContinuous) == 0x000008, "Member 'FCinematicRazerChromaData::bContinuous' has a wrong offset!");

// ScriptStruct CinematicRazerChromaTracks.MovieSceneRazerChromaEventTemplate
// 0x0010 (0x0030 - 0x0020)
struct FMovieSceneRazerChromaEventTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FCinematicRazerChromaData              Data;                                              // 0x0020(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMovieSceneRazerChromaEventTemplate) == 0x000008, "Wrong alignment on FMovieSceneRazerChromaEventTemplate");
static_assert(sizeof(FMovieSceneRazerChromaEventTemplate) == 0x000030, "Wrong size on FMovieSceneRazerChromaEventTemplate");
static_assert(offsetof(FMovieSceneRazerChromaEventTemplate, Data) == 0x000020, "Member 'FMovieSceneRazerChromaEventTemplate::Data' has a wrong offset!");

}
