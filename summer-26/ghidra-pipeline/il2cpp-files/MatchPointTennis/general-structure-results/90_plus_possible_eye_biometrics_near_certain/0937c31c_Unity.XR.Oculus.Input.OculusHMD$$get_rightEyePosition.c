/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$get_rightEyePosition
ENTRY_POINT: 0937c31c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void Unity_XR_Oculus_Input_OculusHMD__get_rightEyePosition
               (float param_1,float param_2,float param_3)

{
  char cVar1;
  float *pfVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  float fVar3;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  
  cVar1 = *(char *)(unaff_x20 + 0xf42);
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *(undefined4 *)unaff_x19 = unaff_s11;
  *(undefined4 *)((long)unaff_x19 + 4) = unaff_s12;
  *(undefined4 *)(unaff_x19 + 1) = unaff_s13;
  if (cVar1 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    *(undefined1 *)(unaff_x20 + 0xf42) = 1;
  }
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar3 = SQRT(param_3 * param_3 + param_1 * param_1 + param_2 * param_2);
  if (fVar3 <= DAT_01c7607c) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar2 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    param_1 = *pfVar2;
    param_2 = pfVar2[1];
    param_3 = pfVar2[2];
  }
  else {
    param_1 = param_1 / fVar3;
    param_2 = param_2 / fVar3;
    param_3 = param_3 / fVar3;
  }
  *(float *)((long)unaff_x19 + 0xc) = param_1;
  *(float *)(unaff_x19 + 2) = param_2;
  *(float *)((long)unaff_x19 + 0x14) = param_3;
  return;
}


