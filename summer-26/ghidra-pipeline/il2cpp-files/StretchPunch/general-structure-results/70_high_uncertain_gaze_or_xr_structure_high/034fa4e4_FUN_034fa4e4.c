/*
FUNCTION_NAME: FUN_034fa4e4
ENTRY_POINT: 034fa4e4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_034fa4e4(undefined4 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_044a84e0 == (code *)0x0) {
                    /* try { // try from 034fa510 to 035fa517 has its CatchHandler @ 034fa874 */
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_RequestBoundaryVisibility";
    uStack_38 = 0x1e;
                    /* try { // try from 034fa530 to 035fa53b has its CatchHandler @ 034fa78c */
    local_28 = 4;
    local_30 = DAT_00baead0;
    local_24 = 0;
    DAT_044a84e0 = (code *)thunk_FUN_01de2a74(&local_50);
  }
  (*DAT_044a84e0)(param_1);
                    /* try { // try from 034fa550 to 035fa55b has its CatchHandler @ 034fa780 */
  return;
}


