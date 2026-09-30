/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionCreate
ENTRY_POINT: 05be7a20
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionCreate(float param_1)

{
  long unaff_x19;
  float unaff_s8;
  
  *(float *)(unaff_x19 + 0x74) = param_1 - unaff_s8;
  return;
}


