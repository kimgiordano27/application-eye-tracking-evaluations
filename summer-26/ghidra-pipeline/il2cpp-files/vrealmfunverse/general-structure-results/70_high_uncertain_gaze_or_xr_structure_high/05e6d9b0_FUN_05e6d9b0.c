/*
FUNCTION_NAME: FUN_05e6d9b0
ENTRY_POINT: 05e6d9b0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05e6d9b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_DAT_0631eb50;
  if ((DAT_066dc694 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06313588);
    FUN_02b3c81c(Method_OVRTask_Builder_ToTask<Guid,_OVRColocationSession_Result>__);
    FUN_02b3c81c(Method_OVRTask_Builder_ToTask<ulong,_OVRPlugin_Result>__);
    FUN_02b3c81c(PTR_DAT_0631eb50);
    DAT_066dc694 = 1;
  }
  puVar5 = Method_OVRTask_Builder_ToTask<ulong,_OVRPlugin_Result>__;
  puVar4 = Method_OVRTask_Builder_ToTask<Guid,_OVRColocationSession_Result>__;
  puVar2 = PTR_DAT_06313588;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x10),param_2);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x50),param_3);
  *(long *)(param_1 + 0x18) = param_1;
  thunk_FUN_02bb0e9c(param_1 + 0x18,param_1);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar6 = *(long *)puVar3;
  }
  uVar1 = **(undefined4 **)(lVar6 + 0xb8);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x70),0);
  *(undefined8 *)(param_1 + 0x78) = 0;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x78),0);
  *(undefined8 *)(param_1 + 0x80) = 0;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x80),0);
  uVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
  FUN_037a5d48(uVar7,8,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x20),uVar7);
  uVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
  FUN_037a5d48(uVar7,8,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x28),uVar7);
  uVar7 = FUN_02b3c908(*(undefined8 *)puVar2,5);
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  thunk_FUN_02bb0e9c();
  uVar7 = FUN_02b3c908(*(undefined8 *)puVar2,5);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  thunk_FUN_02bb0e9c();
  FUN_05e6d8d0(param_1 + 0x18);
  return;
}


