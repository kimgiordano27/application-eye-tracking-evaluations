/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$set_leftEyePosition
ENTRY_POINT: 058cf0a8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_EyesControl__set_leftEyePosition(long param_1)

{
  uint in_w8;
  long unaff_x19;
  
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(unaff_x19 + 0x11);
  if ((((2 < in_w8) &&
       (*(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(unaff_x19 + 0x12), in_w8 != 3)) &&
      (*(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(unaff_x19 + 0x13), 4 < in_w8)) &&
     (((*(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(unaff_x19 + 0x14), in_w8 != 5 &&
       (*(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(unaff_x19 + 0x15), 6 < in_w8)) &&
      (*(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(unaff_x19 + 0x16), in_w8 != 7)))) {
    *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(unaff_x19 + 0x17);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4def0();
}


