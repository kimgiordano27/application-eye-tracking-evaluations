/*
FUNCTION_NAME: FUN_033f7690
ENTRY_POINT: 033f7690
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_9;validity_or_gating_hits_3;functionality_permission_setup
*/


void FUN_033f7690(void)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  
  puVar10 = Method_OVRAnchorContainer_get_Uuids__;
  puVar9 = Method_OVRAnchorContainer_IOVRAnchorComponent<OVRAnchorContainer>_SetEnabledAsync__;
  puVar8 = Method_OVRAnchor_FetchAnchorsAsync__;
  puVar7 = Method_OVRAnchor_FetchAnchors__;
  puVar6 = Method_OVRAnchor_CreateSpatialAnchorAsync__;
  puVar5 = Method_OVRAnchor_TryGetComponent<OVRTriangleMesh>__;
  puVar4 = Method_OVRAnchor_TryGetComponent<OVRSemanticLabels>__;
  puVar3 = Method_OVRAnchor_TryGetComponent<OVRRoomLayout>__;
  puVar2 = Method_OVRAnchor_TryGetComponent<OVRLocatable>__;
  puVar1 = Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__;
  if ((DAT_04832635 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_ONSPPropagationGeometry_OnDestroy__);
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    thunk_FUN_01efb3a4(Method_OVRBody_OnPermissionGranted__);
    thunk_FUN_01efb3a4(Method_OVRAnchor_FetchAnchors__);
    thunk_FUN_01efb3a4(Method_OVRAnchor_TryGetComponent<OVRLocatable>__);
    thunk_FUN_01efb3a4(Method_OVRAnchor_TryGetComponent<OVRSemanticLabels>__);
    thunk_FUN_01efb3a4(Method_OVRAnchor_TryGetComponent<OVRRoomLayout>__);
    thunk_FUN_01efb3a4(Method_OVRAnchor_CreateSpatialAnchorAsync__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Quatf>__
                      );
    thunk_FUN_01efb3a4(Method_OVRAnchorContainer_get_Uuids__);
    thunk_FUN_01efb3a4(Method_OVRAnchor_TryGetComponent<OVRTriangleMesh>__);
    thunk_FUN_01efb3a4(
                      Method_OVRAnchorContainer_IOVRAnchorComponent<OVRAnchorContainer>_SetEnabledAsync__
                      );
    thunk_FUN_01efb3a4(Method_OVRAnchor_FetchAnchorsAsync__);
    DAT_04832635 = 1;
  }
  uVar11 = FUN_01f08890(*(undefined8 *)puVar1,0xb);
  FUN_034a9d80(uVar11,*(undefined8 *)puVar2,0);
  uVar12 = FUN_01f08890(*(undefined8 *)puVar1,0xb);
  FUN_034a9d80(uVar12,*(undefined8 *)puVar3,0);
  uVar13 = FUN_01f08890(*(undefined8 *)puVar1,9);
  FUN_034a9d80(uVar13,*(undefined8 *)puVar4,0);
  uVar14 = FUN_01f08890(*(undefined8 *)puVar1,9);
  FUN_034a9d80(uVar14,*(undefined8 *)puVar5,0);
  uVar15 = FUN_01f08890(*(undefined8 *)puVar1,0x1e);
  FUN_034a9d80(uVar15,*(undefined8 *)puVar6,0);
  uVar16 = FUN_01f08890(*(undefined8 *)puVar1,0x1e);
  FUN_034a9d80(uVar16,*(undefined8 *)puVar7,0);
  uVar17 = FUN_01f08890(*(undefined8 *)puVar1,3);
  FUN_034a9d80(uVar17,*(undefined8 *)puVar8,0);
  uVar18 = FUN_01f08890(*(undefined8 *)puVar1,3);
  FUN_034a9d80(uVar18,*(undefined8 *)puVar9,0);
  uVar19 = FUN_01f08890(*(undefined8 *)puVar1,9);
  FUN_034a9d80(uVar19,*(undefined8 *)puVar10,0);
  uVar20 = FUN_01f08890(*(undefined8 *)puVar1,9);
  FUN_034a9d80(uVar20,*(undefined8 *)
                       Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Quatf>__
               ,0);
  puVar1 = Method_ONSPPropagationGeometry_OnDestroy__;
  uVar21 = thunk_FUN_01f117cc(*(undefined8 *)Method_ONSPPropagationGeometry_OnDestroy__);
  FUN_033f4fe8(uVar21,uVar11,uVar12,0,0);
  puVar2 = Method_OVRBody_OnPermissionGranted__;
  **(undefined8 **)(*(long *)Method_OVRBody_OnPermissionGranted__ + 0xb8) = uVar21;
  thunk_FUN_01f51358(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar21);
  uVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_033f4fe8(uVar11,uVar13,uVar14,0,0);
  puVar22 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  *puVar22 = uVar11;
  thunk_FUN_01f51358(puVar22,uVar11);
  uVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_033f4fe8(uVar11,uVar15,uVar16,0,0);
  puVar22 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  *puVar22 = uVar11;
  thunk_FUN_01f51358(puVar22,uVar11);
  uVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_033f4fe8(uVar11,uVar17,uVar18,0,0);
  puVar22 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
  *puVar22 = uVar11;
  thunk_FUN_01f51358(puVar22,uVar11);
  uVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_033f4fe8(uVar11,uVar19,uVar20,0,0);
  puVar22 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
  *puVar22 = uVar11;
  thunk_FUN_01f51358(puVar22,uVar11);
  return;
}


