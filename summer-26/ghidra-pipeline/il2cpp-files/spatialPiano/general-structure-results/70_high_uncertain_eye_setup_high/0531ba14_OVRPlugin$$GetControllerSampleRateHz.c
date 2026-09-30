/*
FUNCTION_NAME: OVRPlugin$$GetControllerSampleRateHz
ENTRY_POINT: 0531ba14
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


void OVRPlugin__GetControllerSampleRateHz
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined8 param_4,undefined1 param_5 [16],undefined1 param_6 [16],
               undefined1 param_7 [16],undefined8 param_8)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  int unaff_w26;
  float fVar11;
  float fVar12;
  float extraout_s0;
  float fVar13;
  float fVar14;
  undefined4 extraout_var;
  float fVar15;
  undefined4 extraout_var_00;
  undefined4 uVar16;
  float fVar17;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar22;
  float fVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint unaff_s8;
  float in_s16;
  float in_register_00005204;
  undefined8 in_register_00005208;
  float in_s17;
  undefined4 in_register_00005224;
  undefined8 in_register_00005228;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  float fStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  float fStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  
  fVar26 = param_6._8_4_;
  uVar7 = param_6._0_8_;
  fVar21 = param_3._12_4_;
  fVar20 = param_3._8_4_;
  fVar17 = param_3._0_4_;
  uVar16 = param_1._12_4_;
  fVar15 = param_1._8_4_;
  fVar14 = param_1._4_4_;
  fVar13 = param_1._0_4_;
  while( true ) {
    auVar28._4_4_ = fVar14;
    auVar28._0_4_ = fVar13;
    auVar28._8_4_ = fVar15;
    auVar28._12_4_ = uVar16;
    auVar19._4_4_ = fVar14;
    auVar19._0_4_ = fVar13;
    auVar19._8_4_ = fVar15;
    auVar19._12_4_ = uVar16;
    auVar28 = NEON_ext(auVar28,auVar19,4,1);
    fVar22 = (float)param_4;
    fVar25 = param_5._4_4_;
    fVar11 = auVar28._4_4_;
    fVar12 = auVar28._12_4_;
    auVar29._4_4_ = fVar12;
    auVar29._0_4_ = fVar11;
    auVar29._8_4_ = fVar25;
    auVar29._12_4_ = fVar25;
    auVar3._4_4_ = in_register_00005224;
    auVar3._0_4_ = in_s17;
    auVar3._8_8_ = in_register_00005228;
    auVar4._4_4_ = in_register_00005224;
    auVar4._0_4_ = in_s17;
    auVar4._8_8_ = in_register_00005228;
    auVar28 = NEON_ext(auVar3,auVar4,4,1);
    param_4 = CONCAT44(in_s17 * fVar12,in_register_00005204 * fVar11);
    auVar24._4_4_ = in_register_00005204;
    auVar24._0_4_ = in_s16;
    auVar24._8_8_ = in_register_00005208;
    auVar28 = NEON_ext(auVar28,auVar24,0xc,1);
    auVar18._4_4_ = fVar25;
    auVar18._0_4_ = fVar11;
    auVar18._8_4_ = fVar11;
    auVar18._12_4_ = fVar12;
    auVar19 = NEON_rev64(auVar18,4);
    *(ulong *)(unaff_x24 + 0x14) =
         CONCAT44(((fVar21 * fVar22 - in_s16 * param_5._12_4_) - in_register_00005204 * fVar25) -
                  auVar28._0_4_ * auVar19._12_4_,
                  (fVar20 * fVar15 + fVar26 * param_5._8_4_ + param_7._4_4_ * fVar25) -
                  auVar28._8_4_ * auVar19._8_4_);
    *(ulong *)(unaff_x24 + 0xc) =
         CONCAT44((in_register_00005204 * fVar14 + (float)((ulong)uVar7 >> 0x20) * fVar25 +
                  in_s17 * fVar12) - auVar28._4_4_ * auVar19._4_4_,
                  (fVar17 * fVar13 + (float)uVar7 * param_5._0_4_ + in_register_00005204 * fVar11) -
                  auVar28._0_4_ * auVar19._0_4_);
    FUN_052c2bc0(&stack0x00000040,param_8,&stack0x00000100,0);
    in_stack_00000090 = in_stack_00000040;
    lVar8 = *(long *)(unaff_x19 + 0x20);
    uStack0000000000000098 = uStack0000000000000048;
    fStack00000000000000a8 = fStack0000000000000058;
    fStack00000000000000a0 = fStack0000000000000050;
    if (lVar8 == 0) break;
    lVar9 = *(long *)(lVar8 + 0x10);
    lVar10 = *unaff_x23;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar9 == 0) break;
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      lVar9 = lVar9 + (long)(int)uVar1 * (long)unaff_w26;
      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
      *(ulong *)(lVar9 + 0x28) = CONCAT44(fStack000000000000004c,uStack0000000000000048);
      *(undefined8 *)(lVar9 + 0x20) = in_stack_00000040;
      *(ulong *)(lVar9 + 0x38) = CONCAT44(uStack00000000000000ac,fStack0000000000000058);
      *(ulong *)(lVar9 + 0x30) = CONCAT44(fStack0000000000000054,fStack0000000000000050);
      *(undefined8 *)(lVar9 + 0x44) = uStack00000000000000b4;
      *(ulong *)(lVar9 + 0x3c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
    }
    else {
      uStack0000000000000064 = uStack00000000000000b4;
      uStack000000000000005c = uStack00000000000000ac;
      uStack0000000000000060 = uStack00000000000000b0;
      FUN_039ef5b4(lVar8,&stack0x00000040,
                   *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    uVar6 = FUN_04adaa38(&stack0x000000c0,*unaff_x22);
    if ((uVar6 & 1) == 0) {
      FUN_04adaa34(&stack0x000000c0,*unaff_x21);
      return;
    }
    in_stack_00000090 = *(undefined8 *)(unaff_x25 + 0x10);
    auVar28 = *(undefined1 (*) [16])(unaff_x25 + 0x2c);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack0000000000000098 = (undefined4)*(undefined8 *)(unaff_x25 + 0x18);
    uStack000000000000009c = (undefined4)((ulong)*(undefined8 *)(unaff_x25 + 0x18) >> 0x20);
    fStack00000000000000a8 = (float)*(undefined8 *)(unaff_x25 + 0x28);
    fStack00000000000000a0 = (float)*(undefined8 *)(unaff_x25 + 0x20);
    uStack00000000000000a4 = (undefined4)((ulong)*(undefined8 *)(unaff_x25 + 0x20) >> 0x20);
    in_stack_00000108 = *(undefined8 *)(unaff_x25 + 0x18);
    in_stack_00000100 = *(undefined8 *)(unaff_x25 + 0x10);
    auVar19 = *(undefined1 (*) [16])(unaff_x25 + 0x1c);
    uStack00000000000000b4 = auVar28._8_8_;
    uStack00000000000000ac = auVar28._0_4_;
    uStack00000000000000b0 = auVar28._4_4_;
    *(long *)(unaff_x24 + 0x14) = auVar19._8_8_;
    *(long *)(unaff_x24 + 0xc) = auVar19._0_8_;
    FUN_052c2dcc(&stack0x00000040,uVar7,&stack0x00000100,0);
    fVar17 = fStack0000000000000058;
    in_s17 = fStack0000000000000054;
    in_register_00005204 = fStack0000000000000050;
    in_s16 = fStack000000000000004c;
    in_stack_00000080 = in_stack_00000040;
    in_stack_00000088 = uStack0000000000000048;
    auVar19 = ZEXT816(0);
    auVar28 = ZEXT416(unaff_s8);
    FUN_060df604(0);
    fVar14 = (float)param_4;
    in_register_00005208 = 0;
    in_register_00005228 = 0;
    in_register_00005224 = 0;
    auVar27._0_8_ = auVar29._4_8_ << 0x20;
    auVar27._12_4_ = auVar29._12_4_;
    auVar27._8_4_ = in_register_00005204;
    auVar5._4_8_ = auVar27._8_8_;
    auVar5._0_4_ = in_s16;
    param_7._0_12_ = auVar5 << 0x20;
    param_7._12_4_ = in_register_00005204;
    param_8 = *(undefined8 *)(unaff_x20 + 0x28);
    in_stack_00000100 = in_stack_00000080;
    auVar23._4_4_ = fVar14;
    auVar23._0_4_ = fVar14;
    auVar23._8_4_ = fVar14;
    auVar23._12_4_ = fVar14;
    in_stack_00000108 = CONCAT44(in_stack_00000108._4_4_,in_stack_00000088);
    uVar7 = CONCAT44(fVar17,in_s16);
    auVar2._4_4_ = fVar14;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_4_ = extraout_var;
    auVar2._12_4_ = extraout_var_00;
    auVar24 = NEON_ext(auVar23,auVar2,4,1);
    fVar15 = auVar19._0_4_;
    param_5._8_8_ = auVar24._8_8_;
    param_5._0_4_ = auVar24._0_4_;
    param_5._4_4_ = auVar28._0_4_;
    fVar13 = extraout_s0;
    uVar16 = extraout_var_00;
    fVar20 = fVar17;
    fVar21 = fVar17;
    fVar26 = in_s17;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


