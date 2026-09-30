/*
FUNCTION_NAME: FUN_077e87b4
ENTRY_POINT: 077e87b4
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined4 FUN_077e87b4(uint *param_1,undefined8 param_2)

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
  
  if (DAT_0954b5f0 == (code *)0x0) {
    local_60 = "OVRPlugin";
    local_58 = 9;
    local_50 = "ovrp_RequestSceneCapture";
    uStack_48 = 0x18;
    local_40 = DAT_01a33f70;
    local_38 = 0x10;
    local_34 = 0;
    DAT_0954b5f0 = (code *)thunk_FUN_0406e0e8(&local_60);
  }
  local_58 = 0;
  local_60 = (char *)(ulong)*param_1;
  local_58 = thunk_FUN_0406e394(*(undefined8 *)(param_1 + 2));
  uVar2 = (*DAT_0954b5f0)(&local_60,param_2);
  uVar1 = (uint)local_60;
  uVar3 = thunk_FUN_0403d5a8(local_58);
  thunk_FUN_0403d5a8(local_58);
  thunk_FUN_0406e388(local_58);
  *param_1 = uVar1;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = uVar3;
  return uVar2;
}


