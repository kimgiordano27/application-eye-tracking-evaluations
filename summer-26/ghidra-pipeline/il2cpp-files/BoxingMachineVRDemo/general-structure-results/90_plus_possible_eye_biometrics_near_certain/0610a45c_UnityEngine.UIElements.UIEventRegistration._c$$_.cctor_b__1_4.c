/*
FUNCTION_NAME: UnityEngine.UIElements.UIEventRegistration.<>c$$<.cctor>b__1_4
ENTRY_POINT: 0610a45c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 150
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_4
*/


void UnityEngine_UIElements_UIEventRegistration_<>c__<_cctor>b__1_4(void)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_02d9d534();
  FUN_0610adf0();
  FUN_034f08f4(uVar1,*(undefined8 *)Method_OVRFaceExpressions_OnPermissionGranted__);
  uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_OVRFaceExpressions_CheckValidity__);
  FUN_0610af50();
  FUN_034f0570(uVar1,*(undefined8 *)Method_OVRFaceExpressions_CopyVisemesTo__);
  uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_OVREyeGaze_OnPermissionGranted__);
  FUN_0610b040();
  FUN_034f05d4(uVar1,*(undefined8 *)Method_OVRFaceExpressions_CopyTo__);
  uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_OVRGrabber_<Awake>b__23_0__);
  FUN_0610b130();
  FUN_034f082c(uVar1,*(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
  return;
}


