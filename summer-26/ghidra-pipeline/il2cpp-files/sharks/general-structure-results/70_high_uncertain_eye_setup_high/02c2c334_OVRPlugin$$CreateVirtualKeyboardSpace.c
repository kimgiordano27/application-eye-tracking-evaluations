/*
FUNCTION_NAME: OVRPlugin$$CreateVirtualKeyboardSpace
ENTRY_POINT: 02c2c334
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CreateVirtualKeyboardSpace(void)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint *unaff_x19;
  long unaff_x20;
  ulong uVar8;
  long *unaff_x23;
  uint unaff_w24;
  uint uVar9;
  long unaff_x26;
  uint unaff_w27;
  uint unaff_w28;
  long in_stack_00000000;
  int iStack0000000000000008;
  int iStack000000000000000c;
  ulong in_stack_00000010;
  uint in_stack_00000018;
  long in_stack_00000028;
  
  do {
                    /* try { // try from 02c2c33c to 02d2c343 has its CatchHandler @ 02c2c4a0 */
    uVar5 = 1000000000;
    if ((int)unaff_w28 < 9) {
      lVar4 = *unaff_x23;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        lVar4 = *unaff_x23;
      }
      lVar4 = **(long **)(lVar4 + 0xb8);
                    /* try { // try from 02c2c360 to 02d2c363 has its CatchHandler @ 02c2c49c */
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      if (*(uint *)(lVar4 + 0x18) <= unaff_w28) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
                    /* try { // try from 02c2c370 to 02d2c377 has its CatchHandler @ 02c2c4a8 */
      uVar5 = *(uint *)(lVar4 + (ulong)unaff_w28 * 4 + 0x20);
    }
    uVar8 = 0;
                    /* try { // try from 02c2c380 to 02d2c38b has its CatchHandler @ 02c2c4a4 */
    uVar7 = 0;
    do {
      uVar9 = *(uint *)(unaff_x26 + uVar7 * 4);
                    /* try { // try from 02c2c38c to 02d2c4c3 has its CatchHandler @ 02c2c214 */
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      uVar2 = in_stack_00000010;
      uVar6 = uVar8 + (ulong)uVar9 * (ulong)uVar5;
      uVar9 = (int)uVar7 + 1;
      uVar8 = uVar6 >> 0x20;
      *(int *)(unaff_x26 + uVar7 * 4) = (int)uVar6;
      uVar7 = (ulong)uVar9;
    } while (uVar9 <= unaff_w27);
    iVar3 = (int)(uVar6 >> 0x20);
    if (iVar3 != 0) {
      unaff_w27 = unaff_w27 + 1;
      *(int *)(unaff_x26 + (ulong)unaff_w27 * 4) = iVar3;
    }
    uVar5 = unaff_w28 - 9;
    bVar1 = 8 < (int)unaff_w28;
    unaff_w28 = uVar5;
  } while (uVar5 != 0 && bVar1);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar7 = *(ulong *)(unaff_x20 + 8);
  uVar5 = *(uint *)(unaff_x20 + 4);
  if (iStack0000000000000008 == iStack000000000000000c) {
    uVar8 = uVar7 + uVar2;
    uVar9 = uVar5 + in_stack_00000018;
    if (!CARRY8(uVar7,uVar2)) {
      if (uVar9 < in_stack_00000018) goto LAB_02c2c550;
      goto LAB_02c2c5b8;
    }
    uVar9 = uVar9 + 1;
    if (in_stack_00000018 < uVar9) goto LAB_02c2c5b8;
LAB_02c2c550:
    uVar7 = 3;
    do {
      iVar3 = *(int *)((long)&stack0x00000010 + uVar7 * 4);
      *(int *)((long)&stack0x00000010 + uVar7 * 4) = iVar3 + 1;
      if (iVar3 != -1) goto LAB_02c2c5b8;
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar5;
    } while (uVar5 <= unaff_w27);
    *(undefined4 *)((long)&stack0x00000010 + (ulong)uVar5 * 4) = 1;
  }
  else {
    uVar8 = uVar2 - uVar7;
    uVar9 = in_stack_00000018 - uVar5;
    if (uVar2 < uVar7) {
      uVar9 = uVar9 - 1;
      if (in_stack_00000018 <= uVar9) {
LAB_02c2c58c:
        uVar7 = 3;
        do {
          iVar3 = *(int *)((long)&stack0x00000010 + uVar7 * 4);
          *(int *)((long)&stack0x00000010 + uVar7 * 4) = iVar3 + -1;
          uVar7 = (ulong)((int)uVar7 + 1);
        } while (iVar3 == 0);
        if (*(int *)((long)&stack0x00000010 + (ulong)unaff_w27 * 4) == 0) {
          uVar7 = (ulong)(unaff_w27 - 1);
          if (unaff_w27 - 1 < 3) goto LAB_02c2c5f4;
          goto LAB_02c2c5bc;
        }
      }
    }
    else if (in_stack_00000018 < uVar5) goto LAB_02c2c58c;
LAB_02c2c5b8:
    uVar7 = (ulong)unaff_w27;
  }
LAB_02c2c5bc:
  in_stack_00000010 = uVar8;
  in_stack_00000018 = uVar9;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  iVar3 = FUN_02c2e76c(&stack0x00000010,uVar7,unaff_w24 >> 0x10 & 0xff);
  unaff_w24 = unaff_w24 & 0xff00ffff | iVar3 << 0x10;
  uVar8 = in_stack_00000010;
  uVar9 = in_stack_00000018;
LAB_02c2c5f4:
  *unaff_x19 = unaff_w24;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  unaff_x19[1] = uVar9;
  *(ulong *)(unaff_x19 + 2) = uVar8;
  if (*(long *)(in_stack_00000000 + 0x28) != in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


