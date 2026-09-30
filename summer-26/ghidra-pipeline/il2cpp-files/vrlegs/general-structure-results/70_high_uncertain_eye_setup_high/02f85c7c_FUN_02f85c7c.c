/*
FUNCTION_NAME: FUN_02f85c7c
ENTRY_POINT: 02f85c7c
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


/* WARNING: Removing unreachable block (ram,0x02f85dd4) */
/* WARNING: Removing unreachable block (ram,0x02f85e44) */

undefined4 FUN_02f85c7c(long param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  char local_34 [4];
  
  if ((DAT_0412ad33 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d25118);
    DAT_0412ad33 = 1;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar4 = thunk_FUN_01a4a380(0);
    iVar2 = *(int *)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x14) + iVar2;
    if (*(int *)(*(long *)PTR_DAT_03d25118 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (iVar1 < iVar2 == (iVar4 < iVar2 != iVar1 <= iVar4)) {
      return 0;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    local_34[0] = '\0';
    FUN_027e0bd8(uVar6,local_34,0);
    if (*(int *)(param_1 + 0x18) == 0) {
      plVar8 = (long *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x18) = 1;
      plVar5 = (long *)(param_1 + 0x40);
      if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      *(long *)(*plVar8 + 0x40) = *plVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      *(long *)(*plVar5 + 0x38) = *plVar8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      *plVar8 = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,0);
      *plVar5 = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,0);
      bVar3 = *(long *)(param_1 + 0x20) != 0;
    }
    else {
      bVar3 = false;
    }
    if (local_34[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
    }
    if (bVar3) {
      plVar5 = (long *)(param_1 + 0x20);
      lVar9 = *plVar5;
      puVar7 = (undefined8 *)(param_1 + 0x28);
      uVar6 = *puVar7;
      *plVar5 = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,0);
      *puVar7 = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar7,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(lVar9 + 0x18))
                (*(undefined8 *)(lVar9 + 0x40),param_1,iVar4,uVar6,*(undefined8 *)(lVar9 + 0x28));
    }
  }
  return 1;
}


