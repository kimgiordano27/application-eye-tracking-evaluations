/*
FUNCTION_NAME: FUN_020aeb24
ENTRY_POINT: 020aeb24
PROGRAM: Lovesick-libil2cpp.so
SCORE: 121
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_1
*/


void FUN_020aeb24(long param_1,uint param_2)

{
  FUN_020aeb64();
  UnityEngine_InputSystem_XR_XRHMD__get_rightEyeRotation(param_1);
  if (param_1 != 0) {
    FUN_020acb6c(param_1,6,1,param_2 & 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


