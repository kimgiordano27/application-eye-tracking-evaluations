/*
FUNCTION_NAME: OVRManager$$add_SpaceListSaveComplete
ENTRY_POINT: 033a7610
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRManager__add_SpaceListSaveComplete(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long *unaff_x21;
  long lVar6;
  long unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  FUN_01d7d918(StringLiteral_8443);
  FUN_01d7d918(StringLiteral_8444);
  FUN_01d7d918(StringLiteral_8441);
  *(undefined1 *)(unaff_x23 + 0x87e) = 1;
  lVar6 = *unaff_x21;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  lVar4 = *(long *)(lVar6 + 0x38);
  if (lVar4 == 0) {
    FUN_01dde854(lVar6);
    lVar4 = *(long *)(lVar6 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8();
  }
  puVar2 = StringLiteral_8444;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  puVar1 = StringLiteral_8442;
  _in_stack_00000008 = FUN_02857d04();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  lVar6 = *(long *)puVar1;
  lVar4 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  lVar4 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8();
  }
  puVar1 = StringLiteral_8443;
  iVar5 = **(int **)(lVar4 + 0xb8);
  iVar3 = iVar5 * 4;
  do {
    iVar3 = iVar3 + -4;
    iVar5 = iVar5 + -1;
    if (iVar5 < 0) goto LAB_033a7778;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar4 = FUN_0285ef94(&stack0x00000008,iVar5,*(undefined8 *)puVar1);
  } while (lVar4 == 0);
  if (lVar4 < 1) {
LAB_033a7778:
    iVar5 = 3;
  }
  else {
    iVar5 = 3;
    do {
      lVar4 = lVar4 * 0x10000;
      iVar5 = iVar5 + -1;
    } while (0 < lVar4);
  }
  if (*(long *)(unaff_x22 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5 + iVar3;
}


