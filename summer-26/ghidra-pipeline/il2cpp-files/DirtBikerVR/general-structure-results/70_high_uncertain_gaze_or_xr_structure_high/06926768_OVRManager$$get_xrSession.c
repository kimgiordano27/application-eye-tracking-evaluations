/*
FUNCTION_NAME: OVRManager$$get_xrSession
ENTRY_POINT: 06926768
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__get_xrSession(float param_1,float param_2)

{
  long unaff_x19;
  float unaff_s8;
  
  *(float *)(unaff_x19 + 0xa4) = SQRT(unaff_s8 * unaff_s8 + param_1 + param_2);
  return;
}


