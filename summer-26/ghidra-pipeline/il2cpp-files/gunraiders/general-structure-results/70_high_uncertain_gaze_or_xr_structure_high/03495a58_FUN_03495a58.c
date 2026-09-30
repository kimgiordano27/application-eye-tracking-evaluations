/*
FUNCTION_NAME: FUN_03495a58
ENTRY_POINT: 03495a58
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


void FUN_03495a58(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* try { // try from 03495a5c to 03595a7f has its CatchHandler @ 03495ab4 */
  if (DAT_04537038 == (code *)0x0) {
                    /* try { // try from 03495a80 to 03595aa7 has its CatchHandler @ 03495aac */
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_UnityOpenXR_OnSessionBegin";
    uStack_38 = 0x1f;
    local_28 = 8;
                    /* try { // try from 03495aa8 to 03595b37 has its CatchHandler @ 03495364 */
    local_30 = DAT_00b91518;
                    /* catch() { ... } // from try @ 03495a80 with catch @ 03495aac */
    local_24 = 0;
                    /* catch() { ... } // from try @ 03495a18 with catch @ 03495ab0 */
    DAT_04537038 = (code *)thunk_FUN_01c49924(&local_50);
                    /* catch() { ... } // from try @ 03495a5c with catch @ 03495ab4 */
                    /* catch() { ... } // from try @ 034959f8 with catch @ 03495ab8 */
  }
                    /* catch() { ... } // from try @ 03495a54 with catch @ 03495abc */
                    /* catch() { ... } // from try @ 034959ec with catch @ 03495ac0 */
  (*DAT_04537038)(param_1);
                    /* catch() { ... } // from try @ 034959c4 with catch @ 03495ac4 */
                    /* catch() { ... } // from try @ 034956c8 with catch @ 03495ac8 */
                    /* catch() { ... } // from try @ 03495740 with catch @ 03495acc */
                    /* catch() { ... } // from try @ 034959b0 with catch @ 03495ad0 */
  return;
}


