/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$get_rightEyeRotation
ENTRY_POINT: 039e80f8
PROGRAM: vrfs-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void Unity_XR_Oculus_Input_OculusHMD__get_rightEyeRotation
               (long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  int in_w8;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 0x1c) = in_w8 + 1;
  if (0 < param_3) {
    FUN_031dd574(*(undefined8 *)(param_1 + 0x10),0,param_3,0);
  }
  uVar1 = BallEnterTriggerProvider___ctor();
  if ((uVar1 & 1) != 0) {
    FUN_039f3560();
    return;
  }
  return;
}


