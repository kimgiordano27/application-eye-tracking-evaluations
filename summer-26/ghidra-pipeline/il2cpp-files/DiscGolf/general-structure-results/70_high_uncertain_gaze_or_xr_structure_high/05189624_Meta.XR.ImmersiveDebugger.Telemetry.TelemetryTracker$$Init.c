/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$Init
ENTRY_POINT: 05189624
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__Init(void)

{
  long lVar1;
  long unaff_x19;
  
  FUN_05189550();
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x10));
  return;
}


