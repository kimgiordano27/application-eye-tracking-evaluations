/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$get_rightEyePosition
ENTRY_POINT: 039e80e0
PROGRAM: vrfs-libil2cpp.so
SCORE: 134
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void Unity_XR_Oculus_Input_OculusHMD__get_rightEyePosition(undefined4 param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  
  *(undefined4 *)(unaff_x19 + 0x14) = param_1;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  lVar2 = FUN_039f3288();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  iVar1 = *(int *)(lVar2 + 0x18);
  *(undefined4 *)(lVar2 + 0x18) = 0;
  *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
  if (0 < iVar1) {
    FUN_031dd574(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
  }
  uVar3 = BallEnterTriggerProvider___ctor();
  if ((uVar3 & 1) != 0) {
    FUN_039f3560();
    return;
  }
  return;
}


