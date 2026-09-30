/*
FUNCTION_NAME: FUN_020aec68
ENTRY_POINT: 020aec68
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x020aee40) */
/* WARNING: Removing unreachable block (ram,0x020aee84) */

void FUN_020aec68(undefined8 param_1,long *param_2,ulong param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  char local_54 [4];
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01a46ff8();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if ((uint)((param_3 & 0xffffffff) >> 0x14) < 0x7ff) {
    uVar1 = (int)param_3 - 1;
    uVar1 = uVar1 | (int)uVar1 >> 1;
    uVar1 = uVar1 | (int)uVar1 >> 2;
    uVar1 = uVar1 | (int)uVar1 >> 4;
    uVar1 = uVar1 | (int)uVar1 >> 8;
    uVar1 = uVar1 | (int)uVar1 >> 0x10;
    iVar5 = 0x7fefffff;
    if (uVar1 + 1 < 0x7fefffff) {
      iVar5 = uVar1 + 1;
    }
  }
  else {
    iVar5 = 0x7fffffff;
  }
  lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xb8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01a46ff8();
  }
  lVar2 = FUN_01ab6a94(lVar2,iVar5);
  lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01a46ff8(lVar4);
  }
  uVar6 = **(undefined8 **)(lVar4 + 0xb8);
  local_54[0] = '\0';
  FUN_027e0bd8(uVar6,local_54,0);
  lVar4 = *param_2;
  if (lVar4 != 0) {
    puVar7 = (undefined8 *)(lVar2 + 0x20);
    lVar8 = 4;
    do {
      uVar9 = lVar8 - 4;
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar9) {
        if (local_54[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
        }
        *param_2 = lVar2;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_2,lVar2);
        return;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar4 = *(long *)(lVar4 + lVar8 * 8);
      thunk_FUN_01a4b338();
      if (lVar4 != 0) {
        plVar3 = (long *)thunk_FUN_01a59484(lVar4,*(long *)(**(long **)(*(long *)(param_4 + 0x20) +
                                                                       0xc0) + 0x80) + 0x40);
        lVar10 = *plVar3;
        thunk_FUN_01a4b338();
        if (lVar10 != 0) {
          thunk_FUN_01a4b338();
          FUN_018820a8(lVar4,*(long *)(**(long **)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80) + 0x40,
                       lVar2);
          lVar4 = *param_2;
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar4 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar2 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          *puVar7 = *(undefined8 *)(lVar4 + lVar8 * 8);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar7,0);
        }
      }
      lVar4 = *param_2;
      lVar8 = lVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


