/*
FUNCTION_NAME: FUN_07507174
ENTRY_POINT: 07507174
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_07507174(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_09421c40 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_UnityOpenXR_OnSessionDestroy";
    uStack_38 = 0x21;
    local_28 = 8;
    local_30 = DAT_018ae560;
    local_24 = 0;
    DAT_09421c40 = (code *)thunk_FUN_03cf54f0(&local_50);
  }
  (*DAT_09421c40)(param_1);
  return;
}


