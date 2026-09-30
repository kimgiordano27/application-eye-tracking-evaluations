/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$get_rightEyePosition
ENTRY_POINT: 0788f678
PROGRAM: Waifu-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


uint Unity_XR_Oculus_Input_OculusHMD__get_rightEyePosition(void)

{
  int in_w8;
  undefined8 *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined4 uVar1;
  
  if (in_w8 == 0) {
    FUN_0335b6c8(&DAT_083d2c90,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x21 + 0xcc6) = 1;
  }
  uVar1 = *(undefined4 *)(*(undefined8 **)(DAT_083d2c90 + 0xb8) + 1);
  *unaff_x19 = **(undefined8 **)(DAT_083d2c90 + 0xb8);
  *(undefined4 *)(unaff_x19 + 1) = uVar1;
  return unaff_w20 >> 2 & 1;
}


