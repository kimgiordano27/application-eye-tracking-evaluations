/*
FUNCTION_NAME: OVRManager$$IsInsightPassthroughInitialized
ENTRY_POINT: 01d72ba4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRManager__IsInsightPassthroughInitialized(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long lStack0000000000000018;
  
  lVar1 = tpidr_el0;
  lStack0000000000000018 = *(long *)(lVar1 + 0x28);
  if (DAT_0247d76e == '\0') {
    FUN_00fdc2e4(PTR_DAT_02358258);
    FUN_00fdc2e4(PTR_DAT_02358260);
    FUN_00fdc2e4(PTR_DAT_02358268);
    FUN_00fdc2e4(PTR_DAT_02358250);
    DAT_0247d76e = '\x01';
  }
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  lVar7 = *(long *)PTR_DAT_02358250;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_0103c2a0(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  _in_stack_00000008 = FUN_01ba023c(param_1,param_2,*(undefined8 *)(*(long *)(lVar7 + 0x38) + 8));
  puVar3 = PTR_DAT_02358268;
  if (*(int *)(*(long *)PTR_DAT_02358268 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  lVar7 = *(long *)PTR_DAT_02358258;
  lVar5 = *(long *)(lVar7 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  lVar5 = *(long *)(lVar7 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244();
  }
  puVar2 = PTR_DAT_02358260;
  iVar6 = **(int **)(lVar5 + 0xb8);
  iVar4 = iVar6 * 4;
  do {
    iVar4 = iVar4 + -4;
    iVar6 = iVar6 + -1;
    if (iVar6 < 0) goto LAB_01d72d44;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar5 = FUN_01ba8354(&stack0x00000008,iVar6,*(undefined8 *)puVar2);
  } while (lVar5 == 0);
  if (lVar5 < 1) {
LAB_01d72d44:
    iVar6 = 3;
  }
  else {
    iVar6 = 3;
    do {
      lVar5 = lVar5 * 0x10000;
      iVar6 = iVar6 + -1;
    } while (0 < lVar5);
  }
  if (*(long *)(lVar1 + 0x28) != lStack0000000000000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6 + iVar4;
}


