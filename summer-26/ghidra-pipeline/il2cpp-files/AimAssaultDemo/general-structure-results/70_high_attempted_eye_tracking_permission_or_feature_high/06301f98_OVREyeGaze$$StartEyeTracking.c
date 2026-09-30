/*
FUNCTION_NAME: OVREyeGaze$$StartEyeTracking
ENTRY_POINT: 06301f98
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 76
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__StartEyeTracking(long *param_1)

{
  long unaff_x19;
  
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 06301eb4 with catch @ 06301fbc
                       catch(type#1 @ 078dda18) { ... } // from try @ 06301f30 with catch @ 06301fbc
                        */
  FUN_03e64d9c(unaff_x19 + 8);
  return;
}


