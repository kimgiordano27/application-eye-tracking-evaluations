/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingEnabled
ENTRY_POINT: 02c2d184
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_9;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_faceTrackingEnabled(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint *unaff_x19;
  uint *unaff_x20;
  ulong unaff_x21;
  long unaff_x24;
  long *unaff_x25;
  ulong unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000020;
  uint uStack0000000000000028;
  uint uStack000000000000002c;
  uint in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000048;
  
LAB_02c2d188:
  do {
                    /* try { // try from 02c2d188 to 02d2d1cb has its CatchHandler @ 02c2cf14 */
    lVar6 = *unaff_x25;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar6 = *unaff_x25;
    }
    lVar6 = **(long **)(lVar6 + 0xb8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if (*(uint *)(lVar6 + 0x18) <= param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    uVar1 = *(undefined4 *)(lVar6 + (long)(int)param_1 * 4 + 0x20);
    in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + param_1;
                    /* try { // try from 02c2d1cc to 02d2d1db has its CatchHandler @ 02c2d1dc */
    iVar5 = FUN_02c2e668(&stack0x00000028,uVar1);
    if (iVar5 != 0) {
      thunk_FUN_01851c08(PTR_DAT_037f87b0);
      uVar8 = thunk_FUN_01861bbc();
      uVar9 = thunk_FUN_01851c08(PTR_DAT_03809d90);
      FUN_02bde04c(uVar8,uVar9,0);
      uVar9 = thunk_FUN_01851c08(PTR_DAT_0380bd80);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar8,uVar9);
    }
                    /* catch() { ... } // from try @ 02c2d170 with catch @ 02c2d1dc
                       catch() { ... } // from try @ 02c2d1cc with catch @ 02c2d1dc */
                    /* try { // try from 02c2d1e0 to 02d2d1e3 has its CatchHandler @ 02c2d1ec */
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                    /* try { // try from 02c2d1e4 to 02d2d1ef has its CatchHandler @ 02c2cf14 */
      thunk_FUN_01843fdc();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02c2d1e0 with catch @ 02c2d1ec
                        */
                    /* try { // try from 02c2d1f0 to 02d2d31f has its CatchHandler @ 02c2d1f0
                       catch() { ... } // from try @ 02c2d1f0 with catch @ 02c2d1f0
                       catch() { ... } // from try @ 02c2d3a4 with catch @ 02c2d1f0
                       catch() { ... } // from try @ 02c2d408 with catch @ 02c2d1f0
                       catch() { ... } // from try @ 02c2d4a0 with catch @ 02c2d1f0 */
    FUN_02c2e6f0(&stack0x00000038,uVar1);
    uVar7 = FUN_02c2e440(&stack0x00000038);
    lVar6 = in_stack_00000038;
    iVar5 = in_stack_00000020._4_4_;
    bVar4 = CARRY8(_uStack0000000000000028,uVar7 & 0xffffffff);
    _uStack0000000000000028 = _uStack0000000000000028 + (uVar7 & 0xffffffff);
    if ((bVar4) &&
       (bVar4 = in_stack_00000030 == 0xffffffff, in_stack_00000030 = in_stack_00000030 + 1, bVar4))
    {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      in_stack_00000020._4_4_ = FUN_02c2f3a8(&stack0x00000028,iVar5,lVar6 != 0);
      uVar7 = _uStack0000000000000028;
      if ((unaff_x26 & 1) != 0) goto LAB_02c2d488;
LAB_02c2d460:
      iVar5 = in_stack_00000020._4_4_;
      _uStack0000000000000028 = uVar7;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      *(ulong *)(unaff_x19 + 2) = uVar7;
      unaff_x19[1] = in_stack_00000030;
      goto LAB_02c2d4d4;
    }
    if (in_stack_00000038 != 0) {
      if (in_stack_00000020._4_4_ == 0x1c) {
LAB_02c2d3c4:
        iVar5 = in_stack_00000020._4_4_;
        if ((((lVar6 < 0) ||
             (bVar4 = lVar6 * 2 - unaff_x21 != 0, unaff_x21 <= (ulong)(lVar6 * 2) && bVar4)) ||
            ((uVar7 = _uStack0000000000000028, !bVar4 && ((_uStack0000000000000028 & 1) != 0)))) &&
           ((bVar4 = _uStack0000000000000028 == 0xffffffffffffffff,
            _uStack0000000000000028 = _uStack0000000000000028 + 1, uVar7 = _uStack0000000000000028,
            bVar4 && (bVar4 = in_stack_00000030 == 0xffffffff,
                     in_stack_00000030 = in_stack_00000030 + 1, bVar4)))) {
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          in_stack_00000020._4_4_ = FUN_02c2f3a8(&stack0x00000028,iVar5,1);
          uVar7 = _uStack0000000000000028;
        }
LAB_02c2d488:
        uVar3 = in_stack_00000030;
        uStack000000000000002c = (uint)(uVar7 >> 0x20);
        uVar2 = uStack000000000000002c;
        uStack0000000000000028 = (uint)uVar7;
        in_stack_00000008._4_4_ = uStack0000000000000028;
        _uStack0000000000000028 = uVar7;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        FUN_02c3ca24((long)&stack0x00000008 + 4);
        unaff_x19[2] = in_stack_00000008._4_4_;
        unaff_x19[3] = uVar2;
        unaff_x19[1] = uVar3;
        iVar5 = in_stack_00000020._4_4_;
LAB_02c2d4d4:
        *unaff_x19 = (*unaff_x20 ^ *unaff_x19) & 0x80000000 | iVar5 << 0x10;
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00000048) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      param_1 = FUN_02c2f500(&stack0x00000028,iVar5);
      if (param_1 == 0) goto LAB_02c2d3c4;
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02c2d018 with catch @ 02c2d154
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02c2cfe0 with catch @ 02c2d158
                        */
      unaff_x26 = 1;
      goto LAB_02c2d188;
    }
    if (-1 < in_stack_00000020._4_4_) {
      uVar7 = _uStack0000000000000028;
      if ((unaff_x26 & 1) == 0) goto LAB_02c2d460;
      goto LAB_02c2d488;
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                    /* try { // try from 02c2d170 to 02d2d187 has its CatchHandler @ 02c2d1dc */
      thunk_FUN_01843fdc();
    }
    param_1 = FUN_02bd01ec(9,-iVar5,0);
  } while( true );
}


