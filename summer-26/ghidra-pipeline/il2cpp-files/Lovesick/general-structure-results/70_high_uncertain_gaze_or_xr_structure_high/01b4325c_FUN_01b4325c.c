/*
FUNCTION_NAME: FUN_01b4325c
ENTRY_POINT: 01b4325c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_01b4325c(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_0377ddc0 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_UnityOpenXR_OnSessionCreate";
    uStack_38 = 0x20;
    local_28 = 8;
    local_30 = DAT_028aa478;
    local_24 = 0;
    DAT_0377ddc0 = (code *)thunk_FUN_00d625b4(&local_50);
  }
                    /* try { // try from 01b432c4 to 01c4338f has its CatchHandler @ 01b432c4
                       catch() { ... } // from try @ 01b432c4 with catch @ 01b432c4
                       catch() { ... } // from try @ 01b43398 with catch @ 01b432c4
                       catch() { ... } // from try @ 01b434a4 with catch @ 01b432c4
                       catch() { ... } // from try @ 01b43508 with catch @ 01b432c4 */
  (*DAT_0377ddc0)(param_1);
  return;
}


