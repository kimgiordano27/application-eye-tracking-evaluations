/*
FUNCTION_NAME: UnityEngine.UIElements.TouchScreenTextEditorEventHandler$$OnPointerDownEvent
ENTRY_POINT: 06987494
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_possible_biometrics_hits_1
*/


void UnityEngine_UIElements_TouchScreenTextEditorEventHandler__OnPointerDownEvent(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int in_w9;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  
  if (in_w9 == 0) {
    thunk_FUN_02fdcff0(param_1);
    param_1 = *unaff_x25;
  }
  uVar6 = **(undefined8 **)(param_1 + 0xb8);
  uVar2 = thunk_FUN_0301080c(*(undefined8 *)OVRHandTest_TypeInfo);
  FUN_04c92fe0(uVar2,uVar6,*(undefined8 *)OVRHapticsClip_TypeInfo,0);
  lVar3 = *(long *)(*unaff_x25 + 0xb8);
  *(undefined8 *)(lVar3 + 0x3d0) = uVar2;
  thunk_FUN_03048534(lVar3 + 0x3d0,uVar2);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64();
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f808e8;
  uVar2 = *unaff_x27;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar2 = FUN_05afde1c(uVar2,0);
  uVar6 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x3d8);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_0301080c(*(undefined8 *)OVRGLTFComponentType_TypeInfo);
    FUN_04c93478(lVar5,uVar7,*(undefined8 *)UnityEngine_EventSystems_OVRInputModule_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x3d8) = lVar5;
    thunk_FUN_03048534(lVar3 + 0x3d8,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar4,uVar2,uVar6,lVar5);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f80860;
  uVar2 = *unaff_x27;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar2 = FUN_05afde1c(uVar2,0);
  uVar6 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x3e0);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_0301080c(*(undefined8 *)OVRGLTFType_TypeInfo);
    FUN_04c93168(lVar5,uVar7,*(undefined8 *)OVRLocatable_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x3e0) = lVar5;
    thunk_FUN_03048534(lVar3 + 0x3e0,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar4,uVar2,uVar6,lVar5);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f80868;
  uVar2 = *unaff_x27;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar2 = FUN_05afde1c(uVar2,0);
  uVar6 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 1000);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_0301080c(*(undefined8 *)OVRHandSkeletonVersion_TypeInfo);
    FUN_04c9322c(lVar5,uVar7,*(undefined8 *)OVRManager_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 1000) = lVar5;
    thunk_FUN_03048534(lVar3 + 1000,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar4,uVar2,uVar6,lVar5);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f80870;
  uVar2 = *unaff_x27;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar2 = FUN_05afde1c(uVar2,0);
  uVar6 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x3f0);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_0301080c(*(undefined8 *)OVRGazePointer_TypeInfo);
    FUN_04c932f0(lVar5,uVar7,*(undefined8 *)OVRMeshRenderer_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x3f0) = lVar5;
    thunk_FUN_03048534(lVar3 + 0x3f0,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar4,uVar2,uVar6,lVar5);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f807f0;
  uVar2 = *unaff_x27;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar2 = FUN_05afde1c(uVar2,0);
  uVar6 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x3f8);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_0301080c(*(undefined8 *)OVRGLTFAnimatinonNode_TypeInfo);
    FUN_04c92f1c(lVar5,uVar7,*(undefined8 *)OVRMixedReality_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x3f8) = lVar5;
    thunk_FUN_03048534(lVar3 + 0x3f8,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar4,uVar2,uVar6,lVar5);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f80910;
  uVar2 = *unaff_x27;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar2 = FUN_05afde1c(uVar2,0);
  uVar6 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x400);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_0301080c(*(undefined8 *)OVRGLTFAccessor_TypeInfo);
    FUN_04c936c4(lVar5,uVar7,*(undefined8 *)OVRMixedRealityCaptureConfiguration_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x400) = lVar5;
    thunk_FUN_03048534(lVar3 + 0x400,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar4,uVar2,uVar6,lVar5);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f80918;
  uVar2 = *unaff_x27;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar2 = FUN_05afde1c(uVar2,0);
  uVar6 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x408);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_0301080c(*(undefined8 *)OVRHaptics_TypeInfo);
    FUN_04c93788(lVar5,uVar7,*(undefined8 *)OVRNativeBuffer_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x408) = lVar5;
    thunk_FUN_03048534(lVar3 + 0x408,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar4,uVar2,uVar6,lVar5);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f80920;
  uVar2 = *unaff_x27;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar2 = FUN_05afde1c(uVar2,0);
  uVar6 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x410);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar3);
      lVar3 = *unaff_x25;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_0301080c(*(undefined8 *)OVRGLTFLoader_TypeInfo);
    FUN_04c9384c(lVar5,uVar7,*(undefined8 *)OVRNodeStateProperties_TypeInfo,0);
    lVar3 = *(long *)(*unaff_x25 + 0xb8);
    *(long *)(lVar3 + 0x410) = lVar5;
    thunk_FUN_03048534(lVar3 + 0x410,lVar5);
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar4,uVar2,uVar6,lVar5);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f75070;
  uVar2 = *unaff_x27;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar2 = FUN_05afde1c(uVar2,0);
  uVar6 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x418);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
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
  FUN_0697db64(uVar4,uVar2,uVar6,lVar5);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f80828;
  uVar2 = *unaff_x27;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar2 = FUN_05afde1c(uVar2,0);
  uVar6 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x420);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
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
  FUN_0697db64(uVar4,uVar2,uVar6,lVar5);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f9a8d8;
  uVar2 = *unaff_x27;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar2 = FUN_05afde1c(uVar2,0);
  uVar6 = FUN_05afde1c(*(undefined8 *)puVar1,0);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar3);
    lVar3 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x428);
  uVar4 = *(undefined8 *)(*unaff_x24 + 0xb8);
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
  FUN_0697db64(uVar4,uVar2,uVar6,lVar5);
  return;
}


