/*
FUNCTION_NAME: FUN_02064b1c
ENTRY_POINT: 02064b1c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02064d34) */

void FUN_02064b1c(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  char local_34 [4];
  
  if ((DAT_04121d66 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd9af8);
    DAT_04121d66 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if ((*(long *)(param_2 + 0x18) != 0) &&
     ((long)(int)*(long *)(param_2 + 0x18) <= *(long *)(param_1 + 0x48))) {
    local_34[0] = '\0';
    FUN_027e0bd8(param_1,local_34,0);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    lVar6 = *(long *)(param_1 + 0x48) - (long)(int)uVar5;
    if (lVar6 < *(long *)(param_1 + 0x40)) {
      do {
        plVar4 = *(long **)(param_1 + 0x20);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar2 = (**(code **)(*plVar4 + 0x198))
                          (plVar4,0,*(undefined4 *)(param_1 + 0x38),*(undefined8 *)(*plVar4 + 0x1a0)
                          );
        FUN_0206591c(param_1,uVar2);
      } while (lVar6 < *(long *)(param_1 + 0x40));
      uVar5 = *(undefined8 *)(param_2 + 0x18);
    }
    plVar4 = (long *)(param_1 + 0x28);
    uVar3 = FUN_020659cc(*plVar4,*(undefined4 *)(param_1 + 0x38),uVar5);
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == *(int *)(*(long *)(param_1 + 0x28) + 0x18)) {
      iVar1 = iVar1 * 2 + 2;
      FUN_01f25968(param_1 + 0x30,iVar1,
                   *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x60));
      FUN_01f25968(plVar4,iVar1,*(undefined8 *)PTR_DAT_03cd9af8);
      iVar1 = *(int *)(param_1 + 0x38);
    }
    uVar3 = uVar3 ^ (int)uVar3 >> 0x1f;
    if (iVar1 - uVar3 != 0 && (int)uVar3 <= iVar1) {
      FUN_02793ce8(*plVar4,uVar3,*plVar4,uVar3 + 1,iVar1 - uVar3,0);
      FUN_02793ce8(*(undefined8 *)(param_1 + 0x30),uVar3,*(undefined8 *)(param_1 + 0x30),uVar3 + 1,
                   *(int *)(param_1 + 0x38) - uVar3,0);
    }
    lVar6 = *plVar4;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    *(int *)(lVar6 + (long)(int)uVar3 * 4 + 0x20) = (int)*(undefined8 *)(param_2 + 0x18);
    plVar4 = *(long **)(param_1 + 0x30);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar6 = thunk_FUN_01a89d6c(param_2,*(undefined8 *)(*plVar4 + 0x40));
    if (lVar6 == 0) {
      uVar5 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,0);
    }
    if (*(uint *)(plVar4 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar4[(long)(int)uVar3 + 4] = param_2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              (plVar4 + (long)(int)uVar3 + 4,param_2);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    *(long *)(param_1 + 0x40) = (long)*(int *)(param_2 + 0x18) + *(long *)(param_1 + 0x40);
    if (local_34[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
    }
  }
  return;
}


