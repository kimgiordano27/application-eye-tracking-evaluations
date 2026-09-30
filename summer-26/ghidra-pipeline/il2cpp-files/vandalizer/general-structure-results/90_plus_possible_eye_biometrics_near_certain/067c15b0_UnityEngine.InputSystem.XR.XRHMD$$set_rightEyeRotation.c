/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.XRHMD$$set_rightEyeRotation
ENTRY_POINT: 067c15b0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_XRHMD__set_rightEyeRotation(void)

{
  byte bVar1;
  undefined1 in_w8;
  long *in_x9;
  long *unaff_x19;
  
  *(undefined1 *)(unaff_x19 + 0xb) = in_w8;
  bVar1 = *(byte *)(*in_x9 + 0x130);
  if ((bVar1 <= *(byte *)(*unaff_x19 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) == *in_x9)) {
    FUN_067c008c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2730();
}


