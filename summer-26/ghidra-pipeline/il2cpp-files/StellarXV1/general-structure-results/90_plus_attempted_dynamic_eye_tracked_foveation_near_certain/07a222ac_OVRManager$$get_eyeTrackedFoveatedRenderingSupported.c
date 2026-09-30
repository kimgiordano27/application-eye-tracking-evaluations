/*
FUNCTION_NAME: OVRManager$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 07a222ac
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRManager__get_eyeTrackedFoveatedRenderingSupported
               (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],undefined4 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  long lVar5;
  undefined1 (*pauVar6) [12];
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float in_stack_00000000;
  float in_stack_00000010;
  float in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  auVar14._8_8_ = in_stack_00000038;
  auVar14._0_8_ = in_stack_00000030;
  *(undefined1 *)(unaff_x22 + 0x4ec) = 1;
  fVar7 = (float)FUN_089b9694(in_stack_00000020,param_2,auVar14,param_4,
                              *(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 0x48),0);
  puVar4 = PTR_DAT_092eff38;
  if (unaff_x19 != 0) {
    FUN_089dbc64(fVar7 * *(float *)(unaff_x20 + 0x60),param_2 * *(float *)(unaff_x20 + 0x60));
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar5 = *(long *)puVar4;
    }
    fVar22 = (float)in_stack_00000030;
    pauVar6 = *(undefined1 (**) [12])(lVar5 + 0xb8);
    fVar9 = (float)*(undefined8 *)(*pauVar6 + 8);
    fVar10 = (float)((ulong)*(undefined8 *)(*pauVar6 + 8) >> 0x20);
    fVar7 = (float)*(undefined8 *)*pauVar6;
    fVar8 = (float)((ulong)*(undefined8 *)*pauVar6 >> 0x20);
    fVar16 = fVar8 * in_stack_00000000;
    fVar17 = fVar10 * in_stack_00000000;
    auVar18._4_4_ = fVar16;
    auVar18._0_4_ = fVar7 * in_stack_00000000;
    auVar18._8_4_ = fVar9 * in_stack_00000000;
    auVar18._12_4_ = fVar17;
    auVar2._4_4_ = fVar16;
    auVar2._0_4_ = fVar7 * in_stack_00000000;
    auVar2._8_4_ = fVar9 * in_stack_00000000;
    auVar2._12_4_ = fVar17;
    auVar18 = NEON_ext(auVar18,auVar2,4,1);
    fVar11 = in_stack_00000020 * fVar8;
    fVar12 = in_stack_00000010 * fVar9;
    fVar13 = in_stack_00000010 * fVar8;
    auVar19._12_4_ = fVar10;
    auVar19._0_12_ = *pauVar6;
    auVar3._4_4_ = fVar10;
    auVar3._0_4_ = fVar10;
    auVar3._8_4_ = fVar10;
    auVar3._12_4_ = fVar10;
    auVar14 = NEON_ext(auVar3,auVar19,4,1);
    auVar20._4_4_ = fVar11;
    auVar20._0_4_ = fVar22 * fVar7;
    auVar20._8_4_ = fVar12;
    auVar20._12_4_ = fVar13;
    auVar1._4_4_ = fVar11;
    auVar1._0_4_ = fVar22 * fVar7;
    auVar1._8_4_ = fVar12;
    auVar1._12_4_ = fVar13;
    auVar20 = NEON_ext(auVar20,auVar1,0xc,1);
    auVar21._4_4_ = in_stack_00000010;
    auVar21._0_4_ = fVar22;
    auVar21._8_4_ = fVar22;
    auVar21._12_4_ = in_stack_00000020;
    auVar19 = NEON_rev64(auVar21,4);
    auVar15._0_4_ = (auVar18._4_4_ + fVar22 * auVar14._0_4_ + fVar11) - auVar19._0_4_ * fVar7;
    auVar15._4_4_ =
         (auVar18._12_4_ + in_stack_00000020 * auVar14._4_4_ + fVar12) - auVar19._4_4_ * fVar8;
    auVar15._8_4_ =
         (fVar16 + in_stack_00000010 * auVar14._8_4_ + auVar20._4_4_) - auVar19._8_4_ * fVar9;
    auVar15._12_4_ =
         ((fVar17 - in_stack_00000020 * auVar14._12_4_) - fVar13) - auVar19._12_4_ * fVar9;
    FUN_089dbfa0(auVar15._4_4_,auVar15._8_4_,auVar15,auVar15._12_4_);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


