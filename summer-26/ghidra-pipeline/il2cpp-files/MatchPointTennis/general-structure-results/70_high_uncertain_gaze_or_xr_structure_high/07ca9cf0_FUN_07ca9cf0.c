/*
FUNCTION_NAME: FUN_07ca9cf0
ENTRY_POINT: 07ca9cf0
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


void FUN_07ca9cf0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR_DAT_09f51130;
  puVar3 = PTR_DAT_09f51128;
  puVar2 = PTR_DAT_09f50d60;
  puVar1 = PTR_DAT_09f4e7d0;
  if ((DAT_0a526a3e & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f50d60);
    FUN_04447ba8(PTR_DAT_09f51130);
    FUN_04447ba8(PTR_DAT_09f51128);
    FUN_04447ba8(PTR_DAT_09f4e7d0);
    DAT_0a526a3e = 1;
  }
  uVar5 = FUN_07ca5368();
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  thunk_FUN_044bb4b4();
  uVar5 = FUN_07ca4ff8();
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  thunk_FUN_044bb4b4();
  uVar5 = FUN_04447c90(*(undefined8 *)puVar3,0x1a);
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  thunk_FUN_044bb4b4();
  uVar5 = FUN_04447c90(*(undefined8 *)puVar4,0x1a);
  *(undefined8 *)(param_1 + 0xa0) = uVar5;
  thunk_FUN_044bb4b4();
  uVar5 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
  OVRPlugin_UnifiedConsent__ShouldShowTelemetryNotification();
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0xa8),uVar5);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_07c996bc(param_1,0);
  return;
}


