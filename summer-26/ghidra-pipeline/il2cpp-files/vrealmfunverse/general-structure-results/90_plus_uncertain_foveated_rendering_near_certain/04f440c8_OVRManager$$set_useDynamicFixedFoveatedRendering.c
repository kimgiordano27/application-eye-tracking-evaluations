/*
FUNCTION_NAME: OVRManager$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 04f440c8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_useDynamicFixedFoveatedRendering(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long unaff_x19;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float in_stack_00000000;
  float in_stack_00000010;
  float in_stack_00000020;
  float in_stack_00000030;
  undefined8 in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    auVar8._8_4_ = fStack0000000000000058;
    auVar8._0_8_ = in_stack_00000050;
    fVar3 = (float)in_stack_00000050;
    fVar4 = (float)((ulong)in_stack_00000050 >> 0x20);
    fVar11 = fVar4 * in_stack_00000010;
    fVar12 = fStack000000000000005c * in_stack_00000010;
    auVar13._4_4_ = fVar11;
    auVar13._0_4_ = fVar3 * in_stack_00000010;
    auVar13._8_4_ = fStack0000000000000058 * in_stack_00000010;
    auVar13._12_4_ = fVar12;
    auVar1._4_4_ = fVar11;
    auVar1._0_4_ = fVar3 * in_stack_00000010;
    auVar1._8_4_ = fStack0000000000000058 * in_stack_00000010;
    auVar1._12_4_ = fVar12;
    auVar13 = NEON_ext(auVar13,auVar1,4,1);
    fVar5 = in_stack_00000020 * fVar4;
    fVar6 = in_stack_00000000 * fStack0000000000000058;
    fVar7 = in_stack_00000000 * fVar4;
    auVar8._12_4_ = fStack000000000000005c;
    auVar2._4_4_ = fStack000000000000005c;
    auVar2._0_4_ = fStack000000000000005c;
    auVar2._8_4_ = fStack000000000000005c;
    auVar2._12_4_ = fStack000000000000005c;
    auVar8 = NEON_ext(auVar2,auVar8,4,1);
    auVar9._4_4_ = fVar5;
    auVar9._0_4_ = in_stack_00000030 * fVar3;
    auVar9._8_4_ = fVar6;
    auVar9._12_4_ = fVar7;
    auVar14._4_4_ = fVar5;
    auVar14._0_4_ = in_stack_00000030 * fVar3;
    auVar14._8_4_ = fVar6;
    auVar14._12_4_ = fVar7;
    auVar14 = NEON_ext(auVar9,auVar14,0xc,1);
    auVar15._4_4_ = in_stack_00000000;
    auVar15._0_4_ = in_stack_00000030;
    auVar15._8_4_ = in_stack_00000030;
    auVar15._12_4_ = in_stack_00000020;
    auVar9 = NEON_rev64(auVar15,4);
    auVar10._0_4_ =
         (auVar13._4_4_ + in_stack_00000030 * auVar8._0_4_ + fVar5) - auVar9._0_4_ * fVar3;
    auVar10._4_4_ =
         (auVar13._12_4_ + in_stack_00000020 * auVar8._4_4_ + fVar6) - auVar9._4_4_ * fVar4;
    auVar10._8_4_ =
         (fVar11 + in_stack_00000000 * auVar8._8_4_ + auVar14._4_4_) -
         auVar9._8_4_ * fStack0000000000000058;
    auVar10._12_4_ =
         ((fVar12 - in_stack_00000020 * auVar8._12_4_) - fVar7) -
         auVar9._12_4_ * fStack0000000000000058;
    FUN_04f3f808(auVar10._4_4_,auVar10._8_4_,auVar10,auVar10._12_4_,*(long *)(unaff_x19 + 0x20),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


