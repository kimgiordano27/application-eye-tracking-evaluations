/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingEnabled
ENTRY_POINT: 01d8f710
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 100
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_eyeTrackingEnabled(void)

{
  long unaff_x20;
  long unaff_x23;
  
  if (unaff_x23 != 0) {
                    /* try { // try from 01d8f714 to 01e8f73b has its CatchHandler @ 01d8f8a0 */
    *(long *)(unaff_x20 + 0x68) = unaff_x23;
    thunk_FUN_0106e12c();
  }
  return;
}


