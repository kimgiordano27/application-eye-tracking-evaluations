/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$Init
ENTRY_POINT: 0727ac0c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__Init
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 *param_5)

{
  *param_5 = param_1;
  param_5[1] = param_2;
  param_5[2] = param_3;
  param_5[3] = param_4;
  return;
}


