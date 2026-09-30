/*
FUNCTION_NAME: FUN_052692fc
ENTRY_POINT: 052692fc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined4 FUN_052692fc(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_06b7cb80 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_SendEvent";
    uStack_38 = 0xe;
    local_28 = 0x10;
    local_30 = DAT_01206d88;
    local_24 = 0;
    DAT_06b7cb80 = (code *)thunk_FUN_02d9d7f0(&local_50);
  }
  uVar2 = thunk_FUN_02d9db10(param_1);
  uVar3 = thunk_FUN_02d9db10(param_2);
  uVar1 = (*DAT_06b7cb80)(uVar2,uVar3);
  thunk_FUN_02d9db04(uVar2);
  thunk_FUN_02d9db04(uVar3);
  return uVar1;
}


