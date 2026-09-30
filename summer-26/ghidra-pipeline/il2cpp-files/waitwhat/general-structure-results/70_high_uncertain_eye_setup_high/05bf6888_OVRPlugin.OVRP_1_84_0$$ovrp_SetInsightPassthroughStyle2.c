/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_SetInsightPassthroughStyle2
ENTRY_POINT: 05bf6888
PROGRAM: waitwhat-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_SetInsightPassthroughStyle2(float param_1,float param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float unaff_s8;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined1 in_stack_000000a0 [16];
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined1 in_stack_000000e0 [16];
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  
  FUN_069c2eb4(param_1 * unaff_s8,param_2 * unaff_s8);
  lVar4 = *unaff_x23;
  *(undefined8 *)(unaff_x20 + 0x58) = in_stack_00000108;
  *(undefined8 *)(unaff_x20 + 0x50) = in_stack_00000100;
  *(undefined8 *)(unaff_x20 + 0x68) = in_stack_00000118;
  *(undefined8 *)(unaff_x20 + 0x60) = in_stack_00000110;
  *(undefined8 *)(unaff_x20 + 0x78) = in_stack_00000128;
  *(undefined8 *)(unaff_x20 + 0x70) = in_stack_00000120;
  *(undefined8 *)(unaff_x20 + 0x88) = in_stack_00000138;
  *(undefined8 *)(unaff_x20 + 0x80) = in_stack_00000130;
  uVar1 = *unaff_x22;
  uVar7 = *(undefined4 *)(unaff_x22 + 3);
  uVar6 = unaff_x22[2];
  *(undefined8 *)(unaff_x20 + 0x98) = unaff_x22[1];
  *(undefined8 *)(unaff_x20 + 0x90) = uVar1;
  *(undefined4 *)(unaff_x20 + 0xa8) = uVar7;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar6;
  *(undefined8 *)(unaff_x20 + 0xb4) = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x20 + 0xac) = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0xc0) = *(undefined8 *)(unaff_x20 + 0xa4);
  *(undefined8 *)(unaff_x20 + 0xb8) = *(undefined8 *)(unaff_x20 + 0x9c);
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar5 = FUN_069d69b8();
  if ((uVar5 & 1) != 0) {
    in_stack_00000108 = *(undefined8 *)(unaff_x20 + 0x58);
    in_stack_00000100 = *(undefined8 *)(unaff_x20 + 0x50);
    in_stack_00000118 = *(undefined8 *)(unaff_x20 + 0x68);
    in_stack_00000110 = *(undefined8 *)(unaff_x20 + 0x60);
    in_stack_00000128 = *(undefined8 *)(unaff_x20 + 0x78);
    in_stack_00000120 = *(undefined8 *)(unaff_x20 + 0x70);
    in_stack_00000138 = SUB168(*(undefined1 (*) [16])(unaff_x20 + 0x80),8);
    in_stack_00000130 = SUB168(*(undefined1 (*) [16])(unaff_x20 + 0x80),0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_069e9470();
    FUN_069c2eb4(&stack0x000000c0,0);
    in_stack_00000048 = in_stack_00000108;
    in_stack_00000040 = in_stack_00000100;
    in_stack_00000058 = in_stack_00000118;
    in_stack_00000050 = in_stack_00000110;
    in_stack_00000068 = in_stack_00000128;
    in_stack_00000060 = in_stack_00000120;
    in_stack_00000078 = in_stack_00000138;
    in_stack_00000070 = in_stack_00000130;
    FUN_069c2b5c(&stack0x00000080,&stack0x00000040);
    auVar17 = ZEXT416(*(uint *)(unaff_x20 + 0x98));
    *(undefined8 *)(unaff_x20 + 0x58) = in_stack_00000088;
    *(undefined8 *)(unaff_x20 + 0x50) = in_stack_00000080;
    *(undefined8 *)(unaff_x20 + 0x68) = in_stack_00000098;
    *(undefined8 *)(unaff_x20 + 0x60) = in_stack_00000090;
    fVar11 = *(float *)(unaff_x20 + 0x94);
    *(long *)(unaff_x20 + 0x78) = in_stack_000000a0._8_8_;
    *(long *)(unaff_x20 + 0x70) = in_stack_000000a0._0_8_;
    *(undefined8 *)(unaff_x20 + 0x88) = in_stack_000000b8;
    *(undefined8 *)(unaff_x20 + 0x80) = in_stack_000000b0;
    auVar15 = in_stack_000000a0;
    uVar7 = FUN_069e515c(*(undefined4 *)(unaff_x20 + 0x90));
    *(undefined4 *)(unaff_x20 + 0xac) = uVar7;
    *(float *)(unaff_x20 + 0xb0) = fVar11;
    *(int *)(unaff_x20 + 0xb4) = auVar17._0_4_;
    fVar8 = (float)FUN_069e5200();
    fVar23 = (float)*(undefined8 *)(unaff_x20 + 0xa4);
    fVar24 = (float)((ulong)*(undefined8 *)(unaff_x20 + 0xa4) >> 0x20);
    uVar1 = *(undefined8 *)*(undefined1 (*) [12])(unaff_x20 + 0x9c);
    fVar21 = (float)uVar1;
    fVar22 = (float)((ulong)uVar1 >> 0x20);
    fVar16 = auVar15._0_4_;
    fVar12 = auVar17._0_4_;
    auVar13._4_4_ = fVar24;
    auVar13._0_4_ = fVar24;
    auVar13._8_4_ = fVar24;
    auVar13._12_4_ = fVar24;
    auVar14._12_4_ = fVar24;
    auVar14._0_12_ = *(undefined1 (*) [12])(unaff_x20 + 0x9c);
    auVar14 = NEON_ext(auVar13,auVar14,4,1);
    fVar9 = fVar8 * fVar22;
    fVar10 = fVar11 * fVar22;
    fVar18 = fVar12 * fVar22;
    fVar19 = fVar8 * fVar23;
    fVar20 = fVar12 * fVar23;
    auVar15._4_4_ = fVar9;
    auVar15._0_4_ = fVar12 * fVar21;
    auVar15._8_4_ = fVar11 * fVar23;
    auVar15._12_4_ = fVar10;
    auVar17._4_4_ = fVar9;
    auVar17._0_4_ = fVar12 * fVar21;
    auVar17._8_4_ = fVar11 * fVar23;
    auVar17._12_4_ = fVar10;
    auVar15 = NEON_ext(auVar15,auVar17,4,1);
    auVar2._4_4_ = fVar18;
    auVar2._0_4_ = fVar11 * fVar21;
    auVar2._8_4_ = fVar19;
    auVar2._12_4_ = fVar20;
    auVar3._4_4_ = fVar18;
    auVar3._0_4_ = fVar11 * fVar21;
    auVar3._8_4_ = fVar19;
    auVar3._12_4_ = fVar20;
    auVar17 = NEON_ext(auVar2,auVar3,0xc,1);
    *(ulong *)(unaff_x20 + 0xc0) =
         CONCAT44(((fVar24 * fVar16 - fVar8 * auVar14._12_4_) - fVar10) - fVar20,
                  (fVar23 * fVar16 + fVar12 * auVar14._8_4_ + fVar9) - auVar17._4_4_);
    *(ulong *)(unaff_x20 + 0xb8) =
         CONCAT44((fVar22 * fVar16 + fVar11 * auVar14._4_4_ + auVar15._12_4_) - fVar19,
                  (fVar21 * fVar16 + fVar8 * auVar14._0_4_ + auVar15._4_4_) - fVar18);
  }
  FUN_05953590();
  return;
}


