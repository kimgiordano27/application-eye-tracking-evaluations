/*
FUNCTION_NAME: FUN_069871d4
ENTRY_POINT: 069871d4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 127
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_2
*/


void FUN_069871d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar5 = PTR_DAT_06f99138;
  if ((DAT_073a9c80 & 1) == 0) {
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
    FUN_02fe925c(PTR_DAT_06f99138);
    FUN_02fe925c(OVREyeGaze_TypeInfo);
    FUN_02fe925c(OVRFaceExpressions_TypeInfo);
    FUN_02fe925c(OVRGLTFAccessor_TypeInfo);
    FUN_02fe925c(OVRGLTFAnimatinonNode_TypeInfo);
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
    DAT_073a9c80 = 1;
  }
  puVar3 = PTR_DAT_06f807e8;
  puVar1 = PTR_DAT_06f6d6a0;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar6 = Mono_Security_Interface_MonoTlsConnectionInfo_TypeInfo;
  puVar4 = PTR_DAT_06f80af0;
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  uVar7 = FUN_05afde1c(*(undefined8 *)puVar4,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar8);
    lVar8 = *(long *)puVar6;
  }
  puVar4 = PTR_DAT_06f9a428;
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x3d0);
  uVar10 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar8);
      lVar8 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)OVRHandTest_TypeInfo);
    FUN_04c92fe0(lVar11,uVar12,*(undefined8 *)OVRHapticsClip_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar6 + 0xb8);
    *(long *)(lVar8 + 0x3d0) = lVar11;
    thunk_FUN_03048534(lVar8 + 0x3d0,lVar11);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar10,uVar9,uVar7,lVar11);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f808e8;
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  uVar7 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar8);
    lVar8 = *(long *)puVar6;
  }
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x3d8);
  uVar10 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar8);
      lVar8 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)OVRGLTFComponentType_TypeInfo);
    FUN_04c93478(lVar11,uVar12,*(undefined8 *)UnityEngine_EventSystems_OVRInputModule_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar6 + 0xb8);
    *(long *)(lVar8 + 0x3d8) = lVar11;
    thunk_FUN_03048534(lVar8 + 0x3d8,lVar11);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar10,uVar9,uVar7,lVar11);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80860;
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  uVar7 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar8);
    lVar8 = *(long *)puVar6;
  }
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x3e0);
  uVar10 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar8);
      lVar8 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)OVRGLTFType_TypeInfo);
    FUN_04c93168(lVar11,uVar12,*(undefined8 *)OVRLocatable_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar6 + 0xb8);
    *(long *)(lVar8 + 0x3e0) = lVar11;
    thunk_FUN_03048534(lVar8 + 0x3e0,lVar11);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar10,uVar9,uVar7,lVar11);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80868;
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  uVar7 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar8);
    lVar8 = *(long *)puVar6;
  }
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 1000);
  uVar10 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar8);
      lVar8 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)OVRHandSkeletonVersion_TypeInfo);
    FUN_04c9322c(lVar11,uVar12,*(undefined8 *)OVRManager_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar6 + 0xb8);
    *(long *)(lVar8 + 1000) = lVar11;
    thunk_FUN_03048534(lVar8 + 1000,lVar11);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar10,uVar9,uVar7,lVar11);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80870;
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  uVar7 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar8);
    lVar8 = *(long *)puVar6;
  }
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x3f0);
  uVar10 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar8);
      lVar8 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)OVRGazePointer_TypeInfo);
    FUN_04c932f0(lVar11,uVar12,*(undefined8 *)OVRMeshRenderer_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar6 + 0xb8);
    *(long *)(lVar8 + 0x3f0) = lVar11;
    thunk_FUN_03048534(lVar8 + 0x3f0,lVar11);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar10,uVar9,uVar7,lVar11);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f807f0;
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  uVar7 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar8);
    lVar8 = *(long *)puVar6;
  }
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x3f8);
  uVar10 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar8);
      lVar8 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)OVRGLTFAnimatinonNode_TypeInfo);
    FUN_04c92f1c(lVar11,uVar12,*(undefined8 *)OVRMixedReality_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar6 + 0xb8);
    *(long *)(lVar8 + 0x3f8) = lVar11;
    thunk_FUN_03048534(lVar8 + 0x3f8,lVar11);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar10,uVar9,uVar7,lVar11);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80910;
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  uVar7 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar8);
    lVar8 = *(long *)puVar6;
  }
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x400);
  uVar10 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar8);
      lVar8 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)OVRGLTFAccessor_TypeInfo);
    FUN_04c936c4(lVar11,uVar12,*(undefined8 *)OVRMixedRealityCaptureConfiguration_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar6 + 0xb8);
    *(long *)(lVar8 + 0x400) = lVar11;
    thunk_FUN_03048534(lVar8 + 0x400,lVar11);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar10,uVar9,uVar7,lVar11);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80918;
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  uVar7 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar8);
    lVar8 = *(long *)puVar6;
  }
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x408);
  uVar10 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar8);
      lVar8 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)OVRHaptics_TypeInfo);
    FUN_04c93788(lVar11,uVar12,*(undefined8 *)OVRNativeBuffer_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar6 + 0xb8);
    *(long *)(lVar8 + 0x408) = lVar11;
    thunk_FUN_03048534(lVar8 + 0x408,lVar11);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar10,uVar9,uVar7,lVar11);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80920;
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  uVar7 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar8);
    lVar8 = *(long *)puVar6;
  }
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x410);
  uVar10 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar8);
      lVar8 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)OVRGLTFLoader_TypeInfo);
    FUN_04c9384c(lVar11,uVar12,*(undefined8 *)OVRNodeStateProperties_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar6 + 0xb8);
    *(long *)(lVar8 + 0x410) = lVar11;
    thunk_FUN_03048534(lVar8 + 0x410,lVar11);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar10,uVar9,uVar7,lVar11);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f75070;
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  uVar7 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar8);
    lVar8 = *(long *)puVar6;
  }
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x418);
  uVar10 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar8);
      lVar8 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)OVRFaceExpressions_TypeInfo);
    FUN_04c93600(lVar11,uVar12,*(undefined8 *)OVROverlay_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar6 + 0xb8);
    *(long *)(lVar8 + 0x418) = lVar11;
    thunk_FUN_03048534(lVar8 + 0x418,lVar11);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar10,uVar9,uVar7,lVar11);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f80828;
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  uVar7 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar8);
    lVar8 = *(long *)puVar6;
  }
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x420);
  uVar10 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar8);
      lVar8 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)OVREyeGaze_TypeInfo);
    FUN_04c930a4(lVar11,uVar12,*(undefined8 *)OVRHumanBodyBonesMappingsInterface_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar6 + 0xb8);
    *(long *)(lVar8 + 0x420) = lVar11;
    thunk_FUN_03048534(lVar8 + 0x420,lVar11);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar10,uVar9,uVar7,lVar11);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar2 = PTR_DAT_06f9a8d8;
  uVar9 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  uVar7 = FUN_05afde1c(*(undefined8 *)puVar2,0);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar8);
    lVar8 = *(long *)puVar6;
  }
  lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x428);
  uVar10 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  if (lVar11 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar8);
      lVar8 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    lVar11 = thunk_FUN_0301080c(*(undefined8 *)OVRGLTFAnimationNodeMorphTargetHandler_TypeInfo);
    FUN_04c933b4(lVar11,uVar12,*(undefined8 *)OVRInput_TypeInfo,0);
    lVar8 = *(long *)(*(long *)puVar6 + 0xb8);
    *(long *)(lVar8 + 0x428) = lVar11;
    thunk_FUN_03048534(lVar8 + 0x428,lVar11);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0697db64(uVar10,uVar9,uVar7,lVar11);
  return;
}


