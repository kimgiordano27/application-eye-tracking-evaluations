/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$get_rightEyePosition
ENTRY_POINT: 061d888c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void Unity_XR_Oculus_Input_OculusHMD__get_rightEyePosition(long param_1)

{
  long unaff_x19;
  
  if (param_1 != 0) {
    FUN_0634f038(param_1,*(char *)(unaff_x19 + 0x58) == '\0',0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


