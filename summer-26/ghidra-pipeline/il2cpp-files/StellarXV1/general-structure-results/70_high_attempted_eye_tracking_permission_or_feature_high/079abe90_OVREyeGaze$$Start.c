/*
FUNCTION_NAME: OVREyeGaze$$Start
ENTRY_POINT: 079abe90
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__Start(void)

{
  long *unaff_x22;
  
  if (*unaff_x22 != 0) {
    FUN_079e36b4(*unaff_x22,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


