/*
FUNCTION_NAME: FUN_0610a1b8
ENTRY_POINT: 0610a1b8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 191
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior;attempted_use;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_16
*/


void FUN_0610a1b8(void)

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
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  
  puVar1 = PTR_DAT_06768be8;
  if ((DAT_06b8a6f7 & 1) == 0) {
    FUN_02d6084c(Method_OVREyeGaze_OnPermissionGranted__);
    FUN_02d6084c(Method_OVRFaceExpressions_CheckValidity__);
    FUN_02d6084c(Method_OVRFaceExpressions_CheckVisemesValidity__);
    FUN_02d6084c(PTR_DAT_06768be8);
    FUN_02d6084c(Method_OVRFaceExpressions_CopyTo__);
    FUN_02d6084c(Method_OVRFaceExpressions_CopyVisemesTo__);
    FUN_02d6084c(Method_OVRFaceExpressions_GetViseme__);
    FUN_02d6084c(Method_OVRFaceExpressions_OnPermissionGranted__);
    FUN_02d6084c(Method_OVRFaceExpressions_get_Item__);
    FUN_02d6084c(Method_OVRFuture_<When>g__CheckCancellationAndThrow_0_1__);
    FUN_02d6084c(Method_OVRGLTFAccessor_ReadAsFloat__);
    FUN_02d6084c(Method_OVRGLTFAccessor_ReadAsInt__);
    FUN_02d6084c(Method_OVRGLTFAnimatinonNode_CopyData<Quaternion>__);
    FUN_02d6084c(Method_OVRGLTFAnimatinonNode_CopyData<float>__);
    FUN_02d6084c(Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
    FUN_02d6084c(Method_OVRGLTFLoader_<LoadGLBCoroutine>b__26_0__);
    FUN_02d6084c(Method_OVRGrabbable_Awake__);
    FUN_02d6084c(Method_OVRGrabber_<Awake>b__23_0__);
    FUN_02d6084c(Method_OVRHand_OnSceneChanged__);
    FUN_02d6084c(Method_OVRHandTrackingWideMotionModeSample_OnFusionToggleChanged__);
    FUN_02d6084c(Method_OVRLocatable_ScheduleUpdateTransforms__);
    FUN_02d6084c(Method_OVRLocatable_UpdateSceneAnchorTransforms__);
    FUN_02d6084c(Method_OVRManager_OnPermissionGranted__);
    DAT_06b8a6f7 = 1;
  }
  puVar12 = Method_OVRManager_OnPermissionGranted__;
  puVar11 = Method_OVRLocatable_UpdateSceneAnchorTransforms__;
  puVar10 = Method_OVRLocatable_ScheduleUpdateTransforms__;
  puVar9 = Method_OVRHandTrackingWideMotionModeSample_OnFusionToggleChanged__;
  puVar8 = Method_OVRHand_OnSceneChanged__;
  puVar7 = Method_OVRGLTFAnimatinonNode_CopyData<float>__;
  puVar6 = Method_OVRGLTFAnimatinonNode_CopyData<Quaternion>__;
  puVar5 = Method_OVRGLTFAccessor_ReadAsFloat__;
  puVar4 = Method_OVRFuture_<When>g__CheckCancellationAndThrow_0_1__;
  puVar3 = Method_OVRFaceExpressions_GetViseme__;
  puVar2 = Method_OVRFaceExpressions_CheckVisemesValidity__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_0610a518();
  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  UnityEngine_UIElements_UIElementsUtility___ctor();
  FUN_034f0638(uVar13,*(undefined8 *)puVar3);
  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar9);
  FUN_0610a6f8();
  FUN_034f1254(uVar13,*(undefined8 *)puVar5);
  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
  FUN_0610a7e8();
  FUN_034f131c(uVar13,*(undefined8 *)puVar6);
  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar12);
  FUN_0610a914();
  FUN_034f13e4(uVar13,*(undefined8 *)puVar7);
  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
  FUN_0610aa74();
  FUN_034f12b8(uVar13,*(undefined8 *)puVar4);
  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar10);
  FUN_0610ab64();
  FUN_034f1380(uVar13,*(undefined8 *)Method_OVRGLTFAccessor_ReadAsInt__);
  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)Method_OVRGrabbable_Awake__);
  FUN_0610ac90();
  FUN_034f0890(uVar13,*(undefined8 *)Method_OVRFaceExpressions_get_Item__);
  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)Method_OVRGLTFLoader_<LoadGLBCoroutine>b__26_0__);
  FUN_0610adf0();
  FUN_034f08f4(uVar13,*(undefined8 *)Method_OVRFaceExpressions_OnPermissionGranted__);
  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)Method_OVRFaceExpressions_CheckValidity__);
  FUN_0610af50();
  FUN_034f0570(uVar13,*(undefined8 *)Method_OVRFaceExpressions_CopyVisemesTo__);
  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)Method_OVREyeGaze_OnPermissionGranted__);
  FUN_0610b040();
  FUN_034f05d4(uVar13,*(undefined8 *)Method_OVRFaceExpressions_CopyTo__);
  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)Method_OVRGrabber_<Awake>b__23_0__);
  FUN_0610b130();
  FUN_034f082c(uVar13,*(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
  return;
}


