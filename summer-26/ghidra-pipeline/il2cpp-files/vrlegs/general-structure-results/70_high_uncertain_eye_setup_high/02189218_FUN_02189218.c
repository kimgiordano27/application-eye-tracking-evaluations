/*
FUNCTION_NAME: FUN_02189218
ENTRY_POINT: 02189218
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x021893f8) */

undefined4 FUN_02189218(long param_1,long param_2,long *param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  char local_34 [4];
  
  if (param_2 == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar11 = thunk_FUN_01a89e68();
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cdb410);
    uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cc4af0);
    FUN_026b3f24(uVar11,uVar6,uVar7,0);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar11,param_4);
  }
  *param_3 = 0;
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar11,local_34,0);
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar2 = *(int *)(*(long *)(param_1 + 0x10) + 0x18);
  uVar4 = FUN_0267b204(param_2,0);
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = (int)(uVar4 & 0x7fffffff) / iVar2;
  }
  uVar4 = (uVar4 & 0x7fffffff) - iVar3 * iVar2;
  uVar9 = uVar4;
  do {
    if (*(uint *)(lVar8 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar10 = *(long *)(lVar8 + (long)(int)uVar9 * 0x10 + 0x20);
    if (lVar10 == param_2) {
      lVar10 = *(long *)(lVar8 + (long)(int)uVar9 * 0x10 + 0x28);
      lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01a46ff8(lVar8);
      }
      if (lVar10 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = thunk_FUN_01a89d6c(lVar10,lVar8);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(lVar10,lVar8);
        }
      }
      *param_3 = lVar5;
      lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01a46ff8(lVar8);
      }
      if (lVar10 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = thunk_FUN_01a89d6c(lVar10,lVar8);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(lVar10,lVar8);
        }
      }
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3,lVar5);
      uVar12 = 1;
      goto LAB_02189374;
    }
    if (lVar10 == 0) break;
    uVar1 = 0;
    if (uVar9 + 1 != iVar2) {
      uVar1 = uVar9 + 1;
    }
    uVar9 = uVar1;
  } while (uVar1 != uVar4);
  uVar12 = 0;
LAB_02189374:
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar11,0);
  }
  return uVar12;
}


