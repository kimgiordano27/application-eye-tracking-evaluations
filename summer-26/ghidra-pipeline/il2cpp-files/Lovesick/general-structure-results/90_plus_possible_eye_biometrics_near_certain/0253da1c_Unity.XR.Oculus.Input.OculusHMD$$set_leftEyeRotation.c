/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$set_leftEyeRotation
ENTRY_POINT: 0253da1c
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


void Unity_XR_Oculus_Input_OculusHMD__set_leftEyeRotation(long param_1)

{
  long lVar1;
  int in_w9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 in_stack_00000008;
  
  if (in_w9 == 0) {
    thunk_FUN_00d48444();
    lVar1 = *unaff_x19;
    *(undefined1 *)(unaff_x21 + 0xb2d) = 1;
    param_1 = *(long *)(lVar1 + 0xb8);
  }
  in_stack_00000008 = *(undefined4 *)(param_1 + 8);
  (**(code **)(unaff_x20 + 0x18))
            (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000008,*(undefined8 *)(unaff_x20 + 0x28));
  return;
}


