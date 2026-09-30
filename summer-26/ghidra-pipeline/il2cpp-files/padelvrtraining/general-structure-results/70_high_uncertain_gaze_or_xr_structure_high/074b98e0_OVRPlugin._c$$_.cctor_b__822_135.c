/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__822_135
ENTRY_POINT: 074b98e0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__822_135(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_09847200 == (code *)0x0) {
    local_50 = "ovrplatformloader";
    uStack_48 = 0x11;
    local_40 = "ovr_NetSyncSessionsChangedNotification_GetSessions";
    uStack_38 = 0x32;
    local_28 = 8;
    local_30 = DAT_01910f80;
    local_24 = 0;
    DAT_09847200 = (code *)thunk_FUN_03d2f1fc(&local_50);
  }
  (*DAT_09847200)(param_1);
  return;
}


