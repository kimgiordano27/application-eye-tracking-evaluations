/*
FUNCTION_NAME: OVRPlugin$$GetControllerHapticsDesc
ENTRY_POINT: 0531baf0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerHapticsDesc(long param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  int unaff_w26;
  float fVar12;
  float extraout_s0;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  undefined8 in_d3;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint unaff_s8;
  undefined8 uStack0000000000000040;
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
  float fStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  
code_r0x0531baf0:
  uStack0000000000000048 = uStack0000000000000098;
  fStack000000000000004c = fStack000000000000009c;
  uStack0000000000000040 = in_stack_00000090;
  fStack0000000000000058 = fStack00000000000000a8;
  fStack0000000000000050 = fStack00000000000000a0;
  fStack0000000000000054 = fStack00000000000000a4;
  uStack0000000000000064 = uStack00000000000000b4;
  uStack000000000000005c = uStack00000000000000ac;
  uStack0000000000000060 = uStack00000000000000b0;
  FUN_039ef5b4(param_1,&stack0x00000040,
               *(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70));
  do {
    fVar18 = (float)in_d3;
    uVar9 = FUN_04adaa38(&stack0x000000c0,*unaff_x22);
    if ((uVar9 & 1) == 0) {
      FUN_04adaa34(&stack0x000000c0,*unaff_x21);
      return;
    }
    in_stack_00000090 = *(undefined8 *)(unaff_x25 + 0x10);
    auVar14 = *(undefined1 (*) [16])(unaff_x25 + 0x2c);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack0000000000000098 = (undefined4)*(undefined8 *)(unaff_x25 + 0x18);
    fStack000000000000009c = (float)((ulong)*(undefined8 *)(unaff_x25 + 0x18) >> 0x20);
    fStack00000000000000a8 = (float)*(undefined8 *)(unaff_x25 + 0x28);
    fStack00000000000000a0 = (float)*(undefined8 *)(unaff_x25 + 0x20);
    fStack00000000000000a4 = (float)((ulong)*(undefined8 *)(unaff_x25 + 0x20) >> 0x20);
    in_stack_00000108 = *(undefined8 *)(unaff_x25 + 0x18);
    in_stack_00000100 = *(undefined8 *)(unaff_x25 + 0x10);
    auVar21 = *(undefined1 (*) [16])(unaff_x25 + 0x1c);
    uStack00000000000000b4 = auVar14._8_8_;
    uStack00000000000000ac = auVar14._0_4_;
    uStack00000000000000b0 = auVar14._4_4_;
    *(long *)(unaff_x24 + 0x14) = auVar21._8_8_;
    *(long *)(unaff_x24 + 0xc) = auVar21._0_8_;
    FUN_052c2dcc(&stack0x00000040,uVar10,&stack0x00000100,0);
    fVar8 = fStack0000000000000058;
    fVar7 = fStack0000000000000054;
    fVar6 = fStack0000000000000050;
    fVar5 = fStack000000000000004c;
    auVar4._4_4_ = fStack0000000000000050;
    auVar4._0_4_ = fStack000000000000004c;
    in_stack_00000080 = uStack0000000000000040;
    uVar9 = CONCAT44(0,fStack0000000000000054);
    in_stack_00000088 = uStack0000000000000048;
    auVar16 = ZEXT816(0);
    auVar21 = ZEXT416(unaff_s8);
    FUN_060df604(0);
    auVar4._8_8_ = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar9;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar9;
    uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
    in_stack_00000100 = in_stack_00000080;
    auVar20._4_4_ = fVar18;
    auVar20._0_4_ = fVar18;
    auVar20._8_4_ = fVar18;
    auVar20._12_4_ = fVar18;
    in_stack_00000108 = CONCAT44(in_stack_00000108._4_4_,in_stack_00000088);
    auVar14._4_4_ = fVar18;
    auVar14._0_4_ = extraout_s0;
    auVar14._8_4_ = extraout_var;
    auVar14._12_4_ = extraout_var_00;
    auVar20 = NEON_ext(auVar20,auVar14,4,1);
    fVar15 = auVar16._0_4_;
    fVar13 = auVar21._0_4_;
    auVar21._4_4_ = fVar18;
    auVar21._0_4_ = extraout_s0;
    auVar21._8_4_ = fVar15;
    auVar21._12_4_ = extraout_var_00;
    auVar16._4_4_ = fVar18;
    auVar16._0_4_ = extraout_s0;
    auVar16._8_4_ = fVar15;
    auVar16._12_4_ = extraout_var_00;
    auVar21 = NEON_ext(auVar21,auVar16,4,1);
    fVar12 = auVar21._4_4_;
    auVar14 = NEON_ext(auVar2,auVar3,4,1);
    fVar19 = fVar7 * auVar21._12_4_;
    in_d3 = CONCAT44(fVar19,fVar6 * fVar12);
    auVar14 = NEON_ext(auVar14,auVar4,0xc,1);
    auVar17._4_4_ = fVar13;
    auVar17._0_4_ = fVar12;
    auVar17._8_4_ = fVar12;
    auVar17._12_4_ = auVar21._12_4_;
    auVar21 = NEON_rev64(auVar17,4);
    *(ulong *)(unaff_x24 + 0x14) =
         CONCAT44(((fVar8 * fVar18 - fVar5 * auVar20._12_4_) - fVar6 * fVar13) -
                  auVar14._0_4_ * auVar21._12_4_,
                  (fVar8 * fVar15 + fVar7 * auVar20._8_4_ + fVar5 * fVar13) -
                  auVar14._8_4_ * auVar21._8_4_);
    *(ulong *)(unaff_x24 + 0xc) =
         CONCAT44((fVar6 * fVar18 + fVar8 * fVar13 + fVar19) - auVar14._4_4_ * auVar21._4_4_,
                  (fVar8 * extraout_s0 + fVar5 * auVar20._0_4_ + fVar6 * fVar12) -
                  auVar14._0_4_ * auVar21._0_4_);
    FUN_052c2bc0(&stack0x00000040,uVar10,&stack0x00000100,0);
    in_stack_00000090 = uStack0000000000000040;
    param_1 = *(long *)(unaff_x19 + 0x20);
    uStack0000000000000098 = uStack0000000000000048;
    fStack00000000000000a4 = fStack0000000000000054;
    fStack00000000000000a8 = fStack0000000000000058;
    fStack000000000000009c = fStack000000000000004c;
    fStack00000000000000a0 = fStack0000000000000050;
    if (param_1 == 0) {
LAB_0531bb48:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar11 = *(long *)(param_1 + 0x10);
    in_x9 = *unaff_x23;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_0531bb48;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (*(uint *)(lVar11 + 0x18) <= uVar1) goto code_r0x0531baf0;
    lVar11 = lVar11 + (long)(int)uVar1 * (long)unaff_w26;
    *(uint *)(param_1 + 0x18) = uVar1 + 1;
    *(ulong *)(lVar11 + 0x28) = CONCAT44(fStack000000000000004c,uStack0000000000000048);
    *(undefined8 *)(lVar11 + 0x20) = uStack0000000000000040;
    *(ulong *)(lVar11 + 0x38) = CONCAT44(uStack00000000000000ac,fStack0000000000000058);
    *(ulong *)(lVar11 + 0x30) = CONCAT44(fStack0000000000000054,fStack0000000000000050);
    *(undefined8 *)(lVar11 + 0x44) = uStack00000000000000b4;
    *(ulong *)(lVar11 + 0x3c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
  } while( true );
}


