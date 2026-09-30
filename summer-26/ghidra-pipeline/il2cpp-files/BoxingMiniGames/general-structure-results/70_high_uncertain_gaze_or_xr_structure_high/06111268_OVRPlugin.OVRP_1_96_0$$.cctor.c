/*
FUNCTION_NAME: OVRPlugin.OVRP_1_96_0$$.cctor
ENTRY_POINT: 06111268
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_96_0___cctor(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
                    /* try { // try from 0611127c to 06211283 has its CatchHandler @ 061114cc */
  if (DAT_07ee1ca0 == (code *)0x0) {
                    /* try { // try from 06111290 to 0621130b has its CatchHandler @ 061114d8 */
    local_50 = "ovrplatformloader";
    uStack_48 = 0x11;
    local_40 = "ovr_GroupPresenceJoinIntent_GetMatchSessionId";
    uStack_38 = 0x2d;
    local_30 = DAT_0164fd00;
    local_28 = 8;
    local_24 = 0;
    DAT_07ee1ca0 = (code *)thunk_FUN_036800c0(&local_50);
  }
  (*DAT_07ee1ca0)(param_1);
  return;
}


