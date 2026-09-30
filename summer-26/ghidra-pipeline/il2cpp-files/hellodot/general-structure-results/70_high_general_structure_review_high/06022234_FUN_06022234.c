/*
FUNCTION_NAME: FUN_06022234
ENTRY_POINT: 06022234
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


void FUN_06022234(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar2 = Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo;
  if ((DAT_06a82650 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Security_Permissions_PermissionState_TypeInfo);
    DAT_06a82650 = 1;
  }
  puVar1 = System_Security_Permissions_PermissionState_TypeInfo;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_06022328(param_1,&local_40,&local_50,&local_60,&local_70);
  param_2 = param_2 + 0x28;
  lVar3 = FUN_04008c0c(param_2,*(undefined8 *)puVar1);
  *(undefined8 *)(lVar3 + 0xac) = uStack_38;
  *(undefined8 *)(lVar3 + 0xa4) = local_40;
  lVar3 = FUN_04008c0c(param_2,*(undefined8 *)puVar1);
  *(undefined8 *)(lVar3 + 0x9c) = uStack_48;
  *(undefined8 *)(lVar3 + 0x94) = local_50;
  lVar3 = FUN_04008c0c(param_2,*(undefined8 *)puVar1);
  *(undefined8 *)(lVar3 + 0x6c) = uStack_58;
  *(undefined8 *)(lVar3 + 100) = local_60;
  lVar3 = FUN_04008c0c(param_2,*(undefined8 *)puVar1);
  *(undefined8 *)(lVar3 + 0x8c) = uStack_68;
  *(undefined8 *)(lVar3 + 0x84) = local_70;
  return;
}


