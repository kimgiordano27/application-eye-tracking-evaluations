/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnFocusLost
ENTRY_POINT: 089f985c
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnFocusLost(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_04980e68();
                    /* WARNING: Could not recover jumptable at 0x089f9884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}


