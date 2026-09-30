/*
FUNCTION_NAME: FUN_02251e24
ENTRY_POINT: 02251e24
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


long FUN_02251e24(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  
  puVar4 = PTR_DAT_03cda288;
  if ((DAT_041222c3 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cda288);
    DAT_041222c3 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  iVar5 = FUN_025bb698(0);
  if (lVar9 == 0) {
LAB_02251f44:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar2 = *(uint *)(lVar9 + 0x18);
  if (0 < (int)uVar2) {
    iVar3 = 0;
    if (uVar2 != 0) {
      iVar3 = iVar5 / (int)uVar2;
    }
    iVar10 = 0;
    uVar11 = iVar5 - iVar3 * uVar2;
    do {
      if (uVar2 <= uVar11) {
LAB_02251f48:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar8 = *(long *)(lVar9 + (long)(int)uVar11 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_02251f44;
      thunk_FUN_01a4ad9c(lVar8,0);
      if (*(int *)(lVar8 + 0x18) < 1) {
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar8,0);
      }
      else {
        lVar7 = *(long *)(lVar8 + 0x10);
        uVar2 = *(int *)(lVar8 + 0x18) - 1;
        *(uint *)(lVar8 + 0x18) = uVar2;
        if (lVar7 == 0) goto LAB_02251f44;
        if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_02251f48;
        plVar6 = (long *)(lVar7 + (ulong)uVar2 * 8 + 0x20);
        lVar7 = *plVar6;
        *plVar6 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,0);
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar8,0);
        if (lVar7 != 0) {
          return lVar7;
        }
      }
      uVar2 = *(uint *)(lVar9 + 0x18);
      iVar10 = iVar10 + 1;
      uVar1 = 0;
      if (uVar11 + 1 != uVar2) {
        uVar1 = uVar11 + 1;
      }
      uVar11 = uVar1;
    } while (iVar10 < (int)uVar2);
  }
  return 0;
}


