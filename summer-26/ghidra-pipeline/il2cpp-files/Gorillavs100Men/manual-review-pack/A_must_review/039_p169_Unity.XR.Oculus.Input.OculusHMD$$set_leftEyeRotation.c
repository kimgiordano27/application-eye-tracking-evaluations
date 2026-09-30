/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$set_leftEyeRotation
ENTRY_POINT: 03f1b450
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void Unity_XR_Oculus_Input_OculusHMD__set_leftEyeRotation(long *param_1)

{
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0xad9) & 1) == 0) {
    FUN_020612a4(PTR_DAT_046beda8);
    *(undefined1 *)(unaff_x21 + 0xad9) = 1;
  }
  if (*param_1 != 0) {
    FUN_034a2d04();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0206154c();
}


