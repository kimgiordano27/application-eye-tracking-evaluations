/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingEnabled
ENTRY_POINT: 073ed6c4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


bool OVRPlugin__get_eyeTrackingEnabled(void)

{
  float *pfVar1;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  if (DAT_0940fff5 == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    DAT_0940fff5 = '\x01';
  }
  pfVar1 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
  return 0.0 < unaff_s11 * pfVar1[2] + unaff_s13 * *pfVar1 + unaff_s12 * pfVar1[1];
}


