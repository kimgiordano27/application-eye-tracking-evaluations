/*
FUNCTION_NAME: FUN_01eb999c
ENTRY_POINT: 01eb999c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_01eb999c(undefined4 param_1,undefined4 param_2)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* try { // try from 01eb99a0 to 01fb99ab has its CatchHandler @ 01eb9810 */
                    /* try { // try from 01eb99ac to 01fb99b3 has its CatchHandler @ 01eb99b4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01eb9998 with catch @ 01eb99b4
                       catch(type#2 @ 00000000) { ... } // from try @ 01eb99ac with catch @ 01eb99b4
                        */
                    /* try { // try from 01eb99b8 to 01fb9be7 has its CatchHandler @ 01eb99b8
                       catch() { ... } // from try @ 01eb99b8 with catch @ 01eb99b8
                       catch() { ... } // from try @ 01eb9bf4 with catch @ 01eb99b8
                       catch() { ... } // from try @ 01eba070 with catch @ 01eb99b8 */
  if (DAT_0247ed80 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_UnityOpenXR_OnSessionStateChange";
    uStack_38 = 0x25;
    local_28 = 8;
    local_30 = DAT_00657688;
    local_24 = 0;
    DAT_0247ed80 = (code *)thunk_FUN_01040398(&local_50);
  }
  (*DAT_0247ed80)(param_1,param_2);
  return;
}


