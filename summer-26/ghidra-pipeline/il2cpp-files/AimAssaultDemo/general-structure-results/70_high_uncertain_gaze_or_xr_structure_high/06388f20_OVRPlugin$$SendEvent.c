/*
FUNCTION_NAME: OVRPlugin$$SendEvent
ENTRY_POINT: 06388f20
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool OVRPlugin__SendEvent(long param_1,undefined8 param_2,long param_3)

{
  long unaff_x19;
  
  if (param_1 != param_3) {
    *(long *)(unaff_x19 + 0x90) = param_3;
    thunk_FUN_037aeb94();
    FUN_063890c4();
  }
  return param_1 != param_3;
}


