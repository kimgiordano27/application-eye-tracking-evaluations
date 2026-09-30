/*
FUNCTION_NAME: FUN_0698802c
ENTRY_POINT: 0698802c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 145
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_16;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_6;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0698802c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  puVar5 = PTR_DAT_06f99138;
  if ((DAT_073a9c81 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f807e8);
    FUN_02fe925c(PTR_DAT_06f807f0);
    FUN_02fe925c(PTR_DAT_06f80af0);
    FUN_02fe925c(PTR_DAT_06f9a428);
    FUN_02fe925c(PTR_DAT_06f80828);
    FUN_02fe925c(PTR_DAT_06f80860);
    FUN_02fe925c(PTR_DAT_06f80868);
    FUN_02fe925c(PTR_DAT_06f80870);
    FUN_02fe925c(PTR_DAT_06f9a8d8);
    FUN_02fe925c(PTR_DAT_06f808e8);
    FUN_02fe925c(PTR_DAT_06f75070);
    FUN_02fe925c(PTR_DAT_06f80908);
    FUN_02fe925c(PTR_DAT_06f99138);
    FUN_02fe925c(OVROverlayCanvas_TypeInfo);
    FUN_02fe925c(OVROverlayCanvasCustom_TypeInfo);
    FUN_02fe925c(OVROverlayCanvasManager_TypeInfo);
    FUN_02fe925c(OVROverlayCanvasSettings_TypeInfo);
    FUN_02fe925c(OVROverlayCanvas_TMPChanged_TypeInfo);
    FUN_02fe925c(OVRPassthroughColorLut_TypeInfo);
    FUN_02fe925c(OVRPassthroughLayer_TypeInfo);
    FUN_02fe925c(OVRPermissionsRequester_TypeInfo);
    FUN_02fe925c(UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo);
    FUN_02fe925c(OVRPlatformMenu_TypeInfo);
    FUN_02fe925c(OVRPlugin_TypeInfo);
    FUN_02fe925c(UnityEngine_EventSystems_OVRPointerEventData_TypeInfo);
    FUN_02fe925c(Oculus_Interaction_Input_OVRPointerPoseSelector_TypeInfo);
    FUN_02fe925c(OVRPose_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6d6a0);
    FUN_02fe925c(OVRProfile_TypeInfo);
    FUN_02fe925c(OVRRaycaster_TypeInfo);
    FUN_02fe925c(OVRResources_TypeInfo);
    FUN_02fe925c(OVRRoomLayout_TypeInfo);
    FUN_02fe925c(OVRRuntimeController_TypeInfo);
    FUN_02fe925c(OVRRuntimeSettings_TypeInfo);
    FUN_02fe925c(OVRSampledEventSender_TypeInfo);
    FUN_02fe925c(OVRSceneAnchor_TypeInfo);
    FUN_02fe925c(OVRSceneRoom_TypeInfo);
    FUN_02fe925c(OVRScreenFade_TypeInfo);
    FUN_02fe925c(OVRSemanticLabels_TypeInfo);
    FUN_02fe925c(OVRSharable_TypeInfo);
    FUN_02fe925c(Oculus_Interaction_Input_OVRSkeletonData_TypeInfo);
    FUN_02fe925c(Oculus_Interaction_Body_Input_OVRSkeletonMapping_TypeInfo);
    FUN_02fe925c(Mono_Security_Interface_MonoTlsConnectionInfo_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f80910);
    FUN_02fe925c(PTR_DAT_06f80918);
    FUN_02fe925c(PTR_DAT_06f80920);
    DAT_073a9c81 = 1;
  }
  puVar3 = PTR_DAT_06f80908;
  puVar1 = PTR_DAT_06f6d6a0;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar7 = Mono_Security_Interface_MonoTlsConnectionInfo_TypeInfo;
  puVar4 = PTR_DAT_06f80af0;
  uVar10 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar10 = FUN_05afde1c(uVar10,0);
  uVar8 = FUN_05afde1c(*(undefined8 *)puVar4,0);
  lVar9 = *(long *)puVar7;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar9);
    lVar9 = *(long *)puVar7;
  }
  puVar6 = PTR_DAT_06f9a428;
  lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x430);
  uVar11 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar12 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar9);
      lVar9 = *(long *)puVar7;
    }
    uVar13 = **(undefined8 **)(lVar9 + 0xb8);
    lVar12 = thunk_FUN_0301080c(*(undefined8 *)OVROverlayCanvas_TypeInfo);
    FUN_04c98798(lVar12,uVar13,*(undefined8 *)OVRProfile_TypeInfo,0);
    lVar9 = *(long *)(*(long *)puVar7 + 0xb8);
    *(long *)(lVar9 + 0x430) = lVar12;
    thunk_FUN_03048534(lVar9 + 0x430,lVar12);
  }
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar11,uVar10,uVar8,lVar12);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f807e8;
  uVar10 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar10 = FUN_05afde1c(uVar10,0);
  uVar8 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar9 = *(long *)puVar7;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar9);
    lVar9 = *(long *)puVar7;
  }
  lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x438);
  uVar11 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar12 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar9);
      lVar9 = *(long *)puVar7;
    }
    uVar13 = **(undefined8 **)(lVar9 + 0xb8);
    lVar12 = thunk_FUN_0301080c(*(undefined8 *)OVROverlayCanvasSettings_TypeInfo);
    Unity_Collections_LowLevel_Unsafe_UnsafeRingQueue<__Il2CppFullySharedGenericStructType>__get_Length
              (lVar12,uVar13,*(undefined8 *)OVRRuntimeSettings_TypeInfo,0);
    lVar9 = *(long *)(*(long *)puVar7 + 0xb8);
    *(long *)(lVar9 + 0x438) = lVar12;
    thunk_FUN_03048534(lVar9 + 0x438,lVar12);
  }
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar11,uVar10,uVar8,lVar12);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f808e8;
  uVar10 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar10 = FUN_05afde1c(uVar10,0);
  uVar8 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar9 = *(long *)puVar7;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar9);
    lVar9 = *(long *)puVar7;
  }
  lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x440);
  uVar11 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar12 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar9);
      lVar9 = *(long *)puVar7;
    }
    uVar13 = **(undefined8 **)(lVar9 + 0xb8);
    lVar12 = thunk_FUN_0301080c(*(undefined8 *)OVROverlayCanvas_TMPChanged_TypeInfo);
    FUN_04c94d18(lVar12,uVar13,*(undefined8 *)OVRSampledEventSender_TypeInfo,0);
    lVar9 = *(long *)(*(long *)puVar7 + 0xb8);
    *(long *)(lVar9 + 0x440) = lVar12;
    thunk_FUN_03048534(lVar9 + 0x440,lVar12);
  }
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar11,uVar10,uVar8,lVar12);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80860;
  uVar10 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar10 = FUN_05afde1c(uVar10,0);
  uVar8 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar9 = *(long *)puVar7;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar9);
    lVar9 = *(long *)puVar7;
  }
  lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x448);
  uVar11 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar12 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar9);
      lVar9 = *(long *)puVar7;
    }
    uVar13 = **(undefined8 **)(lVar9 + 0xb8);
    lVar12 = thunk_FUN_0301080c(*(undefined8 *)OVRPermissionsRequester_TypeInfo);
    FUN_04c94a08(lVar12,uVar13,*(undefined8 *)OVRSceneAnchor_TypeInfo,0);
    lVar9 = *(long *)(*(long *)puVar7 + 0xb8);
    *(long *)(lVar9 + 0x448) = lVar12;
    thunk_FUN_03048534(lVar9 + 0x448,lVar12);
  }
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar11,uVar10,uVar8,lVar12);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80868;
  uVar10 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar10 = FUN_05afde1c(uVar10,0);
  uVar8 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar9 = *(long *)puVar7;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar9);
    lVar9 = *(long *)puVar7;
  }
  lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x450);
  uVar11 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar12 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar9);
      lVar9 = *(long *)puVar7;
    }
    uVar13 = **(undefined8 **)(lVar9 + 0xb8);
    lVar12 = thunk_FUN_0301080c(*(undefined8 *)OVRPassthroughLayer_TypeInfo);
    FUN_04c94acc(lVar12,uVar13,*(undefined8 *)OVRSceneRoom_TypeInfo,0);
    lVar9 = *(long *)(*(long *)puVar7 + 0xb8);
    *(long *)(lVar9 + 0x450) = lVar12;
    thunk_FUN_03048534(lVar9 + 0x450,lVar12);
  }
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar11,uVar10,uVar8,lVar12);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80870;
  uVar10 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar10 = FUN_05afde1c(uVar10,0);
  uVar8 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar9 = *(long *)puVar7;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar9);
    lVar9 = *(long *)puVar7;
  }
  lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x458);
  uVar11 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar12 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar9);
      lVar9 = *(long *)puVar7;
    }
    uVar13 = **(undefined8 **)(lVar9 + 0xb8);
    lVar12 = thunk_FUN_0301080c(*(undefined8 *)OVRPassthroughColorLut_TypeInfo);
    FUN_04c94b90(lVar12,uVar13,*(undefined8 *)OVRScreenFade_TypeInfo,0);
    lVar9 = *(long *)(*(long *)puVar7 + 0xb8);
    *(long *)(lVar9 + 0x458) = lVar12;
    thunk_FUN_03048534(lVar9 + 0x458,lVar12);
  }
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar11,uVar10,uVar8,lVar12);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f807f0;
  uVar10 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar10 = FUN_05afde1c(uVar10,0);
  uVar8 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar9 = *(long *)puVar7;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar9);
    lVar9 = *(long *)puVar7;
  }
  lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x460);
  uVar11 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar12 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar9);
      lVar9 = *(long *)puVar7;
    }
    uVar13 = **(undefined8 **)(lVar9 + 0xb8);
    lVar12 = thunk_FUN_0301080c(*(undefined8 *)OVRPose_TypeInfo);
    FUN_04c94880(lVar12,uVar13,*(undefined8 *)OVRSemanticLabels_TypeInfo,0);
    lVar9 = *(long *)(*(long *)puVar7 + 0xb8);
    *(long *)(lVar9 + 0x460) = lVar12;
    thunk_FUN_03048534(lVar9 + 0x460,lVar12);
  }
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar11,uVar10,uVar8,lVar12);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80910;
  uVar10 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar10 = FUN_05afde1c(uVar10,0);
  uVar8 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar9 = *(long *)puVar7;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar9);
    lVar9 = *(long *)puVar7;
  }
  lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x468);
  uVar11 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar12 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar9);
      lVar9 = *(long *)puVar7;
    }
    uVar13 = **(undefined8 **)(lVar9 + 0xb8);
    lVar12 = thunk_FUN_0301080c(*(undefined8 *)OVRPlatformMenu_TypeInfo);
    FUN_04c94f64(lVar12,uVar13,*(undefined8 *)OVRSharable_TypeInfo,0);
    lVar9 = *(long *)(*(long *)puVar7 + 0xb8);
    *(long *)(lVar9 + 0x468) = lVar12;
    thunk_FUN_03048534(lVar9 + 0x468,lVar12);
  }
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar11,uVar10,uVar8,lVar12);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80918;
  uVar10 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar10 = FUN_05afde1c(uVar10,0);
  uVar8 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar9 = *(long *)puVar7;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar9);
    lVar9 = *(long *)puVar7;
  }
  lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x470);
  uVar11 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar12 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar9);
      lVar9 = *(long *)puVar7;
    }
    uVar13 = **(undefined8 **)(lVar9 + 0xb8);
    lVar12 = thunk_FUN_0301080c(*(undefined8 *)OVRPlugin_TypeInfo);
    FUN_04c95028(lVar12,uVar13,*(undefined8 *)Oculus_Interaction_Input_OVRSkeletonData_TypeInfo,0);
    lVar9 = *(long *)(*(long *)puVar7 + 0xb8);
    *(long *)(lVar9 + 0x470) = lVar12;
    thunk_FUN_03048534(lVar9 + 0x470,lVar12);
  }
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar11,uVar10,uVar8,lVar12);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80920;
  uVar10 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar10 = FUN_05afde1c(uVar10,0);
  uVar8 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar9 = *(long *)puVar7;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar9);
    lVar9 = *(long *)puVar7;
  }
  lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x478);
  uVar11 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar12 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar9);
      lVar9 = *(long *)puVar7;
    }
    uVar13 = **(undefined8 **)(lVar9 + 0xb8);
    lVar12 = thunk_FUN_0301080c(*(undefined8 *)OVROverlayCanvasManager_TypeInfo);
    FUN_04c950ec(lVar12,uVar13,
                 *(undefined8 *)Oculus_Interaction_Body_Input_OVRSkeletonMapping_TypeInfo,0);
    lVar9 = *(long *)(*(long *)puVar7 + 0xb8);
    *(long *)(lVar9 + 0x478) = lVar12;
    thunk_FUN_03048534(lVar9 + 0x478,lVar12);
  }
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar11,uVar10,uVar8,lVar12);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f75070;
  uVar10 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar10 = FUN_05afde1c(uVar10,0);
  uVar8 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar9 = *(long *)puVar7;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar9);
    lVar9 = *(long *)puVar7;
  }
  lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x480);
  uVar11 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar12 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar9);
      lVar9 = *(long *)puVar7;
    }
    uVar13 = **(undefined8 **)(lVar9 + 0xb8);
    lVar12 = thunk_FUN_0301080c(*(undefined8 *)
                                 Oculus_Interaction_Input_OVRPointerPoseSelector_TypeInfo);
    FUN_04c94ea0(lVar12,uVar13,*(undefined8 *)OVRRaycaster_TypeInfo,0);
    lVar9 = *(long *)(*(long *)puVar7 + 0xb8);
    *(long *)(lVar9 + 0x480) = lVar12;
    thunk_FUN_03048534(lVar9 + 0x480,lVar12);
  }
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar11,uVar10,uVar8,lVar12);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80828;
  uVar10 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar10 = FUN_05afde1c(uVar10,0);
  uVar8 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar9 = *(long *)puVar7;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar9);
    lVar9 = *(long *)puVar7;
  }
  lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x488);
  uVar11 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar12 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar9);
      lVar9 = *(long *)puVar7;
    }
    uVar13 = **(undefined8 **)(lVar9 + 0xb8);
    lVar12 = thunk_FUN_0301080c(*(undefined8 *)UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo
                               );
    FUN_04c94944(lVar12,uVar13,*(undefined8 *)OVRResources_TypeInfo,0);
    lVar9 = *(long *)(*(long *)puVar7 + 0xb8);
    *(long *)(lVar9 + 0x488) = lVar12;
    thunk_FUN_03048534(lVar9 + 0x488,lVar12);
  }
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar11,uVar10,uVar8,lVar12);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f9a8d8;
  uVar10 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar10 = FUN_05afde1c(uVar10,0);
  uVar8 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar9 = *(long *)puVar7;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar9);
    lVar9 = *(long *)puVar7;
  }
  lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x490);
  uVar11 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar12 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar9);
      lVar9 = *(long *)puVar7;
    }
    uVar13 = **(undefined8 **)(lVar9 + 0xb8);
    lVar12 = thunk_FUN_0301080c(*(undefined8 *)OVROverlayCanvasCustom_TypeInfo);
    FUN_04c94c54(lVar12,uVar13,*(undefined8 *)OVRRoomLayout_TypeInfo,0);
    lVar9 = *(long *)(*(long *)puVar7 + 0xb8);
    *(long *)(lVar9 + 0x490) = lVar12;
    thunk_FUN_03048534(lVar9 + 0x490,lVar12);
  }
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar11,uVar10,uVar8,lVar12);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar10 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar10 = FUN_05afde1c(uVar10,0);
  uVar8 = FUN_05afde1c(*(undefined8 *)puVar3,0);
  lVar9 = *(long *)puVar7;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar9);
    lVar9 = *(long *)puVar7;
  }
  lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x498);
  uVar11 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar12 == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar9);
      lVar9 = *(long *)puVar7;
    }
    uVar13 = **(undefined8 **)(lVar9 + 0xb8);
    lVar12 = thunk_FUN_0301080c(*(undefined8 *)UnityEngine_EventSystems_OVRPointerEventData_TypeInfo
                               );
    FUN_04c94c54(lVar12,uVar13,*(undefined8 *)OVRRuntimeController_TypeInfo,0);
    lVar9 = *(long *)(*(long *)puVar7 + 0xb8);
    *(long *)(lVar9 + 0x498) = lVar12;
    thunk_FUN_03048534(lVar9 + 0x498,lVar12);
  }
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar11,uVar10,uVar8,lVar12);
  return;
}


