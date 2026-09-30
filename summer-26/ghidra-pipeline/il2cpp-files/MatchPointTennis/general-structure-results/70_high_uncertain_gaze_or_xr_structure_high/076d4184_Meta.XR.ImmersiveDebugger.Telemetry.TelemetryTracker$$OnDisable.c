/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnDisable
ENTRY_POINT: 076d4184
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnDisable(long param_1)

{
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0x6e0));
  FUN_04447ba8(PTR_DAT_09f2e668);
  *(undefined1 *)(unaff_x22 + 0xe14) = 1;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_066f39cc(unaff_x20 + 8);
  return;
}


