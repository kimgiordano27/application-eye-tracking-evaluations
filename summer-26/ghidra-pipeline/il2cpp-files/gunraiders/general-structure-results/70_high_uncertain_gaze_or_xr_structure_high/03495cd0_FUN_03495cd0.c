/*
FUNCTION_NAME: FUN_03495cd0
ENTRY_POINT: 03495cd0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_03495cd0(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_04537048 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_UnityOpenXR_OnSessionExiting";
    uStack_38 = 0x21;
    local_28 = 8;
    local_30 = DAT_00b91518;
    local_24 = 0;
    DAT_04537048 = (code *)thunk_FUN_01c49924(&local_50);
                    /* try { // try from 03495d2c to 03595d3b has its CatchHandler @ 03495d44 */
  }
  (*DAT_04537048)(param_1);
                    /* try { // try from 03495d3c to 03595d4b has its CatchHandler @ 03495364 */
                    /* catch() { ... } // from try @ 03495d2c with catch @ 03495d44 */
                    /* catch() { ... } // from try @ 03495b38 with catch @ 03495d48 */
  return;
}


