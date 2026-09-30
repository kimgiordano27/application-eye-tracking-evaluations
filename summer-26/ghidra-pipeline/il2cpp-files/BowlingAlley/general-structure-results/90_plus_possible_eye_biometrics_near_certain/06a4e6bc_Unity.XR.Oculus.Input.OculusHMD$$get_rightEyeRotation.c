/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$get_rightEyeRotation
ENTRY_POINT: 06a4e6bc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void Unity_XR_Oculus_Input_OculusHMD__get_rightEyeRotation(undefined8 *param_1,long param_2)

{
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  
  uStack0000000000000018 = 0;
  _uStack0000000000000008 = 0;
  _uStack0000000000000010 = 0;
  _uStack0000000000000000 = 0;
  if (param_2 != 0) {
    FUN_06bf5444(param_2,&stack0x00000010);
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[2] = 0;
    FUN_06bf2b34(uStack0000000000000010,uStack0000000000000014,uStack0000000000000018,
                 uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                 uStack000000000000000c,param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


