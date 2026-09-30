/*
FUNCTION_NAME: FUN_021bb5c0
ENTRY_POINT: 021bb5c0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x021bb788) */

undefined4 FUN_021bb5c0(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined8 local_58;
  undefined8 uStack_50;
  char local_44 [4];
  
  if ((DAT_04122192 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc4f10);
    DAT_04122192 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    uVar7 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar8 + 0x18);
    local_44[0] = '\0';
    FUN_027e0bd8(uVar6,local_44,0);
    puVar2 = PTR_DAT_03cc4f10;
    lVar3 = *(long *)PTR_DAT_03cc4f10;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar2;
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar1 = *(uint *)(lVar8 + 0x18);
    uVar5 = *(uint *)(param_1 + 0x18);
    lVar3 = **(long **)(lVar3 + 0xb8);
    do {
      if ((int)(uVar1 - 1) <= (int)uVar5) {
        uVar7 = 0;
        goto LAB_021bb750;
      }
      uVar5 = uVar5 + 1;
      *(uint *)(param_1 + 0x18) = uVar5;
      if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar4 = lVar8 + (long)(int)uVar5 * 0x10;
      lVar9 = *(long *)(lVar4 + 0x20);
    } while ((lVar9 == 0) || (lVar3 == lVar9));
    lVar3 = *(long *)(lVar4 + 0x28);
    local_58 = 0;
    uStack_50 = 0;
    lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01a46ff8(lVar8);
    }
    lVar4 = thunk_FUN_01a89d6c(lVar9,lVar8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(lVar9,lVar8);
    }
    lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x30);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01a46ff8(lVar8);
    }
    if (lVar3 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = thunk_FUN_01a89d6c(lVar3,lVar8);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar3,lVar8);
      }
    }
    FUN_02207c1c(&local_58,lVar4,lVar9,
                 *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x38));
    *(undefined8 *)(param_1 + 0x28) = uStack_50;
    *(undefined8 *)(param_1 + 0x20) = local_58;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x20,0);
    uVar7 = 1;
LAB_021bb750:
    if (local_44[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
    }
  }
  return uVar7;
}


