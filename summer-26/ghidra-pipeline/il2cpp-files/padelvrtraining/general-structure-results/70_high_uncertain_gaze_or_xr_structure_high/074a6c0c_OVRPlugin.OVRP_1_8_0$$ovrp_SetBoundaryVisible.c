/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_SetBoundaryVisible
ENTRY_POINT: 074a6c0c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_8_0__ovrp_SetBoundaryVisible(void)

{
  char *local_40;
  undefined8 uStack_38;
  char *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if (DAT_09845ea8 == (code *)0x0) {
    local_18 = 0;
    local_40 = "ovrplatformloader";
    uStack_38 = 0x11;
    local_30 = "ovr_ApplicationLifecycle_GetSessionKey";
    uStack_28 = 0x26;
    local_20 = DAT_01910f80;
    local_14 = 0;
    DAT_09845ea8 = (code *)thunk_FUN_03d2f1fc(&local_40);
  }
  (*DAT_09845ea8)();
  return;
}


