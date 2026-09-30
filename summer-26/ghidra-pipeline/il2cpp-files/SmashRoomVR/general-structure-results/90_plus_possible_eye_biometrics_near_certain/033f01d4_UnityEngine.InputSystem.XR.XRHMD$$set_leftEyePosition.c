/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.XRHMD$$set_leftEyePosition
ENTRY_POINT: 033f01d4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_XRHMD__set_leftEyePosition(undefined8 param_1)

{
  long unaff_x21;
  undefined8 in_stack_00000018;
  
  if (in_stack_00000018._4_1_ != '\0') {
    thunk_FUN_01b18c7c();
  }
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bbda54(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab0160();
}


