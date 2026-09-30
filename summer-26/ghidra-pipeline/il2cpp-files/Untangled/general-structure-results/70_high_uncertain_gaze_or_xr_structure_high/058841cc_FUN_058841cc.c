/*
FUNCTION_NAME: FUN_058841cc
ENTRY_POINT: 058841cc
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined4 FUN_058841cc(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_071c6e88 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_RequestSceneCapture";
    uStack_38 = 0x18;
    local_28 = 0x10;
    local_30 = DAT_013f53a0;
    local_24 = 0;
    DAT_071c6e88 = (code *)thunk_FUN_02ef1ac4(&local_50);
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  FUN_02e1122c(param_1,&local_50);
  uVar1 = (*DAT_071c6e88)(&local_50,param_2);
  local_60 = 0;
  uStack_58 = 0;
  FUN_02e11250(&local_50,&local_60);
  FUN_02e11290(&local_50);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  thunk_FUN_02f411dc(param_1 + 1,0);
  return uVar1;
}


