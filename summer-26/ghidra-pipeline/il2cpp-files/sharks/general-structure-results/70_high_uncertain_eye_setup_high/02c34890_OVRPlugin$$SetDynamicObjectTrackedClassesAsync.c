/*
FUNCTION_NAME: OVRPlugin$$SetDynamicObjectTrackedClassesAsync
ENTRY_POINT: 02c34890
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c34ba8) */
/* WARNING: Removing unreachable block (ram,0x02c34bb0) */

byte OVRPlugin__SetDynamicObjectTrackedClassesAsync(long param_1)

{
  int iVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  int unaff_w21;
  int iVar7;
  long *unaff_x23;
  undefined8 uVar8;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  char cStack000000000000003c;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02c30da8(&stack0x00000048);
  if (unaff_w21 == 0) {
    iVar7 = *(int *)(unaff_x19 + 0x10);
    thunk_FUN_0181f594();
    if (iVar7 != 0) goto LAB_02c348d8;
  }
  else {
    if (0 < unaff_w21) {
      thunk_FUN_018486b4(0);
                    /* try { // try from 02c348bc to 02d348cf has its CatchHandler @ 02c34bf4 */
    }
LAB_02c348d8:
    puVar2 = PTR_DAT_03800ea8;
    cStack000000000000003c = '\0';
    lVar5 = *(long *)PTR_DAT_03800ea8;
                    /* try { // try from 02c348ec to 02d348ff has its CatchHandler @ 02c34c24 */
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar5 = *(long *)puVar2;
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01843fdc(*unaff_x23);
    }
    puVar2 = PTR_DAT_037f9e50;
                    /* try { // try from 02c34918 to 02d3492b has its CatchHandler @ 02c34ca4 */
                    /* try { // try from 02c3492c to 02d349bb has its CatchHandler @ 02c343dc */
    FUN_02c30798(&stack0x00000020,&stack0x00000048,uVar8);
    in_stack_00000018 = 0;
    while (iVar7 = *(int *)(unaff_x19 + 0x10), thunk_FUN_0181f594(), iVar7 == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar6 = FUN_02c32430(&stack0x00000018);
      if ((uVar6 & 1) != 0) break;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      FUN_02c32330(&stack0x00000018);
    }
    FUN_02c317e4(*(undefined8 *)(unaff_x19 + 0x20),&stack0x0000003c);
    if (cStack000000000000003c != '\0') {
      iVar7 = *(int *)(unaff_x19 + 0x18);
      thunk_FUN_0181f594();
      thunk_FUN_0181f594();
      *(int *)(unaff_x19 + 0x18) = iVar7 + 1;
    }
    if (*(long *)(unaff_x19 + 0x30) == 0) {
      iVar7 = *(int *)(unaff_x19 + 0x10);
      thunk_FUN_0181f594();
      if (iVar7 != 0) {
        uVar4 = 0;
LAB_02c34a00:
        iVar7 = *(int *)(unaff_x19 + 0x10);
        thunk_FUN_0181f594();
        if (0 < iVar7) {
          iVar7 = *(int *)(unaff_x19 + 0x10);
          thunk_FUN_0181f594();
          thunk_FUN_0181f594();
          uVar4 = 1;
          *(int *)(unaff_x19 + 0x10) = iVar7 + -1;
        }
        lVar5 = *(long *)(unaff_x19 + 0x28);
        thunk_FUN_0181f594();
        if ((lVar5 != 0) && (iVar7 = *(int *)(unaff_x19 + 0x10), thunk_FUN_0181f594(), iVar7 == 0))
        {
          lVar5 = *(long *)(unaff_x19 + 0x28);
          thunk_FUN_0181f594();
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          FUN_02c35188(lVar5);
        }
        bVar3 = uVar4 != 0;
        lVar5 = 0;
        goto LAB_02c34a6c;
      }
      if (unaff_w21 != 0) {
        uVar4 = FUN_02c350bc();
        uVar4 = uVar4 & 1;
        goto LAB_02c34a00;
      }
      lVar5 = 0;
      bVar3 = false;
      iVar7 = 0xf;
    }
    else {
      lVar5 = FUN_02c34d98();
      bVar3 = false;
LAB_02c34a6c:
      iVar7 = 0xc;
    }
    if (cStack000000000000003c != '\0') {
      iVar1 = *(int *)(unaff_x19 + 0x18);
      thunk_FUN_0181f594();
      thunk_FUN_0181f594();
      *(int *)(unaff_x19 + 0x18) = iVar1 + -1;
      FUN_0184c01c(*(undefined8 *)(unaff_x19 + 0x20));
    }
    FUN_02c328cc(&stack0x00000020);
    if ((iVar7 == 0xc) || (iVar7 == 0)) {
      if (lVar5 != 0) {
        in_stack_00000010 = FUN_01deffc4(lVar5,*(undefined8 *)PTR_DAT_037fdf20);
        bVar3 = FUN_01dd30b4(&stack0x00000010,*(undefined8 *)PTR_DAT_037fdf08);
      }
      goto LAB_02c34ae8;
    }
  }
  bVar3 = 0;
LAB_02c34ae8:
  return bVar3 & 1;
}


