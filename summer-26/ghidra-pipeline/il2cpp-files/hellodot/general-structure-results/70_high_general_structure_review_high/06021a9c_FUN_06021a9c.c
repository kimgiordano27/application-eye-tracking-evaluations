/*
FUNCTION_NAME: FUN_06021a9c
ENTRY_POINT: 06021a9c
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4
*/


void FUN_06021a9c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  puVar2 = Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo;
  if ((DAT_06a8264f & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Security_Permissions_PermissionState_TypeInfo);
    DAT_06a8264f = 1;
  }
  puVar1 = System_Security_Permissions_PermissionState_TypeInfo;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_06021b70(param_1,&local_40,&local_50);
  lVar3 = FUN_04008c0c(param_2 + 0x28,*(undefined8 *)puVar1);
  *(undefined8 *)(lVar3 + 0x30) = local_40;
  *(undefined4 *)(lVar3 + 0x38) = local_38;
  lVar3 = FUN_04008c0c(param_2 + 0x28,*(undefined8 *)puVar1);
  *(undefined8 *)(lVar3 + 0x3c) = local_50;
  *(undefined4 *)(lVar3 + 0x44) = local_48;
  return;
}


