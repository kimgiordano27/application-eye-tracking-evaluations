/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$set_leftEyePosition
ENTRY_POINT: 01aef568
PROGRAM: vrfs-libil2cpp.so
SCORE: 137
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_EyesControl__set_leftEyePosition(void)

{
  int in_w8;
  long unaff_x19;
  float unaff_s11;
  float unaff_s12;
  float unaff_s14;
  
  if (in_w8 == 0) {
    thunk_FUN_016466fc();
  }
  if (*(float *)(unaff_x19 + 0x68) <
      SQRT(unaff_s11 * unaff_s11 + unaff_s14 * unaff_s14 + unaff_s12 * unaff_s12)) {
    FUN_01aef604();
    FUN_01aef380();
    return;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_039e46f4(*(long *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x19 + 0x58),0);
    FUN_039f3e98();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


