/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_5
ENTRY_POINT: 02c5bd08
PROGRAM: sharks-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_<>c__<_cctor>b__810_5(undefined4 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_03a263e0 == (code *)0x0) {
    local_50 = "ovrplatformloader";
    uStack_48 = 0x11;
    local_40 = "ovr_AbuseReport_ReportRequestHandled";
    uStack_38 = 0x24;
    local_28 = 4;
    local_30 = DAT_009a5708;
    local_24 = 0;
    DAT_03a263e0 = (code *)thunk_FUN_01861e78(&local_50);
  }
  (*DAT_03a263e0)(param_1);
  return;
}


