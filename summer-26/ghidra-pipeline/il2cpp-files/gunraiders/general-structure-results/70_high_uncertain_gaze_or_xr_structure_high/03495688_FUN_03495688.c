/*
FUNCTION_NAME: FUN_03495688
ENTRY_POINT: 03495688
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


void FUN_03495688(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* try { // try from 0349568c to 03595693 has its CatchHandler @ 03495b1c */
  if (DAT_04537020 == (code *)0x0) {
                    /* try { // try from 034956a4 to 035956b7 has its CatchHandler @ 03495b00 */
                    /* try { // try from 034956c8 to 035956d3 has its CatchHandler @ 03495ac8 */
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_UnityOpenXR_OnSessionCreate";
    uStack_38 = 0x20;
    local_28 = 8;
    local_30 = DAT_00b91518;
                    /* try { // try from 034956dc to 035956eb has its CatchHandler @ 03495ae8 */
    local_24 = 0;
    DAT_04537020 = (code *)thunk_FUN_01c49924(&local_50);
  }
  (*DAT_04537020)(param_1);
                    /* try { // try from 034956fc to 03595707 has its CatchHandler @ 03495ae4 */
  return;
}


