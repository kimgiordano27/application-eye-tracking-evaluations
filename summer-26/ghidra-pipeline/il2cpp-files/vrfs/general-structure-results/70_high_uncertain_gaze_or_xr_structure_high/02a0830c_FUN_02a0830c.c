/*
FUNCTION_NAME: FUN_02a0830c
ENTRY_POINT: 02a0830c
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


undefined4 FUN_02a0830c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcStack_60;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  if (pcRam0000000007234738 == (code *)0x0) {
    pcStack_60 = "OVRPlugin";
    uStack_58 = 9;
    pcStack_50 = "ovrp_SendEvent2";
    uStack_48 = 0xf;
    uStack_38 = 0x18;
    uStack_40 = DAT_0533f8a8;
    uStack_34 = 0;
    pcRam0000000007234738 = (code *)thunk_FUN_015d07f0(&pcStack_60);
  }
  uVar2 = thunk_FUN_015d0c84(param_1);
  uVar3 = thunk_FUN_015d0c84(param_2);
  uVar4 = thunk_FUN_015d0c84(param_3);
  uVar1 = (*pcRam0000000007234738)(uVar2,uVar3,uVar4);
  thunk_FUN_015d0c78(uVar2);
  thunk_FUN_015d0c78(uVar3);
  thunk_FUN_015d0c78(uVar4);
  return uVar1;
}


