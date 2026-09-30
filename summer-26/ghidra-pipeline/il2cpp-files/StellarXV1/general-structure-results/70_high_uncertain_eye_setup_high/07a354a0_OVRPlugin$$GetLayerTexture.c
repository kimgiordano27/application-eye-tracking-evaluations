/*
FUNCTION_NAME: OVRPlugin$$GetLayerTexture
ENTRY_POINT: 07a354a0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetLayerTexture(undefined1 *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  float fVar16;
  float extraout_s0;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined8 in_d3;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint unaff_s8;
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
  undefined4 uStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  
  while( true ) {
    fVar22 = (float)in_d3;
    uVar11 = FUN_0710ec4c(param_1,param_2);
    if ((uVar11 & 1) == 0) {
      FUN_0710ec48(&stack0x000000d0,*unaff_x22);
      return;
    }
    in_stack_000000a8 = *(undefined8 *)(unaff_x26 + 0x18);
    in_stack_000000a0 = *(undefined8 *)(unaff_x26 + 0x10);
    auVar18 = *(undefined1 (*) [16])(unaff_x26 + 0x2c);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
    in_stack_000000b8 = SUB168(*(undefined1 (*) [16])(unaff_x26 + 0x20),8);
    in_stack_000000b0 = SUB168(*(undefined1 (*) [16])(unaff_x26 + 0x20),0);
    *(long *)(unaff_x23 + 0x24) = auVar18._8_8_;
    *(long *)(unaff_x23 + 0x1c) = auVar18._0_8_;
    FUN_07a35940(&stack0x00000040,&stack0x000000a0,uVar13,0);
    fVar10 = fStack0000000000000058;
    fVar9 = fStack0000000000000054;
    fVar8 = fStack0000000000000050;
    fVar7 = fStack000000000000004c;
    uStack0000000000000094 = CONCAT44(fStack0000000000000058,fStack0000000000000054);
    fStack0000000000000090 = fStack0000000000000050;
    uStack0000000000000088 = uStack0000000000000048;
    fStack000000000000008c = fStack000000000000004c;
    in_stack_00000080 = in_stack_00000040;
    auVar6._4_4_ = fStack0000000000000050;
    auVar6._0_4_ = fStack000000000000004c;
    uVar11 = CONCAT44(0,fStack0000000000000054);
    auVar20 = ZEXT816(0);
    auVar25 = ZEXT416(unaff_s8);
    FUN_089b9180(0);
    auVar6._8_8_ = 0;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar11;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar11;
    auVar24._4_4_ = fVar22;
    auVar24._0_4_ = fVar22;
    auVar24._8_4_ = fVar22;
    auVar24._12_4_ = fVar22;
    auVar18._4_4_ = fVar22;
    auVar18._0_4_ = extraout_s0;
    auVar18._8_4_ = extraout_var;
    auVar18._12_4_ = extraout_var_00;
    auVar24 = NEON_ext(auVar24,auVar18,4,1);
    fVar19 = auVar20._0_4_;
    fVar17 = auVar25._0_4_;
    auVar25._4_4_ = fVar22;
    auVar25._0_4_ = extraout_s0;
    auVar25._8_4_ = fVar19;
    auVar25._12_4_ = extraout_var_00;
    auVar20._4_4_ = fVar22;
    auVar20._0_4_ = extraout_s0;
    auVar20._8_4_ = fVar19;
    auVar20._12_4_ = extraout_var_00;
    auVar25 = NEON_ext(auVar25,auVar20,4,1);
    fVar16 = auVar25._4_4_;
    auVar18 = NEON_ext(auVar4,auVar5,4,1);
    fVar23 = fVar9 * auVar25._12_4_;
    in_d3 = CONCAT44(fVar23,fVar8 * fVar16);
    auVar18 = NEON_ext(auVar18,auVar6,0xc,1);
    auVar21._4_4_ = fVar17;
    auVar21._0_4_ = fVar16;
    auVar21._8_4_ = fVar16;
    auVar21._12_4_ = auVar25._12_4_;
    auVar25 = NEON_rev64(auVar21,4);
    fStack000000000000008c =
         (fVar10 * extraout_s0 + fVar7 * auVar24._0_4_ + fVar8 * fVar16) -
         auVar18._0_4_ * auVar25._0_4_;
    fStack0000000000000090 =
         (fVar8 * fVar22 + fVar10 * fVar17 + fVar23) - auVar18._4_4_ * auVar25._4_4_;
    uStack0000000000000094 =
         CONCAT44(((fVar10 * fVar22 - fVar7 * auVar24._12_4_) - fVar8 * fVar17) -
                  auVar18._0_4_ * auVar25._12_4_,
                  (fVar10 * fVar19 + fVar9 * auVar24._8_4_ + fVar7 * fVar17) -
                  auVar18._8_4_ * auVar25._8_4_);
    FUN_07a35990(&stack0x000000a0,&stack0x00000080,*(undefined8 *)(unaff_x20 + 0x28),0);
    lVar12 = *unaff_x21;
    if (lVar12 == 0) break;
    iVar1 = *(int *)(lVar12 + 0x1c);
    in_stack_00000118 = in_stack_000000a8;
    in_stack_00000110 = in_stack_000000a0;
    in_stack_00000120 = in_stack_000000b0;
    in_stack_00000128 = in_stack_000000b8;
    lVar14 = *(long *)(lVar12 + 0x10);
    lVar15 = *unaff_x25;
    *(undefined8 *)(unaff_x23 + 0x94) = *(undefined8 *)(unaff_x23 + 0x24);
    *(undefined8 *)(unaff_x23 + 0x8c) = *(undefined8 *)(unaff_x23 + 0x1c);
    *(int *)(lVar12 + 0x1c) = iVar1 + 1;
    if (lVar14 == 0) break;
    uVar2 = *(uint *)(lVar12 + 0x18);
    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + (long)(int)uVar2 * (long)unaff_w27;
      uVar13 = *(undefined8 *)(unaff_x23 + 0x8c);
      uVar3 = *(undefined8 *)(unaff_x23 + 0x94);
      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar14 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar14 + 0x20) = in_stack_000000a0;
      *(undefined8 *)(lVar14 + 0x38) = in_stack_000000b8;
      *(undefined8 *)(lVar14 + 0x30) = in_stack_000000b0;
      *(undefined8 *)(lVar14 + 0x44) = uVar3;
      *(undefined8 *)(lVar14 + 0x3c) = uVar13;
    }
    else {
      auVar18 = *(undefined1 (*) [16])(unaff_x23 + 0x8c);
      uStack0000000000000048 = (undefined4)in_stack_000000a8;
      fStack000000000000004c = (float)((ulong)in_stack_000000a8 >> 0x20);
      in_stack_00000040 = in_stack_000000a0;
      fStack0000000000000058 = (float)in_stack_000000b8;
      fStack0000000000000050 = (float)in_stack_000000b0;
      fStack0000000000000054 = (float)((ulong)in_stack_000000b0 >> 0x20);
      uStack0000000000000064 = auVar18._8_8_;
      uStack000000000000005c = auVar18._0_4_;
      uStack0000000000000060 = auVar18._4_4_;
      FUN_05b225a8(lVar12,&stack0x00000040,
                   *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
    }
    param_2 = *unaff_x24;
    param_1 = &stack0x000000d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


