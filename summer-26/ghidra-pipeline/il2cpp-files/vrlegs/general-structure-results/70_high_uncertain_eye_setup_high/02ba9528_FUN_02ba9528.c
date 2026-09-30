/*
FUNCTION_NAME: FUN_02ba9528
ENTRY_POINT: 02ba9528
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


/* WARNING: Removing unreachable block (ram,0x02ba96fc) */

undefined8 FUN_02ba9528(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  char local_44 [4];
  
  puVar1 = PTR_DAT_03d11488;
  if ((DAT_04128e8f & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d11488);
    FUN_01ab69ac(PTR_DAT_03cc07a8);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    DAT_04128e8f = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar2 = *(long *)puVar1;
  }
  uVar5 = **(undefined8 **)(lVar2 + 0xb8);
  local_44[0] = '\0';
  FUN_027e0bd8(uVar5,local_44,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar2 = **(long **)(*(long *)puVar1 + 0xb8);
  if (0 < (int)*(ulong *)(param_1 + 0x18)) {
    uVar8 = 0;
    uVar4 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
    do {
      if (uVar4 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar7 = *(undefined8 *)(param_1 + 0x20 + uVar8 * 8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar2 = FUN_02ba978c(uVar7,lVar2);
      uVar4 = (ulong)*(uint *)(param_1 + 0x18);
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)(int)*(uint *)(param_1 + 0x18));
  }
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  puVar6 = (undefined8 *)(lVar2 + 0x10);
  uVar7 = *puVar6;
  if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar8 = FUN_02786d28(uVar7,0,0);
  if ((uVar8 & 1) != 0) {
    lVar2 = FUN_027941f0(param_1,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      uVar7 = *(undefined8 *)PTR_DAT_03cc07a8;
      lVar3 = thunk_FUN_01a89d6c(lVar2,uVar7);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar2,uVar7);
      }
    }
    uVar7 = FUN_02ba98cc(lVar3);
    *puVar6 = uVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar6);
  }
  uVar7 = *puVar6;
  if (local_44[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
  }
  return uVar7;
}


