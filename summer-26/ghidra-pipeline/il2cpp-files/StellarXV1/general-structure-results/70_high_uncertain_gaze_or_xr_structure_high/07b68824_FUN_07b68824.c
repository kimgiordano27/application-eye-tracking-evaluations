/*
FUNCTION_NAME: FUN_07b68824
ENTRY_POINT: 07b68824
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined4 FUN_07b68824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  if (DAT_09898258 == (code *)0x0) {
    local_60 = "OVRPlugin";
    uStack_58 = 9;
    local_50 = "ovrp_SendEvent2";
    uStack_48 = 0xf;
    local_40 = DAT_01aee0b8;
    local_38 = 0x18;
    local_34 = 0;
    DAT_09898258 = (code *)thunk_FUN_040b519c(&local_60);
  }
  uVar2 = thunk_FUN_040b5448(param_1);
  uVar3 = thunk_FUN_040b5448(param_2);
  uVar4 = thunk_FUN_040b5448(param_3);
  uVar1 = (*DAT_09898258)(uVar2,uVar3,uVar4);
  thunk_FUN_040b543c(uVar2);
  thunk_FUN_040b543c(uVar3);
  thunk_FUN_040b543c(uVar4);
  return uVar1;
}


