/*
FUNCTION_NAME: FUN_057a717c
ENTRY_POINT: 057a717c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_057a717c(undefined4 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* try { // try from 057a7188 to 058a7193 has its CatchHandler @ 057a7220 */
  if (DAT_06dbffe8 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
                    /* try { // try from 057a71b0 to 058a71b3 has its CatchHandler @ 057a7218 */
                    /* try { // try from 057a71b4 to 058a71c7 has its CatchHandler @ 057a721c */
    local_40 = "ovrp_SetTrackingPoseEnabledForInvisibleSession";
    uStack_38 = 0x2e;
                    /* try { // try from 057a71c8 to 058a723b has its CatchHandler @ 057a70e0 */
    local_30 = DAT_010fc3f0;
    local_28 = 4;
    local_24 = 0;
    DAT_06dbffe8 = (code *)thunk_FUN_02dd33e4(&local_50);
  }
  (*DAT_06dbffe8)(param_1);
  return;
}


