/*
FUNCTION_NAME: FUN_02188fc8
ENTRY_POINT: 02188fc8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02189188) */

undefined4 FUN_02188fc8(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  long *plVar14;
  long lVar15;
  char local_44 [4];
  
  if ((DAT_041220c9 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc4f10);
    DAT_041220c9 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar12 = thunk_FUN_01a89e68();
    uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cdb410);
    uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03cc4af0);
    FUN_026b3f24(uVar12,uVar8,uVar9,0);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar12,param_3);
  }
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  local_44[0] = '\0';
  FUN_027e0bd8(uVar12,local_44,0);
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar2 = *(int *)(*(long *)(param_1 + 0x10) + 0x18);
  uVar5 = FUN_0267b204(param_2,0);
  puVar4 = PTR_DAT_03cc4f10;
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar10 = (uint)*(undefined8 *)(lVar15 + 0x18);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = (int)(uVar5 & 0x7fffffff) / iVar2;
  }
  uVar5 = (uVar5 & 0x7fffffff) - iVar3 * iVar2;
  uVar11 = uVar5;
  do {
    if (uVar10 <= uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar14 = (long *)(lVar15 + (long)(int)uVar11 * 0x10 + 0x20);
    if (*plVar14 == param_2) {
      lVar6 = *(long *)PTR_DAT_03cc4f10;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *(long *)puVar4;
        uVar10 = (uint)*(undefined8 *)(lVar15 + 0x18);
      }
      if (uVar10 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *plVar14 = **(long **)(lVar6 + 0xb8);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14);
      lVar15 = *(long *)(param_1 + 0x10);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar15 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      puVar7 = (undefined8 *)(lVar15 + (long)(int)uVar11 * 0x10 + 0x28);
      *puVar7 = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar7,0);
      uVar13 = 1;
      goto LAB_02189100;
    }
    if (*plVar14 == 0) break;
    uVar1 = 0;
    if (uVar11 + 1 != iVar2) {
      uVar1 = uVar11 + 1;
    }
    uVar11 = uVar1;
  } while (uVar1 != uVar5);
  uVar13 = 0;
LAB_02189100:
  if (local_44[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar12,0);
  }
  return uVar13;
}


