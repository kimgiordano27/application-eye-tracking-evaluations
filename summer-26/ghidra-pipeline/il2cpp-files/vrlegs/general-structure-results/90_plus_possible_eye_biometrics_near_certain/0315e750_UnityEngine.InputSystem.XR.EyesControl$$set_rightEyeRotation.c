/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.EyesControl$$set_rightEyeRotation
ENTRY_POINT: 0315e750
PROGRAM: vrlegs-libil2cpp.so
SCORE: 131
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_EyesControl__set_rightEyeRotation(void)

{
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long in_stack_00000088;
  
  *(undefined1 *)(unaff_x22 + 0xded) = in_w8;
                    /* try { // try from 0315e758 to 0325e763 has its CatchHandler @ 0315e918 */
  FUN_03112b88(*unaff_x23,0);
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_0315988c();
  FUN_03153c70();
  if (*(long *)(unaff_x21 + 0x28) == in_stack_00000088) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


