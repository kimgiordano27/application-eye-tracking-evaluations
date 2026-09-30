/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.XRHMD$$get_leftEyePosition
ENTRY_POINT: 01aebc80
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


void UnityEngine_InputSystem_XR_XRHMD__get_leftEyePosition(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  
  FUN_051e4500();
  *(undefined8 *)(unaff_x19 + 0x160) = 0;
  thunk_FUN_01656ef8(unaff_x19 + 0x160,0);
  lVar1 = FUN_051e516c();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  uVar2 = FUN_051df964(lVar1,0);
  if ((uVar2 & 1) != 0) {
    FUN_01aebd6c();
    uVar3 = FUN_051e4284();
    *(undefined8 *)(unaff_x19 + 0x168) = uVar3;
    thunk_FUN_01656ef8(unaff_x19 + 0x168,uVar3);
    return;
  }
  return;
}


