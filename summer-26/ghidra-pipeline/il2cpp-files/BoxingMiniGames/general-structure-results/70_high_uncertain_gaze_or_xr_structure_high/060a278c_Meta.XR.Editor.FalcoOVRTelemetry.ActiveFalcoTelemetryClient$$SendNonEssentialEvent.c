/*
FUNCTION_NAME: Meta.XR.Editor.FalcoOVRTelemetry.ActiveFalcoTelemetryClient$$SendNonEssentialEvent
ENTRY_POINT: 060a278c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 84
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_Editor_FalcoOVRTelemetry_ActiveFalcoTelemetryClient__SendNonEssentialEvent
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  code *in_x9;
  undefined8 uStack0000000000000060;
  
  uStack0000000000000060 = param_2;
  (*in_x9)(param_3,&stack0x00000080,&stack0x00000060,*(undefined8 *)(param_1 + 0x28));
  return;
}


