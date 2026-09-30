/*
FUNCTION_NAME: OVRPlugin$$RequestBoundaryVisibility
ENTRY_POINT: 051cb2d8
PROGRAM: hellodot-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestBoundaryVisibility(undefined8 param_1)

{
  code *pcVar1;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x23;
  undefined8 uStack0000000000000020;
  undefined1 uStack000000000000002c;
  
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_1;
  pcVar1 = (code *)thunk_FUN_02ceaad8();
  *(code **)(unaff_x23 + 0x400) = pcVar1;
  memset(&stack0x00000000,0,0x2c0);
  if (unaff_x20 == 0) {
    register0x00000008 = (BADSPACEBASE *)0x0;
  }
  else {
    FUN_02bdb510();
    pcVar1 = *(code **)(unaff_x23 + 0x400);
                    /* try { // try from 051cb318 to 052cb33f has its CatchHandler @ 051cb850 */
  }
  (*pcVar1)(unaff_w19,register0x00000008);
                    /* try { // try from 051cb340 to 052cb38b has its CatchHandler @ 051cadf4 */
  return;
}


