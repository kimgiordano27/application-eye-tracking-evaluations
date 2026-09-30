/*
FUNCTION_NAME: FUN_02188c8c
ENTRY_POINT: 02188c8c
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


/* WARNING: Removing unreachable block (ram,0x02188f24) */

void FUN_02188c8c(long param_1,long param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  char local_64 [4];
  
  if ((DAT_041220c8 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc4f10);
    DAT_041220c8 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar12 = thunk_FUN_01a89e68();
    uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cdb410);
    uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03cc4af0);
    FUN_026b3f24(uVar12,uVar8,uVar9,0);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar12,param_4);
  }
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  local_64[0] = '\0';
  FUN_027e0bd8(uVar12,local_64,0);
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if ((float)*(int *)(lVar11 + 0x18) * DAT_00d38a20 <= (float)*(int *)(param_1 + 0x20)) {
    FUN_021889ec(param_1,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20));
    lVar11 = *(long *)(param_1 + 0x10);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  iVar2 = *(int *)(lVar11 + 0x18);
  uVar5 = FUN_0267b204(param_2,0);
  puVar4 = PTR_DAT_03cc4f10;
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = (int)(uVar5 & 0x7fffffff) / iVar2;
  }
  uVar5 = (uVar5 & 0x7fffffff) - iVar3 * iVar2;
  uVar13 = 0xffffffff;
  uVar10 = uVar5;
  while( true ) {
    lVar11 = *(long *)(param_1 + 0x10);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(lVar11 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar14 = *(long *)(lVar11 + (long)(int)uVar10 * 0x10 + 0x20);
    if (lVar14 == 0) break;
    lVar11 = *(long *)puVar4;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar11 = *(long *)puVar4;
    }
    if (((uVar13 != 0xffffffff) || (uVar1 = uVar10, lVar14 != **(long **)(lVar11 + 0xb8))) &&
       (uVar1 = uVar13, lVar14 == param_2)) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
      uVar12 = thunk_FUN_01a89e68();
      uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cdb408);
      uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03cc4af0);
      FUN_026a7658(uVar12,uVar8,uVar9,0);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar12,param_4);
    }
    uVar13 = uVar1;
    uVar1 = 0;
    if (uVar10 + 1 != iVar2) {
      uVar1 = uVar10 + 1;
    }
    uVar10 = uVar1;
    if (uVar1 == uVar5) {
      lVar11 = *(long *)(param_1 + 0x10);
      uVar10 = uVar13;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
LAB_02188df0:
      if (*(uint *)(lVar11 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar6 = (long *)(lVar11 + (long)(int)uVar10 * 0x10 + 0x20);
      *plVar6 = param_2;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,param_2);
      lVar11 = *(long *)(param_1 + 0x10);
      if (lVar11 != 0) {
        if (uVar10 < *(uint *)(lVar11 + 0x18)) {
          puVar7 = (undefined8 *)(lVar11 + (long)(int)uVar10 * 0x10 + 0x28);
          *puVar7 = param_3;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar7,param_3);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          if (local_64[0] != '\0') {
            OVRManager_<>c__<InitOVRManager>b__424_0(uVar12,0);
          }
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  if (uVar13 != 0xffffffff) {
    uVar10 = uVar13;
  }
  goto LAB_02188df0;
}


