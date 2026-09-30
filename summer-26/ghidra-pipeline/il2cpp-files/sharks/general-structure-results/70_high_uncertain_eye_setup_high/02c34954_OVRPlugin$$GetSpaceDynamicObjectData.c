/*
FUNCTION_NAME: OVRPlugin$$GetSpaceDynamicObjectData
ENTRY_POINT: 02c34954
PROGRAM: sharks-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c34ba8) */
/* WARNING: Removing unreachable block (ram,0x02c34bb0) */

byte OVRPlugin__GetSpaceDynamicObjectData(undefined1 *param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  int unaff_w21;
  int iVar6;
  long *unaff_x24;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000038;
  
  while (uVar4 = FUN_02c32430(param_1), (uVar4 & 1) == 0) {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_02c32330(&stack0x00000018);
    iVar6 = *(int *)(unaff_x19 + 0x10);
    thunk_FUN_0181f594();
    if (iVar6 != 0) break;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    param_1 = &stack0x00000018;
  }
  FUN_02c317e4(*(undefined8 *)(unaff_x19 + 0x20),(long)&stack0x00000038 + 4);
  if (in_stack_00000038._4_1_ != '\0') {
    iVar6 = *(int *)(unaff_x19 + 0x18);
    thunk_FUN_0181f594();
    thunk_FUN_0181f594();
    *(int *)(unaff_x19 + 0x18) = iVar6 + 1;
  }
  if (*(long *)(unaff_x19 + 0x30) == 0) {
    iVar6 = *(int *)(unaff_x19 + 0x10);
    thunk_FUN_0181f594();
    if (iVar6 == 0) {
      if (unaff_w21 == 0) {
        lVar5 = 0;
        bVar2 = false;
        iVar6 = 0xf;
        goto LAB_02c34a70;
      }
      uVar3 = FUN_02c350bc();
      uVar3 = uVar3 & 1;
    }
    else {
      uVar3 = 0;
    }
    iVar6 = *(int *)(unaff_x19 + 0x10);
    thunk_FUN_0181f594();
                    /* try { // try from 02c34a08 to 02d34a13 has its CatchHandler @ 02c34b88 */
    if (0 < iVar6) {
      iVar6 = *(int *)(unaff_x19 + 0x10);
      thunk_FUN_0181f594();
      thunk_FUN_0181f594();
      uVar3 = 1;
      *(int *)(unaff_x19 + 0x10) = iVar6 + -1;
    }
    lVar5 = *(long *)(unaff_x19 + 0x28);
    thunk_FUN_0181f594();
    if ((lVar5 != 0) && (iVar6 = *(int *)(unaff_x19 + 0x10), thunk_FUN_0181f594(), iVar6 == 0)) {
      lVar5 = *(long *)(unaff_x19 + 0x28);
      thunk_FUN_0181f594();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      FUN_02c35188(lVar5);
    }
    bVar2 = uVar3 != 0;
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_02c34d98();
                    /* try { // try from 02c349bc to 02d349f3 has its CatchHandler @ 02c34bb8 */
    bVar2 = false;
  }
  iVar6 = 0xc;
LAB_02c34a70:
  if (in_stack_00000038._4_1_ != '\0') {
    iVar1 = *(int *)(unaff_x19 + 0x18);
    thunk_FUN_0181f594();
    thunk_FUN_0181f594();
    *(int *)(unaff_x19 + 0x18) = iVar1 + -1;
    FUN_0184c01c(*(undefined8 *)(unaff_x19 + 0x20));
  }
  FUN_02c328cc(&stack0x00000020);
  if ((iVar6 == 0xc) || (iVar6 == 0)) {
    if (lVar5 != 0) {
      in_stack_00000010 = FUN_01deffc4(lVar5,*(undefined8 *)PTR_DAT_037fdf20);
      bVar2 = FUN_01dd30b4(&stack0x00000010,*(undefined8 *)PTR_DAT_037fdf08);
    }
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}


