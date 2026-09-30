/*
FUNCTION_NAME: FUN_05e520c8
ENTRY_POINT: 05e520c8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_05e520c8(undefined4 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_0739c178 == (code *)0x0) {
                    /* try { // try from 05e520f4 to 05f520fb has its CatchHandler @ 05e521f4 */
    local_50 = "OVRPlugin";
    uStack_48 = 9;
                    /* try { // try from 05e52110 to 05f5211f has its CatchHandler @ 05e521f0 */
    local_40 = "ovrp_RequestBoundaryVisibility";
    uStack_38 = 0x1e;
    local_28 = 4;
    local_30 = DAT_0136ac58;
    local_24 = 0;
    DAT_0739c178 = (code *)thunk_FUN_03010ac8(&local_50);
  }
                    /* try { // try from 05e5212c to 05f5219f has its CatchHandler @ 05e521fc */
  (*DAT_0739c178)(param_1);
  return;
}


