/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetLocalDimmingSupported
ENTRY_POINT: 01a500e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetLocalDimmingSupported(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* catch() { ... } // from try @ 01a4fc68 with catch @ 01a500e0 */
                    /* catch() { ... } // from try @ 01a4fbd4 with catch @ 01a500e4 */
                    /* catch() { ... } // from try @ 01a4fc30 with catch @ 01a500e8 */
                    /* catch() { ... } // from try @ 01a4fc10 with catch @ 01a500ec */
  if (DAT_0377b698 == (code *)0x0) {
                    /* try { // try from 01a50104 to 01b50107 has its CatchHandler @ 01a50114 */
                    /* catch() { ... } // from try @ 01a50104 with catch @ 01a50114 */
                    /* try { // try from 01a50124 to 01b50167 has its CatchHandler @ 01a5017c */
    local_50 = "ovrplatformloader";
    uStack_48 = 0x11;
    local_40 = "ovr_ApplicationInvite_GetLobbySessionId";
    uStack_38 = 0x27;
    local_28 = 8;
    local_30 = DAT_028aa478;
    local_24 = 0;
    DAT_0377b698 = (code *)thunk_FUN_00d625b4(&local_50);
  }
  (*DAT_0377b698)(param_1);
  return;
}


