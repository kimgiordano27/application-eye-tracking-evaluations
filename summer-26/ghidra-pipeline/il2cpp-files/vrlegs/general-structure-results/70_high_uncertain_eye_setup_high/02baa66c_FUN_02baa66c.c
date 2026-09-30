/*
FUNCTION_NAME: FUN_02baa66c
ENTRY_POINT: 02baa66c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02baa86c) */
/* WARNING: Removing unreachable block (ram,0x02baa8fc) */

void FUN_02baa66c(long param_1,long param_2,uint param_3,long param_4,undefined8 param_5,
                 uint param_6,uint param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  char local_54 [4];
  
  if ((DAT_04128ecd & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d00730);
    FUN_01ab69ac(PTR_DAT_03cfffd0);
    DAT_04128ecd = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  local_54[0] = '\0';
  FUN_027e0bd8(uVar5,local_54,0);
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar2 = *(long *)(lVar6 + 0x10);
  if ((lVar2 != param_2) || ((param_6 & 1) != 0)) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((param_6 & 1) == 0) {
      param_3 = FUN_02bae254(lVar2,param_5);
    }
    else {
      param_3 = FUN_02bae0d8(lVar2,param_5,param_1);
    }
    if (param_3 == 0xffffffff) {
      if ((param_6 & 1) != 0) {
        if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        param_3 = FUN_02bae254(*(long *)(lVar6 + 0x10),param_5);
        if (param_3 != 0xffffffff) goto LAB_02baa7b8;
      }
      if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar3 = FUN_02badbf0(*(long *)(lVar6 + 0x10),param_5);
      lVar6 = FUN_02bae484(param_1,*(undefined8 *)(lVar6 + 0x10),uVar3);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      param_3 = FUN_02bae254(*(long *)(lVar6 + 0x10),param_5);
    }
    else if (param_3 == 0xfffffffe) {
      uVar5 = FUN_02b5bf84(param_5,0);
      uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03d138c8);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,uVar3);
    }
  }
LAB_02baa7b8:
  lVar2 = FUN_02bafa1c(lVar6,param_3,0);
  puVar1 = PTR_DAT_03d00730;
  lVar4 = *(long *)PTR_DAT_03d00730;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *(long *)puVar1;
  }
  if (lVar2 == *(long *)(*(long *)(lVar4 + 0xb8) + 0x28)) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  else if ((param_7 & 1) != 0) {
    uVar5 = FUN_02b5c03c(param_5,0);
    uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03d138c8);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar5,uVar3);
  }
  FUN_02bb1d74(lVar6,param_3,param_4,0);
  if (local_54[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
  }
  if ((lVar2 != param_4) && (lVar2 = *(long *)(param_1 + 0x28), lVar2 != 0)) {
    if ((lVar6 == 0) ||
       ((*(long *)(lVar6 + 0x10) == 0 ||
        (lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + 0x10), lVar6 == 0)))) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(lVar6 + 0x18) <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar3 = *(undefined8 *)(lVar6 + (long)(int)param_3 * 8 + 0x20);
    uVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfffd0);
    FUN_02f37e38(uVar5,uVar3,0);
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),param_1,uVar5,*(undefined8 *)(lVar2 + 0x28));
  }
  return;
}


