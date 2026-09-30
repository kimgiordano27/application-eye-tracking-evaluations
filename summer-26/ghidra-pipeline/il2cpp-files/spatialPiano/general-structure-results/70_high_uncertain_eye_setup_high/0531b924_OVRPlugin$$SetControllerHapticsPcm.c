/*
FUNCTION_NAME: OVRPlugin$$SetControllerHapticsPcm
ENTRY_POINT: 0531b924
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetControllerHapticsPcm(void)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined1 auVar6 [16];
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  float fVar17;
  float extraout_s0;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined8 in_d3;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uStack0000000000000030;
  undefined1 *puStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined8 in_stack_00000090;
  float in_stack_00000098;
  float in_stack_000000a0;
  undefined4 uStack00000000000000a4;
  float in_stack_000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  float fStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined8 uStack00000000000000e0;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  undefined8 uStack00000000000000f0;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  undefined8 in_stack_00000100;
  float fStack0000000000000108;
  undefined4 uStack000000000000010c;
  
  uVar7 = DAT_011b0504;
  uStack00000000000000c8 = _uStack0000000000000048;
  uStack00000000000000d0 = _fStack0000000000000050;
  puStack0000000000000038 = (undefined1 *)&stack0x000000c0;
  uStack0000000000000030 = 0;
  uStack00000000000000c0 = in_stack_00000040;
  fStack00000000000000d8 = fStack0000000000000058;
  uStack00000000000000dc = uStack000000000000005c;
  uStack00000000000000e0 = _uStack0000000000000060;
  uStack00000000000000e8 = uStack0000000000000068;
  uStack00000000000000ec = uStack000000000000006c;
  uStack00000000000000f8 = (undefined4)in_stack_00000078;
  uStack00000000000000fc = (undefined4)((ulong)in_stack_00000078 >> 0x20);
  uStack00000000000000f0 = in_stack_00000070;
  while( true ) {
    fVar23 = (float)in_d3;
    uVar12 = FUN_04adaa38(&stack0x000000c0,*unaff_x22);
    if ((uVar12 & 1) == 0) {
      FUN_04adaa34(&stack0x000000c0,*unaff_x21);
      return;
    }
    auVar6._4_8_ = uStack00000000000000f0;
    auVar6._0_4_ = uStack00000000000000ec;
    auVar6._12_4_ = uStack00000000000000f8;
    uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
    in_stack_00000098 = fStack00000000000000d8;
    in_stack_00000090 = uStack00000000000000d0;
    in_stack_000000a8 = (float)uStack00000000000000e8;
    in_stack_000000a0 = (float)uStack00000000000000e0;
    uStack00000000000000a4 = (undefined4)((ulong)uStack00000000000000e0 >> 0x20);
    fStack0000000000000108 = fStack00000000000000d8;
    uStack000000000000010c = uStack00000000000000dc;
    auVar5._4_8_ = uStack00000000000000e0;
    auVar5._0_4_ = uStack00000000000000dc;
    auVar26._12_4_ = uStack00000000000000e8;
    auVar26._0_12_ = auVar5;
    uStack00000000000000b4 = auVar6._8_8_;
    uStack00000000000000ac = uStack00000000000000ec;
    uStack00000000000000b0 = (undefined4)uStack00000000000000f0;
    in_stack_00000100 = uStack00000000000000d0;
    *(long *)(unaff_x24 + 0x14) = auVar26._8_8_;
    *(long *)(unaff_x24 + 0xc) = auVar5._0_8_;
    FUN_052c2dcc(&stack0x00000040,uVar13,&stack0x00000100,0);
    fVar11 = fStack0000000000000058;
    fVar10 = fStack0000000000000054;
    fVar9 = fStack0000000000000050;
    fVar8 = fStack000000000000004c;
    auVar4._4_4_ = fStack0000000000000050;
    auVar4._0_4_ = fStack000000000000004c;
    in_stack_00000080 = in_stack_00000040;
    uVar12 = CONCAT44(0,fStack0000000000000054);
    in_stack_00000088 = uStack0000000000000048;
    auVar21 = ZEXT816(0);
    auVar27 = ZEXT416(uVar7);
    FUN_060df604(uVar7,0);
    auVar4._8_8_ = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar12;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar12;
    uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
    in_stack_00000100 = in_stack_00000080;
    auVar25._4_4_ = fVar23;
    auVar25._0_4_ = fVar23;
                    /* try { // try from 0531b9f0 to 0541bbe7 has its CatchHandler @ 0531b9f0
                       catch() { ... } // from try @ 0531b9f0 with catch @ 0531b9f0
                       catch() { ... } // from try @ 0531bf74 with catch @ 0531b9f0
                       catch() { ... } // from try @ 0531bfcc with catch @ 0531b9f0
                       catch() { ... } // from try @ 0531c0c0 with catch @ 0531b9f0
                       catch() { ... } // from try @ 0531c0e0 with catch @ 0531b9f0
                       catch() { ... } // from try @ 0531c14c with catch @ 0531b9f0 */
    auVar25._8_4_ = fVar23;
    auVar25._12_4_ = fVar23;
    _fStack0000000000000108 = CONCAT44(uStack000000000000010c,in_stack_00000088);
    auVar19._4_4_ = fVar23;
    auVar19._0_4_ = extraout_s0;
    auVar19._8_4_ = extraout_var;
    auVar19._12_4_ = extraout_var_00;
    auVar26 = NEON_ext(auVar25,auVar19,4,1);
    fVar20 = auVar21._0_4_;
    fVar18 = auVar27._0_4_;
    auVar27._4_4_ = fVar23;
    auVar27._0_4_ = extraout_s0;
    auVar27._8_4_ = fVar20;
    auVar27._12_4_ = extraout_var_00;
    auVar21._4_4_ = fVar23;
    auVar21._0_4_ = extraout_s0;
    auVar21._8_4_ = fVar20;
    auVar21._12_4_ = extraout_var_00;
    auVar27 = NEON_ext(auVar27,auVar21,4,1);
    fVar17 = auVar27._4_4_;
    auVar19 = NEON_ext(auVar2,auVar3,4,1);
    fVar24 = fVar10 * auVar27._12_4_;
    in_d3 = CONCAT44(fVar24,fVar9 * fVar17);
    auVar19 = NEON_ext(auVar19,auVar4,0xc,1);
    auVar22._4_4_ = fVar18;
    auVar22._0_4_ = fVar17;
    auVar22._8_4_ = fVar17;
    auVar22._12_4_ = auVar27._12_4_;
    auVar27 = NEON_rev64(auVar22,4);
    *(ulong *)(unaff_x24 + 0x14) =
         CONCAT44(((fVar11 * fVar23 - fVar8 * auVar26._12_4_) - fVar9 * fVar18) -
                  auVar19._0_4_ * auVar27._12_4_,
                  (fVar11 * fVar20 + fVar10 * auVar26._8_4_ + fVar8 * fVar18) -
                  auVar19._8_4_ * auVar27._8_4_);
    *(ulong *)(unaff_x24 + 0xc) =
         CONCAT44((fVar9 * fVar23 + fVar11 * fVar18 + fVar24) - auVar19._4_4_ * auVar27._4_4_,
                  (fVar11 * extraout_s0 + fVar8 * auVar26._0_4_ + fVar9 * fVar17) -
                  auVar19._0_4_ * auVar27._0_4_);
    FUN_052c2bc0(&stack0x00000040,uVar13,&stack0x00000100,0);
    in_stack_00000090 = in_stack_00000040;
    lVar14 = *(long *)(unaff_x19 + 0x20);
    in_stack_00000098 = (float)uStack0000000000000048;
    in_stack_000000a8 = fStack0000000000000058;
    in_stack_000000a0 = fStack0000000000000050;
    if (lVar14 == 0) break;
    lVar15 = *(long *)(lVar14 + 0x10);
    lVar16 = *unaff_x23;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (lVar15 == 0) break;
    uVar1 = *(uint *)(lVar14 + 0x18);
    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
      lVar15 = lVar15 + (long)(int)uVar1 * 0x2c;
      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
      *(ulong *)(lVar15 + 0x28) = CONCAT44(fStack000000000000004c,uStack0000000000000048);
      *(undefined8 *)(lVar15 + 0x20) = in_stack_00000040;
      *(ulong *)(lVar15 + 0x38) = CONCAT44(uStack00000000000000ac,fStack0000000000000058);
      *(ulong *)(lVar15 + 0x30) = CONCAT44(fStack0000000000000054,fStack0000000000000050);
      *(undefined8 *)(lVar15 + 0x44) = uStack00000000000000b4;
      *(ulong *)(lVar15 + 0x3c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
    }
    else {
      uStack0000000000000064 = (undefined4)uStack00000000000000b4;
      uStack0000000000000068 = SUB84(uStack00000000000000b4,4);
      uStack0000000000000060 = uStack00000000000000b0;
      FUN_039ef5b4(lVar14,&stack0x00000040,
                   *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


