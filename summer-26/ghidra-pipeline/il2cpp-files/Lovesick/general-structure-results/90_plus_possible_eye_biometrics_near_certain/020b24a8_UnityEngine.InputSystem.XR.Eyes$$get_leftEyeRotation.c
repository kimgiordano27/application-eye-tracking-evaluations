/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.Eyes$$get_leftEyeRotation
ENTRY_POINT: 020b24a8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


undefined4 UnityEngine_InputSystem_XR_Eyes__get_leftEyeRotation(void)

{
  undefined4 uVar1;
  int in_w8;
  
  if (in_w8 == 0) {
    thunk_FUN_00d32864();
  }
  uVar1 = FUN_00d41938();
  FUN_020ba544();
  return uVar1;
}


