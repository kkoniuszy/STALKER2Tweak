#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_AttachImage

#include "Basic.hpp"


namespace SDK::Params
{

// Function W_AttachImage.W_AttachImage_C.ExecuteUbergraph_W_AttachImage
// 0x0010 (0x0010 - 0x0000)
struct W_AttachImage_C_ExecuteUbergraph_W_AttachImage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_CustomEvent_Texture;                        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_AttachImage_C_ExecuteUbergraph_W_AttachImage) == 0x000008, "Wrong alignment on W_AttachImage_C_ExecuteUbergraph_W_AttachImage");
static_assert(sizeof(W_AttachImage_C_ExecuteUbergraph_W_AttachImage) == 0x000010, "Wrong size on W_AttachImage_C_ExecuteUbergraph_W_AttachImage");
static_assert(offsetof(W_AttachImage_C_ExecuteUbergraph_W_AttachImage, EntryPoint) == 0x000000, "Member 'W_AttachImage_C_ExecuteUbergraph_W_AttachImage::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_AttachImage_C_ExecuteUbergraph_W_AttachImage, K2Node_CustomEvent_Texture) == 0x000008, "Member 'W_AttachImage_C_ExecuteUbergraph_W_AttachImage::K2Node_CustomEvent_Texture' has a wrong offset!");

// Function W_AttachImage.W_AttachImage_C.LoadImage
// 0x0008 (0x0008 - 0x0000)
struct W_AttachImage_C_LoadImage final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_AttachImage_C_LoadImage) == 0x000008, "Wrong alignment on W_AttachImage_C_LoadImage");
static_assert(sizeof(W_AttachImage_C_LoadImage) == 0x000008, "Wrong size on W_AttachImage_C_LoadImage");
static_assert(offsetof(W_AttachImage_C_LoadImage, Texture) == 0x000000, "Member 'W_AttachImage_C_LoadImage::Texture' has a wrong offset!");

}
