/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendStart
ENTRY_POINT: 06dcd6d4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__SendStart(long param_1)

{
  uint in_w9;
  long unaff_x19;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = *(undefined8 *)(unaff_x19 + 0x1c);
  if ((in_w9 & 1) == 0) {
    param_1 = FUN_03d8f26c(param_1);
  }
  thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x18));
  return;
}


