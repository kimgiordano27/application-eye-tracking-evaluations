/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__807_139
ENTRY_POINT: 05d58140
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_<>c__<_cctor>b__807_139(void)

{
  char *local_40;
  undefined8 uStack_38;
  char *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if (DAT_07399048 == (code *)0x0) {
    local_18 = 0;
    local_40 = "ovrplatformloader";
    uStack_38 = 0x11;
    local_30 = "ovr_Cowatching_LeaveSession";
    uStack_28 = 0x1b;
    local_20 = DAT_0136ac58;
    local_14 = 0;
    DAT_07399048 = (code *)thunk_FUN_03010ac8(&local_40);
  }
  (*DAT_07399048)();
  return;
}


