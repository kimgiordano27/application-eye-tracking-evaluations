/*
FUNCTION_NAME: FUN_05cf46e8
ENTRY_POINT: 05cf46e8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined4 FUN_05cf46e8(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char *local_60;
  undefined8 local_58;
  char *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  if (DAT_07551fa0 == (code *)0x0) {
    local_60 = "OVRPlugin";
    local_58 = 9;
    local_50 = "ovrp_RequestSceneCapture";
    uStack_48 = 0x18;
    local_40 = DAT_012e26f0;
    local_38 = 0x10;
    local_34 = 0;
    DAT_07551fa0 = (code *)thunk_FUN_031c3fd8(&local_60);
  }
  local_58 = 0;
  local_60 = (char *)(ulong)*param_1;
  local_58 = thunk_FUN_031c4284(*(undefined8 *)(param_1 + 2));
  uVar2 = (*DAT_07551fa0)(&local_60,param_2);
  uVar1 = (uint)local_60;
  uVar3 = thunk_FUN_03192e70(local_58);
  thunk_FUN_03192e70(local_58);
  thunk_FUN_031c4278(local_58);
  *param_1 = uVar1;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = uVar3;
  return uVar2;
}


