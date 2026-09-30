/*
FUNCTION_NAME: UnityEngine.UIElements.TouchScreenTextEditorEventHandler$$ExecuteDefaultActionAtTarget
ENTRY_POINT: 069872b8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 101
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_possible_biometrics_hits_1
*/


void UnityEngine_UIElements_TouchScreenTextEditorEventHandler__ExecuteDefaultActionAtTarget
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long *unaff_x24;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 0x718));
  FUN_02fe925c(OVRGLTFAnimationNodeMorphTargetHandler_TypeInfo);
  FUN_02fe925c(OVRGLTFComponentType_TypeInfo);
  FUN_02fe925c(OVRGLTFLoader_TypeInfo);
  FUN_02fe925c(OVRGLTFType_TypeInfo);
  FUN_02fe925c(OVRGazePointer_TypeInfo);
  FUN_02fe925c(OVRHandSkeletonVersion_TypeInfo);
  FUN_02fe925c(OVRHandTest_TypeInfo);
  FUN_02fe925c(OVRHaptics_TypeInfo);
  FUN_02fe925c(PTR_DAT_06f6d6a0);
  FUN_02fe925c(OVRHapticsClip_TypeInfo);
  FUN_02fe925c(OVRHumanBodyBonesMappingsInterface_TypeInfo);
  FUN_02fe925c(OVRInput_TypeInfo);
  FUN_02fe925c(UnityEngine_EventSystems_OVRInputModule_TypeInfo);
  FUN_02fe925c(OVRLocatable_TypeInfo);
  FUN_02fe925c(OVRManager_TypeInfo);
  FUN_02fe925c(OVRMeshRenderer_TypeInfo);
  FUN_02fe925c(OVRMixedReality_TypeInfo);
  FUN_02fe925c(OVRMixedRealityCaptureConfiguration_TypeInfo);
  FUN_02fe925c(OVRNativeBuffer_TypeInfo);
  FUN_02fe925c(OVRNodeStateProperties_TypeInfo);
  FUN_02fe925c(OVROverlay_TypeInfo);
  FUN_02fe925c(Mono_Security_Interface_MonoTlsConnectionInfo_TypeInfo);
  FUN_02fe925c(PTR_DAT_06f80910);
  FUN_02fe925c(PTR_DAT_06f80918);
  FUN_02fe925c(PTR_DAT_06f80920);
  *(undefined1 *)(unaff_x19 + 0xc80) = 1;
  puVar3 = PTR_DAT_06f807e8;
  puVar1 = PTR_DAT_06f6d6a0;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar5 = Mono_Security_Interface_MonoTlsConnectionInfo_TypeInfo;
  puVar4 = PTR_DAT_06f80af0;
  uVar8 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar8 = FUN_05afde1c(uVar8,0);
  uVar6 = FUN_05afde1c(*(undefined8 *)puVar4,0);
  lVar7 = *(long *)puVar5;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar7);
    lVar7 = *(long *)puVar5;
  }
  puVar4 = PTR_DAT_06f9a428;
  lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x3d0);
  uVar9 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar7);
      lVar7 = *(long *)puVar5;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar10 = thunk_FUN_0301080c(*(undefined8 *)OVRHandTest_TypeInfo);
    FUN_04c92fe0(lVar10,uVar11,*(undefined8 *)OVRHapticsClip_TypeInfo,0);
    lVar7 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar7 + 0x3d0) = lVar10;
    thunk_FUN_03048534(lVar7 + 0x3d0,lVar10);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar9,uVar8,uVar6,lVar10);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f808e8;
  uVar8 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar8 = FUN_05afde1c(uVar8,0);
  uVar6 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar7 = *(long *)puVar5;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar7);
    lVar7 = *(long *)puVar5;
  }
  lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x3d8);
  uVar9 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar7);
      lVar7 = *(long *)puVar5;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar10 = thunk_FUN_0301080c(*(undefined8 *)OVRGLTFComponentType_TypeInfo);
    FUN_04c93478(lVar10,uVar11,*(undefined8 *)UnityEngine_EventSystems_OVRInputModule_TypeInfo,0);
    lVar7 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar7 + 0x3d8) = lVar10;
    thunk_FUN_03048534(lVar7 + 0x3d8,lVar10);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar9,uVar8,uVar6,lVar10);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80860;
  uVar8 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar8 = FUN_05afde1c(uVar8,0);
  uVar6 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar7 = *(long *)puVar5;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar7);
    lVar7 = *(long *)puVar5;
  }
  lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x3e0);
  uVar9 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar7);
      lVar7 = *(long *)puVar5;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar10 = thunk_FUN_0301080c(*(undefined8 *)OVRGLTFType_TypeInfo);
    FUN_04c93168(lVar10,uVar11,*(undefined8 *)OVRLocatable_TypeInfo,0);
    lVar7 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar7 + 0x3e0) = lVar10;
    thunk_FUN_03048534(lVar7 + 0x3e0,lVar10);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar9,uVar8,uVar6,lVar10);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80868;
  uVar8 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar8 = FUN_05afde1c(uVar8,0);
  uVar6 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar7 = *(long *)puVar5;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar7);
    lVar7 = *(long *)puVar5;
  }
  lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 1000);
  uVar9 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar7);
      lVar7 = *(long *)puVar5;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar10 = thunk_FUN_0301080c(*(undefined8 *)OVRHandSkeletonVersion_TypeInfo);
    FUN_04c9322c(lVar10,uVar11,*(undefined8 *)OVRManager_TypeInfo,0);
    lVar7 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar7 + 1000) = lVar10;
    thunk_FUN_03048534(lVar7 + 1000,lVar10);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar9,uVar8,uVar6,lVar10);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80870;
  uVar8 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar8 = FUN_05afde1c(uVar8,0);
  uVar6 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar7 = *(long *)puVar5;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar7);
    lVar7 = *(long *)puVar5;
  }
  lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x3f0);
  uVar9 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar7);
      lVar7 = *(long *)puVar5;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar10 = thunk_FUN_0301080c(*(undefined8 *)OVRGazePointer_TypeInfo);
    FUN_04c932f0(lVar10,uVar11,*(undefined8 *)OVRMeshRenderer_TypeInfo,0);
    lVar7 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar7 + 0x3f0) = lVar10;
    thunk_FUN_03048534(lVar7 + 0x3f0,lVar10);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar9,uVar8,uVar6,lVar10);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f807f0;
  uVar8 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar8 = FUN_05afde1c(uVar8,0);
  uVar6 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar7 = *(long *)puVar5;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar7);
    lVar7 = *(long *)puVar5;
  }
  lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x3f8);
  uVar9 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar7);
      lVar7 = *(long *)puVar5;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar10 = thunk_FUN_0301080c(*(undefined8 *)OVRGLTFAnimatinonNode_TypeInfo);
    FUN_04c92f1c(lVar10,uVar11,*(undefined8 *)OVRMixedReality_TypeInfo,0);
    lVar7 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar7 + 0x3f8) = lVar10;
    thunk_FUN_03048534(lVar7 + 0x3f8,lVar10);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar9,uVar8,uVar6,lVar10);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80910;
  uVar8 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar8 = FUN_05afde1c(uVar8,0);
  uVar6 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar7 = *(long *)puVar5;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar7);
    lVar7 = *(long *)puVar5;
  }
  lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x400);
  uVar9 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar7);
      lVar7 = *(long *)puVar5;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar10 = thunk_FUN_0301080c(*(undefined8 *)OVRGLTFAccessor_TypeInfo);
    FUN_04c936c4(lVar10,uVar11,*(undefined8 *)OVRMixedRealityCaptureConfiguration_TypeInfo,0);
    lVar7 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar7 + 0x400) = lVar10;
    thunk_FUN_03048534(lVar7 + 0x400,lVar10);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar9,uVar8,uVar6,lVar10);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80918;
  uVar8 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar8 = FUN_05afde1c(uVar8,0);
  uVar6 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar7 = *(long *)puVar5;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar7);
    lVar7 = *(long *)puVar5;
  }
  lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x408);
  uVar9 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar7);
      lVar7 = *(long *)puVar5;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar10 = thunk_FUN_0301080c(*(undefined8 *)OVRHaptics_TypeInfo);
    FUN_04c93788(lVar10,uVar11,*(undefined8 *)OVRNativeBuffer_TypeInfo,0);
    lVar7 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar7 + 0x408) = lVar10;
    thunk_FUN_03048534(lVar7 + 0x408,lVar10);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar9,uVar8,uVar6,lVar10);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80920;
  uVar8 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar8 = FUN_05afde1c(uVar8,0);
  uVar6 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar7 = *(long *)puVar5;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar7);
    lVar7 = *(long *)puVar5;
  }
  lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x410);
  uVar9 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar7);
      lVar7 = *(long *)puVar5;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar10 = thunk_FUN_0301080c(*(undefined8 *)OVRGLTFLoader_TypeInfo);
    FUN_04c9384c(lVar10,uVar11,*(undefined8 *)OVRNodeStateProperties_TypeInfo,0);
    lVar7 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar7 + 0x410) = lVar10;
    thunk_FUN_03048534(lVar7 + 0x410,lVar10);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar9,uVar8,uVar6,lVar10);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f75070;
  uVar8 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar8 = FUN_05afde1c(uVar8,0);
  uVar6 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar7 = *(long *)puVar5;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar7);
    lVar7 = *(long *)puVar5;
  }
  lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x418);
  uVar9 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar7);
      lVar7 = *(long *)puVar5;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar10 = thunk_FUN_0301080c(*(undefined8 *)OVRFaceExpressions_TypeInfo);
    FUN_04c93600(lVar10,uVar11,*(undefined8 *)OVROverlay_TypeInfo,0);
    lVar7 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar7 + 0x418) = lVar10;
    thunk_FUN_03048534(lVar7 + 0x418,lVar10);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar9,uVar8,uVar6,lVar10);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80828;
  uVar8 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar8 = FUN_05afde1c(uVar8,0);
  uVar6 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar7 = *(long *)puVar5;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar7);
    lVar7 = *(long *)puVar5;
  }
  lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x420);
  uVar9 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar7);
      lVar7 = *(long *)puVar5;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar10 = thunk_FUN_0301080c(*(undefined8 *)OVREyeGaze_TypeInfo);
    FUN_04c930a4(lVar10,uVar11,*(undefined8 *)OVRHumanBodyBonesMappingsInterface_TypeInfo,0);
    lVar7 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar7 + 0x420) = lVar10;
    thunk_FUN_03048534(lVar7 + 0x420,lVar10);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar9,uVar8,uVar6,lVar10);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f9a8d8;
  uVar8 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar8 = FUN_05afde1c(uVar8,0);
  uVar6 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar7 = *(long *)puVar5;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar7);
    lVar7 = *(long *)puVar5;
  }
  lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x428);
  uVar9 = *(undefined8 *)(*unaff_x24 + 0xb8);
  if (lVar10 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar7);
      lVar7 = *(long *)puVar5;
    }
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    lVar10 = thunk_FUN_0301080c(*(undefined8 *)OVRGLTFAnimationNodeMorphTargetHandler_TypeInfo);
    FUN_04c933b4(lVar10,uVar11,*(undefined8 *)OVRInput_TypeInfo,0);
    lVar7 = *(long *)(*(long *)puVar5 + 0xb8);
    *(long *)(lVar7 + 0x428) = lVar10;
    thunk_FUN_03048534(lVar7 + 0x428,lVar10);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar9,uVar8,uVar6,lVar10);
  return;
}


