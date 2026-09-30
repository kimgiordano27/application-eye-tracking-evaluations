/*
FUNCTION_NAME: FUN_07db1224
ENTRY_POINT: 07db1224
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_07db1224(undefined4 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* catch() { ... } // from try @ 07db1200 with catch @ 07db1230 */
                    /* try { // try from 07db1234 to 07eb123f has its CatchHandler @ 07db1254 */
  if (DAT_0a52a028 == (code *)0x0) {
                    /* try { // try from 07db1240 to 07eb124b has its CatchHandler @ 07db1184 */
                    /* try { // try from 07db124c to 07eb1253 has its CatchHandler @ 07db1254 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07db1234 with catch @ 07db1254
                       catch(type#2 @ 00000000) { ... } // from try @ 07db124c with catch @ 07db1254
                        */
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_RequestBoundaryVisibility";
    uStack_38 = 0x1e;
    local_28 = 4;
    local_30 = DAT_01c73bd0;
    local_24 = 0;
    DAT_0a52a028 = (code *)thunk_FUN_044854c8(&local_50);
  }
  (*DAT_0a52a028)(param_1);
  return;
}


