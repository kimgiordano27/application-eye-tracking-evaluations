/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionValid
ENTRY_POINT: 03681194
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin__GetNodePositionValid(void)

{
  int in_w8;
  double dVar1;
  float unaff_s8;
  
  if (in_w8 == 0) {
    thunk_FUN_01ee6d7c();
  }
  dVar1 = acos((double)unaff_s8);
  return (float)dVar1 * DAT_00c92a9c;
}


