/*
FUNCTION_NAME: FUN_032dd2a0
ENTRY_POINT: 032dd2a0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_032dd2a0(long param_1)

{
  undefined1 auStack_18 [8];
  
  if (*(long *)(param_1 + 0xa8) == 0) {
    FUN_03296828(auStack_18,Method_OVRTask_FromRequest<OVRResult<OVRPlugin_Result>>__);
    FUN_032df018(param_1,auStack_18);
    FUN_03296ccc(auStack_18);
  }
  return;
}


