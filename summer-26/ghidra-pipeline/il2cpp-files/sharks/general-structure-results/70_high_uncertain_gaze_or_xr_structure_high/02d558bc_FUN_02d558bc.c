/*
FUNCTION_NAME: FUN_02d558bc
ENTRY_POINT: 02d558bc
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined4 FUN_02d558bc(uint *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined8 local_58;
  char *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  if (DAT_03a293e0 == (code *)0x0) {
    local_60 = "OVRPlugin";
    local_58 = 9;
    local_50 = "ovrp_RequestSceneCapture";
    uStack_48 = 0x18;
    local_38 = 0x10;
    local_40 = DAT_009a5708;
    local_34 = 0;
    DAT_03a293e0 = (code *)thunk_FUN_01861e78(&local_60);
  }
  local_58 = 0;
  local_60 = (char *)(ulong)*param_1;
  local_58 = thunk_FUN_01862198(*(undefined8 *)(param_1 + 2));
  uVar1 = (*DAT_03a293e0)(&local_60,param_2);
  local_70 = 0;
  uStack_68 = 0;
  FUN_017a7658(&local_60,&local_70);
  thunk_FUN_0186218c(local_58);
  local_58 = 0;
  *(undefined8 *)(param_1 + 2) = uStack_68;
  *(undefined8 *)param_1 = local_70;
  thunk_FUN_0188fd20(param_1 + 2,0);
  return uVar1;
}


