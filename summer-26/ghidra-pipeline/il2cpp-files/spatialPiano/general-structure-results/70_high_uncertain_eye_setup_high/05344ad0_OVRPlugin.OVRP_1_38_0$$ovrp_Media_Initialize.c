/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_Initialize
ENTRY_POINT: 05344ad0
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


void OVRPlugin_OVRP_1_38_0__ovrp_Media_Initialize(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long in_x9;
  undefined8 uVar7;
  ulong in_x10;
  long in_x11;
  undefined8 in_x12;
  long in_x13;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
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
  
  while( true ) {
    in_x10 = in_x10 + 1;
    *(undefined8 *)(in_x13 + 0x20) = in_x12;
    puVar4 = PTR_DAT_067c8f20;
    if (param_1 == in_x10) break;
    if (*(uint *)(in_x9 + 0x18) <= in_x10) {
LAB_05344cd4:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    *(undefined8 *)(in_x11 + in_x10 * 8) = in_x12;
    lVar5 = *(long *)(unaff_x20 + 0x40);
    if (lVar5 == 0) goto LAB_05344cd8;
    if (*(uint *)(lVar5 + 0x18) <= in_x10) goto LAB_05344cd4;
    *(undefined8 *)(lVar5 + in_x10 * 8 + 0x20) = in_x12;
    lVar5 = *(long *)(unaff_x20 + 0x48);
    if (lVar5 == 0) goto LAB_05344cd8;
    if (*(uint *)(lVar5 + 0x18) <= in_x10) goto LAB_05344cd4;
    in_x13 = lVar5 + in_x10 * 8;
  }
  if (DAT_06bb42c2 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f78);
    DAT_06bb42c2 = '\x01';
  }
  FUN_060dd344(&stack0x00000100,
               *(float *)(*(long *)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 0xc) * unaff_s8,
               *(float *)(*(long *)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 0x10) * unaff_s8,0);
  lVar5 = *(long *)puVar4;
  *(undefined8 *)(unaff_x20 + 0x58) = in_stack_00000108;
  *(undefined8 *)(unaff_x20 + 0x50) = in_stack_00000100;
  *(undefined8 *)(unaff_x20 + 0x68) = in_stack_00000118;
  *(undefined8 *)(unaff_x20 + 0x60) = in_stack_00000110;
  *(undefined8 *)(unaff_x20 + 0x78) = in_stack_00000128;
  *(undefined8 *)(unaff_x20 + 0x70) = in_stack_00000120;
  *(undefined8 *)(unaff_x20 + 0x88) = in_stack_00000138;
  *(undefined8 *)(unaff_x20 + 0x80) = in_stack_00000130;
  uVar1 = *unaff_x22;
  uVar8 = *(undefined4 *)(unaff_x22 + 3);
  uVar7 = unaff_x22[2];
  *(undefined8 *)(unaff_x20 + 0x98) = unaff_x22[1];
  *(undefined8 *)(unaff_x20 + 0x90) = uVar1;
  *(undefined4 *)(unaff_x20 + 0xa8) = uVar8;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar7;
  *(undefined8 *)(unaff_x20 + 0xb4) = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x20 + 0xac) = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0xc0) = *(undefined8 *)(unaff_x20 + 0xa4);
  *(undefined8 *)(unaff_x20 + 0xb8) = *(undefined8 *)(unaff_x20 + 0x9c);
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar6 = FUN_060f078c();
  if ((uVar6 & 1) != 0) {
    in_stack_00000108 = *(undefined8 *)(unaff_x20 + 0x58);
    in_stack_00000100 = *(undefined8 *)(unaff_x20 + 0x50);
    in_stack_00000118 = *(undefined8 *)(unaff_x20 + 0x68);
    in_stack_00000110 = *(undefined8 *)(unaff_x20 + 0x60);
    in_stack_00000128 = *(undefined8 *)(unaff_x20 + 0x78);
    in_stack_00000120 = *(undefined8 *)(unaff_x20 + 0x70);
    in_stack_00000138 = SUB168(*(undefined1 (*) [16])(unaff_x20 + 0x80),8);
    in_stack_00000130 = SUB168(*(undefined1 (*) [16])(unaff_x20 + 0x80),0);
    if (unaff_x21 == 0) {
LAB_05344cd8:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_06101d4c();
    FUN_060dd344(&stack0x000000c0,0);
    in_stack_00000048 = in_stack_00000108;
    in_stack_00000040 = in_stack_00000100;
    in_stack_00000058 = in_stack_00000118;
    in_stack_00000050 = in_stack_00000110;
    in_stack_00000068 = in_stack_00000128;
    in_stack_00000060 = in_stack_00000120;
    in_stack_00000078 = in_stack_00000138;
    in_stack_00000070 = in_stack_00000130;
    FUN_060dcea0(&stack0x00000080,&stack0x00000040);
    auVar18 = ZEXT416(*(uint *)(unaff_x20 + 0x98));
    *(undefined8 *)(unaff_x20 + 0x58) = in_stack_00000088;
    *(undefined8 *)(unaff_x20 + 0x50) = in_stack_00000080;
    *(undefined8 *)(unaff_x20 + 0x68) = in_stack_00000098;
    *(undefined8 *)(unaff_x20 + 0x60) = in_stack_00000090;
    fVar12 = *(float *)(unaff_x20 + 0x94);
    *(long *)(unaff_x20 + 0x78) = in_stack_000000a0._8_8_;
    *(long *)(unaff_x20 + 0x70) = in_stack_000000a0._0_8_;
    *(undefined8 *)(unaff_x20 + 0x88) = in_stack_000000b8;
    *(undefined8 *)(unaff_x20 + 0x80) = in_stack_000000b0;
    auVar16 = in_stack_000000a0;
    uVar8 = FUN_060fdd00(*(undefined4 *)(unaff_x20 + 0x90));
    *(undefined4 *)(unaff_x20 + 0xac) = uVar8;
    *(float *)(unaff_x20 + 0xb0) = fVar12;
    *(int *)(unaff_x20 + 0xb4) = auVar18._0_4_;
    fVar9 = (float)FUN_060fdda4();
    fVar24 = (float)*(undefined8 *)(unaff_x20 + 0xa4);
    fVar25 = (float)((ulong)*(undefined8 *)(unaff_x20 + 0xa4) >> 0x20);
    uVar1 = *(undefined8 *)*(undefined1 (*) [12])(unaff_x20 + 0x9c);
    fVar22 = (float)uVar1;
    fVar23 = (float)((ulong)uVar1 >> 0x20);
    fVar17 = auVar16._0_4_;
    fVar13 = auVar18._0_4_;
    auVar14._4_4_ = fVar25;
    auVar14._0_4_ = fVar25;
    auVar14._8_4_ = fVar25;
    auVar14._12_4_ = fVar25;
    auVar15._12_4_ = fVar25;
    auVar15._0_12_ = *(undefined1 (*) [12])(unaff_x20 + 0x9c);
    auVar15 = NEON_ext(auVar14,auVar15,4,1);
    fVar10 = fVar9 * fVar23;
    fVar11 = fVar12 * fVar23;
    fVar19 = fVar13 * fVar23;
    fVar20 = fVar9 * fVar24;
    fVar21 = fVar13 * fVar24;
    auVar16._4_4_ = fVar10;
    auVar16._0_4_ = fVar13 * fVar22;
    auVar16._8_4_ = fVar12 * fVar24;
    auVar16._12_4_ = fVar11;
    auVar18._4_4_ = fVar10;
    auVar18._0_4_ = fVar13 * fVar22;
    auVar18._8_4_ = fVar12 * fVar24;
    auVar18._12_4_ = fVar11;
    auVar16 = NEON_ext(auVar16,auVar18,4,1);
    auVar2._4_4_ = fVar19;
    auVar2._0_4_ = fVar12 * fVar22;
    auVar2._8_4_ = fVar20;
    auVar2._12_4_ = fVar21;
    auVar3._4_4_ = fVar19;
    auVar3._0_4_ = fVar12 * fVar22;
    auVar3._8_4_ = fVar20;
    auVar3._12_4_ = fVar21;
    auVar18 = NEON_ext(auVar2,auVar3,0xc,1);
    *(ulong *)(unaff_x20 + 0xc0) =
         CONCAT44(((fVar25 * fVar17 - fVar9 * auVar15._12_4_) - fVar11) - fVar21,
                  (fVar24 * fVar17 + fVar13 * auVar15._8_4_ + fVar10) - auVar18._4_4_);
    *(ulong *)(unaff_x20 + 0xb8) =
         CONCAT44((fVar23 * fVar17 + fVar12 * auVar15._4_4_ + auVar16._12_4_) - fVar20,
                  (fVar22 * fVar17 + fVar9 * auVar15._0_4_ + auVar16._4_4_) - fVar19);
  }
  FUN_050f8cdc();
  return;
}


