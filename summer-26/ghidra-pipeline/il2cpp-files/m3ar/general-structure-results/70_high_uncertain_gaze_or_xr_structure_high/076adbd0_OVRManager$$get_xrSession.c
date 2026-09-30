/*
FUNCTION_NAME: OVRManager$$get_xrSession
ENTRY_POINT: 076adbd0
PROGRAM: m3ar-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__get_xrSession(long param_1)

{
  int in_w9;
  
                    /* WARNING: Could not recover jumptable at 0x076adbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + (long)(in_w9 + 0x14) * 0x10 + 0x138))();
  return;
}


