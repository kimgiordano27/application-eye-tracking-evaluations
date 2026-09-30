/*
FUNCTION_NAME: FUN_0681e964
ENTRY_POINT: 0681e964
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;data_collection;telemetry;frame_behavior;keyword_support
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_4;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_18;strong_file_logging_hits_9;telemetry_or_network_hits_12;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;negative_generic_rendering_without_foveation_or_eye_source;negative_generic_render_terms_without_foveation
*/


void FUN_0681e964(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  
  puVar2 = OVR_OpenVR_IVRExtendedDisplay__GetDXGIOutputInfo_TypeInfo;
  puVar1 = OVR_OpenVR_IVRDriverManager__GetDriverName_TypeInfo;
  if ((bRam00000000071d694b & 1) == 0) {
    FUN_02f07e70(OVR_OpenVR_IVRExtendedDisplay__GetEyeOutputViewport_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRExtendedDisplay__GetWindowBounds_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRIOBuffer__Close_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRExtendedDisplay__GetDXGIOutputInfo_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRIOBuffer__Open_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRIOBuffer__PropertyContainer_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRIOBuffer__Read_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRIOBuffer__Write_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRDriverManager__GetDriverName_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRInput__DecompressSkeletalBoneData_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRInput__GetActionHandle_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRInput__GetActionOrigins_TypeInfo);
    FUN_02f07e70(HurricaneVR_Framework_Weapons_Guns_HVRPooledEmitter_HVRPooledObjectTracker_TypeInfo
                );
    FUN_02f07e70(System_Net_Http_Headers_HttpHeaders_<GetEnumerator>d__19_TypeInfo);
    FUN_02f07e70(System_Net_Http_Headers_HttpHeaders_HeaderBucket_TypeInfo);
    FUN_02f07e70(System_Net_HttpListenerRequest_Context_TypeInfo);
    FUN_02f07e70(System_Net_HttpListenerRequest_GCCDelegate_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d62ee0);
    FUN_02f07e70(RootMotion_FinalIK_IKMapping_BoneMap_TypeInfo);
    FUN_02f07e70(RootMotion_FinalIK_IKSolver_Point_TypeInfo);
    FUN_02f07e70(RootMotion_FinalIK_IKSolver_UpdateDelegate_TypeInfo);
    FUN_02f07e70(RootMotion_FinalIK_IKSolverVR_Arm_TypeInfo);
    FUN_02f07e70(RootMotion_FinalIK_IKSolverVR_Footstep_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3ab80);
    FUN_02f07e70(Liv_Lck_ILckAudioSource_AudioDataCallbackDelegate_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_IMGUIEvent_<>c_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d49820);
    FUN_02f07e70(System_Net_IPAddress_ReadOnlyIPAddress_TypeInfo);
    FUN_02f07e70(ExitGames_Client_Photon_IPhotonSocket_<>c_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRApplications__CancelApplicationLaunch_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3ab88);
    FUN_02f07e70(OVR_OpenVR_IVRApplications__GetApplicationCount_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRApplications__GetApplicationKeyByProcessId_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRApplications__GetApplicationPropertyString_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRApplications__GetApplicationSupportedMimeTypes_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRApplications__GetApplicationsErrorNameFromEnum_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRApplications__GetApplicationsThatSupportMimeType_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRApplications__GetApplicationsTransitionStateNameFromEnum_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRApplications__GetCurrentSceneProcessId_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRApplications__GetDefaultApplicationForMimeType_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRApplications__GetTransitionState_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRApplications__IdentifyApplication_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d7e2e0);
    FUN_02f07e70(PTR_DAT_06d444d0);
    FUN_02f07e70(OVR_OpenVR_IVRApplications__LaunchInternalProcess_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRApplications__LaunchTemplateApplication_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRApplications__PerformApplicationPrelaunchCheck_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d044f8);
    FUN_02f07e70(OVR_OpenVR_IVRApplications__SetApplicationAutoLaunch_TypeInfo);
    FUN_02f07e70(System_Xml_XmlTextWriter_State___TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRApplications__SetDefaultApplicationForMimeType_TypeInfo);
    FUN_02f07e70(System_Xml_XmlTextWriter_TagInfo___TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRChaperone__ForceBoundsVisible_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRChaperone__GetBoundsColor_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRChaperone__GetPlayAreaRect_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRChaperone__GetPlayAreaSize_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRChaperone__ReloadInfo_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRChaperoneSetup__ExportLiveToBuffer_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsInfo_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d03240);
    FUN_02f07e70(PTR_DAT_06d049d0);
    FUN_02f07e70(OVR_OpenVR_IVRChaperoneSetup__GetWorkingPlayAreaRect_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRChaperoneSetup__GetWorkingPlayAreaSize_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d44cf8);
    FUN_02f07e70(OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose_TypeInfo)
    ;
    FUN_02f07e70(OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRChaperoneSetup__ReloadFromDisk_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRChaperoneSetup__SetWorkingPlayAreaSize_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d53ca0);
    FUN_02f07e70(OVR_OpenVR_IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRCompositor__CanRenderScene_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRCompositor__ClearLastSubmittedFrame_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRCompositor__CompositorBringToFront_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRCompositor__FadeGrid_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRCompositor__FadeToColor_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d032e8);
    FUN_02f07e70(OVR_OpenVR_IVRCompositor__GetCurrentFadeColor_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRCompositor__GetCurrentGridAlpha_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRCompositor__GetCurrentSceneFocusProcess_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRCompositor__GetFrameTimeRemaining_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRCompositor__GetFrameTiming_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRCompositor__GetFrameTimings_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRCompositor__GetLastFrameRenderer_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRCompositor__GetLastPoseForTrackedDeviceIndex_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRCompositor__GetMirrorTextureD3D11_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRCompositor__GetMirrorTextureGL_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRCompositor__GetTrackingSpace_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRCompositor__GetVulkanInstanceExtensionsRequired_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d045b0);
    FUN_02f07e70(PTR_DAT_06d43f20);
    FUN_02f07e70(OVR_OpenVR_IVRCompositor__PostPresentHandoff_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRCompositor__ReleaseSharedGLTexture_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRCompositor__SetExplicitTimingMode_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRCompositor__SetTrackingSpace_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d05840);
    FUN_02f07e70(OVR_OpenVR_IVRCompositor__ShouldAppRenderWithLowResources_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRCompositor__Submit_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRCompositor__SubmitExplicitTimingData_TypeInfo);
    FUN_02f07e70(OVR_OpenVR_IVRCompositor__SuspendRendering_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d12128);
    FUN_02f07e70(PTR_DAT_06d05a30);
    bRam00000000071d694b = 1;
  }
  lVar7 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
  FUN_04c6d7b4(lVar7,*(undefined8 *)puVar2);
  puVar6 = OVR_OpenVR_IVRExtendedDisplay__GetEyeOutputViewport_TypeInfo;
  puVar5 = OVR_OpenVR_IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose_TypeInfo;
  puVar4 = OVR_OpenVR_IVRApplications__SetDefaultApplicationForMimeType_TypeInfo;
  puVar3 = OVR_OpenVR_IVRApplications__LaunchTemplateApplication_TypeInfo;
  puVar2 = RootMotion_FinalIK_IKSolver_Point_TypeInfo;
  puVar1 = PTR_DAT_06d12128;
  if (lVar7 != 0) {
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRChaperoneSetup__GetWorkingPlayAreaSize_TypeInfo,
                 0x20000,*(undefined8 *)OVR_OpenVR_IVRExtendedDisplay__GetEyeOutputViewport_TypeInfo
                );
    FUN_04c6e184(lVar7,*(undefined8 *)puVar3,0x20001,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)puVar2,0x20002,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)puVar1,0x40000,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)puVar4,0x70000,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)puVar5,0x70001,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRCompositor__GetTrackingSpace_TypeInfo,0x40001,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRApplications__GetTransitionState_TypeInfo,
                 0x70002,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRApplications__SetApplicationAutoLaunch_TypeInfo,
                 0x70003,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRCompositor__SetTrackingSpace_TypeInfo,0x70004,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRChaperone__GetPlayAreaRect_TypeInfo,0x70005,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRCompositor__GetMirrorTextureD3D11_TypeInfo,
                 0x70006,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo
                 ,0x70007,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRChaperone__ReloadInfo_TypeInfo,0x70008,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRCompositor__ReleaseSharedGLTexture_TypeInfo,
                 0x20003,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)
                        OVR_OpenVR_IVRCompositor__ShouldAppRenderWithLowResources_TypeInfo,0x40002,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)
                        OVR_OpenVR_IVRApplications__GetApplicationsThatSupportMimeType_TypeInfo,
                 0x70009,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRCompositor__PostPresentHandoff_TypeInfo,0x20004,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRApplications__CancelApplicationLaunch_TypeInfo,
                 0x40003,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)System_Net_IPAddress_ReadOnlyIPAddress_TypeInfo,0x7000a,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRCompositor__FadeGrid_TypeInfo,0x20005,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)
                        System_Net_Http_Headers_HttpHeaders_<GetEnumerator>d__19_TypeInfo,0x7000b,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)ExitGames_Client_Photon_IPhotonSocket_<>c_TypeInfo,0x7000c,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)System_Net_HttpListenerRequest_Context_TypeInfo,0x7000d,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRCompositor__CompositorBringToFront_TypeInfo,
                 0x20006,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo,
                 0x40004,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)PTR_DAT_06d62ee0,0x20007,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)PTR_DAT_06d045b0,0x10000,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)PTR_DAT_06d44cf8,0x30000,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRChaperone__GetBoundsColor_TypeInfo,0x20008,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)PTR_DAT_06d43f20,0x40005,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRApplications__LaunchInternalProcess_TypeInfo,
                 0x20009,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRCompositor__SuspendRendering_TypeInfo,0x2000a,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)UnityEngine_UIElements_IMGUIEvent_<>c_TypeInfo,0x2000b,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRCompositor__GetFrameTimings_TypeInfo,0x2000c,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRApplications__GetApplicationCount_TypeInfo,
                 0x2000d,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRCompositor__SetExplicitTimingMode_TypeInfo,
                 0x10001,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)PTR_DAT_06d044f8,0x2000e,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)
                        OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose_TypeInfo
                 ,0x2000f,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)PTR_DAT_06d03240,0x20010,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)
                        OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsInfo_TypeInfo,0x10002,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)System_Xml_XmlTextWriter_State___TypeInfo,0x40006,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)RootMotion_FinalIK_IKSolverVR_Footstep_TypeInfo,0x20011,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)
                        OVR_OpenVR_IVRCompositor__GetLastPoseForTrackedDeviceIndex_TypeInfo,0x20012,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRCompositor__SubmitExplicitTimingData_TypeInfo,
                 0x20013,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)
                        OVR_OpenVR_IVRApplications__GetApplicationPropertyString_TypeInfo,0x20014,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRCompositor__GetCurrentSceneFocusProcess_TypeInfo
                 ,0x20015,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)PTR_DAT_06d3ab80,0x20016,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)System_Net_Http_Headers_HttpHeaders_HeaderBucket_TypeInfo,
                 0x20017,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)PTR_DAT_06d3ab88,0x20018,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)PTR_DAT_06d444d0,0x7000e,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)System_Xml_XmlTextWriter_TagInfo___TypeInfo,0x7000f,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)PTR_DAT_06d49820,0x40007,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)RootMotion_FinalIK_IKSolverVR_Arm_TypeInfo,0x20019,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRCompositor__ClearLastSubmittedFrame_TypeInfo,
                 0x2001a,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)
                        OVR_OpenVR_IVRApplications__GetApplicationsTransitionStateNameFromEnum_TypeInfo
                 ,0x2001b,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)
                        OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose_TypeInfo
                 ,0x2001c,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)PTR_DAT_06d049d0,0x2001d,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)PTR_DAT_06d032e8,0x2001e,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)
                        OVR_OpenVR_IVRApplications__GetApplicationKeyByProcessId_TypeInfo,0x50000,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)PTR_DAT_06d05a30,0x50001,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)Liv_Lck_ILckAudioSource_AudioDataCallbackDelegate_TypeInfo,
                 0x30001,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRCompositor__Submit_TypeInfo,0x10003,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)PTR_DAT_06d53ca0,0x2001f,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRCompositor__GetFrameTiming_TypeInfo,0x50002,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRCompositor__GetFrameTimeRemaining_TypeInfo,
                 0x40008,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)
                        OVR_OpenVR_IVRApplications__GetDefaultApplicationForMimeType_TypeInfo,
                 0x60000,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRChaperoneSetup__ReloadFromDisk_TypeInfo,0x60001,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)
                        OVR_OpenVR_IVRCompositor__GetVulkanInstanceExtensionsRequired_TypeInfo,
                 0x60002,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)System_Net_HttpListenerRequest_GCCDelegate_TypeInfo,0x60003,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)PTR_DAT_06d7e2e0,0x50003,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRChaperoneSetup__ExportLiveToBuffer_TypeInfo,
                 0x30002,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRChaperone__GetPlayAreaSize_TypeInfo,0x40009,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)RootMotion_FinalIK_IKSolver_UpdateDelegate_TypeInfo,0x10004,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)
                        OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking_TypeInfo,0x10005,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRCompositor__GetCurrentGridAlpha_TypeInfo,0x10006
                 ,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)
                        OVR_OpenVR_IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo_TypeInfo,0x30003,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)RootMotion_FinalIK_IKMapping_BoneMap_TypeInfo,0x10007,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRApplications__IdentifyApplication_TypeInfo,
                 0x30004,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)
                        OVR_OpenVR_IVRApplications__GetApplicationSupportedMimeTypes_TypeInfo,
                 0x30005,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)
                        OVR_OpenVR_IVRApplications__GetApplicationsErrorNameFromEnum_TypeInfo,
                 0x30006,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRApplications__GetCurrentSceneProcessId_TypeInfo,
                 0x30007,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRChaperoneSetup__SetWorkingPlayAreaSize_TypeInfo,
                 0x30008,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRCompositor__CanRenderScene_TypeInfo,0x10008,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRChaperone__ForceBoundsVisible_TypeInfo,0x4000a,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRCompositor__GetMirrorTextureGL_TypeInfo,0x10009,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)
                        OVR_OpenVR_IVRApplications__PerformApplicationPrelaunchCheck_TypeInfo,
                 0x1000a,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRCompositor__FadeToColor_TypeInfo,0x30009,
                 *(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRCompositor__GetCurrentFadeColor_TypeInfo,0x1000b
                 ,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRCompositor__GetLastFrameRenderer_TypeInfo,
                 0x1000c,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)PTR_DAT_06d05840,0x20020,*(undefined8 *)puVar6);
    FUN_04c6e184(lVar7,*(undefined8 *)OVR_OpenVR_IVRChaperoneSetup__GetWorkingPlayAreaRect_TypeInfo,
                 0x1000d,*(undefined8 *)puVar6);
    puVar1 = HurricaneVR_Framework_Weapons_Guns_HVRPooledEmitter_HVRPooledObjectTracker_TypeInfo;
    **(long **)(*(long *)
                 HurricaneVR_Framework_Weapons_Guns_HVRPooledEmitter_HVRPooledObjectTracker_TypeInfo
               + 0xb8) = lVar7;
    thunk_FUN_02f411dc(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar7);
    lVar7 = thunk_FUN_02ef1808(*(undefined8 *)OVR_OpenVR_IVRIOBuffer__Write_TypeInfo);
    FUN_04c0b27c(lVar7,*(undefined8 *)OVR_OpenVR_IVRIOBuffer__PropertyContainer_TypeInfo);
    puVar1 = OVR_OpenVR_IVRIOBuffer__Close_TypeInfo;
    if (lVar7 != 0) {
      FUN_04c0bc6c(lVar7,0x20000,
                   *(undefined8 *)OVR_OpenVR_IVRChaperoneSetup__GetWorkingPlayAreaSize_TypeInfo,
                   *(undefined8 *)OVR_OpenVR_IVRIOBuffer__Close_TypeInfo);
      FUN_04c0bc6c(lVar7,0x20001,
                   *(undefined8 *)OVR_OpenVR_IVRApplications__LaunchTemplateApplication_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x20002,*(undefined8 *)RootMotion_FinalIK_IKSolver_Point_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x40000,*(undefined8 *)PTR_DAT_06d12128,*(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x70000,
                   *(undefined8 *)
                    OVR_OpenVR_IVRApplications__SetDefaultApplicationForMimeType_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x70001,
                   *(undefined8 *)
                    OVR_OpenVR_IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose_TypeInfo
                   ,*(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x40001,*(undefined8 *)OVR_OpenVR_IVRCompositor__GetTrackingSpace_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x70002,
                   *(undefined8 *)OVR_OpenVR_IVRApplications__GetTransitionState_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x70003,
                   *(undefined8 *)OVR_OpenVR_IVRApplications__SetApplicationAutoLaunch_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x70004,*(undefined8 *)OVR_OpenVR_IVRCompositor__SetTrackingSpace_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x70005,*(undefined8 *)OVR_OpenVR_IVRChaperone__GetPlayAreaRect_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x70006,
                   *(undefined8 *)OVR_OpenVR_IVRCompositor__GetMirrorTextureD3D11_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x70007,
                   *(undefined8 *)OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x70008,*(undefined8 *)OVR_OpenVR_IVRChaperone__ReloadInfo_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x20003,
                   *(undefined8 *)OVR_OpenVR_IVRCompositor__ReleaseSharedGLTexture_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x40002,
                   *(undefined8 *)OVR_OpenVR_IVRCompositor__ShouldAppRenderWithLowResources_TypeInfo
                   ,*(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x70009,
                   *(undefined8 *)
                    OVR_OpenVR_IVRApplications__GetApplicationsThatSupportMimeType_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x20004,
                   *(undefined8 *)OVR_OpenVR_IVRCompositor__PostPresentHandoff_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x40003,
                   *(undefined8 *)OVR_OpenVR_IVRApplications__CancelApplicationLaunch_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x7000a,*(undefined8 *)System_Net_IPAddress_ReadOnlyIPAddress_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x20005,*(undefined8 *)OVR_OpenVR_IVRCompositor__FadeGrid_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x7000b,
                   *(undefined8 *)System_Net_Http_Headers_HttpHeaders_<GetEnumerator>d__19_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x7000c,*(undefined8 *)ExitGames_Client_Photon_IPhotonSocket_<>c_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x7000d,*(undefined8 *)System_Net_HttpListenerRequest_Context_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x20006,
                   *(undefined8 *)OVR_OpenVR_IVRCompositor__CompositorBringToFront_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x40004,
                   *(undefined8 *)OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x20007,*(undefined8 *)PTR_DAT_06d62ee0,*(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x10000,*(undefined8 *)PTR_DAT_06d045b0,*(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x30000,*(undefined8 *)PTR_DAT_06d44cf8,*(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x20008,*(undefined8 *)OVR_OpenVR_IVRChaperone__GetBoundsColor_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x40005,*(undefined8 *)PTR_DAT_06d43f20,*(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x20009,
                   *(undefined8 *)OVR_OpenVR_IVRApplications__LaunchInternalProcess_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x2000a,*(undefined8 *)OVR_OpenVR_IVRCompositor__SuspendRendering_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x2000b,*(undefined8 *)UnityEngine_UIElements_IMGUIEvent_<>c_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x2000c,*(undefined8 *)OVR_OpenVR_IVRCompositor__GetFrameTimings_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x2000d,
                   *(undefined8 *)OVR_OpenVR_IVRApplications__GetApplicationCount_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x10001,
                   *(undefined8 *)OVR_OpenVR_IVRCompositor__SetExplicitTimingMode_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x2000e,*(undefined8 *)PTR_DAT_06d044f8,*(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x2000f,
                   *(undefined8 *)
                    OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose_TypeInfo
                   ,*(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x20010,*(undefined8 *)PTR_DAT_06d03240,*(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x10002,
                   *(undefined8 *)OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsInfo_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x40006,*(undefined8 *)System_Xml_XmlTextWriter_State___TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x20011,*(undefined8 *)RootMotion_FinalIK_IKSolverVR_Footstep_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x20012,
                   *(undefined8 *)
                    OVR_OpenVR_IVRCompositor__GetLastPoseForTrackedDeviceIndex_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x20013,
                   *(undefined8 *)OVR_OpenVR_IVRCompositor__SubmitExplicitTimingData_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x20014,
                   *(undefined8 *)OVR_OpenVR_IVRApplications__GetApplicationPropertyString_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x20015,
                   *(undefined8 *)OVR_OpenVR_IVRCompositor__GetCurrentSceneFocusProcess_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x20016,*(undefined8 *)PTR_DAT_06d3ab80,*(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x20017,
                   *(undefined8 *)System_Net_Http_Headers_HttpHeaders_HeaderBucket_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x20018,*(undefined8 *)PTR_DAT_06d3ab88,*(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x7000e,*(undefined8 *)PTR_DAT_06d444d0,*(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x7000f,*(undefined8 *)System_Xml_XmlTextWriter_TagInfo___TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x40007,*(undefined8 *)PTR_DAT_06d49820,*(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x20019,*(undefined8 *)RootMotion_FinalIK_IKSolverVR_Arm_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x2001a,
                   *(undefined8 *)OVR_OpenVR_IVRCompositor__ClearLastSubmittedFrame_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x2001b,
                   *(undefined8 *)
                    OVR_OpenVR_IVRApplications__GetApplicationsTransitionStateNameFromEnum_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x2001c,
                   *(undefined8 *)
                    OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x2001d,*(undefined8 *)PTR_DAT_06d049d0,*(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x2001e,*(undefined8 *)PTR_DAT_06d032e8,*(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x50000,
                   *(undefined8 *)OVR_OpenVR_IVRApplications__GetApplicationKeyByProcessId_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x50001,*(undefined8 *)PTR_DAT_06d05a30,*(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x30001,
                   *(undefined8 *)Liv_Lck_ILckAudioSource_AudioDataCallbackDelegate_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x10003,*(undefined8 *)OVR_OpenVR_IVRCompositor__Submit_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x2001f,*(undefined8 *)PTR_DAT_06d53ca0,*(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x50002,*(undefined8 *)OVR_OpenVR_IVRCompositor__GetFrameTiming_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x40008,
                   *(undefined8 *)OVR_OpenVR_IVRCompositor__GetFrameTimeRemaining_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x60000,
                   *(undefined8 *)
                    OVR_OpenVR_IVRApplications__GetDefaultApplicationForMimeType_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x60001,
                   *(undefined8 *)OVR_OpenVR_IVRChaperoneSetup__ReloadFromDisk_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x60002,
                   *(undefined8 *)
                    OVR_OpenVR_IVRCompositor__GetVulkanInstanceExtensionsRequired_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x60003,*(undefined8 *)System_Net_HttpListenerRequest_GCCDelegate_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x50003,*(undefined8 *)PTR_DAT_06d7e2e0,*(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x30002,
                   *(undefined8 *)OVR_OpenVR_IVRChaperoneSetup__ExportLiveToBuffer_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x40009,*(undefined8 *)OVR_OpenVR_IVRChaperone__GetPlayAreaSize_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x10004,*(undefined8 *)RootMotion_FinalIK_IKSolver_UpdateDelegate_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x10005,
                   *(undefined8 *)OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x10006,
                   *(undefined8 *)OVR_OpenVR_IVRCompositor__GetCurrentGridAlpha_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x30003,
                   *(undefined8 *)
                    OVR_OpenVR_IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x10007,*(undefined8 *)RootMotion_FinalIK_IKMapping_BoneMap_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x30004,
                   *(undefined8 *)OVR_OpenVR_IVRApplications__IdentifyApplication_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x30005,
                   *(undefined8 *)
                    OVR_OpenVR_IVRApplications__GetApplicationSupportedMimeTypes_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x30006,
                   *(undefined8 *)
                    OVR_OpenVR_IVRApplications__GetApplicationsErrorNameFromEnum_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x30007,
                   *(undefined8 *)OVR_OpenVR_IVRApplications__GetCurrentSceneProcessId_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x30008,
                   *(undefined8 *)OVR_OpenVR_IVRChaperoneSetup__SetWorkingPlayAreaSize_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x10008,*(undefined8 *)OVR_OpenVR_IVRCompositor__CanRenderScene_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x4000a,*(undefined8 *)OVR_OpenVR_IVRChaperone__ForceBoundsVisible_TypeInfo
                   ,*(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x10009,
                   *(undefined8 *)OVR_OpenVR_IVRCompositor__GetMirrorTextureGL_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x1000a,
                   *(undefined8 *)
                    OVR_OpenVR_IVRApplications__PerformApplicationPrelaunchCheck_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x30009,*(undefined8 *)OVR_OpenVR_IVRCompositor__FadeToColor_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x1000b,
                   *(undefined8 *)OVR_OpenVR_IVRCompositor__GetCurrentFadeColor_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x1000c,
                   *(undefined8 *)OVR_OpenVR_IVRCompositor__GetLastFrameRenderer_TypeInfo,
                   *(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x20020,*(undefined8 *)PTR_DAT_06d05840,*(undefined8 *)puVar1);
      FUN_04c0bc6c(lVar7,0x1000d,
                   *(undefined8 *)OVR_OpenVR_IVRChaperoneSetup__GetWorkingPlayAreaRect_TypeInfo,
                   *(undefined8 *)puVar1);
      plVar8 = (long *)(*(long *)(*(long *)
                                   HurricaneVR_Framework_Weapons_Guns_HVRPooledEmitter_HVRPooledObjectTracker_TypeInfo
                                 + 0xb8) + 8);
      *plVar8 = lVar7;
      thunk_FUN_02f411dc(plVar8,lVar7);
      lVar7 = thunk_FUN_02ef1808(*(undefined8 *)OVR_OpenVR_IVRInput__GetActionOrigins_TypeInfo);
      FUN_05213a64(lVar7,*(undefined8 *)OVR_OpenVR_IVRInput__GetActionHandle_TypeInfo);
      puVar1 = OVR_OpenVR_IVRInput__DecompressSkeletalBoneData_TypeInfo;
      if (lVar7 != 0) {
        FUN_05214c68(lVar7,0x20000,
                     *(undefined8 *)OVR_OpenVR_IVRInput__DecompressSkeletalBoneData_TypeInfo);
        FUN_05214c68(lVar7,0x20001,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x20002,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x40000,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x70000,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x70001,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x40001,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x70002,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x70003,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x70004,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x70005,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x70006,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x70007,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x70008,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x20003,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x40002,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x70009,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x20004,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x40003,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x7000a,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x20005,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x7000b,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x7000c,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x7000d,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x20006,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x40004,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x20007,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x10000,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x20008,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x40005,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x20009,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x2000a,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x2000b,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x2000c,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x2000d,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x10001,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x2000e,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x2000f,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x20010,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x10002,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x40006,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x20011,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x20012,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x20013,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x20014,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x20015,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x20016,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x20017,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x20018,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x7000e,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x7000f,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x40007,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x20019,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x2001a,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x2001b,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x2001c,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x2001d,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x2001e,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x50000,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x50001,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x30001,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x10003,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x2001f,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x50002,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x50003,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x30002,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x40009,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x10004,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x10005,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x10006,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x30003,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x10007,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x30004,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x30005,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x30006,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x30007,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x30008,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x10008,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x4000a,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x10009,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x1000a,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x30009,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x1000b,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x1000c,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x20020,*(undefined8 *)puVar1);
        FUN_05214c68(lVar7,0x1000d,*(undefined8 *)puVar1);
        plVar8 = (long *)(*(long *)(*(long *)
                                     HurricaneVR_Framework_Weapons_Guns_HVRPooledEmitter_HVRPooledObjectTracker_TypeInfo
                                   + 0xb8) + 0x10);
        *plVar8 = lVar7;
        thunk_FUN_02f411dc(plVar8,lVar7);
        lVar7 = thunk_FUN_02ef1808(*(undefined8 *)OVR_OpenVR_IVRIOBuffer__Read_TypeInfo);
        FUN_04c08188(lVar7,*(undefined8 *)OVR_OpenVR_IVRIOBuffer__Open_TypeInfo);
        puVar1 = OVR_OpenVR_IVRExtendedDisplay__GetWindowBounds_TypeInfo;
        if (lVar7 != 0) {
          FUN_04c08b68(lVar7,0x70000,8,
                       *(undefined8 *)OVR_OpenVR_IVRExtendedDisplay__GetWindowBounds_TypeInfo);
          FUN_04c08b68(lVar7,0x70006,8,*(undefined8 *)puVar1);
          FUN_04c08b68(lVar7,0x40002,8,*(undefined8 *)puVar1);
          FUN_04c08b68(lVar7,0x70009,8,*(undefined8 *)puVar1);
          FUN_04c08b68(lVar7,0x7000a,8,*(undefined8 *)puVar1);
          FUN_04c08b68(lVar7,0x7000b,8,*(undefined8 *)puVar1);
          FUN_04c08b68(lVar7,0x10000,8,*(undefined8 *)puVar1);
          FUN_04c08b68(lVar7,0x50000,1,*(undefined8 *)puVar1);
          FUN_04c08b68(lVar7,0x50001,1,*(undefined8 *)puVar1);
          FUN_04c08b68(lVar7,0x50002,1,*(undefined8 *)puVar1);
          FUN_04c08b68(lVar7,0x50003,1,*(undefined8 *)puVar1);
          FUN_04c08b68(lVar7,0x30002,8,*(undefined8 *)puVar1);
          plVar8 = (long *)(*(long *)(*(long *)
                                       HurricaneVR_Framework_Weapons_Guns_HVRPooledEmitter_HVRPooledObjectTracker_TypeInfo
                                     + 0xb8) + 0x18);
          *plVar8 = lVar7;
          thunk_FUN_02f411dc(plVar8,lVar7);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


