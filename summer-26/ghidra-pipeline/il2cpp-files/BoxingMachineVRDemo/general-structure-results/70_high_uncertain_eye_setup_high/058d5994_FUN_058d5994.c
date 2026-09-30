/*
FUNCTION_NAME: FUN_058d5994
ENTRY_POINT: 058d5994
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_058d5994(uint param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_06b80aef & 1) == 0) {
    FUN_02d6084c(OVRPlugin_Media_TypeInfo);
    FUN_02d6084c(PTR_DAT_06767838);
    DAT_06b80aef = 1;
  }
  puVar1 = PTR_DAT_06767838;
  local_40 = 0;
  local_38 = 0;
  if ((param_3 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_06767838 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar2 = FUN_058d6060(param_1,param_2);
    if ((param_3 >> 1 & 1) != 0) {
      return 0;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      return 0;
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar3 = FUN_058d64e0(param_2);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar4 = *(long *)puVar1;
  }
  lVar5 = *(long *)(lVar4 + 0xb8);
  lVar4 = *(long *)(lVar5 + 0x30);
  if (lVar4 == 0) {
LAB_058d5afc:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (param_1 < *(uint *)(lVar4 + 0x18)) {
    lVar4 = lVar4 + (long)(int)param_1 * 0xb8;
    *(uint *)(lVar4 + 0xd0) = *(uint *)(lVar4 + 0xd0) | 2;
    local_38 = 0;
    local_40 = param_2;
    thunk_FUN_02dd37b4(&local_40,param_2);
    lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
    if (lVar4 == 0) goto LAB_058d5afc;
    if (param_1 < *(uint *)(lVar4 + 0x18)) {
      local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(lVar4 + (long)(int)param_1 * 4 + 0x20));
      FUN_037a4c78(lVar5 + 0x48,local_40,local_38,*(undefined8 *)OVRPlugin_Media_TypeInfo);
      FUN_058d65a0();
      FUN_058d3a78(param_1,8,param_2);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


