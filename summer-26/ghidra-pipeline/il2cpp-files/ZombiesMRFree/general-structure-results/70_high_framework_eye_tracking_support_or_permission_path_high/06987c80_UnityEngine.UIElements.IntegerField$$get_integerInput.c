/*
FUNCTION_NAME: UnityEngine.UIElements.IntegerField$$get_integerInput
ENTRY_POINT: 06987c80
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_possible_biometrics_hits_1
*/


void UnityEngine_UIElements_IntegerField__get_integerInput(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long in_x9;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (*(long *)(in_x9 + 0x410) == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(param_1);
      param_1 = *unaff_x25;
    }
    uVar6 = **(undefined8 **)(param_1 + 0xb8);
    uVar2 = thunk_FUN_0301080c(*(undefined8 *)OVRGLTFLoader_TypeInfo);
    FUN_04c9384c(uVar2,uVar6,*(undefined8 *)OVRNodeStateProperties_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(undefined8 *)(lVar3 + 0x410) = uVar2;
    thunk_FUN_03048534(lVar3 + 0x410,uVar2);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar4);
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
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x418);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_0301080c(*(undefined8 *)OVRFaceExpressions_TypeInfo);
    FUN_04c93600(lVar5,uVar7,*(undefined8 *)OVROverlay_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x418) = lVar5;
    thunk_FUN_03048534(lVar3 + 0x418,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar4,uVar2,lVar5);
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
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x420);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_0301080c(*(undefined8 *)OVREyeGaze_TypeInfo);
    FUN_04c930a4(lVar5,uVar7,*(undefined8 *)OVRHumanBodyBonesMappingsInterface_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x420) = lVar5;
    thunk_FUN_03048534(lVar3 + 0x420,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar4,uVar2,lVar5);
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
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x428);
  uVar6 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_0301080c(*(undefined8 *)OVRGLTFAnimationNodeMorphTargetHandler_TypeInfo);
    FUN_04c933b4(lVar5,uVar7,*(undefined8 *)OVRInput_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x428) = lVar5;
    thunk_FUN_03048534(lVar3 + 0x428,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar6,uVar4,uVar2,lVar5);
  return;
}


