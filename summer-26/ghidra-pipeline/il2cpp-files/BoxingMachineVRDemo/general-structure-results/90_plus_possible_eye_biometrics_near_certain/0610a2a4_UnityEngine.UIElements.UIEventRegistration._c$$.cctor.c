/*
FUNCTION_NAME: UnityEngine.UIElements.UIEventRegistration.<>c$$.cctor
ENTRY_POINT: 0610a2a4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 177
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior;attempted_use;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_9
*/


void UnityEngine_UIElements_UIEventRegistration_<>c___cctor(void)

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
  undefined8 uVar12;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_02d6084c();
  FUN_02d6084c(Method_OVRGrabbable_Awake__);
  FUN_02d6084c(Method_OVRGrabber_<Awake>b__23_0__);
  FUN_02d6084c(Method_OVRHand_OnSceneChanged__);
  FUN_02d6084c(Method_OVRHandTrackingWideMotionModeSample_OnFusionToggleChanged__);
  FUN_02d6084c(Method_OVRLocatable_ScheduleUpdateTransforms__);
  FUN_02d6084c(Method_OVRLocatable_UpdateSceneAnchorTransforms__);
  FUN_02d6084c(Method_OVRManager_OnPermissionGranted__);
  *(undefined1 *)(unaff_x20 + 0x6f7) = 1;
  puVar11 = Method_OVRManager_OnPermissionGranted__;
  puVar10 = Method_OVRLocatable_UpdateSceneAnchorTransforms__;
  puVar9 = Method_OVRLocatable_ScheduleUpdateTransforms__;
  puVar8 = Method_OVRHandTrackingWideMotionModeSample_OnFusionToggleChanged__;
  puVar7 = Method_OVRHand_OnSceneChanged__;
  puVar6 = Method_OVRGLTFAnimatinonNode_CopyData<float>__;
  puVar5 = Method_OVRGLTFAnimatinonNode_CopyData<Quaternion>__;
  puVar4 = Method_OVRGLTFAccessor_ReadAsFloat__;
  puVar3 = Method_OVRFuture_<When>g__CheckCancellationAndThrow_0_1__;
  puVar2 = Method_OVRFaceExpressions_GetViseme__;
  puVar1 = Method_OVRFaceExpressions_CheckVisemesValidity__;
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_0610a518();
  uVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  UnityEngine_UIElements_UIElementsUtility___ctor();
  FUN_034f0638(uVar12,*(undefined8 *)puVar2);
  uVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar8);
  FUN_0610a6f8();
  FUN_034f1254(uVar12,*(undefined8 *)puVar4);
  uVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar10);
  FUN_0610a7e8();
  FUN_034f131c(uVar12,*(undefined8 *)puVar5);
  uVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
  FUN_0610a914();
  FUN_034f13e4(uVar12,*(undefined8 *)puVar6);
  uVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
  FUN_0610aa74();
  FUN_034f12b8(uVar12,*(undefined8 *)puVar3);
  uVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar9);
  FUN_0610ab64();
  FUN_034f1380(uVar12,*(undefined8 *)Method_OVRGLTFAccessor_ReadAsInt__);
  uVar12 = thunk_FUN_02d9d534(*(undefined8 *)Method_OVRGrabbable_Awake__);
  FUN_0610ac90();
  FUN_034f0890(uVar12,*(undefined8 *)Method_OVRFaceExpressions_get_Item__);
  uVar12 = thunk_FUN_02d9d534(*(undefined8 *)Method_OVRGLTFLoader_<LoadGLBCoroutine>b__26_0__);
  FUN_0610adf0();
  FUN_034f08f4(uVar12,*(undefined8 *)Method_OVRFaceExpressions_OnPermissionGranted__);
  uVar12 = thunk_FUN_02d9d534(*(undefined8 *)Method_OVRFaceExpressions_CheckValidity__);
  FUN_0610af50();
  FUN_034f0570(uVar12,*(undefined8 *)Method_OVRFaceExpressions_CopyVisemesTo__);
  uVar12 = thunk_FUN_02d9d534(*(undefined8 *)Method_OVREyeGaze_OnPermissionGranted__);
  FUN_0610b040();
  FUN_034f05d4(uVar12,*(undefined8 *)Method_OVRFaceExpressions_CopyTo__);
  uVar12 = thunk_FUN_02d9d534(*(undefined8 *)Method_OVRGrabber_<Awake>b__23_0__);
  FUN_0610b130();
  FUN_034f082c(uVar12,*(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
  return;
}


