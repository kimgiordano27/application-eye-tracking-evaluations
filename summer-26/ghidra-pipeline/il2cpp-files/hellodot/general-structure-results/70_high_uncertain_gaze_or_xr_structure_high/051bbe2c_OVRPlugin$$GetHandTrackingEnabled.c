/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingEnabled
ENTRY_POINT: 051bbe2c
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin__GetHandTrackingEnabled(void)

{
  float fVar1;
  float in_s3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s13;
  float unaff_s14;
  
  fVar1 = (float)FUN_05ee9fc0(0);
  return (unaff_s9 * unaff_s14 + unaff_s11 * fVar1 + unaff_s10 * in_s3) - unaff_s8 * unaff_s13;
}


