/*
FUNCTION_NAME: FUN_02baaa9c
ENTRY_POINT: 02baaa9c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02baacdc) */

undefined4
FUN_02baaa9c(long param_1,long param_2,uint param_3,undefined8 param_4,uint param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  char local_44 [4];
  
  if ((DAT_04128ece & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d00730);
    FUN_01ab69ac(PTR_DAT_03cfffd0);
    DAT_04128ece = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  local_44[0] = '\0';
  FUN_027e0bd8(uVar7,local_44,0);
  lVar9 = *(long *)(param_1 + 0x18);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar2 = *(long *)(lVar9 + 0x10);
  if ((lVar2 != param_2) || ((param_5 & 1) != 0)) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((param_5 & 1) == 0) {
      param_3 = FUN_02bae254(lVar2,param_4);
    }
    else {
      param_3 = FUN_02bae0d8(lVar2,param_4,param_1);
    }
    if (param_3 == 0xfffffffe) {
      uVar7 = FUN_02b5bf84(param_4,0);
      uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03d138d0);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar7,uVar8);
    }
  }
  if (param_3 != 0xffffffff) {
    lVar2 = FUN_02bafa1c(lVar9,param_3,0);
    puVar1 = PTR_DAT_03d00730;
    lVar5 = *(long *)PTR_DAT_03d00730;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar5);
      lVar5 = *(long *)puVar1;
    }
    lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
    if (lVar2 != lVar6) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar5);
        lVar5 = *(long *)puVar1;
        lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
      }
      if (lVar6 != param_6) {
        uVar3 = FUN_027be084(lVar2,param_6,0);
        if ((uVar3 & 1) == 0) goto LAB_02baac1c;
        lVar5 = *(long *)puVar1;
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar5);
        lVar5 = *(long *)puVar1;
      }
      FUN_02bb1d74(lVar9,param_3,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x28),0);
      iVar10 = 9;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      goto LAB_02baac24;
    }
  }
LAB_02baac1c:
  iVar10 = 6;
LAB_02baac24:
  if (local_44[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
  }
  if ((iVar10 == 9) || (iVar10 == 0)) {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      if (((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) ||
         (lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + 0x10), lVar9 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar9 + 0x18) <= param_3) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar8 = *(undefined8 *)(lVar9 + (long)(int)param_3 * 8 + 0x20);
      uVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfffd0);
      FUN_02f37e38(uVar7,uVar8,0);
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),param_1,uVar7,*(undefined8 *)(lVar2 + 0x28));
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


