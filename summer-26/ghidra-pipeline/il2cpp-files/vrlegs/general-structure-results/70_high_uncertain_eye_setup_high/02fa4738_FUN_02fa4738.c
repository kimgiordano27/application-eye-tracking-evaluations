/*
FUNCTION_NAME: FUN_02fa4738
ENTRY_POINT: 02fa4738
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


/* WARNING: Removing unreachable block (ram,0x02fa4998) */

long FUN_02fa4738(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  char local_34 [4];
  
  if ((DAT_0412ae09 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbeeb0);
    FUN_01ab69ac(PTR_DAT_03d07d40);
    FUN_01ab69ac(PTR_DAT_03cceca0);
    FUN_01ab69ac(PTR_DAT_03d25a58);
    DAT_0412ae09 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar7,local_34,0);
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar2 = FUN_02ea1e90(*(long *)(param_1 + 0x10),0);
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar1 = FUN_02ea1874(*(long *)(param_1 + 0x10),0);
  if (iVar1 == 4) {
LAB_02fa47ec:
    plVar8 = (long *)(param_1 + 0x28);
    lVar9 = *plVar8;
    if (lVar9 == 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar1 = FUN_02ea1874(*(long *)(param_1 + 0x10),0);
      if (iVar1 == 4) {
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar2 = FUN_025bfd60(lVar2,1,*(int *)(lVar2 + 0x10) + -2,0);
      }
      lVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d25a58);
      FUN_02f79538(lVar9,0);
      *plVar8 = lVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar9);
      lVar9 = *plVar8;
      plVar3 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d07d40,1);
      if (*(int *)(*(long *)PTR_DAT_03cceca0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar2 = FUN_02f68398(lVar2,0);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if ((lVar2 != 0) &&
         (lVar4 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
        uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar7,0);
      }
      if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar3[4] = lVar2;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3 + 4,lVar2);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar10 = (long *)(lVar9 + 0x20);
      *plVar10 = (long)plVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,plVar3);
      lVar9 = *plVar8;
    }
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar1 = FUN_02ea1874(*(long *)(param_1 + 0x10),0);
    if (iVar1 == 3) goto LAB_02fa47ec;
    uVar5 = FUN_02fa460c(param_1);
    if (((uVar5 & 1) != 0) || (lVar9 = *(long *)(param_1 + 0x28), lVar9 == 0)) {
      if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_02745e48(0);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      uVar6 = FUN_02f998f4(lVar2);
      *(undefined8 *)(param_1 + 0x28) = uVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar9 = 0;
      uVar11 = 8;
      goto LAB_02fa490c;
    }
  }
  uVar11 = 5;
LAB_02fa490c:
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
  }
  if ((uVar11 | 8) == 8) {
    lVar9 = *(long *)(param_1 + 0x28);
  }
  return lVar9;
}


