/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendStart
ENTRY_POINT: 06354580
PROGRAM: Waifu-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__SendStart(long param_1)

{
  long unaff_x19;
  
  if (*(short *)(param_1 + 0xe4) < 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_043943e4(*(long *)(unaff_x19 + 0x20),(long)*(short *)(param_1 + 0xe4),DAT_083ebe30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


