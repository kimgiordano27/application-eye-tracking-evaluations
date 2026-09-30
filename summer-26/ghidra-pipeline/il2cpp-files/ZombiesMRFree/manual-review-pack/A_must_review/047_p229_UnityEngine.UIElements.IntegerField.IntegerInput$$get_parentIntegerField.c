/*
FUNCTION_NAME: UnityEngine.UIElements.IntegerField.IntegerInput$$get_parentIntegerField
ENTRY_POINT: 069882c8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 112
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_UIElements_IntegerField_IntegerInput__get_parentIntegerField(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  
  thunk_FUN_02fdcff0();
  uVar3 = FUN_05afde1c();
  uVar4 = FUN_05afde1c(*unaff_x29,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar5);
    lVar5 = *unaff_x25;
  }
  puVar2 = PTR_DAT_06f9a428;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x430);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar5);
      lVar5 = *unaff_x25;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_0301080c(*(undefined8 *)OVROverlayCanvas_TypeInfo);
    FUN_04c98798(lVar7,uVar8,*(undefined8 *)OVRProfile_TypeInfo,0);
    lVar5 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar5 + 0x430) = lVar7;
    thunk_FUN_03048534(lVar5 + 0x430,lVar7);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar3,uVar4,lVar7);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f807e8;
  uVar3 = *unaff_x29;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar3 = FUN_05afde1c(uVar3,0);
  uVar4 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar5);
    lVar5 = *unaff_x25;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x438);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar5);
      lVar5 = *unaff_x25;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_0301080c(*(undefined8 *)OVROverlayCanvasSettings_TypeInfo);
    Unity_Collections_LowLevel_Unsafe_UnsafeRingQueue<__Il2CppFullySharedGenericStructType>__get_Length
              (lVar7,uVar8,*(undefined8 *)OVRRuntimeSettings_TypeInfo,0);
    lVar5 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar5 + 0x438) = lVar7;
    thunk_FUN_03048534(lVar5 + 0x438,lVar7);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar3,uVar4,lVar7);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f808e8;
  uVar3 = *unaff_x29;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar3 = FUN_05afde1c(uVar3,0);
  uVar4 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar5);
    lVar5 = *unaff_x25;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x440);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar5);
      lVar5 = *unaff_x25;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_0301080c(*(undefined8 *)OVROverlayCanvas_TMPChanged_TypeInfo);
    FUN_04c94d18(lVar7,uVar8,*(undefined8 *)OVRSampledEventSender_TypeInfo,0);
    lVar5 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar5 + 0x440) = lVar7;
    thunk_FUN_03048534(lVar5 + 0x440,lVar7);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar3,uVar4,lVar7);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f80860;
  uVar3 = *unaff_x29;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar3 = FUN_05afde1c(uVar3,0);
  uVar4 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar5);
    lVar5 = *unaff_x25;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x448);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar5);
      lVar5 = *unaff_x25;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_0301080c(*(undefined8 *)OVRPermissionsRequester_TypeInfo);
    FUN_04c94a08(lVar7,uVar8,*(undefined8 *)OVRSceneAnchor_TypeInfo,0);
    lVar5 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar5 + 0x448) = lVar7;
    thunk_FUN_03048534(lVar5 + 0x448,lVar7);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar3,uVar4,lVar7);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f80868;
  uVar3 = *unaff_x29;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar3 = FUN_05afde1c(uVar3,0);
  uVar4 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar5);
    lVar5 = *unaff_x25;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x450);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar5);
      lVar5 = *unaff_x25;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_0301080c(*(undefined8 *)OVRPassthroughLayer_TypeInfo);
    FUN_04c94acc(lVar7,uVar8,*(undefined8 *)OVRSceneRoom_TypeInfo,0);
    lVar5 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar5 + 0x450) = lVar7;
    thunk_FUN_03048534(lVar5 + 0x450,lVar7);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar3,uVar4,lVar7);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f80870;
  uVar3 = *unaff_x29;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar3 = FUN_05afde1c(uVar3,0);
  uVar4 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar5);
    lVar5 = *unaff_x25;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x458);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar5);
      lVar5 = *unaff_x25;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_0301080c(*(undefined8 *)OVRPassthroughColorLut_TypeInfo);
    FUN_04c94b90(lVar7,uVar8,*(undefined8 *)OVRScreenFade_TypeInfo,0);
    lVar5 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar5 + 0x458) = lVar7;
    thunk_FUN_03048534(lVar5 + 0x458,lVar7);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar3,uVar4,lVar7);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f807f0;
  uVar3 = *unaff_x29;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar3 = FUN_05afde1c(uVar3,0);
  uVar4 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar5);
    lVar5 = *unaff_x25;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x460);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar5);
      lVar5 = *unaff_x25;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_0301080c(*(undefined8 *)OVRPose_TypeInfo);
    FUN_04c94880(lVar7,uVar8,*(undefined8 *)OVRSemanticLabels_TypeInfo,0);
    lVar5 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar5 + 0x460) = lVar7;
    thunk_FUN_03048534(lVar5 + 0x460,lVar7);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar3,uVar4,lVar7);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f80910;
  uVar3 = *unaff_x29;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar3 = FUN_05afde1c(uVar3,0);
  uVar4 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar5);
    lVar5 = *unaff_x25;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x468);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar5);
      lVar5 = *unaff_x25;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_0301080c(*(undefined8 *)OVRPlatformMenu_TypeInfo);
    FUN_04c94f64(lVar7,uVar8,*(undefined8 *)OVRSharable_TypeInfo,0);
    lVar5 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar5 + 0x468) = lVar7;
    thunk_FUN_03048534(lVar5 + 0x468,lVar7);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar3,uVar4,lVar7);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f80918;
  uVar3 = *unaff_x29;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar3 = FUN_05afde1c(uVar3,0);
  uVar4 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar5);
    lVar5 = *unaff_x25;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x470);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar5);
      lVar5 = *unaff_x25;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_0301080c(*(undefined8 *)OVRPlugin_TypeInfo);
    FUN_04c95028(lVar7,uVar8,*(undefined8 *)Oculus_Interaction_Input_OVRSkeletonData_TypeInfo,0);
    lVar5 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar5 + 0x470) = lVar7;
    thunk_FUN_03048534(lVar5 + 0x470,lVar7);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar3,uVar4,lVar7);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f80920;
  uVar3 = *unaff_x29;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar3 = FUN_05afde1c(uVar3,0);
  uVar4 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar5);
    lVar5 = *unaff_x25;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x478);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar5);
      lVar5 = *unaff_x25;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_0301080c(*(undefined8 *)OVROverlayCanvasManager_TypeInfo);
    FUN_04c950ec(lVar7,uVar8,
                 *(undefined8 *)Oculus_Interaction_Body_Input_OVRSkeletonMapping_TypeInfo,0);
    lVar5 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar5 + 0x478) = lVar7;
    thunk_FUN_03048534(lVar5 + 0x478,lVar7);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar3,uVar4,lVar7);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f75070;
  uVar3 = *unaff_x29;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar3 = FUN_05afde1c(uVar3,0);
  uVar4 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar5);
    lVar5 = *unaff_x25;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x480);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar5);
      lVar5 = *unaff_x25;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_0301080c(*(undefined8 *)
                                Oculus_Interaction_Input_OVRPointerPoseSelector_TypeInfo);
    FUN_04c94ea0(lVar7,uVar8,*(undefined8 *)OVRRaycaster_TypeInfo,0);
    lVar5 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar5 + 0x480) = lVar7;
    thunk_FUN_03048534(lVar5 + 0x480,lVar7);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar3,uVar4,lVar7);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f80828;
  uVar3 = *unaff_x29;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar3 = FUN_05afde1c(uVar3,0);
  uVar4 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar5);
    lVar5 = *unaff_x25;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x488);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar5);
      lVar5 = *unaff_x25;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_0301080c(*(undefined8 *)UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo)
    ;
    FUN_04c94944(lVar7,uVar8,*(undefined8 *)OVRResources_TypeInfo,0);
    lVar5 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar5 + 0x488) = lVar7;
    thunk_FUN_03048534(lVar5 + 0x488,lVar7);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar3,uVar4,lVar7);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f9a8d8;
  uVar3 = *unaff_x29;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar3 = FUN_05afde1c(uVar3,0);
  uVar4 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar5);
    lVar5 = *unaff_x25;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x490);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar5);
      lVar5 = *unaff_x25;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_0301080c(*(undefined8 *)OVROverlayCanvasCustom_TypeInfo);
    FUN_04c94c54(lVar7,uVar8,*(undefined8 *)OVRRoomLayout_TypeInfo,0);
    lVar5 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar5 + 0x490) = lVar7;
    thunk_FUN_03048534(lVar5 + 0x490,lVar7);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar3,uVar4,lVar7);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar3 = *unaff_x29;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar3 = FUN_05afde1c(uVar3,0);
  uVar4 = FUN_05afde1c(*unaff_x27,0);
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar5);
    lVar5 = *unaff_x25;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x498);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar5);
      lVar5 = *unaff_x25;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_0301080c(*(undefined8 *)UnityEngine_EventSystems_OVRPointerEventData_TypeInfo)
    ;
    FUN_04c94c54(lVar7,uVar8,*(undefined8 *)OVRRuntimeController_TypeInfo,0);
    lVar5 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar5 + 0x498) = lVar7;
    thunk_FUN_03048534(lVar5 + 0x498,lVar7);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar3,uVar4,lVar7);
  return;
}


