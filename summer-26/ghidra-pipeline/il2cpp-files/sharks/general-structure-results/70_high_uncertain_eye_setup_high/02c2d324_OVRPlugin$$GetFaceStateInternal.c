/*
FUNCTION_NAME: OVRPlugin$$GetFaceStateInternal
ENTRY_POINT: 02c2d324
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetFaceStateInternal(long param_1)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint *unaff_x19;
  uint *unaff_x20;
  uint unaff_w21;
  ulong uVar8;
  uint uVar9;
  ulong unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  uint unaff_w26;
  ulong unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000020;
  uint uStack0000000000000028;
  uint uStack000000000000002c;
  uint in_stack_00000030;
  long in_stack_00000048;
  
  while( true ) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if (*(uint *)(param_1 + 0x18) <= unaff_w21) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    uVar8 = (ulong)*(uint *)(param_1 + (long)(int)unaff_w21 * 4 + 0x20);
    in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + unaff_w21;
                    /* try { // try from 02c2d348 to 02d2d34b has its CatchHandler @ 02c2d3c8 */
    iVar4 = FUN_02c2e668(&stack0x00000028,uVar8);
    if (iVar4 != 0) {
      thunk_FUN_01851c08(PTR_DAT_037f87b0);
      uVar6 = thunk_FUN_01861bbc();
      uVar7 = thunk_FUN_01851c08(PTR_DAT_03809d90);
      FUN_02bde04c(uVar6,uVar7,0);
      uVar7 = thunk_FUN_01851c08(PTR_DAT_0380bd80);
                    /* try { // try from 02c2d564 to 02d2d56f has its CatchHandler @ 02c2d668 */
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar6,uVar7);
    }
                    /* try { // try from 02c2d360 to 02d2d367 has its CatchHandler @ 02c2d3d0 */
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    iVar4 = in_stack_00000020._4_4_;
    uVar8 = uVar8 * unaff_w26;
    uVar2 = 0;
    if (unaff_x23 != 0) {
      uVar2 = uVar8 / unaff_x23;
    }
    uVar9 = (uint)unaff_x23;
                    /* try { // try from 02c2d378 to 02d2d37f has its CatchHandler @ 02c2d3d4 */
    unaff_w26 = (int)uVar8 - uVar9 * (int)uVar2;
    bVar3 = CARRY8(_uStack0000000000000028,uVar2 & 0xffffffff);
    _uStack0000000000000028 = _uStack0000000000000028 + (uVar2 & 0xffffffff);
                    /* try { // try from 02c2d394 to 02d2d3a3 has its CatchHandler @ 02c2d3cc */
    if ((bVar3) &&
       (bVar3 = 0xfffffffe < in_stack_00000030, in_stack_00000030 = in_stack_00000030 + 1, bVar3))
    break;
    uVar8 = _uStack0000000000000028;
    if (unaff_w26 != 0) {
      if (in_stack_00000020._4_4_ != 0x1c) {
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        unaff_w21 = FUN_02c2f500(&stack0x00000028,iVar4);
        uVar8 = _uStack0000000000000028;
        if (unaff_w21 != 0) {
          unaff_x27 = 1;
          goto LAB_02c2d308;
        }
      }
      iVar4 = in_stack_00000020._4_4_;
                    /* try { // try from 02c2d3a4 to 02d2d3ef has its CatchHandler @ 02c2d1f0 */
      uVar1 = unaff_w26 * 2;
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02c2d320 with catch @ 02c2d3d8
                        */
                    /* try { // try from 02c2d3f0 to 02d2d407 has its CatchHandler @ 02c2d498 */
      if ((((uVar1 < unaff_w26) || ((uVar9 <= uVar1 && ((uVar9 < uVar1 || ((uVar8 & 1) != 0)))))) &&
          (bVar3 = uVar8 == 0xffffffffffffffff, _uStack0000000000000028 = uVar8 + 1,
          uVar8 = _uStack0000000000000028, bVar3)) &&
         (bVar3 = in_stack_00000030 == 0xffffffff, in_stack_00000030 = in_stack_00000030 + 1, bVar3)
         ) {
                    /* try { // try from 02c2d408 to 02d2d487 has its CatchHandler @ 02c2d1f0 */
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        in_stack_00000020._4_4_ = FUN_02c2f3a8(&stack0x00000028,iVar4,1);
        uVar8 = _uStack0000000000000028;
      }
      goto LAB_02c2d488;
    }
    if (-1 < in_stack_00000020._4_4_) goto LAB_02c2d45c;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    unaff_w21 = FUN_02bd01ec(9,-iVar4,0);
LAB_02c2d308:
    lVar5 = *unaff_x25;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar5 = *unaff_x25;
    }
                    /* try { // try from 02c2d320 to 02d2d32f has its CatchHandler @ 02c2d3d8 */
    param_1 = **(long **)(lVar5 + 0xb8);
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  in_stack_00000020._4_4_ = FUN_02c2f3a8(&stack0x00000028,iVar4,unaff_w26 != 0);
  uVar8 = _uStack0000000000000028;
LAB_02c2d45c:
  iVar4 = in_stack_00000020._4_4_;
  if ((unaff_x27 & 1) == 0) {
    _uStack0000000000000028 = uVar8;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    *(ulong *)(unaff_x19 + 2) = uVar8;
    unaff_x19[1] = in_stack_00000030;
    goto LAB_02c2d4d4;
  }
LAB_02c2d488:
                    /* try { // try from 02c2d488 to 02d2d497 has its CatchHandler @ 02c2d498 */
  uVar1 = in_stack_00000030;
  uStack000000000000002c = (uint)(uVar8 >> 0x20);
  uVar9 = uStack000000000000002c;
  uStack0000000000000028 = (uint)uVar8;
  in_stack_00000008._4_4_ = uStack0000000000000028;
                    /* catch() { ... } // from try @ 02c2d3f0 with catch @ 02c2d498
                       catch() { ... } // from try @ 02c2d488 with catch @ 02c2d498 */
                    /* try { // try from 02c2d49c to 02d2d49f has its CatchHandler @ 02c2d4a8 */
                    /* try { // try from 02c2d4a0 to 02d2d4ab has its CatchHandler @ 02c2d1f0 */
  _uStack0000000000000028 = uVar8;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02c2d49c with catch @ 02c2d4a8
                        */
                    /* try { // try from 02c2d4ac to 02d2d563 has its CatchHandler @ 02c2d4ac
                       catch() { ... } // from try @ 02c2d4ac with catch @ 02c2d4ac
                       catch() { ... } // from try @ 02c2d570 with catch @ 02c2d4ac
                       catch() { ... } // from try @ 02c2d5e4 with catch @ 02c2d4ac
                       catch() { ... } // from try @ 02c2d6b4 with catch @ 02c2d4ac */
  FUN_02c3ca24((long)&stack0x00000008 + 4);
  unaff_x19[2] = in_stack_00000008._4_4_;
  unaff_x19[3] = uVar9;
  unaff_x19[1] = uVar1;
  iVar4 = in_stack_00000020._4_4_;
LAB_02c2d4d4:
  *unaff_x19 = (*unaff_x20 ^ *unaff_x19) & 0x80000000 | iVar4 << 0x10;
  if (*(long *)(unaff_x24 + 0x28) != in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


