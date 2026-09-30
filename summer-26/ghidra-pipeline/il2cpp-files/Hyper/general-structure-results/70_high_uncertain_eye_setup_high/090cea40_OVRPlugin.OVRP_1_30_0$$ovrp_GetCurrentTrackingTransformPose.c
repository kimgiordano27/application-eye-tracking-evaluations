/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetCurrentTrackingTransformPose
ENTRY_POINT: 090cea40
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin_OVRP_1_30_0__ovrp_GetCurrentTrackingTransformPose
                (float param_1,float param_2,undefined1 param_3 [16],undefined1 param_4 [16],
                float param_5,undefined1 param_6 [16],float param_7,undefined1 param_8 [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long unaff_x19;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float in_s16;
  float in_register_00005204;
  float in_register_00005208;
  float in_s17;
  float in_register_00005224;
  float in_s20;
  float in_register_00005288;
  
  param_5 = (param_1 - param_2) - param_5;
  fVar10 = (in_s16 + param_3._0_4_ + in_s17) - param_8._0_4_ * param_6._8_4_;
  fVar11 = (in_register_00005204 + param_3._4_4_ + in_register_00005224) -
           param_8._4_4_ * in_register_00005288;
  fVar12 = (in_register_00005208 + param_3._8_4_ + param_7) - in_s20 * param_6._12_4_;
  fVar9 = (float)*(undefined8 *)(unaff_x19 + 0x2c);
  fVar15 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x2c) >> 0x20);
  uVar4 = *(undefined8 *)*(undefined1 (*) [12])(unaff_x19 + 0x24);
  fVar7 = (float)uVar4;
  fVar14 = (float)((ulong)uVar4 >> 0x20);
  auVar16._4_4_ = fVar15;
  auVar16._0_4_ = fVar15;
  auVar16._8_4_ = fVar15;
  auVar16._12_4_ = fVar15;
  fVar5 = fVar7 * param_5;
  fVar6 = fVar9 * param_5;
  auVar17._12_4_ = fVar15;
  auVar17._0_12_ = *(undefined1 (*) [12])(unaff_x19 + 0x24);
  auVar17 = NEON_ext(auVar16,auVar17,4,1);
  fVar7 = fVar7 * fVar11;
  fVar8 = fVar14 * fVar12;
  fVar9 = fVar9 * fVar10;
  fVar10 = fVar14 * fVar10;
  auVar13._4_4_ = fVar14 * param_5;
  auVar13._0_4_ = fVar5;
  auVar13._8_4_ = fVar6;
  auVar13._12_4_ = fVar15 * param_5;
  auVar1._4_4_ = fVar14 * param_5;
  auVar1._0_4_ = fVar5;
  auVar1._8_4_ = fVar6;
  auVar1._12_4_ = fVar15 * param_5;
  auVar13 = NEON_ext(auVar13,auVar1,4,1);
  auVar2._4_4_ = fVar8;
  auVar2._0_4_ = fVar7;
  auVar2._8_4_ = fVar9;
  auVar2._12_4_ = fVar10;
  auVar3._4_4_ = fVar8;
  auVar3._0_4_ = fVar7;
  auVar3._8_4_ = fVar9;
  auVar3._12_4_ = fVar10;
  NEON_ext(auVar2,auVar3,0xc,1);
  return (auVar13._12_4_ + auVar17._4_4_ * fVar12 + fVar9) - fVar14 * fVar11;
}


