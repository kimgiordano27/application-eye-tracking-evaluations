/*
FUNCTION_NAME: UnityEngine.UIElements.IntegerField.IntegerInput$$ValueToString
ENTRY_POINT: 069885f0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 112
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_UIElements_IntegerField_IntegerInput__ValueToString(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  
  FUN_05afde1c();
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar3);
    lVar3 = *unaff_x25;
  }
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x448) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    uVar2 = thunk_FUN_0301080c(*(undefined8 *)OVRPermissionsRequester_TypeInfo);
    FUN_04c94a08(uVar2,uVar6,*(undefined8 *)OVRSceneAnchor_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(undefined8 *)(lVar3 + 0x448) = uVar2;
    thunk_FUN_03048534(lVar3 + 0x448,uVar2);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar4);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f80868;
  uVar4 = *unaff_x29;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar4 = FUN_05afde1c(uVar4,0);
  uVar2 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x450);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_0301080c(*(undefined8 *)OVRPassthroughLayer_TypeInfo);
    FUN_04c94acc(lVar5,uVar7,*(undefined8 *)OVRSceneRoom_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x450) = lVar5;
    thunk_FUN_03048534(lVar3 + 0x450,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar4,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f80870;
  uVar4 = *unaff_x29;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar4 = FUN_05afde1c(uVar4,0);
  uVar2 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x458);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_0301080c(*(undefined8 *)OVRPassthroughColorLut_TypeInfo);
    FUN_04c94b90(lVar5,uVar7,*(undefined8 *)OVRScreenFade_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x458) = lVar5;
    thunk_FUN_03048534(lVar3 + 0x458,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar4,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f807f0;
  uVar4 = *unaff_x29;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar4 = FUN_05afde1c(uVar4,0);
  uVar2 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x460);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_0301080c(*(undefined8 *)OVRPose_TypeInfo);
    FUN_04c94880(lVar5,uVar7,*(undefined8 *)OVRSemanticLabels_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x460) = lVar5;
    thunk_FUN_03048534(lVar3 + 0x460,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar4,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f80910;
  uVar4 = *unaff_x29;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar4 = FUN_05afde1c(uVar4,0);
  uVar2 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x468);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_0301080c(*(undefined8 *)OVRPlatformMenu_TypeInfo);
    FUN_04c94f64(lVar5,uVar7,*(undefined8 *)OVRSharable_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x468) = lVar5;
    thunk_FUN_03048534(lVar3 + 0x468,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar4,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f80918;
  uVar4 = *unaff_x29;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar4 = FUN_05afde1c(uVar4,0);
  uVar2 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x470);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_0301080c(*(undefined8 *)OVRPlugin_TypeInfo);
    FUN_04c95028(lVar5,uVar7,*(undefined8 *)Oculus_Interaction_Input_OVRSkeletonData_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x470) = lVar5;
    thunk_FUN_03048534(lVar3 + 0x470,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar4,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f80920;
  uVar4 = *unaff_x29;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar4 = FUN_05afde1c(uVar4,0);
  uVar2 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x478);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_0301080c(*(undefined8 *)OVROverlayCanvasManager_TypeInfo);
    FUN_04c950ec(lVar5,uVar7,
                 *(undefined8 *)Oculus_Interaction_Body_Input_OVRSkeletonMapping_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x478) = lVar5;
    thunk_FUN_03048534(lVar3 + 0x478,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar4,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f75070;
  uVar4 = *unaff_x29;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar4 = FUN_05afde1c(uVar4,0);
  uVar2 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x480);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_0301080c(*(undefined8 *)
                                Oculus_Interaction_Input_OVRPointerPoseSelector_TypeInfo);
    FUN_04c94ea0(lVar5,uVar7,*(undefined8 *)OVRRaycaster_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x480) = lVar5;
    thunk_FUN_03048534(lVar3 + 0x480,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar4,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f80828;
  uVar4 = *unaff_x29;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar4 = FUN_05afde1c(uVar4,0);
  uVar2 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x488);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_0301080c(*(undefined8 *)UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo)
    ;
    FUN_04c94944(lVar5,uVar7,*(undefined8 *)OVRResources_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x488) = lVar5;
    thunk_FUN_03048534(lVar3 + 0x488,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar4,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f9a8d8;
  uVar4 = *unaff_x29;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar4 = FUN_05afde1c(uVar4,0);
  uVar2 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x490);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_0301080c(*(undefined8 *)OVROverlayCanvasCustom_TypeInfo);
    FUN_04c94c54(lVar5,uVar7,*(undefined8 *)OVRRoomLayout_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x490) = lVar5;
    thunk_FUN_03048534(lVar3 + 0x490,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar4,uVar2,lVar5);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar4 = *unaff_x29;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar4 = FUN_05afde1c(uVar4,0);
  uVar2 = FUN_05afde1c(*unaff_x27,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x498);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_0301080c(*(undefined8 *)UnityEngine_EventSystems_OVRPointerEventData_TypeInfo)
    ;
    FUN_04c94c54(lVar5,uVar7,*(undefined8 *)OVRRuntimeController_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x498) = lVar5;
    thunk_FUN_03048534(lVar3 + 0x498,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar4,uVar2,lVar5);
  return;
}


