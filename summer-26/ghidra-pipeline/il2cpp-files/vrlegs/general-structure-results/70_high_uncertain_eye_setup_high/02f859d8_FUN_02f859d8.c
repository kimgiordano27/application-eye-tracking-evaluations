/*
FUNCTION_NAME: FUN_02f859d8
ENTRY_POINT: 02f859d8
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


/* WARNING: Removing unreachable block (ram,0x02f85b60) */

long FUN_02f859d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  char local_34 [4];
  
  puVar3 = PTR_DAT_03d25598;
  if ((DAT_0412ad31 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d25598);
    FUN_01ab69ac(PTR_DAT_03d25118);
    DAT_0412ad31 = 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
  FUN_02f85c00(lVar4,param_2,param_3,uVar1,uVar9);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  local_34[0] = '\0';
  FUN_027e0bd8(uVar9,local_34,0);
  lVar8 = *(long *)(param_1 + 0x20);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(long *)(lVar8 + 0x38) == lVar8) {
    uVar6 = FUN_027b45f4(*(undefined8 *)(param_1 + 0x18),0,0);
    if ((uVar6 & 1) != 0) {
      uVar7 = FUN_02670a10(param_1,0);
      *(undefined8 *)(param_1 + 0x18) = uVar7;
    }
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(param_1 + 0x20);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x40);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar5 = (long *)(lVar8 + 0x38);
  *plVar5 = lVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,lVar4);
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar5 = (long *)(*(long *)(param_1 + 0x20) + 0x40);
    *plVar5 = lVar4;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,lVar4);
    if (local_34[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
    }
    if (bVar2) {
      if (*(int *)(*(long *)PTR_DAT_03d25118 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02f84c18();
    }
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


