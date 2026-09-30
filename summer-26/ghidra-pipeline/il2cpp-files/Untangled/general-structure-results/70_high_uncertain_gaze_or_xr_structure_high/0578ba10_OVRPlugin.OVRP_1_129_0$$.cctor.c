/*
FUNCTION_NAME: OVRPlugin.OVRP_1_129_0$$.cctor
ENTRY_POINT: 0578ba10
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_129_0___cctor(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_071c5178 == (code *)0x0) {
                    /* try { // try from 0578ba34 to 0588ba3f has its CatchHandler @ 0578b82c */
                    /* try { // try from 0578ba40 to 0588ba47 has its CatchHandler @ 0578ba48 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0578ba0c with catch @ 0578ba48
                       catch(type#2 @ 00000000) { ... } // from try @ 0578ba40 with catch @ 0578ba48
                        */
    local_50 = "ovrplatformloader";
    uStack_48 = 0x11;
    local_40 = "ovr_NetSyncSession_GetUserId";
    uStack_38 = 0x1c;
    local_28 = 8;
    local_30 = DAT_013f53a0;
    local_24 = 0;
    DAT_071c5178 = (code *)thunk_FUN_02ef1ac4(&local_50);
  }
  (*DAT_071c5178)(param_1);
  return;
}


