/*
FUNCTION_NAME: FUN_02a07d84
ENTRY_POINT: 02a07d84
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined4 FUN_02a07d84(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcStack_50;
  undefined8 uStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam00000000072346e8 == (code *)0x0) {
    pcStack_50 = "OVRPlugin";
    uStack_48 = 9;
    pcStack_40 = "ovrp_SendEvent";
    uStack_38 = 0xe;
    uStack_28 = 0x10;
    uStack_30 = DAT_0533f8a8;
    uStack_24 = 0;
    pcRam00000000072346e8 = (code *)thunk_FUN_015d07f0(&pcStack_50);
  }
  uVar2 = thunk_FUN_015d0c84(param_1);
  uVar3 = thunk_FUN_015d0c84(param_2);
  uVar1 = (*pcRam00000000072346e8)(uVar2,uVar3);
  thunk_FUN_015d0c78(uVar2);
  thunk_FUN_015d0c78(uVar3);
  return uVar1;
}


