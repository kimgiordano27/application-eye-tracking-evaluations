/*
FUNCTION_NAME: OVREyeGaze$$OnEnable
ENTRY_POINT: 01987a10
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnEnable(long param_1)

{
  long unaff_x21;
  
  if (param_1 != 0) {
    FUN_00bf981c();
    if (*(long *)(unaff_x21 + 0x10) != 0) {
      FUN_019be6f0(*(long *)(unaff_x21 + 0x10),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


