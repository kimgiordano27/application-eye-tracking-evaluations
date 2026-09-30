/*
FUNCTION_NAME: FUN_06b00628
ENTRY_POINT: 06b00628
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06b00628(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = OVRPlugin_OVRP_1_64_0_TypeInfo;
  puVar1 = Unity_VisualScripting_FullSerializer_fsMetaType_TypeInfo;
  if ((DAT_073ab399 & 1) == 0) {
    FUN_02fe925c(OVRPlugin_OVRP_1_64_0_TypeInfo);
    FUN_02fe925c(Unity_VisualScripting_FullSerializer_fsMetaType_TypeInfo);
    DAT_073ab399 = 1;
  }
  FUN_05b32c00(param_1,0);
  uVar3 = FUN_06adc184(1,0);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  uVar3 = thunk_FUN_0301080c(*(undefined8 *)puVar2);
  FUN_06a3a1a4(uVar3,0);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  thunk_FUN_03048534((undefined8 *)(param_1 + 0x18),uVar3);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  if (DAT_073aacfa == '\0') {
    FUN_02fe925c(Unity_VisualScripting_FullSerializer_fsMetaType_TypeInfo);
    DAT_073aacfa = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar4 = *(long *)puVar1;
  }
  **(undefined1 **)(lVar4 + 0xb8) = 1;
  uVar3 = FUN_06afaf44(*(undefined8 *)(param_1 + 0x20));
  FUN_06adc1fc(uVar3,0);
  return;
}


