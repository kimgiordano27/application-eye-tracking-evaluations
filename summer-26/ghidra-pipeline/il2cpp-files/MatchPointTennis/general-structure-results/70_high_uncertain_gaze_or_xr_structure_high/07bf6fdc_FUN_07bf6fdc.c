/*
FUNCTION_NAME: FUN_07bf6fdc
ENTRY_POINT: 07bf6fdc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_07bf6fdc(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar5 = PTR_DAT_09f4e7d0;
  puVar4 = PTR_DAT_09f4e748;
  puVar3 = PTR_DAT_09f4e740;
  puVar2 = PTR_DAT_09f1e9a8;
  puVar1 = PTR_DAT_09f1e9a0;
  if ((DAT_0a526281 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1e9a8);
    FUN_04447ba8(PTR_DAT_09f4e740);
    FUN_04447ba8(PTR_DAT_09f1e9a0);
    FUN_04447ba8(PTR_DAT_09f4e748);
    FUN_04447ba8(PTR_DAT_09f4e7d0);
    DAT_0a526281 = 1;
  }
  uVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar5);
  OVRPlugin_UnifiedConsent__ShouldShowTelemetryNotification(uVar6,0);
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x10),uVar6);
  uVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
  FUN_05aea430(uVar6,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x28),uVar6);
  *(undefined8 *)(param_1 + 0x30) = 0xa0000000a;
  uVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
  FUN_05b03fc8(uVar6,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x40),uVar6);
  FUN_07a80df4(param_1,0);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x18),param_2);
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x38) = param_4;
  uVar6 = NEON_smax(*(undefined8 *)(param_1 + 0x30),0x100000001,4);
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  return;
}


