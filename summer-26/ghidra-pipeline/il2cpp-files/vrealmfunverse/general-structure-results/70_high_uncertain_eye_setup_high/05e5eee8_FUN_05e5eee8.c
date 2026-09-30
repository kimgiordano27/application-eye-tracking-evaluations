/*
FUNCTION_NAME: FUN_05e5eee8
ENTRY_POINT: 05e5eee8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_05e5eee8(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  int local_24;
  
  puVar3 = PTR_DAT_06312520;
  if ((DAT_066dc638 & 1) == 0) {
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_17__);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(PTR_DAT_06313c10);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_18__);
    DAT_066dc638 = 1;
  }
  local_24 = 0;
  plVar7 = (long *)(param_1 + 0x20);
  lVar8 = *plVar7;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar4 = FUN_05c8c45c(lVar8,0,0);
  if ((uVar4 & 1) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    lVar8 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06313c10);
    FUN_05c6ae00(lVar8,uVar2,uVar1,5,0,1,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_05c9364c(lVar8,0x3d,0);
    puVar3 = Method_OVRPlugin_<>c_<_cctor>b__810_17__;
    lVar5 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_17__;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar5 = *(long *)puVar3;
    }
    local_24 = *(int *)(*(long *)(lVar5 + 0xb8) + 0x10);
    *(int *)(*(long *)(lVar5 + 0xb8) + 0x10) = local_24 + 1;
    uVar6 = FUN_04d78c14(&local_24,0);
    uVar6 = FUN_04bffdac(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_18__,uVar6,0);
    thunk_FUN_05c9238c(lVar8,uVar6,0);
    FUN_05c68198(lVar8,0,0);
    *plVar7 = lVar8;
    thunk_FUN_02bb0e9c(plVar7,lVar8);
  }
  return;
}


