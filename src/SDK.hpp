#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Stalker2
// 5.1.1-0+++UE5+Release-5.1

// Includes the entire SDK, include files directly for faster compilation!

#include "SDK/Basic.hpp"
#include "SDK/CoreUObject_structs.hpp"
#include "SDK/CoreUObject_classes.hpp"
#include "SDK/SlateCore_structs.hpp"
#include "SDK/InputCore_structs.hpp"
#include "SDK/Slate_structs.hpp"
#include "SDK/PhysicsCore_structs.hpp"
#include "SDK/Chaos_structs.hpp"
#include "SDK/Engine_structs.hpp"
#include "SDK/CommonUI_structs.hpp"
#include "SDK/UMG_structs.hpp"
#include "SDK/MovieScene_structs.hpp"
#include "SDK/MovieScene_classes.hpp"
#include "SDK/NetCore_structs.hpp"
#include "SDK/NetCore_classes.hpp"
#include "SDK/AudioPlatformConfiguration_structs.hpp"
#include "SDK/PhysicsCore_classes.hpp"
#include "SDK/AudioExtensions_structs.hpp"
#include "SDK/AudioExtensions_classes.hpp"
#include "SDK/Engine_classes.hpp"
#include "SDK/UMG_classes.hpp"
#include "SDK/CommonInput_structs.hpp"
#include "SDK/GameplayTags_structs.hpp"
#include "SDK/CommonUI_classes.hpp"
#include "SDK/DeveloperSettings_structs.hpp"
#include "SDK/DeveloperSettings_classes.hpp"
#include "SDK/CommonInput_classes.hpp"
#include "SDK/W_HUDNotification_classes.hpp"
#include "SDK/PrefabAsset_structs.hpp"
#include "SDK/PrefabAsset_classes.hpp"
#include "SDK/ApexDestruction_structs.hpp"
#include "SDK/ApexDestruction_classes.hpp"
#include "SDK/SunPosition_structs.hpp"
#include "SDK/SunPosition_classes.hpp"
#include "SDK/NiagaraCore_structs.hpp"
#include "SDK/NiagaraCore_classes.hpp"
#include "SDK/Modio_structs.hpp"
#include "SDK/ModioUICore_structs.hpp"
#include "SDK/ModioUICore_classes.hpp"
#include "SDK/NiagaraShader_structs.hpp"
#include "SDK/Niagara_structs.hpp"
#include "SDK/NiagaraShader_classes.hpp"
#include "SDK/Niagara_classes.hpp"
#include "SDK/NiagaraAnimNotifies_structs.hpp"
#include "SDK/NiagaraAnimNotifies_classes.hpp"
#include "SDK/Water_structs.hpp"
#include "SDK/Water_classes.hpp"
#include "SDK/AIModule_structs.hpp"
#include "SDK/AIModule_classes.hpp"
#include "SDK/HairStrandsCore_structs.hpp"
#include "SDK/HairStrandsCore_classes.hpp"
#include "SDK/GeometryCache_structs.hpp"
#include "SDK/GeometryCache_classes.hpp"
#include "SDK/GeometryCacheTracks_structs.hpp"
#include "SDK/GeometryCacheTracks_classes.hpp"
#include "SDK/CinematicSubtitleTracks_structs.hpp"
#include "SDK/CinematicSubtitleTracks_classes.hpp"
#include "SDK/ActorLayerUtilities_structs.hpp"
#include "SDK/ActorLayerUtilities_classes.hpp"
#include "SDK/AnimationCore_structs.hpp"
#include "SDK/AnimGraphRuntime_structs.hpp"
#include "SDK/AnimBP_Player_DeadBody_structs.hpp"
#include "SDK/PhysicsControl_structs.hpp"
#include "SDK/PoseSearch_structs.hpp"
#include "SDK/EnhancedInput_structs.hpp"
#include "SDK/Stalker2_structs.hpp"
#include "SDK/AkAudio_structs.hpp"
#include "SDK/WwiseFileHandler_structs.hpp"
#include "SDK/WwiseResourceLoader_structs.hpp"
#include "SDK/AkAudio_classes.hpp"
#include "SDK/CinematicKeyFrameTracks_structs.hpp"
#include "SDK/Stalker2_classes.hpp"
#include "SDK/AnimBP_Player_DeadBody_classes.hpp"
#include "SDK/SequencerScripting_structs.hpp"
#include "SDK/SequencerScripting_classes.hpp"
#include "SDK/OpenColorIO_structs.hpp"
#include "SDK/OpenColorIO_classes.hpp"
#include "SDK/DmgTypeBP_Environmental_classes.hpp"
#include "SDK/Constraints_structs.hpp"
#include "SDK/ControlRig_structs.hpp"
#include "SDK/MovieSceneTracks_structs.hpp"
#include "SDK/MovieSceneTracks_classes.hpp"
#include "SDK/RigVM_structs.hpp"
#include "SDK/RigVM_classes.hpp"
#include "SDK/Constraints_classes.hpp"
#include "SDK/PropertyPath_structs.hpp"
#include "SDK/ControlRig_classes.hpp"
#include "SDK/MediaIOCore_structs.hpp"
#include "SDK/ImageWriteQueue_structs.hpp"
#include "SDK/MediaIOCore_classes.hpp"
#include "SDK/LevelSequence_structs.hpp"
#include "SDK/LevelSequence_classes.hpp"
#include "SDK/IKRig_structs.hpp"
#include "SDK/PBIK_structs.hpp"
#include "SDK/IKRig_classes.hpp"
#include "SDK/PoseSearch_classes.hpp"
#include "SDK/MotionTrajectory_structs.hpp"
#include "SDK/MotionTrajectory_classes.hpp"
#include "SDK/NavCorridor_structs.hpp"
#include "SDK/NavCorridor_classes.hpp"
#include "SDK/PoseSearchLocomotion_structs.hpp"
#include "SDK/PoseSearchLocomotion_classes.hpp"
#include "SDK/MotionWarping_structs.hpp"
#include "SDK/MotionWarping_classes.hpp"
#include "SDK/SkinnedDecalComponent_structs.hpp"
#include "SDK/SkinnedDecalComponent_classes.hpp"
#include "SDK/TakeMovieScene_classes.hpp"
#include "SDK/EnhancedInput_classes.hpp"
#include "SDK/CinematicKeyFrameTracks_classes.hpp"
#include "SDK/CinematicHapticFeedbackTracks_structs.hpp"
#include "SDK/CinematicHapticFeedbackTracks_classes.hpp"
#include "SDK/CinematicRazerChromaTracks_structs.hpp"
#include "SDK/CinematicRazerChromaTracks_classes.hpp"
#include "SDK/DLSS_structs.hpp"
#include "SDK/DLSS_classes.hpp"
#include "SDK/DLSSBlueprint_structs.hpp"
#include "SDK/DLSSBlueprint_classes.hpp"
#include "SDK/StreamlineBlueprint_structs.hpp"
#include "SDK/StreamlineBlueprint_classes.hpp"
#include "SDK/StreamlineRHI_structs.hpp"
#include "SDK/StreamlineRHI_classes.hpp"
#include "SDK/FlyCorridor_structs.hpp"
#include "SDK/FlyCorridor_classes.hpp"
#include "SDK/SectorSelector_structs.hpp"
#include "SDK/SectorSelector_classes.hpp"
#include "SDK/GameAnalytics_structs.hpp"
#include "SDK/GameAnalytics_classes.hpp"
#include "SDK/W_LocationMarker_classes.hpp"
#include "SDK/HttpNetworkReplayStreaming_structs.hpp"
#include "SDK/AnimationBudgetAllocator_structs.hpp"
#include "SDK/AnimationBudgetAllocator_classes.hpp"
#include "SDK/BinkMediaPlayer_structs.hpp"
#include "SDK/BinkMediaPlayer_classes.hpp"
#include "SDK/MediaAssets_structs.hpp"
#include "SDK/MediaAssets_classes.hpp"
#include "SDK/BinkMedia_classes.hpp"
#include "SDK/BP_Env_Crow_classes.hpp"
#include "SDK/PhysicsControl_classes.hpp"
#include "SDK/DiscordRpc_structs.hpp"
#include "SDK/DiscordRpc_classes.hpp"
#include "SDK/GSCLoadingScreen_structs.hpp"
#include "SDK/GSCLoadingScreen_classes.hpp"
#include "SDK/ACLPlugin_structs.hpp"
#include "SDK/ACLPlugin_classes.hpp"
#include "SDK/FFXFSR3Settings_structs.hpp"
#include "SDK/FFXFSR3Settings_classes.hpp"
#include "SDK/GameInputBase_structs.hpp"
#include "SDK/GameInputBase_classes.hpp"
#include "SDK/XeSSCore_classes.hpp"
#include "SDK/XeSSBlueprint_structs.hpp"
#include "SDK/XeSSBlueprint_classes.hpp"
#include "SDK/Reflex_structs.hpp"
#include "SDK/Reflex_classes.hpp"
#include "SDK/GeometryCollectionTracks_structs.hpp"
#include "SDK/GeometryCollectionTracks_classes.hpp"
#include "SDK/ProceduralMeshComponent_structs.hpp"
#include "SDK/ProceduralMeshComponent_classes.hpp"
#include "SDK/Wwise_classes.hpp"
#include "SDK/AudioLinkCore_classes.hpp"
#include "SDK/WwiseFileHandler_classes.hpp"
#include "SDK/WwiseObstructionOcclusion_classes.hpp"
#include "SDK/WwiseResourceLoader_classes.hpp"
#include "SDK/WwiseSimpleExternalSource_structs.hpp"
#include "SDK/WwiseSimpleExternalSource_classes.hpp"
#include "SDK/NavArea_QuestHub_Asulym_classes.hpp"
#include "SDK/VoiceGen_structs.hpp"
#include "SDK/VoiceGen_classes.hpp"
#include "SDK/Paper2D_structs.hpp"
#include "SDK/Paper2D_classes.hpp"
#include "SDK/LevelBookmarks_structs.hpp"
#include "SDK/LevelBookmarks_classes.hpp"
#include "SDK/AssetRegistry_structs.hpp"
#include "SDK/AssetRegistry_classes.hpp"
#include "SDK/Modio_classes.hpp"
#include "SDK/ModioEx_structs.hpp"
#include "SDK/ModioEx_classes.hpp"
#include "SDK/ModioUI_structs.hpp"
#include "SDK/ModioUI_classes.hpp"
#include "SDK/Tether_structs.hpp"
#include "SDK/Tether_classes.hpp"
#include "SDK/WwiseNiagara_classes.hpp"
#include "SDK/GameplayCameras_structs.hpp"
#include "SDK/GameplayCameras_classes.hpp"
#include "SDK/TemplateSequence_structs.hpp"
#include "SDK/CinematicCamera_structs.hpp"
#include "SDK/TemplateSequence_classes.hpp"
#include "SDK/W_RegionMarker_classes.hpp"
#include "SDK/OodleNetworkHandlerComponent_structs.hpp"
#include "SDK/OodleNetworkHandlerComponent_classes.hpp"
#include "SDK/EngineMessages_structs.hpp"
#include "SDK/AnimationSharing_structs.hpp"
#include "SDK/AnimationSharing_classes.hpp"
#include "SDK/W_ControlSettingsPopup_classes.hpp"
#include "SDK/SignificanceManager_classes.hpp"
#include "SDK/NavArea_QuestOut_2_classes.hpp"
#include "SDK/SessionMessages_structs.hpp"
#include "SDK/UObjectPlugin_structs.hpp"
#include "SDK/UObjectPlugin_classes.hpp"
#include "SDK/FacialAnimation_classes.hpp"
#include "SDK/VariantManagerContent_structs.hpp"
#include "SDK/VariantManagerContent_classes.hpp"
#include "SDK/AutomationUtils_classes.hpp"
#include "SDK/ClothingSystemRuntimeInterface_structs.hpp"
#include "SDK/ClothingSystemRuntimeInterface_classes.hpp"
#include "SDK/NavArea_QuestHub_Rostok_classes.hpp"
#include "SDK/ClothingSystemRuntimeCommon_structs.hpp"
#include "SDK/ClothingSystemRuntimeCommon_classes.hpp"
#include "SDK/ChaosCloth_structs.hpp"
#include "SDK/ChaosCloth_classes.hpp"
#include "SDK/ChaosCaching_structs.hpp"
#include "SDK/ChaosCaching_classes.hpp"
#include "SDK/ChaosNiagara_structs.hpp"
#include "SDK/ChaosNiagara_classes.hpp"
#include "SDK/ImgMedia_structs.hpp"
#include "SDK/ImgMedia_classes.hpp"
#include "SDK/ImgMediaEngine_classes.hpp"
#include "SDK/ImgMediaFactory_classes.hpp"
#include "SDK/MediaCompositing_structs.hpp"
#include "SDK/MediaCompositing_classes.hpp"
#include "SDK/TcpMessaging_classes.hpp"
#include "SDK/UdpMessaging_structs.hpp"
#include "SDK/UdpMessaging_classes.hpp"
#include "SDK/ActorSequence_structs.hpp"
#include "SDK/ActorSequence_classes.hpp"
#include "SDK/OnlineSubsystem_structs.hpp"
#include "SDK/OnlineSubsystem_classes.hpp"
#include "SDK/OnlineSubsystemUtils_structs.hpp"
#include "SDK/OnlineSubsystemUtils_classes.hpp"
#include "SDK/AudioMixer_structs.hpp"
#include "SDK/AudioMixer_classes.hpp"
#include "SDK/AssetTags_structs.hpp"
#include "SDK/AssetTags_classes.hpp"
#include "SDK/CableComponent_classes.hpp"
#include "SDK/CustomMeshComponent_structs.hpp"
#include "SDK/CustomMeshComponent_classes.hpp"
#include "SDK/TraceUtilities_classes.hpp"
#include "SDK/BP_env_water_duckweed_01_a_classes.hpp"
#include "SDK/OnlineSubsystemGDK_classes.hpp"
#include "SDK/NavigationSystem_structs.hpp"
#include "SDK/NavigationSystem_classes.hpp"
#include "SDK/AnimationCore_classes.hpp"
#include "SDK/InputCore_classes.hpp"
#include "SDK/SlateCore_classes.hpp"
#include "SDK/Slate_classes.hpp"
#include "SDK/ImageWriteQueue_classes.hpp"
#include "SDK/MaterialShaderQualitySettings_structs.hpp"
#include "SDK/MaterialShaderQualitySettings_classes.hpp"
#include "SDK/EyeTracker_structs.hpp"
#include "SDK/EyeTracker_classes.hpp"
#include "SDK/EngineSettings_structs.hpp"
#include "SDK/EngineSettings_classes.hpp"
#include "SDK/MRMesh_structs.hpp"
#include "SDK/MRMesh_classes.hpp"
#include "SDK/W_HintViewKeyboard_classes.hpp"
#include "SDK/AugmentedReality_structs.hpp"
#include "SDK/AugmentedReality_classes.hpp"
#include "SDK/HeadMountedDisplay_structs.hpp"
#include "SDK/HeadMountedDisplay_classes.hpp"
#include "SDK/BuildPatchServices_structs.hpp"
#include "SDK/BuildPatchServices_classes.hpp"
#include "SDK/SRLEAsset_classes.hpp"
#include "SDK/TypedElementFramework_structs.hpp"
#include "SDK/TypedElementFramework_classes.hpp"
#include "SDK/Foliage_structs.hpp"
#include "SDK/Foliage_classes.hpp"
#include "SDK/Landscape_structs.hpp"
#include "SDK/Landscape_classes.hpp"
#include "SDK/TimeManagement_structs.hpp"
#include "SDK/TimeManagement_classes.hpp"
#include "SDK/MeshDescription_structs.hpp"
#include "SDK/MeshDescription_classes.hpp"
#include "SDK/StaticMeshDescription_structs.hpp"
#include "SDK/StaticMeshDescription_classes.hpp"
#include "SDK/ChaosSolverEngine_structs.hpp"
#include "SDK/ChaosSolverEngine_classes.hpp"
#include "SDK/DropBodyHint_classes.hpp"
#include "SDK/FieldSystemEngine_structs.hpp"
#include "SDK/FieldSystemEngine_classes.hpp"
#include "SDK/DataflowEngine_classes.hpp"
#include "SDK/GeometryCollectionEngine_structs.hpp"
#include "SDK/GeometryCollectionEngine_classes.hpp"
#include "SDK/W_Compass_classes.hpp"
#include "SDK/AnimGraphRuntime_classes.hpp"
#include "SDK/BP_Water_base_classes.hpp"
#include "SDK/TypedElementRuntime_structs.hpp"
#include "SDK/TypedElementRuntime_classes.hpp"
#include "SDK/CinematicCamera_classes.hpp"
#include "SDK/AudioLinkEngine_classes.hpp"
#include "SDK/JsonUtilities_structs.hpp"
#include "SDK/JsonUtilities_classes.hpp"
#include "SDK/IrisStub_structs.hpp"
#include "SDK/IrisStub_classes.hpp"
#include "SDK/GameplayTags_classes.hpp"
#include "SDK/PacketHandler_classes.hpp"
#include "SDK/MovieSceneCapture_structs.hpp"
#include "SDK/MovieSceneCapture_classes.hpp"
#include "SDK/MoviePlayer_structs.hpp"
#include "SDK/MoviePlayer_classes.hpp"
#include "SDK/Overlay_structs.hpp"
#include "SDK/Overlay_classes.hpp"
#include "SDK/ClothingSystemRuntimeNv_structs.hpp"
#include "SDK/ClothingSystemRuntimeNv_classes.hpp"
#include "SDK/GameplayTasks_structs.hpp"
#include "SDK/GameplayTasks_classes.hpp"
#include "SDK/Landmass_structs.hpp"
#include "SDK/FullBodyIK_structs.hpp"
#include "SDK/AnimationWarpingRuntime_structs.hpp"
#include "SDK/W_SaveLoadDefaultNotification_classes.hpp"
#include "SDK/GeometryCollectionNodes_structs.hpp"
#include "SDK/ControlRigSpline_structs.hpp"
#include "SDK/CoreOnline_structs.hpp"
#include "SDK/MediaUtils_structs.hpp"
#include "SDK/W_Image_classes.hpp"
#include "SDK/LocalFileNetworkReplayStreaming_structs.hpp"
#include "SDK/VectorVM_structs.hpp"
#include "SDK/DataflowCore_structs.hpp"
#include "SDK/DataflowNodes_structs.hpp"
#include "SDK/WwiseObjectUtils_structs.hpp"
#include "SDK/Serialization_structs.hpp"
#include "SDK/WidgetCarousel_structs.hpp"
#include "SDK/NavArea_QuestOut_classes.hpp"
#include "SDK/NavArea_ALifeIn_classes.hpp"
#include "SDK/NavArea_ALifeInQuestOut_classes.hpp"
#include "SDK/NavArea_QuestHub_Terricon_classes.hpp"
#include "SDK/NavArea_QuestIn_classes.hpp"
#include "SDK/NavArea_QuestHub_Zalesie_classes.hpp"
#include "SDK/NavArea_QuestHub_Ikar_classes.hpp"
#include "SDK/NavArea_QuestHub_Himzavod_classes.hpp"
#include "SDK/NavArea_QuestHub_Skadovsk_classes.hpp"
#include "SDK/NavArea_QuestHub_Shevchenko_classes.hpp"
#include "SDK/NavArea_QuestHub_ConcretePlant_classes.hpp"
#include "SDK/NavArea_QuestHub_Malahit_classes.hpp"
#include "SDK/BP_Water_1x1_01_classes.hpp"
#include "SDK/NavArea_QuestHub_Yanov_classes.hpp"
#include "SDK/NavArea_QuestHub_DKEnergetik_classes.hpp"
#include "SDK/Stalker2BPGlobal_classes.hpp"
#include "SDK/W_WaterElement_classes.hpp"
#include "SDK/W_UserWaterElement_classes.hpp"
#include "SDK/E_AmLightMeshType_structs.hpp"
#include "SDK/BP_L_AmbientLight_classes.hpp"
#include "SDK/W_UserWaterElementText_classes.hpp"
#include "SDK/W_LocalizedImage_classes.hpp"
#include "SDK/W_WhiteBridgeBetweenCutsceneLoadingScreen_classes.hpp"
#include "SDK/W_DefaultTimedLoadingScreen_classes.hpp"
#include "SDK/W_LoadingScreenVignette_classes.hpp"
#include "SDK/W_LoadingScreen_classes.hpp"
#include "SDK/W_VideoLoadingScreen_classes.hpp"
#include "SDK/W_TeleportLoadingScreen_classes.hpp"
#include "SDK/W_PopupView_classes.hpp"
#include "SDK/CommonTextScrollStyle_classes.hpp"
#include "SDK/W_ActionMimicButton_classes.hpp"
#include "SDK/W_HintImageGamepad_classes.hpp"
#include "SDK/W_Text_classes.hpp"
#include "SDK/W_SpecialPopupBackground_classes.hpp"
#include "SDK/W_PopupBackground_classes.hpp"
#include "SDK/W_HubMarker_classes.hpp"
#include "SDK/W_HyperlinkButton_classes.hpp"
#include "SDK/W_HintViewGamepad_classes.hpp"
#include "SDK/ModifiableRichTextDecorator_BP_classes.hpp"
#include "SDK/W_HintImageKeyboard_classes.hpp"
#include "SDK/W_ModifiableRichText_classes.hpp"
#include "SDK/W_ControlSettingsKeyImage_classes.hpp"
#include "SDK/W_HintInputController_classes.hpp"
#include "SDK/W_TermsOfUsePopup_classes.hpp"
#include "SDK/W_GreetingsPopup_classes.hpp"
#include "SDK/W_Popup_classes.hpp"
#include "SDK/W_DemoPopup_classes.hpp"
#include "SDK/ControlSettingsPopupDecorator_classes.hpp"
#include "SDK/W_SaveLoadNotification_classes.hpp"
#include "SDK/W_SaveLoadNotificationView_classes.hpp"
#include "SDK/W_SaveLoadNotificationBackground_classes.hpp"
#include "SDK/BP_BaseFog_Weather_classes.hpp"
#include "SDK/BP_Env_Fog_RiverLake_Weather_classes.hpp"
#include "SDK/BP_Env_Bat_classes.hpp"
#include "SDK/BP_Water_50x50_01_classes.hpp"
#include "SDK/WeatherController_BP_classes.hpp"
#include "SDK/WBP_JiraBookmarksFlag_classes.hpp"
#include "SDK/BP_JiraBookmarksFlag_classes.hpp"
#include "SDK/W_WorldMapMarker_classes.hpp"
#include "SDK/W_CompassMarker_classes.hpp"
#include "SDK/BP_Env_Butterfly_classes.hpp"
#include "SDK/BP_ShineRiftAurora_classes.hpp"
#include "SDK/BP_Env_Fog_classes.hpp"
#include "SDK/BP_env_water_duckweed_01_b_classes.hpp"
#include "SDK/BP_env_water_duckweed_01_c_classes.hpp"
#include "SDK/W_CrosshairPoint_classes.hpp"
#include "SDK/W_ThreatIndicator_classes.hpp"
#include "SDK/GuitarPCAHint_classes.hpp"
#include "SDK/W_SkipKeyHint_classes.hpp"
#include "SDK/W_Background_classes.hpp"
#include "SDK/W_CrosshairCross_classes.hpp"
#include "SDK/W_HUDHintPanel_classes.hpp"
#include "SDK/W_LocalizationWidget_classes.hpp"
#include "SDK/BP_RichTextImageDecorator_classes.hpp"
#include "SDK/W_FireType_classes.hpp"
#include "SDK/W_QuickSlotHUD_classes.hpp"
#include "SDK/W_QuestNotificationHeader_classes.hpp"
#include "SDK/W_SystemNotificationItem_classes.hpp"
#include "SDK/W_Task_Slot_Notification_classes.hpp"
#include "SDK/W_AmmoPanel_classes.hpp"
#include "SDK/HUDTextDecorator_classes.hpp"
#include "SDK/W_CrosshairArc_classes.hpp"
#include "SDK/W_CrosshairCirle_classes.hpp"
#include "SDK/W_SystemNotification_classes.hpp"
#include "SDK/HintDecoratorBP_classes.hpp"
#include "SDK/W_QuickPanelHUD_classes.hpp"
#include "SDK/HUDContextualLegend_classes.hpp"
#include "SDK/W_Crosshair_classes.hpp"
#include "SDK/W_Slot_Notification_classes.hpp"
#include "SDK/W_StatSlot_classes.hpp"
#include "SDK/W_Hint_Console_classes.hpp"
#include "SDK/W_Hint_PC_classes.hpp"
#include "SDK/W_StatSlotBleeding_classes.hpp"
#include "SDK/HintSwitcher_classes.hpp"
#include "SDK/W_UpdatedStatPanel_classes.hpp"
#include "SDK/W_Hint_Rich_classes.hpp"
#include "SDK/W_GameHUD_classes.hpp"
#include "SDK/AnimNotify_AkEvent_classes.hpp"
#include "SDK/CtrlRig_Exoskeleton_classes.hpp"
#include "SDK/AnimBP_player_dummy_structs.hpp"
#include "SDK/AnimBP_player_dummy_classes.hpp"
#include "SDK/AnimBP_player_bh_structs.hpp"
#include "SDK/AnimBP_player_bh_classes.hpp"
#include "SDK/AnimBP_Player_Slots_structs.hpp"
#include "SDK/AnimBP_Player_Slots_classes.hpp"
#include "SDK/AnimBP_Player_Shadow_structs.hpp"
#include "SDK/AnimBP_Player_Shadow_classes.hpp"
#include "SDK/AnimBP_Player_structs.hpp"
#include "SDK/AnimBP_Player_classes.hpp"
#include "SDK/BP_Stalker2Character_classes.hpp"
#include "SDK/S_LightPresset_Color_structs.hpp"
#include "SDK/S_LightPresset_structs.hpp"
#include "SDK/S_LightPresset_Radius_structs.hpp"
#include "SDK/BP_Water_100x100_01_classes.hpp"
#include "SDK/BP_Water_10x10_01_classes.hpp"
#include "SDK/BP_Light_Base_classes.hpp"
#include "SDK/BP_Light_Param_classes.hpp"
#include "SDK/BP_L_ind_lamp_03_classes.hpp"
#include "SDK/W_ThreatPointer_classes.hpp"
#include "SDK/AnimBP_Player_WeaponAutoCover_structs.hpp"
#include "SDK/AnimBP_Player_WeaponAutoCover_classes.hpp"
#include "SDK/AnimBP_Player_pm_structs.hpp"
#include "SDK/AnimBP_Player_pm_classes.hpp"
#include "SDK/BP_WorldMapScene_classes.hpp"
#include "SDK/AnimBP_pm_fp_structs.hpp"
#include "SDK/AnimBP_pm_fp_classes.hpp"
#include "SDK/CS_Shoot_PM_classes.hpp"
#include "SDK/BP_A918D_classes.hpp"