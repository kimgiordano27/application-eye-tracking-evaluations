/*
FUNCTION_NAME: FUN_02a0113c
ENTRY_POINT: 02a0113c
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_02a0113c(undefined4 param_1,undefined4 param_2)

{
  char *pcStack_50;
  undefined8 uStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam0000000007234b70 == (code *)0x0) {
    pcStack_50 = "OVRPlugin";
    uStack_48 = 9;
    pcStack_40 = "ovrp_UnityOpenXR_OnSessionStateChange";
    uStack_38 = 0x25;
    uStack_28 = 8;
    uStack_30 = DAT_0533f8a8;
    uStack_24 = 0;
    pcRam0000000007234b70 = (code *)thunk_FUN_015d07f0(&pcStack_50);
  }
  (*pcRam0000000007234b70)(param_1,param_2);
  return;
}


