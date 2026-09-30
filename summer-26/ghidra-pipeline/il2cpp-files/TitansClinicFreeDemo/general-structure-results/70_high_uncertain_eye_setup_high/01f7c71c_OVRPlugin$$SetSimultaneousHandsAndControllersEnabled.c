/*
FUNCTION_NAME: OVRPlugin$$SetSimultaneousHandsAndControllersEnabled
ENTRY_POINT: 01f7c71c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin__SetSimultaneousHandsAndControllersEnabled(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  lVar4 = *(long *)(unaff_x21 + 0x38);
  if (lVar4 == 0) {
                    /* try { // try from 01f7c724 to 0207c72f has its CatchHandler @ 01f7c744 */
    FUN_0122e7a4();
    lVar4 = *(long *)(unaff_x21 + 0x38);
  }
                    /* try { // try from 01f7c730 to 0207c73b has its CatchHandler @ 01f7c5bc */
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    /* try { // try from 01f7c73c to 0207c743 has its CatchHandler @ 01f7c744 */
    lVar4 = FUN_0122e748();
  }
  puVar2 = PTR_DAT_027c1120;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01f7c724 with catch @ 01f7c744
                       catch(type#2 @ 00000000) { ... } // from try @ 01f7c73c with catch @ 01f7c744
                        */
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  puVar1 = PTR_DAT_027c1110;
  _in_stack_00000008 = FUN_01d2622c();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  lVar6 = *(long *)puVar1;
  lVar4 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0122e748();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0122e748();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  lVar4 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0122e748();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0122e748();
  }
  puVar1 = PTR_DAT_027c1118;
  iVar5 = **(int **)(lVar4 + 0xb8);
  iVar3 = iVar5 * 4;
  do {
    iVar3 = iVar3 + -4;
    iVar5 = iVar5 + -1;
    if (iVar5 < 0) goto LAB_01f7c850;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar4 = FUN_01d2e344(&stack0x00000008,iVar5,*(undefined8 *)puVar1);
  } while (lVar4 == 0);
  if (lVar4 < 1) {
LAB_01f7c850:
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


