/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionStateChange
ENTRY_POINT: 02bec3a0
PROGRAM: sharks-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionStateChange(void)

{
  long *unaff_x23;
  
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02bd6368();
  return;
}


