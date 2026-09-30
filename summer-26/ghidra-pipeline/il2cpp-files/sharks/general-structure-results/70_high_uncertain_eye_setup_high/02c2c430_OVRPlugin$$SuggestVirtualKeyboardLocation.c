/*
FUNCTION_NAME: OVRPlugin$$SuggestVirtualKeyboardLocation
ENTRY_POINT: 02c2c430
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SuggestVirtualKeyboardLocation(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_w8;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint *unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  uint unaff_w24;
  uint uVar9;
  ulong unaff_x26;
  long unaff_x28;
  int iStack0000000000000008;
  int iStack000000000000000c;
  long in_stack_00000028;
  
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar5 = *(ulong *)(unaff_x20 + 8);
  if (iStack0000000000000008 == iStack000000000000000c) {
    uVar6 = uVar5 + unaff_x26;
    uVar9 = *(int *)(unaff_x20 + 4) + in_w8;
    if (CARRY8(uVar5,unaff_x26)) {
      uVar9 = uVar9 + 1;
      uVar4 = uVar9;
      if (in_w8 < uVar9) goto LAB_02c2c5f4;
    }
    else {
      uVar4 = uVar9;
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02c2c360 with catch @ 02c2c49c
                        */
      if (in_w8 <= uVar9) goto LAB_02c2c5f4;
    }
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02c2c33c with catch @ 02c2c4a0
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02c2c380 with catch @ 02c2c4a4
                        */
    if ((unaff_w24 & 0xff0000) == 0) {
      thunk_FUN_01851c08(PTR_DAT_037f87b0);
      uVar2 = thunk_FUN_01861bbc();
      uVar3 = thunk_FUN_01851c08(PTR_DAT_03809d90);
      FUN_02bde04c(uVar2,uVar3,0);
      uVar3 = thunk_FUN_01851c08(PTR_DAT_0380bd78);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar2,uVar3);
    }
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02c2c370 with catch @ 02c2c4a8
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02c2c310 with catch @ 02c2c4ac
                        */
    uVar4 = (uint)(((ulong)uVar9 | 0x100000000) / 10);
                    /* try { // try from 02c2c4c4 to 02d2c4db has its CatchHandler @ 02c2c53c */
    uVar8 = (uVar6 >> 0x20 | (ulong)(uVar9 + uVar4 * -10) << 0x20) / 10;
                    /* try { // try from 02c2c4dc to 02d2c52b has its CatchHandler @ 02c2c214 */
    uVar5 = uVar6 & 0xfffffffe | (ulong)(uint)((int)(uVar6 >> 0x20) + (int)uVar8 * -10) << 0x20;
    uVar7 = uVar5 / 10;
    uVar9 = (int)uVar6 + (int)uVar7 * -10;
    unaff_w24 = unaff_w24 - 0x10000;
    uVar6 = uVar8 << 0x20 | uVar5 / 10 & 0xffffffff;
    if ((4 < uVar9) &&
       ((((uVar7 & 1) != 0 || (uVar9 != 5)) &&
        (bVar1 = uVar6 == 0xffffffffffffffff, uVar6 = uVar6 + 1, bVar1)))) {
      uVar4 = uVar4 + 1;
    }
  }
  else {
    uVar6 = unaff_x26 - uVar5;
    uVar9 = in_w8 - *(uint *)(unaff_x20 + 4);
    if (unaff_x26 < uVar5) {
      uVar4 = uVar9 - 1;
      if (in_w8 <= uVar9 - 1) {
        unaff_w24 = unaff_w24 ^ 0x80000000;
        uVar6 = -uVar6;
        uVar4 = -uVar9;
      }
    }
    else {
      uVar4 = uVar9;
      if (in_w8 < *(uint *)(unaff_x20 + 4)) {
        bVar1 = uVar6 != 0;
        unaff_w24 = unaff_w24 ^ 0x80000000;
        uVar6 = -uVar6;
        uVar4 = -uVar9;
        if (bVar1) {
          uVar4 = ~uVar9;
        }
      }
    }
  }
LAB_02c2c5f4:
  *unaff_x19 = unaff_w24;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  unaff_x19[1] = uVar4;
  *(ulong *)(unaff_x19 + 2) = uVar6;
  if (*(long *)(unaff_x28 + 0x28) != in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


