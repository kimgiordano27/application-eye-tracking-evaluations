/*
FUNCTION_NAME: OVRPlugin.EyeGazeState$$get_IsValid
ENTRY_POINT: 076da09c
PROGRAM: m3ar-libil2cpp.so
SCORE: 95
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_EyeGazeState__get_IsValid(void)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  FUN_06f806d0();
  FUN_06f806d0(0);
  FUN_06f806d0(0);
  FUN_06f806d0(0);
  FUN_06f806d0(0);
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  thunk_FUN_085843b0();
  return;
}


