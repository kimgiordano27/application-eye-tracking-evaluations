/*
FUNCTION_NAME: OVRPlugin$$GetNodePoseStateImmediate
ENTRY_POINT: 01f7c504
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin__GetNodePoseStateImmediate(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long *unaff_x21;
  long lVar8;
  long unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  thunk_FUN_01279b34();
  thunk_FUN_01279b34(PTR_DAT_027c1108);
  *(undefined1 *)(unaff_x23 + 0xdef) = 1;
  lVar8 = *unaff_x21;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  lVar5 = *(long *)(lVar8 + 0x38);
  if (lVar5 == 0) {
    FUN_0122e7a4(lVar8);
    lVar5 = *(long *)(lVar8 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0122e748();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  puVar3 = PTR_DAT_027c1120;
  puVar2 = PTR_DAT_027c1118;
  puVar1 = PTR_DAT_027c1110;
  _in_stack_00000008 = FUN_01d2622c();
  iVar7 = 0;
  iVar6 = 0;
  while( true ) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar8 = *(long *)puVar1;
    lVar5 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0122e748();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
                    /* try { // try from 01f7c5bc to 0207c5fb has its CatchHandler @ 01f7c5bc
                       catch() { ... } // from try @ 01f7c5bc with catch @ 01f7c5bc
                       catch() { ... } // from try @ 01f7c68c with catch @ 01f7c5bc
                       catch() { ... } // from try @ 01f7c6d4 with catch @ 01f7c5bc
                       catch() { ... } // from try @ 01f7c730 with catch @ 01f7c5bc */
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0122e748();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar5 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0122e748();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0122e748();
    }
                    /* try { // try from 01f7c5fc to 0207c60b has its CatchHandler @ 01f7c6ec */
    if (**(int **)(lVar5 + 0xb8) <= iVar6) break;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
                    /* try { // try from 01f7c614 to 0207c617 has its CatchHandler @ 01f7c6e8 */
    uVar4 = FUN_01d2e344(&stack0x00000008,iVar6,*(undefined8 *)puVar2);
    if (uVar4 != 0) goto LAB_01f7c638;
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + 4;
  }
  uVar4 = 0;
LAB_01f7c638:
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000018) {
    return (uint)((uVar4 - 1 ^ uVar4) * 0x100020004 >> 0x31) + iVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


