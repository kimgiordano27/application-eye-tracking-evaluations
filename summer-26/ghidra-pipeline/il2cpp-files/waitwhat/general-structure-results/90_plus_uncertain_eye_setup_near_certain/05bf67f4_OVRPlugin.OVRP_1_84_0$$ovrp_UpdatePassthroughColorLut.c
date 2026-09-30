/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_UpdatePassthroughColorLut
ENTRY_POINT: 05bf67f4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_UpdatePassthroughColorLut(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  ulong uVar6;
  long in_x9;
  undefined8 uVar7;
  ulong in_x10;
  long in_x11;
  undefined8 in_x12;
  long lVar8;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
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
  
  do {
    *(undefined8 *)(in_x11 + in_x10 * 8) = in_x12;
    lVar8 = *(long *)(unaff_x20 + 0x40);
    if (lVar8 == 0) {
LAB_05bf6a34:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(uint *)(lVar8 + 0x18) <= in_x10) break;
    *(undefined8 *)(lVar8 + in_x10 * 8 + 0x20) = in_x12;
    lVar8 = *(long *)(unaff_x20 + 0x48);
    if (lVar8 == 0) goto LAB_05bf6a34;
    if (*(uint *)(lVar8 + 0x18) <= in_x10) break;
    lVar1 = in_x10 * 8;
    in_x10 = in_x10 + 1;
    *(undefined8 *)(lVar8 + lVar1 + 0x20) = in_x12;
    puVar5 = PTR_DAT_070c1b68;
    if (param_1 == in_x10) {
      if (DAT_075457b6 == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        DAT_075457b6 = '\x01';
      }
      FUN_069c2eb4(&stack0x00000100,
                   *(float *)(*(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 0xc) * unaff_s8,
                   *(float *)(*(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 0x10) * unaff_s8,0);
      lVar8 = *(long *)puVar5;
      *(undefined8 *)(unaff_x20 + 0x58) = in_stack_00000108;
      *(undefined8 *)(unaff_x20 + 0x50) = in_stack_00000100;
      *(undefined8 *)(unaff_x20 + 0x68) = in_stack_00000118;
      *(undefined8 *)(unaff_x20 + 0x60) = in_stack_00000110;
      *(undefined8 *)(unaff_x20 + 0x78) = in_stack_00000128;
      *(undefined8 *)(unaff_x20 + 0x70) = in_stack_00000120;
      *(undefined8 *)(unaff_x20 + 0x88) = in_stack_00000138;
      *(undefined8 *)(unaff_x20 + 0x80) = in_stack_00000130;
      uVar2 = *unaff_x22;
      uVar9 = *(undefined4 *)(unaff_x22 + 3);
      uVar7 = unaff_x22[2];
      *(undefined8 *)(unaff_x20 + 0x98) = unaff_x22[1];
      *(undefined8 *)(unaff_x20 + 0x90) = uVar2;
      *(undefined4 *)(unaff_x20 + 0xa8) = uVar9;
      *(undefined8 *)(unaff_x20 + 0xa0) = uVar7;
      *(undefined8 *)(unaff_x20 + 0xb4) = *(undefined8 *)(unaff_x20 + 0x98);
      *(undefined8 *)(unaff_x20 + 0xac) = *(undefined8 *)(unaff_x20 + 0x90);
      *(undefined8 *)(unaff_x20 + 0xc0) = *(undefined8 *)(unaff_x20 + 0xa4);
      *(undefined8 *)(unaff_x20 + 0xb8) = *(undefined8 *)(unaff_x20 + 0x9c);
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar6 = FUN_069d69b8();
      if ((uVar6 & 1) != 0) {
        in_stack_00000108 = *(undefined8 *)(unaff_x20 + 0x58);
        in_stack_00000100 = *(undefined8 *)(unaff_x20 + 0x50);
        in_stack_00000118 = *(undefined8 *)(unaff_x20 + 0x68);
        in_stack_00000110 = *(undefined8 *)(unaff_x20 + 0x60);
        in_stack_00000128 = *(undefined8 *)(unaff_x20 + 0x78);
        in_stack_00000120 = *(undefined8 *)(unaff_x20 + 0x70);
        in_stack_00000138 = SUB168(*(undefined1 (*) [16])(unaff_x20 + 0x80),8);
        in_stack_00000130 = SUB168(*(undefined1 (*) [16])(unaff_x20 + 0x80),0);
        if (unaff_x21 == 0) goto LAB_05bf6a34;
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
        auVar19 = ZEXT416(*(uint *)(unaff_x20 + 0x98));
        *(undefined8 *)(unaff_x20 + 0x58) = in_stack_00000088;
        *(undefined8 *)(unaff_x20 + 0x50) = in_stack_00000080;
        *(undefined8 *)(unaff_x20 + 0x68) = in_stack_00000098;
        *(undefined8 *)(unaff_x20 + 0x60) = in_stack_00000090;
        fVar13 = *(float *)(unaff_x20 + 0x94);
        *(long *)(unaff_x20 + 0x78) = in_stack_000000a0._8_8_;
        *(long *)(unaff_x20 + 0x70) = in_stack_000000a0._0_8_;
        *(undefined8 *)(unaff_x20 + 0x88) = in_stack_000000b8;
        *(undefined8 *)(unaff_x20 + 0x80) = in_stack_000000b0;
        auVar17 = in_stack_000000a0;
        uVar9 = FUN_069e515c(*(undefined4 *)(unaff_x20 + 0x90));
        *(undefined4 *)(unaff_x20 + 0xac) = uVar9;
        *(float *)(unaff_x20 + 0xb0) = fVar13;
        *(int *)(unaff_x20 + 0xb4) = auVar19._0_4_;
        fVar10 = (float)FUN_069e5200();
        fVar25 = (float)*(undefined8 *)(unaff_x20 + 0xa4);
        fVar26 = (float)((ulong)*(undefined8 *)(unaff_x20 + 0xa4) >> 0x20);
        uVar2 = *(undefined8 *)*(undefined1 (*) [12])(unaff_x20 + 0x9c);
        fVar23 = (float)uVar2;
        fVar24 = (float)((ulong)uVar2 >> 0x20);
        fVar18 = auVar17._0_4_;
        fVar14 = auVar19._0_4_;
        auVar15._4_4_ = fVar26;
        auVar15._0_4_ = fVar26;
        auVar15._8_4_ = fVar26;
        auVar15._12_4_ = fVar26;
        auVar16._12_4_ = fVar26;
        auVar16._0_12_ = *(undefined1 (*) [12])(unaff_x20 + 0x9c);
        auVar16 = NEON_ext(auVar15,auVar16,4,1);
        fVar11 = fVar10 * fVar24;
        fVar12 = fVar13 * fVar24;
        fVar20 = fVar14 * fVar24;
        fVar21 = fVar10 * fVar25;
        fVar22 = fVar14 * fVar25;
        auVar17._4_4_ = fVar11;
        auVar17._0_4_ = fVar14 * fVar23;
        auVar17._8_4_ = fVar13 * fVar25;
        auVar17._12_4_ = fVar12;
        auVar19._4_4_ = fVar11;
        auVar19._0_4_ = fVar14 * fVar23;
        auVar19._8_4_ = fVar13 * fVar25;
        auVar19._12_4_ = fVar12;
        auVar17 = NEON_ext(auVar17,auVar19,4,1);
        auVar3._4_4_ = fVar20;
        auVar3._0_4_ = fVar13 * fVar23;
        auVar3._8_4_ = fVar21;
        auVar3._12_4_ = fVar22;
        auVar4._4_4_ = fVar20;
        auVar4._0_4_ = fVar13 * fVar23;
        auVar4._8_4_ = fVar21;
        auVar4._12_4_ = fVar22;
        auVar19 = NEON_ext(auVar3,auVar4,0xc,1);
        *(ulong *)(unaff_x20 + 0xc0) =
             CONCAT44(((fVar26 * fVar18 - fVar10 * auVar16._12_4_) - fVar12) - fVar22,
                      (fVar25 * fVar18 + fVar14 * auVar16._8_4_ + fVar11) - auVar19._4_4_);
        *(ulong *)(unaff_x20 + 0xb8) =
             CONCAT44((fVar24 * fVar18 + fVar13 * auVar16._4_4_ + auVar17._12_4_) - fVar21,
                      (fVar23 * fVar18 + fVar10 * auVar16._0_4_ + auVar17._4_4_) - fVar20);
      }
      FUN_05953590();
      return;
    }
  } while (in_x10 < *(uint *)(in_x9 + 0x18));
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


