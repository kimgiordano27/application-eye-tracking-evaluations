/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 07a222f8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__GetEyeTrackedFoveatedRenderingSupported(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  undefined1 (*pauVar4) [12];
  long *unaff_x20;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float in_stack_00000000;
  float in_stack_00000010;
  float in_stack_00000020;
  float in_stack_00000030;
  
  lVar3 = *unaff_x20;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar3 = *unaff_x20;
  }
  pauVar4 = *(undefined1 (**) [12])(lVar3 + 0xb8);
  fVar7 = (float)*(undefined8 *)(*pauVar4 + 8);
  fVar8 = (float)((ulong)*(undefined8 *)(*pauVar4 + 8) >> 0x20);
  fVar5 = (float)*(undefined8 *)*pauVar4;
  fVar6 = (float)((ulong)*(undefined8 *)*pauVar4 >> 0x20);
  fVar14 = fVar6 * in_stack_00000000;
  fVar15 = fVar8 * in_stack_00000000;
  auVar16._4_4_ = fVar14;
  auVar16._0_4_ = fVar5 * in_stack_00000000;
  auVar16._8_4_ = fVar7 * in_stack_00000000;
  auVar16._12_4_ = fVar15;
  auVar1._4_4_ = fVar14;
  auVar1._0_4_ = fVar5 * in_stack_00000000;
  auVar1._8_4_ = fVar7 * in_stack_00000000;
  auVar1._12_4_ = fVar15;
  auVar16 = NEON_ext(auVar16,auVar1,4,1);
  fVar9 = in_stack_00000020 * fVar6;
  fVar10 = in_stack_00000010 * fVar7;
  fVar11 = in_stack_00000010 * fVar6;
  auVar12._12_4_ = fVar8;
  auVar12._0_12_ = *pauVar4;
  auVar2._4_4_ = fVar8;
  auVar2._0_4_ = fVar8;
  auVar2._8_4_ = fVar8;
  auVar2._12_4_ = fVar8;
  auVar12 = NEON_ext(auVar2,auVar12,4,1);
  auVar17._4_4_ = fVar9;
  auVar17._0_4_ = in_stack_00000030 * fVar5;
  auVar17._8_4_ = fVar10;
  auVar17._12_4_ = fVar11;
  auVar18._4_4_ = fVar9;
  auVar18._0_4_ = in_stack_00000030 * fVar5;
  auVar18._8_4_ = fVar10;
  auVar18._12_4_ = fVar11;
  auVar18 = NEON_ext(auVar17,auVar18,0xc,1);
  auVar19._4_4_ = in_stack_00000010;
  auVar19._0_4_ = in_stack_00000030;
  auVar19._8_4_ = in_stack_00000030;
  auVar19._12_4_ = in_stack_00000020;
  auVar17 = NEON_rev64(auVar19,4);
  auVar13._0_4_ =
       (auVar16._4_4_ + in_stack_00000030 * auVar12._0_4_ + fVar9) - auVar17._0_4_ * fVar5;
  auVar13._4_4_ =
       (auVar16._12_4_ + in_stack_00000020 * auVar12._4_4_ + fVar10) - auVar17._4_4_ * fVar6;
  auVar13._8_4_ =
       (fVar14 + in_stack_00000010 * auVar12._8_4_ + auVar18._4_4_) - auVar17._8_4_ * fVar7;
  auVar13._12_4_ = ((fVar15 - in_stack_00000020 * auVar12._12_4_) - fVar11) - auVar17._12_4_ * fVar7
  ;
  FUN_089dbfa0(auVar13._4_4_,auVar13._8_4_,auVar13,auVar13._12_4_);
  return;
}


