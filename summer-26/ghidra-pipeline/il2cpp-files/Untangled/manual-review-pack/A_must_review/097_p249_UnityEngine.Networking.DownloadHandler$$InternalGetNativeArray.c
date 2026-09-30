/*
FUNCTION_NAME: UnityEngine.Networking.DownloadHandler$$InternalGetNativeArray
ENTRY_POINT: 0682712c
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_20;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_framework_namespace_without_eye_use_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_Networking_DownloadHandler__InternalGetNativeArray(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  FUN_02f07e70(*(undefined8 *)(param_1 + 0x300));
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetControllerRoleForTrackedDeviceIndex_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetControllerState_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetControllerStateWithPose_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetD3D9AdapterIndex_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetDXGIOutputInfo_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetEventTypeNameFromEnum_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetEyeToHeadTransform_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetFloatTrackedDeviceProperty_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetHiddenAreaMesh_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetInt32TrackedDeviceProperty_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetMatrix34TrackedDeviceProperty_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetOutputDevice_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetProjectionMatrix_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetProjectionRaw_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetPropErrorNameFromEnum_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetRecommendedRenderTargetSize_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetSortedTrackedDeviceIndicesOfClass_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetStringTrackedDeviceProperty_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetTimeSinceLastVsync_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetTrackedDeviceActivityLevel_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetTrackedDeviceClass_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetTrackedDeviceIndexForControllerRole_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__GetUint64TrackedDeviceProperty_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__IsDisplayOnDesktop_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__IsInputAvailable_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__IsSteamVRDrawingControllers_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__PerformFirmwareUpdate_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__PollNextEvent_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__PollNextEventWithPose_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__ResetSeatedZeroPose_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__SetDisplayVisibility_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__ShouldApplicationPause_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__ShouldApplicationReduceRenderingWork_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRSystem__TriggerHapticPulse_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRTrackedCamera__AcquireVideoStreamingService_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRTrackedCamera__GetCameraErrorNameFromEnum_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRTrackedCamera__GetCameraFrameSize_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRTrackedCamera__GetCameraIntrinsics_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRTrackedCamera__GetCameraProjection_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRTrackedCamera__GetVideoStreamFrameBuffer_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRTrackedCamera__GetVideoStreamTextureD3D11_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRTrackedCamera__GetVideoStreamTextureGL_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRTrackedCamera__GetVideoStreamTextureSize_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRTrackedCamera__HasCamera_TypeInfo);
  FUN_02f07e70(OVR_OpenVR_IVRTrackedCamera__ReleaseVideoStreamTextureGL_TypeInfo);
  FUN_02f07e70(PTR_DAT_06d03488);
  *(undefined1 *)(unaff_x20 + 0x980) = 1;
  lVar11 = thunk_FUN_02ef1808(*unaff_x21);
  FUN_04c60d18(lVar11,*unaff_x19);
  puVar10 = OVR_OpenVR_IVRSystem__PollNextEventWithPose_TypeInfo;
  puVar9 = OVR_OpenVR_IVRSystem__GetHiddenAreaMesh_TypeInfo;
  puVar8 = OVR_OpenVR_IVRSystem__GetButtonIdNameFromEnum_TypeInfo;
  puVar7 = OVR_OpenVR_IVRSystem__ApplyTransform_TypeInfo;
  puVar6 = OVR_OpenVR_IVRRenderModels__GetRenderModelName_TypeInfo;
  puVar5 = OVR_OpenVR_IVRRenderModels__GetRenderModelErrorNameFromEnum_TypeInfo;
  puVar4 = OVR_OpenVR_IVRRenderModels__GetComponentStateForDevicePath_TypeInfo;
  puVar3 = OVR_OpenVR_IVRRenderModels__FreeRenderModel_TypeInfo;
  puVar2 = OVR_OpenVR_IVROverlay__MoveGamepadFocusToNeighbor_TypeInfo;
  puVar1 = OVR_OpenVR_IVROverlay__GetOverlayWidthInMeters_TypeInfo;
  if (lVar11 != 0) {
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__IsActiveDashboardOverlay_TypeInfo,
                 0xfffff8f0,*(undefined8 *)OVR_OpenVR_IVROverlay__GetOverlayWidthInMeters_TypeInfo);
    FUN_04c616e8(lVar11,*(undefined8 *)puVar2,0xffd7ebfa,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)puVar8,0xffffff00,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)puVar5,0xffd4ff7f,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)puVar3,0xfffffff0,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)puVar10,0xffdcf5f5,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)puVar6,0xffc4e4ff,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)puVar4,0xff000000,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)puVar9,0xffcdebff,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)puVar7,0xffff0000,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVRTrackedCamera__GetVideoStreamTextureD3D11_TypeInfo,0xffe22b8a
                 ,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRRenderModels__FreeTextureD3D11_TypeInfo,
                 0xff2a2aa5,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRTrackedCamera__GetCameraProjection_TypeInfo,
                 0xff87b8de,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSettings__GetSettingsErrorNameFromEnum_TypeInfo
                 ,0xffa09e5f,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVRTrackedCamera__GetVideoStreamFrameBuffer_TypeInfo,0xff00ff7f,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSettings__SetFloat_TypeInfo,0xff1e69d2,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__ShowKeyboard_TypeInfo,0xff507fff,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayNeighbor_TypeInfo,0xffed9564
                 ,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRRenderModels__LoadRenderModel_Async_TypeInfo,
                 0xffdcf8ff,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayIntersectionMask_TypeInfo,
                 0xff3c14dc,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__GetPropErrorNameFromEnum_TypeInfo,
                 0xffffff00,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayMouseScale_TypeInfo,
                 0xff8b0000,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVRSystem__GetMatrix34TrackedDeviceProperty_TypeInfo,0xff8b8b00,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSettings__RemoveSection_TypeInfo,0xff0b86b8,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__SetHighQualityOverlay_TypeInfo,
                 0xffa9a9a9,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose_TypeInfo
                 ,0xff006400,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__ReleaseNativeOverlayHandle_TypeInfo,
                 0xffa9a9a9,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayRenderModel_TypeInfo,
                 0xff6bb7bd,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSettings__SetBool_TypeInfo,0xff8b008b,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRRenderModels__GetComponentName_TypeInfo,
                 0xff2f6b55,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayFromFile_TypeInfo,0xff008cff
                 ,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayRenderingPid_TypeInfo,
                 0xffcc3299,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRRenderModels__GetRenderModelCount_TypeInfo,
                 0xff00008b,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSettings__GetInt32_TypeInfo,0xff7a96e9,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__GetOutputDevice_TypeInfo,0xff8fbc8f,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__SetKeyboardTransformAbsolute_TypeInfo,
                 0xff8b3d48,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayRaw_TypeInfo,0xff4f4f2f,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__GetEventTypeNameFromEnum_TypeInfo,
                 0xff4f4f2f,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__GetTimeSinceLastVsync_TypeInfo,
                 0xffd1ce00,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__GetControllerState_TypeInfo,0xffd30094,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose_TypeInfo,0xff9314ff,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSettings__SetInt32_TypeInfo,0xffffbf00,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayWidthInMeters_TypeInfo,
                 0xff696969,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__GetArrayTrackedDeviceProperty_TypeInfo,
                 0xff696969,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo,
                 0xffff901e,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__IsInputAvailable_TypeInfo,0xff2222b2,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVROverlay__SetOverlayTransformTrackedDeviceComponent_TypeInfo,
                 0xfff0faff,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVRSystem__GetControllerRoleForTrackedDeviceIndex_TypeInfo,
                 0xff228b22,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__GetFloatTrackedDeviceProperty_TypeInfo,
                 0xffff00ff,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRRenderModels__GetComponentButtonMask_TypeInfo,
                 0xffdcdcdc,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__PollNextOverlayEvent_TypeInfo,
                 0xfffff8f8,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__TriggerHapticPulse_TypeInfo,0xff20a5da,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSettings__RemoveKeyInSection_TypeInfo,
                 0xff00d7ff,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayColor_TypeInfo,0xff808080,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo,0xff008000,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__PollNextEvent_TypeInfo,0xff2fffad,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVRRenderModels__LoadIntoTextureD3D11_Async_TypeInfo,0xff808080,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVROverlay__SetOverlayTransformOverlayRelative_TypeInfo,
                 0xfff0fff0,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__ComputeDistortion_TypeInfo,0xffb469ff,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayTextureBounds_TypeInfo,
                 0xff5c5ccd,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__IsDisplayOnDesktop_TypeInfo,0xff82004b,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose_TypeInfo,
                 0xfff0ffff,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__IsDashboardVisible_TypeInfo,0xff8ce6f0
                 ,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__HideKeyboard_TypeInfo,0xfff5f0ff,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRRenderModels__GetComponentCount_TypeInfo,
                 0xfffae6e6,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__ShowDashboard_TypeInfo,0xff00fc7c,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__PerformFirmwareUpdate_TypeInfo,
                 0xffcdfaff,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__ShowOverlay_TypeInfo,0xffe6d8ad,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSettings__GetFloat_TypeInfo,0xff8080f0,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVRTrackedCamera__GetVideoStreamTextureSize_TypeInfo,0xffffffe0,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSettings__Sync_TypeInfo,0xffd2fafa,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__GetD3D9AdapterIndex_TypeInfo,0xffd3d3d3
                 ,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__ShowMessageOverlay_TypeInfo,0xff90ee90
                 ,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__SetGamepadFocusOverlay_TypeInfo,
                 0xffd3d3d3,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVRRenderModels__GetRenderModelOriginalPath_TypeInfo,0xffc1b6ff,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVRSpatialAnchors__CreateSpatialAnchorFromPose_TypeInfo,
                 0xff7aa0ff,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayDualAnalogTransform_TypeInfo
                 ,0xffaab220,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVRRenderModels__GetRenderModelThumbnailURL_TypeInfo,0xffface87,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__IsOverlayVisible_TypeInfo,0xff998877,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__GetRecommendedRenderTargetSize_TypeInfo
                 ,0xff998877,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__GetUint64TrackedDeviceProperty_TypeInfo
                 ,0xffdec4b0,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayFlag_TypeInfo,0xffe0ffff,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__GetControllerStateWithPose_TypeInfo,
                 0xff00ff00,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__AcknowledgeQuit_Exiting_TypeInfo,
                 0xff32cd32,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVROverlay__SetOverlayTransformTrackedDeviceRelative_TypeInfo,
                 0xffe6f0fa,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters_TypeInfo,
                 0xffff00ff,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__ResetSeatedZeroPose_TypeInfo,0xff000080
                 ,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__GetStringTrackedDeviceProperty_TypeInfo
                 ,0xffaacd66,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRScreenshots__RequestScreenshot_TypeInfo,
                 0xffcd0000,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__ShouldApplicationPause_TypeInfo,
                 0xffd355ba,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__GetTrackedDeviceActivityLevel_TypeInfo,
                 0xffdb7093,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRTrackedCamera__GetCameraFrameSize_TypeInfo,
                 0xff71b33c,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRTrackedCamera__GetVideoStreamTextureGL_TypeInfo
                 ,0xffee687b,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__IsHoverTargetOverlay_TypeInfo,
                 0xff9afa00,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVRSystem__GetControllerAxisTypeNameFromEnum_TypeInfo,0xffccd148
                 ,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__DriverDebugRequest_TypeInfo,0xff8515c7,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__GetProjectionMatrix_TypeInfo,0xff701919
                 ,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayName_TypeInfo,0xfffafff5,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__ShowKeyboardForOverlay_TypeInfo,
                 0xffe1e4ff,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRScreenshots__GetScreenshotPropertyType_TypeInfo
                 ,0xffb5e4ff,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__GetTrackedDeviceClass_TypeInfo,
                 0xffaddeff,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__GetEyeToHeadTransform_TypeInfo,
                 0xff800000,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRScreenshots__SubmitScreenshot_TypeInfo,
                 0xffe6f5fd,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRRenderModels__LoadTextureD3D11_Async_TypeInfo,
                 0xff008080,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayTransformAbsolute_TypeInfo,
                 0xff238e6b,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__GetBoolTrackedDeviceProperty_TypeInfo,
                 0xff00a5ff,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVRSpatialAnchors__CreateSpatialAnchorFromDescriptor_TypeInfo,
                 0xff0045ff,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorDescriptor_TypeInfo,
                 0xffd670da,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlaySortOrder_TypeInfo,
                 0xffaae8ee,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose_TypeInfo
                 ,0xff98fb98,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRRenderModels__FreeTexture_TypeInfo,0xffeeeeaf,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRScreenshots__HookScreenshot_TypeInfo,0xff9370db
                 ,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVRScreenshots__GetScreenshotPropertyFilename_TypeInfo,
                 0xffd5efff,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSettings__GetBool_TypeInfo,0xffb9daff,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__GetPrimaryDashboardDevice_TypeInfo,
                 0xff3f85cd,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRRenderModels__LoadTexture_Async_TypeInfo,
                 0xffcbc0ff,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayTexture_TypeInfo,0xffdda0dd,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__GetInt32TrackedDeviceProperty_TypeInfo,
                 0xffe6e0b0,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRResources__GetResourceFullPath_TypeInfo,
                 0xff800080,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVROverlay__GetTransformForOverlayCoordinates_TypeInfo,
                 0xff993366,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayTexelAspect_TypeInfo,
                 0xff0000ff,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVRTrackedCamera__ReleaseVideoStreamTextureGL_TypeInfo,
                 0xff8f8fbc,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRRenderModels__RenderModelHasComponent_TypeInfo,
                 0xffe16941,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRScreenshots__TakeStereoScreenshot_TypeInfo,
                 0xff13458b,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__SetDisplayVisibility_TypeInfo,
                 0xff7280fa,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVRSystem__GetSortedTrackedDeviceIndicesOfClass_TypeInfo,
                 0xff60a4f4,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVRSystem__ShouldApplicationReduceRenderingWork_TypeInfo,
                 0xff578b2e,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRTrackedCamera__GetCameraIntrinsics_TypeInfo,
                 0xffeef5ff,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayInputMethod_TypeInfo,
                 0xff2d52a0,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__AcknowledgeQuit_UserPrompt_TypeInfo,
                 0xffc0c0c0,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__SetKeyboardPositionForOverlay_TypeInfo
                 ,0xffebce87,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVRTrackedCamera__GetCameraErrorNameFromEnum_TypeInfo,0xffcd5a6a
                 ,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVRTrackedCamera__AcquireVideoStreamingService_TypeInfo,
                 0xff908070,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayTextureColorSpace_TypeInfo,
                 0xff908070,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRResources__LoadSharedResource_TypeInfo,
                 0xfffafaff,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRScreenshots__UpdateScreenshotProgress_TypeInfo,
                 0xff7fff00,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__GetProjectionRaw_TypeInfo,0xffb48246,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)PTR_DAT_06d0efa8,0xff8cb4d2,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVROverlay__SetDashboardOverlaySceneProcess_TypeInfo,0xff808000,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSettings__GetString_TypeInfo,0xffd8bfd8,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRRenderModels__GetComponentState_TypeInfo,
                 0xff4763ff,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSettings__SetString_TypeInfo,0,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVROverlay__HideOverlay_TypeInfo,0xffd0e040,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__IsSteamVRDrawingControllers_TypeInfo,
                 0xffee82ee,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVRRenderModels__GetComponentRenderModelName_TypeInfo,0xffb3def5
                 ,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)PTR_DAT_06d03488,0xffffffff,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)
                         OVR_OpenVR_IVRSystem__GetTrackedDeviceIndexForControllerRole_TypeInfo,
                 0xfff5f5f5,*(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRSystem__GetDXGIOutputInfo_TypeInfo,0xff00ffff,
                 *(undefined8 *)puVar1);
    FUN_04c616e8(lVar11,*(undefined8 *)OVR_OpenVR_IVRTrackedCamera__HasCamera_TypeInfo,0xff32cd9a,
                 *(undefined8 *)puVar1);
    puVar1 = OVR_OpenVR_IVROverlay__CreateDashboardOverlay_TypeInfo;
    **(long **)(*(long *)OVR_OpenVR_IVROverlay__CreateDashboardOverlay_TypeInfo + 0xb8) = lVar11;
    thunk_FUN_02f411dc(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar11);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


