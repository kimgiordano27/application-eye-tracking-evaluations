/*
FUNCTION_NAME: OVRManager$$get_headPoseRelativeOffsetRotation
ENTRY_POINT: 04f4283c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_headPoseRelativeOffsetRotation
               (float param_1,undefined1 param_2 [16],float param_3,undefined1 param_4 [16],
               undefined1 param_5 [16],undefined1 param_6 [16],undefined1 param_7 [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long unaff_x19;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float in_s16;
  float in_register_00005204;
  float in_register_00005208;
  float in_register_0000520c;
  undefined1 auVar15 [16];
  
  fVar13 = param_6._8_4_;
  param_1 = param_1 - param_3;
  fVar9 = in_s16 - param_5._0_4_;
  fVar10 = in_register_00005204 - param_5._4_4_;
  fVar11 = in_register_00005208 - param_5._8_4_;
  fVar12 = in_register_0000520c - param_5._12_4_;
  auVar14._4_4_ = fVar10;
  auVar14._0_4_ = fVar9;
  auVar14._8_4_ = fVar11;
  auVar14._12_4_ = fVar12;
  auVar2._4_4_ = fVar10;
  auVar2._0_4_ = fVar9;
  auVar2._8_4_ = fVar11;
  auVar2._12_4_ = fVar12;
  auVar15 = NEON_ext(auVar14,auVar2,0xc,1);
  auVar3._4_4_ = fVar10;
  auVar3._0_4_ = fVar9;
  auVar3._8_4_ = fVar11;
  auVar3._12_4_ = fVar12;
  auVar14 = NEON_ext(auVar15,auVar3,8,1);
  fVar4 = auVar14._4_4_;
  fVar5 = param_2._0_4_ * auVar14._8_4_;
  fVar6 = param_2._4_4_ * auVar14._0_4_;
  fVar7 = param_2._8_4_ * fVar4;
  fVar8 = param_2._12_4_ * fVar4;
  auVar15._4_4_ = fVar6;
  auVar15._0_4_ = fVar5;
  auVar15._8_4_ = fVar7;
  auVar15._12_4_ = fVar8;
  auVar1._4_4_ = fVar6;
  auVar1._0_4_ = fVar5;
  auVar1._8_4_ = fVar7;
  auVar1._12_4_ = fVar8;
  auVar15 = NEON_ext(auVar15,auVar1,4,1);
  *(ulong *)(unaff_x19 + 0x14) =
       CONCAT44(((param_6._12_4_ * param_1 - param_7._12_4_ * auVar14._12_4_) - fVar8) -
                fVar13 * fVar12,
                (fVar13 * param_1 + param_7._8_4_ * auVar14._8_4_ + fVar6) - param_6._0_4_ * fVar11)
  ;
  *(ulong *)(unaff_x19 + 0xc) =
       CONCAT44((param_6._4_4_ * param_1 + param_7._4_4_ * fVar4 + auVar15._12_4_) - fVar13 * fVar10
                ,(param_6._0_4_ * param_1 + param_7._0_4_ * auVar14._0_4_ + auVar15._4_4_) -
                 param_6._4_4_ * fVar9);
  return;
}


