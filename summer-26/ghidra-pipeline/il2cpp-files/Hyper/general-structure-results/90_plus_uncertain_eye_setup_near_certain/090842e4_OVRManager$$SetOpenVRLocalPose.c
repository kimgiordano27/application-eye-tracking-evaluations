/*
FUNCTION_NAME: OVRManager$$SetOpenVRLocalPose
ENTRY_POINT: 090842e4
PROGRAM: Hyper-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetOpenVRLocalPose(long param_1,float param_2,float param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long unaff_x19;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  undefined8 in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  uint uStack0000000000000064;
  float in_stack_00000068;
  float fStack000000000000007c;
  
  param_2 = param_2 * param_3;
  fStack000000000000007c = param_2;
  if (param_1 != 0) {
    fStack000000000000007c =
         (float)(**(code **)(param_1 + 0x18))
                          (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
    fStack000000000000007c = param_2 * fStack000000000000007c;
    auVar10 = ZEXT416(uStack0000000000000064);
    fVar6 = fStack0000000000000060;
    fVar7 = in_stack_00000068;
    fVar3 = (float)FUN_0a16aa7c(0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_0907ed1c(&stack0x00000044,*(long *)(unaff_x19 + 0x20),0);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        fVar18 = auVar10._0_4_;
        auVar10._8_4_ = fStack0000000000000058;
        auVar10._0_8_ = in_stack_00000050;
        fVar4 = (float)in_stack_00000050;
        fVar5 = (float)((ulong)in_stack_00000050 >> 0x20);
        fVar13 = fVar5 * fVar7;
        fVar14 = fStack000000000000005c * fVar7;
        auVar15._4_4_ = fVar13;
        auVar15._0_4_ = fVar4 * fVar7;
        auVar15._8_4_ = fStack0000000000000058 * fVar7;
        auVar15._12_4_ = fVar14;
        auVar1._4_4_ = fVar13;
        auVar1._0_4_ = fVar4 * fVar7;
        auVar1._8_4_ = fStack0000000000000058 * fVar7;
        auVar1._12_4_ = fVar14;
        auVar15 = NEON_ext(auVar15,auVar1,4,1);
        fVar7 = fVar3 * fVar5;
        fVar8 = fVar6 * fStack0000000000000058;
        fVar9 = fVar6 * fVar5;
        auVar10._12_4_ = fStack000000000000005c;
        auVar2._4_4_ = fStack000000000000005c;
        auVar2._0_4_ = fStack000000000000005c;
        auVar2._8_4_ = fStack000000000000005c;
        auVar2._12_4_ = fStack000000000000005c;
        auVar10 = NEON_ext(auVar2,auVar10,4,1);
        auVar11._4_4_ = fVar7;
        auVar11._0_4_ = fVar18 * fVar4;
        auVar11._8_4_ = fVar8;
        auVar11._12_4_ = fVar9;
        auVar16._4_4_ = fVar7;
        auVar16._0_4_ = fVar18 * fVar4;
        auVar16._8_4_ = fVar8;
        auVar16._12_4_ = fVar9;
        auVar16 = NEON_ext(auVar11,auVar16,0xc,1);
        auVar17._4_4_ = fVar6;
        auVar17._0_4_ = fVar18;
        auVar17._8_4_ = fVar18;
        auVar17._12_4_ = fVar3;
        auVar11 = NEON_rev64(auVar17,4);
        auVar12._0_4_ = (auVar15._4_4_ + fVar18 * auVar10._0_4_ + fVar7) - auVar11._0_4_ * fVar4;
        auVar12._4_4_ = (auVar15._12_4_ + fVar3 * auVar10._4_4_ + fVar8) - auVar11._4_4_ * fVar5;
        auVar12._8_4_ =
             (fVar13 + fVar6 * auVar10._8_4_ + auVar16._4_4_) -
             auVar11._8_4_ * fStack0000000000000058;
        auVar12._12_4_ =
             ((fVar14 - fVar3 * auVar10._12_4_) - fVar9) - auVar11._12_4_ * fStack0000000000000058;
        FUN_0907fa30(auVar12._4_4_,auVar12._8_4_,auVar12,auVar12._12_4_,*(long *)(unaff_x19 + 0x20),
                     0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


