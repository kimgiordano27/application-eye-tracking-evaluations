/*
FUNCTION_NAME: OVRPlugin.OVRP_1_98_0$$ovrp_RequestBoundaryVisibility
ENTRY_POINT: 01a52a58
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_98_0__ovrp_RequestBoundaryVisibility(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_0377b968 == (code *)0x0) {
    local_50 = "ovrplatformloader";
    uStack_48 = 0x11;
    local_40 = "ovr_ChallengeEntry_GetExtraDataLength";
    uStack_38 = 0x25;
    local_28 = 8;
    local_30 = DAT_028aa478;
    local_24 = 0;
    DAT_0377b968 = (code *)thunk_FUN_00d625b4(&local_50);
  }
  (*DAT_0377b968)(param_1);
  return;
}


