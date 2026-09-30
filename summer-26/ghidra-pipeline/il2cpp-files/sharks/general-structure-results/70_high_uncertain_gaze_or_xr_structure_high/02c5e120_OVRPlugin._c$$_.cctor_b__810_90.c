/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_90
ENTRY_POINT: 02c5e120
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


void OVRPlugin_<>c__<_cctor>b__810_90(void)

{
  char *local_40;
  undefined8 uStack_38;
  char *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if (DAT_03a26608 == (code *)0x0) {
    local_18 = 0;
    local_40 = "ovrplatformloader";
    uStack_38 = 0x11;
    local_30 = "ovr_Cowatching_RequestToPresent";
    uStack_28 = 0x1f;
    local_20 = DAT_009a5708;
    local_14 = 0;
    DAT_03a26608 = (code *)thunk_FUN_01861e78(&local_40);
  }
  (*DAT_03a26608)();
  return;
}


