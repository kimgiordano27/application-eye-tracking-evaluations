/*
FUNCTION_NAME: OVRPlugin$$RequestBodyTrackingFidelity
ENTRY_POINT: 060e20b0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestBodyTrackingFidelity(void)

{
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack0000000000000010;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  
  uStack0000000000000008 = in_stack_00000028;
  uStack0000000000000000 = in_stack_00000020;
                    /* try { // try from 060e20cc to 061e20d3 has its CatchHandler @ 060e24f8 */
  uStack0000000000000010 = in_stack_00000030;
  FUN_060e20ec();
  return;
}


