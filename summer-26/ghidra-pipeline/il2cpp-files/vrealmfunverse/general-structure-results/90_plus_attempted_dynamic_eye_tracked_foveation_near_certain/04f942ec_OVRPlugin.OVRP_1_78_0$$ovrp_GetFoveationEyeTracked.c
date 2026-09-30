/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFoveationEyeTracked
ENTRY_POINT: 04f942ec
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 129
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFoveationEyeTracked
               (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],
               undefined1 param_4 [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long unaff_x20;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar4 = (float)FUN_05c9a10c();
  fVar18 = (float)*(undefined8 *)(unaff_x20 + 0xa4);
  fVar19 = (float)((ulong)*(undefined8 *)(unaff_x20 + 0xa4) >> 0x20);
  uVar3 = *(undefined8 *)*(undefined1 (*) [12])(unaff_x20 + 0x9c);
  fVar16 = (float)uVar3;
  fVar17 = (float)((ulong)uVar3 >> 0x20);
  fVar11 = param_4._0_4_;
  fVar7 = param_3._0_4_;
  auVar8._4_4_ = fVar19;
  auVar8._0_4_ = fVar19;
  auVar8._8_4_ = fVar19;
  auVar8._12_4_ = fVar19;
  auVar9._12_4_ = fVar19;
  auVar9._0_12_ = *(undefined1 (*) [12])(unaff_x20 + 0x9c);
  auVar9 = NEON_ext(auVar8,auVar9,4,1);
  fVar5 = fVar4 * fVar17;
  fVar6 = param_2 * fVar17;
  fVar13 = fVar7 * fVar17;
  fVar14 = fVar4 * fVar18;
  fVar15 = fVar7 * fVar18;
  auVar10._4_4_ = fVar5;
  auVar10._0_4_ = fVar7 * fVar16;
  auVar10._8_4_ = param_2 * fVar18;
  auVar10._12_4_ = fVar6;
  auVar12._4_4_ = fVar5;
  auVar12._0_4_ = fVar7 * fVar16;
  auVar12._8_4_ = param_2 * fVar18;
  auVar12._12_4_ = fVar6;
  auVar10 = NEON_ext(auVar10,auVar12,4,1);
  auVar1._4_4_ = fVar13;
  auVar1._0_4_ = param_2 * fVar16;
  auVar1._8_4_ = fVar14;
  auVar1._12_4_ = fVar15;
  auVar2._4_4_ = fVar13;
  auVar2._0_4_ = param_2 * fVar16;
  auVar2._8_4_ = fVar14;
  auVar2._12_4_ = fVar15;
  auVar12 = NEON_ext(auVar1,auVar2,0xc,1);
  *(ulong *)(unaff_x20 + 0xc0) =
       CONCAT44(((fVar19 * fVar11 - fVar4 * auVar9._12_4_) - fVar6) - fVar15,
                (fVar18 * fVar11 + fVar7 * auVar9._8_4_ + fVar5) - auVar12._4_4_);
  *(ulong *)(unaff_x20 + 0xb8) =
       CONCAT44((fVar17 * fVar11 + param_2 * auVar9._4_4_ + auVar10._12_4_) - fVar14,
                (fVar16 * fVar11 + fVar4 * auVar9._0_4_ + auVar10._4_4_) - fVar13);
  FUN_04d9f2a8();
  return;
}


