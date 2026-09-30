/*
FUNCTION_NAME: OVREyeGaze$$OnEnable
ENTRY_POINT: 027abd08
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnEnable(void)

{
  long unaff_x20;
  undefined8 in_stack_00000000;
  
  FUN_025a0134();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0(in_stack_00000000);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01a28d1c();
}


