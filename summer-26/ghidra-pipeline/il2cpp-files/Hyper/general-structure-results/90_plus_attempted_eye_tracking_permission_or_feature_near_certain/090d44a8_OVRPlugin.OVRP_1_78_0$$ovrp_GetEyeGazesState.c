/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeGazesState
ENTRY_POINT: 090d44a8
PROGRAM: Hyper-libil2cpp.so
SCORE: 109
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetEyeGazesState(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulong uVar4;
  int in_w8;
  long unaff_x20;
  long unaff_x21;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
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
  
  if (in_w8 == 0) {
    thunk_FUN_049a583c();
  }
  uVar4 = FUN_0a17b398();
  if ((uVar4 & 1) != 0) {
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
      FUN_0494818c();
    }
    FUN_0a18c388();
    FUN_0a16857c(&stack0x000000c0,0);
    in_stack_00000048 = in_stack_00000108;
    in_stack_00000040 = in_stack_00000100;
    in_stack_00000058 = in_stack_00000118;
    in_stack_00000050 = in_stack_00000110;
    in_stack_00000068 = in_stack_00000128;
    in_stack_00000060 = in_stack_00000120;
    in_stack_00000078 = in_stack_00000138;
    in_stack_00000070 = in_stack_00000130;
    FUN_0a168224(&stack0x00000080,&stack0x00000040);
    auVar15 = ZEXT416(*(uint *)(unaff_x20 + 0x98));
    *(undefined8 *)(unaff_x20 + 0x58) = in_stack_00000088;
    *(undefined8 *)(unaff_x20 + 0x50) = in_stack_00000080;
    *(undefined8 *)(unaff_x20 + 0x68) = in_stack_00000098;
    *(undefined8 *)(unaff_x20 + 0x60) = in_stack_00000090;
    fVar9 = *(float *)(unaff_x20 + 0x94);
    *(long *)(unaff_x20 + 0x78) = in_stack_000000a0._8_8_;
    *(long *)(unaff_x20 + 0x70) = in_stack_000000a0._0_8_;
    *(undefined8 *)(unaff_x20 + 0x88) = in_stack_000000b8;
    *(undefined8 *)(unaff_x20 + 0x80) = in_stack_000000b0;
    auVar13 = in_stack_000000a0;
    uVar5 = FUN_0a188410(*(undefined4 *)(unaff_x20 + 0x90));
    *(undefined4 *)(unaff_x20 + 0xac) = uVar5;
    *(float *)(unaff_x20 + 0xb0) = fVar9;
    *(int *)(unaff_x20 + 0xb4) = auVar15._0_4_;
    fVar6 = (float)FUN_0a1884ac();
    fVar21 = (float)*(undefined8 *)(unaff_x20 + 0xa4);
    fVar22 = (float)((ulong)*(undefined8 *)(unaff_x20 + 0xa4) >> 0x20);
    uVar3 = *(undefined8 *)*(undefined1 (*) [12])(unaff_x20 + 0x9c);
    fVar19 = (float)uVar3;
    fVar20 = (float)((ulong)uVar3 >> 0x20);
    fVar14 = auVar13._0_4_;
    fVar10 = auVar15._0_4_;
    auVar11._4_4_ = fVar22;
    auVar11._0_4_ = fVar22;
    auVar11._8_4_ = fVar22;
    auVar11._12_4_ = fVar22;
    auVar12._12_4_ = fVar22;
    auVar12._0_12_ = *(undefined1 (*) [12])(unaff_x20 + 0x9c);
    auVar12 = NEON_ext(auVar11,auVar12,4,1);
    fVar7 = fVar6 * fVar20;
    fVar8 = fVar9 * fVar20;
    fVar16 = fVar10 * fVar20;
    fVar17 = fVar6 * fVar21;
    fVar18 = fVar10 * fVar21;
    auVar13._4_4_ = fVar7;
    auVar13._0_4_ = fVar10 * fVar19;
    auVar13._8_4_ = fVar9 * fVar21;
    auVar13._12_4_ = fVar8;
    auVar15._4_4_ = fVar7;
    auVar15._0_4_ = fVar10 * fVar19;
    auVar15._8_4_ = fVar9 * fVar21;
    auVar15._12_4_ = fVar8;
    auVar13 = NEON_ext(auVar13,auVar15,4,1);
    auVar1._4_4_ = fVar16;
    auVar1._0_4_ = fVar9 * fVar19;
    auVar1._8_4_ = fVar17;
    auVar1._12_4_ = fVar18;
    auVar2._4_4_ = fVar16;
    auVar2._0_4_ = fVar9 * fVar19;
    auVar2._8_4_ = fVar17;
    auVar2._12_4_ = fVar18;
    auVar15 = NEON_ext(auVar1,auVar2,0xc,1);
    *(ulong *)(unaff_x20 + 0xc0) =
         CONCAT44(((fVar22 * fVar14 - fVar6 * auVar12._12_4_) - fVar8) - fVar18,
                  (fVar21 * fVar14 + fVar10 * auVar12._8_4_ + fVar7) - auVar15._4_4_);
    *(ulong *)(unaff_x20 + 0xb8) =
         CONCAT44((fVar20 * fVar14 + fVar9 * auVar12._4_4_ + auVar13._12_4_) - fVar17,
                  (fVar19 * fVar14 + fVar6 * auVar12._0_4_ + auVar13._4_4_) - fVar16);
  }
  FUN_08da0170();
  return;
}


