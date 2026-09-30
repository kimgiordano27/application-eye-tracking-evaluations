/*
FUNCTION_NAME: OVRManager$$GetCurrentInputSubsystem
ENTRY_POINT: 04f457f4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetCurrentInputSubsystem
               (undefined8 param_1,undefined8 param_2,undefined1 param_3 [16],undefined8 param_4,
               long param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000010;
  float fStack0000000000000020;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  uStack0000000000000038 = param_3._8_8_;
  uStack0000000000000030 = param_3._0_8_;
  uStack0000000000000000 = param_2;
  uStack0000000000000010 = param_4;
  _fStack0000000000000020 = param_1;
  if (*(long *)(param_5 + 0x20) != 0) {
    FUN_04f3eaf4(&stack0x00000044,*(long *)(param_5 + 0x20),0);
    if (*(long *)(param_5 + 0x20) != 0) {
      fVar17 = (float)uStack0000000000000030;
      fVar13 = (float)uStack0000000000000000;
      fVar5 = (float)uStack0000000000000010;
      auVar8._8_4_ = fStack0000000000000058;
      auVar8._0_8_ = in_stack_00000050;
      fVar3 = (float)in_stack_00000050;
      fVar4 = (float)((ulong)in_stack_00000050 >> 0x20);
      fVar11 = fVar4 * fVar5;
      fVar12 = fStack000000000000005c * fVar5;
      auVar14._4_4_ = fVar11;
      auVar14._0_4_ = fVar3 * fVar5;
      auVar14._8_4_ = fStack0000000000000058 * fVar5;
      auVar14._12_4_ = fVar12;
      auVar1._4_4_ = fVar11;
      auVar1._0_4_ = fVar3 * fVar5;
      auVar1._8_4_ = fStack0000000000000058 * fVar5;
      auVar1._12_4_ = fVar12;
      auVar14 = NEON_ext(auVar14,auVar1,4,1);
      fVar5 = fStack0000000000000020 * fVar4;
      fVar6 = fVar13 * fStack0000000000000058;
      fVar7 = fVar13 * fVar4;
      auVar8._12_4_ = fStack000000000000005c;
      auVar2._4_4_ = fStack000000000000005c;
      auVar2._0_4_ = fStack000000000000005c;
      auVar2._8_4_ = fStack000000000000005c;
      auVar2._12_4_ = fStack000000000000005c;
      auVar8 = NEON_ext(auVar2,auVar8,4,1);
      auVar9._4_4_ = fVar5;
      auVar9._0_4_ = fVar17 * fVar3;
      auVar9._8_4_ = fVar6;
      auVar9._12_4_ = fVar7;
      auVar15._4_4_ = fVar5;
      auVar15._0_4_ = fVar17 * fVar3;
      auVar15._8_4_ = fVar6;
      auVar15._12_4_ = fVar7;
      auVar15 = NEON_ext(auVar9,auVar15,0xc,1);
      auVar16._4_4_ = fVar13;
      auVar16._0_4_ = fVar17;
      auVar16._8_4_ = fVar17;
      auVar16._12_4_ = fStack0000000000000020;
      auVar9 = NEON_rev64(auVar16,4);
      auVar10._0_4_ = (auVar14._4_4_ + fVar17 * auVar8._0_4_ + fVar5) - auVar9._0_4_ * fVar3;
      auVar10._4_4_ =
           (auVar14._12_4_ + fStack0000000000000020 * auVar8._4_4_ + fVar6) - auVar9._4_4_ * fVar4;
      auVar10._8_4_ =
           (fVar11 + fVar13 * auVar8._8_4_ + auVar15._4_4_) - auVar9._8_4_ * fStack0000000000000058;
      auVar10._12_4_ =
           ((fVar12 - fStack0000000000000020 * auVar8._12_4_) - fVar7) -
           auVar9._12_4_ * fStack0000000000000058;
      FUN_04f3f808(auVar10._4_4_,auVar10._8_4_,auVar10,auVar10._12_4_,*(long *)(param_5 + 0x20),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


