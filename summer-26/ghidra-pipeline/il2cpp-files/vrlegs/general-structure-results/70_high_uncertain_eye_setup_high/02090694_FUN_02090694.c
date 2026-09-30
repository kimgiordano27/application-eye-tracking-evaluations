/*
FUNCTION_NAME: FUN_02090694
ENTRY_POINT: 02090694
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0209088c) */

uint FUN_02090694(long param_1,long param_2,long param_3)

{
  bool bVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  char local_54 [4];
  
  uVar6 = 0;
  plVar2 = (long *)(param_1 + 0x10);
  local_54[0] = '\0';
  do {
    lVar5 = *plVar2;
    thunk_FUN_01a4b338();
    local_54[0] = '\0';
    FUN_027e0bd8(lVar5,local_54,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar3 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar3) {
      lVar10 = 0x28;
      uVar7 = 1;
      do {
        uVar4 = uVar7 - 1;
        if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        plVar8 = (long *)(lVar5 + (long)(int)uVar4 * 8 + 0x20);
        if (*plVar8 == 0) {
          thunk_FUN_01a4b338();
          *plVar8 = param_2;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,param_2);
          bVar1 = false;
          uVar6 = uVar4;
          goto LAB_020907e8;
        }
        if ((uVar4 == uVar3 - 1) && (lVar9 = *plVar2, thunk_FUN_01a4b338(), lVar5 == lVar9)) {
          lVar9 = **(long **)(*(long *)(param_3 + 0x20) + 0xc0);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01a46ff8();
          }
          lVar9 = FUN_01ab6a94(lVar9,*(int *)(lVar5 + 0x18) << 1);
          FUN_02794c7c(lVar5,lVar9,uVar7,0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          *(long *)(lVar9 + lVar10) = param_2;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((long *)(lVar9 + lVar10),param_2);
          thunk_FUN_01a4b338();
          *plVar2 = lVar9;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2,lVar9);
          bVar1 = false;
          uVar6 = uVar7;
          goto LAB_020907e8;
        }
        uVar3 = *(uint *)(lVar5 + 0x18);
        lVar10 = lVar10 + 8;
        bVar1 = (int)uVar7 < (int)uVar3;
        uVar7 = uVar7 + 1;
      } while (bVar1);
    }
    bVar1 = true;
LAB_020907e8:
    if (local_54[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(lVar5,0);
    }
    if (!bVar1) {
      return uVar6;
    }
  } while( true );
}


