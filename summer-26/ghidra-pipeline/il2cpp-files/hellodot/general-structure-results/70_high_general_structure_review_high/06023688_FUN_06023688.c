/*
FUNCTION_NAME: FUN_06023688
ENTRY_POINT: 06023688
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


void FUN_06023688(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_28;
  
  puVar2 = Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo;
  if ((DAT_06a82657 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Security_Permissions_PermissionState_TypeInfo);
    DAT_06a82657 = 1;
  }
  puVar1 = System_Security_Permissions_PermissionState_TypeInfo;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_28 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_060237a0(param_1,&local_40,&local_50,&local_28,&local_68);
  param_2 = param_2 + 0x28;
  lVar3 = FUN_04008c0c(param_2,*(undefined8 *)puVar1);
  *(undefined8 *)(lVar3 + 0x30) = local_40;
  *(undefined4 *)(lVar3 + 0x38) = local_38;
  lVar3 = FUN_04008c0c(param_2,*(undefined8 *)puVar1);
  *(undefined8 *)(lVar3 + 0x3c) = local_50;
  *(undefined4 *)(lVar3 + 0x44) = local_48;
  lVar3 = FUN_04008c0c(param_2,*(undefined8 *)puVar1);
  *(undefined8 *)(lVar3 + 0x48) = local_28;
  lVar3 = FUN_04008c0c(param_2,*(undefined8 *)puVar1);
  *(undefined8 *)(lVar3 + 0x58) = uStack_60;
  *(undefined8 *)(lVar3 + 0x50) = local_68;
  *(undefined4 *)(lVar3 + 0x60) = local_58;
  return;
}


