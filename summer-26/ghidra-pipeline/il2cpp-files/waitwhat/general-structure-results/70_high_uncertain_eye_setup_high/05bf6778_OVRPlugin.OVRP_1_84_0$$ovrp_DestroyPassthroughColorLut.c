/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_DestroyPassthroughColorLut
ENTRY_POINT: 05bf6778
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_DestroyPassthroughColorLut
               (float param_1,long param_2,undefined4 param_3,undefined8 *param_4,undefined8 param_5
               ,long param_6)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
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
  
  if ((DAT_0754edf8 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c1b68);
    DAT_0754edf8 = 1;
  }
  uVar2 = *(uint *)(param_2 + 0xcc);
  *(undefined4 *)(param_2 + 0x10) = param_3;
  if (0 < (int)uVar2) {
    lVar7 = *(long *)(param_2 + 0x38);
    if (lVar7 == 0) goto LAB_05bf6a34;
    uVar9 = 0;
    do {
      if (*(uint *)(lVar7 + 0x18) <= uVar9) {
LAB_05bf6a30:
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      *(undefined8 *)(lVar7 + 0x20 + uVar9 * 8) = 0xffffffffffffffff;
      lVar10 = *(long *)(param_2 + 0x40);
      if (lVar10 == 0) goto LAB_05bf6a34;
      if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_05bf6a30;
      *(undefined8 *)(lVar10 + uVar9 * 8 + 0x20) = 0xffffffffffffffff;
      lVar10 = *(long *)(param_2 + 0x48);
      if (lVar10 == 0) goto LAB_05bf6a34;
      if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_05bf6a30;
      lVar1 = uVar9 * 8;
      uVar9 = uVar9 + 1;
      *(undefined8 *)(lVar10 + lVar1 + 0x20) = 0xffffffffffffffff;
    } while (uVar2 != uVar9);
  }
  puVar6 = PTR_DAT_070c1b68;
  if (DAT_075457b6 == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    DAT_075457b6 = '\x01';
  }
  FUN_069c2eb4(&stack0x00000100,
               *(float *)(*(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 0xc) * param_1,
               *(float *)(*(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 0x10) * param_1,0);
  lVar7 = *(long *)puVar6;
  *(undefined8 *)(param_2 + 0x58) = in_stack_00000108;
  *(undefined8 *)(param_2 + 0x50) = in_stack_00000100;
  *(undefined8 *)(param_2 + 0x68) = in_stack_00000118;
  *(undefined8 *)(param_2 + 0x60) = in_stack_00000110;
  *(undefined8 *)(param_2 + 0x78) = in_stack_00000128;
  *(undefined8 *)(param_2 + 0x70) = in_stack_00000120;
  *(undefined8 *)(param_2 + 0x88) = in_stack_00000138;
  *(undefined8 *)(param_2 + 0x80) = in_stack_00000130;
  uVar3 = *param_4;
  uVar11 = *(undefined4 *)(param_4 + 3);
  uVar8 = param_4[2];
  *(undefined8 *)(param_2 + 0x98) = param_4[1];
  *(undefined8 *)(param_2 + 0x90) = uVar3;
  *(undefined4 *)(param_2 + 0xa8) = uVar11;
  *(undefined8 *)(param_2 + 0xa0) = uVar8;
  *(undefined8 *)(param_2 + 0xb4) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_2 + 0xac) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(param_2 + 0xa4);
  *(undefined8 *)(param_2 + 0xb8) = *(undefined8 *)(param_2 + 0x9c);
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar9 = FUN_069d69b8(param_6,0,0);
  if ((uVar9 & 1) != 0) {
    in_stack_00000108 = *(undefined8 *)(param_2 + 0x58);
    in_stack_00000100 = *(undefined8 *)(param_2 + 0x50);
    in_stack_00000118 = *(undefined8 *)(param_2 + 0x68);
    in_stack_00000110 = *(undefined8 *)(param_2 + 0x60);
    in_stack_00000128 = *(undefined8 *)(param_2 + 0x78);
    in_stack_00000120 = *(undefined8 *)(param_2 + 0x70);
    in_stack_00000138 = SUB168(*(undefined1 (*) [16])(param_2 + 0x80),8);
    in_stack_00000130 = SUB168(*(undefined1 (*) [16])(param_2 + 0x80),0);
    if (param_6 == 0) {
LAB_05bf6a34:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_069e9470(param_6,0);
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
    auVar21 = ZEXT416(*(uint *)(param_2 + 0x98));
    *(undefined8 *)(param_2 + 0x58) = in_stack_00000088;
    *(undefined8 *)(param_2 + 0x50) = in_stack_00000080;
    *(undefined8 *)(param_2 + 0x68) = in_stack_00000098;
    *(undefined8 *)(param_2 + 0x60) = in_stack_00000090;
    fVar15 = *(float *)(param_2 + 0x94);
    *(long *)(param_2 + 0x78) = in_stack_000000a0._8_8_;
    *(long *)(param_2 + 0x70) = in_stack_000000a0._0_8_;
    *(undefined8 *)(param_2 + 0x88) = in_stack_000000b8;
    *(undefined8 *)(param_2 + 0x80) = in_stack_000000b0;
    auVar19 = in_stack_000000a0;
    uVar11 = FUN_069e515c(*(undefined4 *)(param_2 + 0x90),param_6,0);
    *(undefined4 *)(param_2 + 0xac) = uVar11;
    *(float *)(param_2 + 0xb0) = fVar15;
    *(int *)(param_2 + 0xb4) = auVar21._0_4_;
    fVar12 = (float)FUN_069e5200(param_6,0);
    fVar27 = (float)*(undefined8 *)(param_2 + 0xa4);
    fVar28 = (float)((ulong)*(undefined8 *)(param_2 + 0xa4) >> 0x20);
    uVar3 = *(undefined8 *)*(undefined1 (*) [12])(param_2 + 0x9c);
    fVar25 = (float)uVar3;
    fVar26 = (float)((ulong)uVar3 >> 0x20);
    fVar20 = auVar19._0_4_;
    fVar16 = auVar21._0_4_;
    auVar17._4_4_ = fVar28;
    auVar17._0_4_ = fVar28;
    auVar17._8_4_ = fVar28;
    auVar17._12_4_ = fVar28;
    auVar18._12_4_ = fVar28;
    auVar18._0_12_ = *(undefined1 (*) [12])(param_2 + 0x9c);
    auVar18 = NEON_ext(auVar17,auVar18,4,1);
    fVar13 = fVar12 * fVar26;
    fVar14 = fVar15 * fVar26;
    fVar22 = fVar16 * fVar26;
    fVar23 = fVar12 * fVar27;
    fVar24 = fVar16 * fVar27;
    auVar19._4_4_ = fVar13;
    auVar19._0_4_ = fVar16 * fVar25;
    auVar19._8_4_ = fVar15 * fVar27;
    auVar19._12_4_ = fVar14;
    auVar21._4_4_ = fVar13;
    auVar21._0_4_ = fVar16 * fVar25;
    auVar21._8_4_ = fVar15 * fVar27;
    auVar21._12_4_ = fVar14;
    auVar19 = NEON_ext(auVar19,auVar21,4,1);
    auVar4._4_4_ = fVar22;
    auVar4._0_4_ = fVar15 * fVar25;
    auVar4._8_4_ = fVar23;
    auVar4._12_4_ = fVar24;
    auVar5._4_4_ = fVar22;
    auVar5._0_4_ = fVar15 * fVar25;
    auVar5._8_4_ = fVar23;
    auVar5._12_4_ = fVar24;
    auVar21 = NEON_ext(auVar4,auVar5,0xc,1);
    *(ulong *)(param_2 + 0xc0) =
         CONCAT44(((fVar28 * fVar20 - fVar12 * auVar18._12_4_) - fVar14) - fVar24,
                  (fVar27 * fVar20 + fVar16 * auVar18._8_4_ + fVar13) - auVar21._4_4_);
    *(ulong *)(param_2 + 0xb8) =
         CONCAT44((fVar26 * fVar20 + fVar15 * auVar18._4_4_ + auVar19._12_4_) - fVar23,
                  (fVar25 * fVar20 + fVar12 * auVar18._0_4_ + auVar19._4_4_) - fVar22);
  }
  FUN_05953590(param_5,*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 200),0);
  return;
}


