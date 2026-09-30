/*
FUNCTION_NAME: FUN_05cf8428
ENTRY_POINT: 05cf8428
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_05cf8428(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_07552378 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_GetTrackingPoseEnabledForInvisibleSession";
    uStack_38 = 0x2e;
    local_30 = DAT_012e26f0;
    local_28 = 8;
    local_24 = 0;
    DAT_07552378 = (code *)thunk_FUN_031c3fd8(&local_50);
  }
  (*DAT_07552378)(param_1);
  return;
}


