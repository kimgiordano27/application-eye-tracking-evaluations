/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnFocusLost
ENTRY_POINT: 05a9fc98
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnFocusLost(undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000008 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack0000000000000000 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  uStack0000000000000010 = param_1;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0322bef4();
  }
  thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x10));
  return;
}


