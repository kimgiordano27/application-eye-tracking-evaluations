/*
FUNCTION_NAME: FUN_0af94844
ENTRY_POINT: 0af94844
PROGRAM: PokerStarsVR-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_0af94844(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* try { // try from 0af94850 to 0b0949a7 has its CatchHandler @ 0af94850
                       catch() { ... } // from try @ 0af94850 with catch @ 0af94850
                       catch() { ... } // from try @ 0af94b5c with catch @ 0af94850
                       catch() { ... } // from try @ 0af94ba0 with catch @ 0af94850
                       catch() { ... } // from try @ 0af94bd4 with catch @ 0af94850
                       catch() { ... } // from try @ 0af94c04 with catch @ 0af94850 */
  if (DAT_0cf59000 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_GetTrackingPoseEnabledForInvisibleSession";
    uStack_38 = 0x2e;
    local_28 = 8;
    local_30 = DAT_021ede28;
    local_24 = 0;
    DAT_0cf59000 = (code *)thunk_FUN_051c0dd0(&local_50);
  }
  (*DAT_0cf59000)(param_1);
  return;
}


