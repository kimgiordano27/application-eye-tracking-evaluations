/*
FUNCTION_NAME: FUN_06145dd0
ENTRY_POINT: 06145dd0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_06145dd0(undefined4 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_07a4a290 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_RequestBoundaryVisibility";
    uStack_38 = 0x1e;
    local_28 = 4;
    local_30 = DAT_014bb208;
    local_24 = 0;
    DAT_07a4a290 = (code *)thunk_FUN_0322f404(&local_50);
  }
  (*DAT_07a4a290)(param_1);
  return;
}


