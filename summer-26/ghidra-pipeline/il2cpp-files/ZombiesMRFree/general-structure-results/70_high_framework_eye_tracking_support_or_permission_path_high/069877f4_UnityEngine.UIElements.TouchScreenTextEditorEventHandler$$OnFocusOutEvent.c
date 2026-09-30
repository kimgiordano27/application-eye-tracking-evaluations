/*
FUNCTION_NAME: UnityEngine.UIElements.TouchScreenTextEditorEventHandler$$OnFocusOutEvent
ENTRY_POINT: 069877f4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 83
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_possible_biometrics_hits_1
*/


void UnityEngine_UIElements_TouchScreenTextEditorEventHandler__OnFocusOutEvent(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64();
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f80870;
  uVar4 = *unaff_x27;
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
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x3f0);
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_0301080c(*(undefined8 *)OVRGazePointer_TypeInfo);
    FUN_04c932f0(lVar6,uVar7,*(undefined8 *)OVRMeshRenderer_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x3f0) = lVar6;
    thunk_FUN_03048534(lVar3 + 0x3f0,lVar6);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar5,uVar4,uVar2,lVar6);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f807f0;
  uVar4 = *unaff_x27;
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
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x3f8);
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_0301080c(*(undefined8 *)OVRGLTFAnimatinonNode_TypeInfo);
    FUN_04c92f1c(lVar6,uVar7,*(undefined8 *)OVRMixedReality_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x3f8) = lVar6;
    thunk_FUN_03048534(lVar3 + 0x3f8,lVar6);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar5,uVar4,uVar2,lVar6);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f80910;
  uVar4 = *unaff_x27;
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
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x400);
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_0301080c(*(undefined8 *)OVRGLTFAccessor_TypeInfo);
    FUN_04c936c4(lVar6,uVar7,*(undefined8 *)OVRMixedRealityCaptureConfiguration_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x400) = lVar6;
    thunk_FUN_03048534(lVar3 + 0x400,lVar6);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar5,uVar4,uVar2,lVar6);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f80918;
  uVar4 = *unaff_x27;
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
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x408);
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_0301080c(*(undefined8 *)OVRHaptics_TypeInfo);
    FUN_04c93788(lVar6,uVar7,*(undefined8 *)OVRNativeBuffer_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x408) = lVar6;
    thunk_FUN_03048534(lVar3 + 0x408,lVar6);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar5,uVar4,uVar2,lVar6);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f80920;
  uVar4 = *unaff_x27;
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
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x410);
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_0301080c(*(undefined8 *)OVRGLTFLoader_TypeInfo);
    FUN_04c9384c(lVar6,uVar7,*(undefined8 *)OVRNodeStateProperties_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x410) = lVar6;
    thunk_FUN_03048534(lVar3 + 0x410,lVar6);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar5,uVar4,uVar2,lVar6);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f75070;
  uVar4 = *unaff_x27;
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
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x418);
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_0301080c(*(undefined8 *)OVRFaceExpressions_TypeInfo);
    FUN_04c93600(lVar6,uVar7,*(undefined8 *)OVROverlay_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x418) = lVar6;
    thunk_FUN_03048534(lVar3 + 0x418,lVar6);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar5,uVar4,uVar2,lVar6);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f80828;
  uVar4 = *unaff_x27;
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
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x420);
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_0301080c(*(undefined8 *)OVREyeGaze_TypeInfo);
    FUN_04c930a4(lVar6,uVar7,*(undefined8 *)OVRHumanBodyBonesMappingsInterface_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x420) = lVar6;
    thunk_FUN_03048534(lVar3 + 0x420,lVar6);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar5,uVar4,uVar2,lVar6);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f9a8d8;
  uVar4 = *unaff_x27;
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
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x428);
  uVar5 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_0301080c(*(undefined8 *)OVRGLTFAnimationNodeMorphTargetHandler_TypeInfo);
    FUN_04c933b4(lVar6,uVar7,*(undefined8 *)OVRInput_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x428) = lVar6;
    thunk_FUN_03048534(lVar3 + 0x428,lVar6);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar5,uVar4,uVar2,lVar6);
  return;
}


