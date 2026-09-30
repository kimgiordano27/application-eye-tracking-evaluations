/*
FUNCTION_NAME: OVRManager$$set_headPoseRelativeOffsetRotation
ENTRY_POINT: 04f42848
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_headPoseRelativeOffsetRotation
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],undefined1 param_5 [16],undefined1 param_6 [16],
               undefined1 param_7 [16])

{
  undefined1 auVar1 [16];
  long unaff_x19;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar8 = NEON_ext(param_5,param_5,0xc,1);
  auVar7 = NEON_ext(auVar8,param_5,8,1);
  fVar2 = auVar7._4_4_;
  fVar3 = param_2._0_4_ * auVar7._8_4_;
  fVar4 = param_2._4_4_ * auVar7._0_4_;
  fVar5 = param_2._8_4_ * fVar2;
  fVar6 = param_2._12_4_ * fVar2;
  auVar8._4_4_ = fVar4;
  auVar8._0_4_ = fVar3;
  auVar8._8_4_ = fVar5;
  auVar8._12_4_ = fVar6;
  auVar1._4_4_ = fVar4;
  auVar1._0_4_ = fVar3;
  auVar1._8_4_ = fVar5;
  auVar1._12_4_ = fVar6;
  auVar8 = NEON_ext(auVar8,auVar1,4,1);
  *(ulong *)(unaff_x19 + 0x14) =
       CONCAT44(((param_1._12_4_ - param_7._12_4_ * auVar7._12_4_) - fVar6) -
                param_6._8_4_ * param_5._12_4_,
                (param_1._8_4_ + param_7._8_4_ * auVar7._8_4_ + fVar4) -
                param_6._0_4_ * param_5._8_4_);
  *(ulong *)(unaff_x19 + 0xc) =
       CONCAT44((param_1._4_4_ + param_7._4_4_ * fVar2 + auVar8._12_4_) -
                param_6._8_4_ * param_5._4_4_,
                (param_1._0_4_ + param_7._0_4_ * auVar7._0_4_ + auVar8._4_4_) -
                param_6._4_4_ * param_5._0_4_);
  return;
}


