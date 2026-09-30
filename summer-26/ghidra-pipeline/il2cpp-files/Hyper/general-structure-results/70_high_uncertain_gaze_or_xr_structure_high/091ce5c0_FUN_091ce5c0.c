/*
FUNCTION_NAME: FUN_091ce5c0
ENTRY_POINT: 091ce5c0
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined4 FUN_091ce5c0(undefined8 param_1,undefined8 param_2)

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
  
  if (DAT_0b333260 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_SendEvent";
    uStack_38 = 0xe;
    local_30 = DAT_01da5b68;
    local_28 = 0x10;
    local_24 = 0;
    DAT_0b333260 = (code *)thunk_FUN_04984200(&local_50);
  }
  uVar2 = thunk_FUN_049844ac(param_1);
  uVar3 = thunk_FUN_049844ac(param_2);
  uVar1 = (*DAT_0b333260)(uVar2,uVar3);
  thunk_FUN_049844a0(uVar2);
  thunk_FUN_049844a0(uVar3);
  return uVar1;
}


