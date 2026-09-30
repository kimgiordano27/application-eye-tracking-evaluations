/*
FUNCTION_NAME: FUN_02f70d88
ENTRY_POINT: 02f70d88
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f70f8c) */
/* WARNING: Removing unreachable block (ram,0x02f70f80) */

void FUN_02f70d88(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  uint local_38;
  char local_34 [4];
  
  puVar1 = PTR_DAT_03d1fee8;
  if ((DAT_0412ac9d & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d24f18);
    FUN_01ab69ac(PTR_DAT_03d1fee8);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
    FUN_01ab69ac(PTR_DAT_03d24f20);
    FUN_01ab69ac(PTR_DAT_03d24f28);
    DAT_0412ac9d = 1;
  }
  local_34[0] = '\0';
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_02f651a8();
  puVar2 = PTR_DAT_03d24f18;
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
    local_38 = param_2;
    lVar5 = thunk_FUN_01a89a98(*(undefined8 *)puVar2,&local_38);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar7,0);
    }
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar4[4] = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4 + 4,lVar5);
    uVar7 = FUN_026780b0(*(undefined8 *)PTR_DAT_03d24f20,plVar4,0);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar5);
    }
    FUN_02f6520c(param_1,uVar7,*(undefined8 *)PTR_DAT_03d24f28);
  }
  local_34[0] = '\0';
  FUN_027e0bd8(param_1,local_34,0);
  if (*(char *)(param_1 + 0x3b) == '\0') {
    *(undefined2 *)(param_1 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x3b) = 1;
    iVar8 = 5;
  }
  else {
    iVar8 = 4;
  }
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
  }
  if ((iVar8 == 5) || (iVar8 == 0)) {
    lVar5 = *(long *)(param_1 + 0x30);
    if ((param_2 & 1) == 0) {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02ebcd14(lVar5,0xffffffff,0);
    }
    else {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02ebcd14(lVar5,0,0);
    }
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02f77d1c(*(long *)(param_1 + 0x28),param_2);
  }
  return;
}


