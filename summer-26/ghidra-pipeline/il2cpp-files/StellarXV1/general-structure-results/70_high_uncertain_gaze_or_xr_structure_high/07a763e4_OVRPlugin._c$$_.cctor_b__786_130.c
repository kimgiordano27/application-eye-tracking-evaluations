/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_130
ENTRY_POINT: 07a763e4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_<>c__<_cctor>b__786_130(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_09895e78 == (code *)0x0) {
    local_50 = "ovrplatformloader";
    uStack_48 = 0x11;
    local_40 = "ovr_User_LaunchFriendRequestFlow";
    uStack_38 = 0x20;
    local_30 = DAT_01aee0b8;
    local_28 = 8;
    local_24 = 0;
    DAT_09895e78 = (code *)thunk_FUN_040b519c(&local_50);
  }
  (*DAT_09895e78)(param_1);
  return;
}


