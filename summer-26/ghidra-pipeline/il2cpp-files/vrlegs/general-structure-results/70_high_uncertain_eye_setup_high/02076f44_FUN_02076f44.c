/*
FUNCTION_NAME: FUN_02076f44
ENTRY_POINT: 02076f44
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


/* WARNING: Removing unreachable block (ram,0x02077118) */

void FUN_02076f44(long param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  char local_44 [4];
  
                    /* try { // try from 02076f4c to 0217701b has its CatchHandler @ 02077140 */
  if ((DAT_04121d91 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbdee0);
    DAT_04121d91 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  local_44[0] = '\0';
  FUN_027e0bd8(uVar7,local_44,0);
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar3 = *(int *)(lVar10 + 0x18);
  iVar4 = iVar3 - param_3;
  if (7 < iVar4) {
    iVar4 = 8;
  }
  if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdee0);
    iVar3 = *(int *)(lVar10 + 0x18);
  }
  iVar4 = FUN_0276c214(iVar3,iVar4 + param_3,0);
  if ((int)param_3 < iVar4) {
    lVar10 = *(long *)(param_1 + 0x10);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar6 = 0;
    lVar11 = 0;
    do {
      iVar3 = (int)lVar11;
      uVar8 = (uint)*(undefined8 *)(lVar10 + 0x18);
      if (uVar8 <= param_3 + iVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (*(long *)(lVar10 + (long)(int)(param_3 + iVar3) * 8 + 0x20) == param_2) {
        if (1 < (int)(param_3 + iVar3)) {
          uVar12 = (param_3 - 1) + iVar3;
          if (uVar8 <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar1 = lVar10 + (ulong)param_3 * 8;
          lVar2 = lVar1 + 0x20;
          uVar9 = *(undefined8 *)(lVar2 + lVar11 * 8);
          *(undefined8 *)(lVar2 + lVar11 * 8) =
               *(undefined8 *)(lVar10 + (long)(int)uVar12 * 8 + 0x20);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists((lVar1 - lVar6) + 0x20);
          lVar10 = *(long *)(param_1 + 0x10);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar8 = (param_3 - 2) + iVar3;
          if (*(uint *)(lVar10 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          *(undefined8 *)(lVar10 + (long)(int)uVar12 * 8 + 0x20) =
               *(undefined8 *)(lVar10 + (long)(int)uVar8 * 8 + 0x20);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar10 = *(long *)(param_1 + 0x10);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          puVar5 = (undefined8 *)(lVar10 + (long)(int)uVar8 * 8 + 0x20);
          *puVar5 = uVar9;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar5,uVar9);
        }
        break;
      }
      lVar11 = lVar11 + 1;
      lVar6 = lVar6 + -8;
    } while ((param_3 - iVar4) + (int)lVar11 != 0);
  }
  if (local_44[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
  }
  return;
}


