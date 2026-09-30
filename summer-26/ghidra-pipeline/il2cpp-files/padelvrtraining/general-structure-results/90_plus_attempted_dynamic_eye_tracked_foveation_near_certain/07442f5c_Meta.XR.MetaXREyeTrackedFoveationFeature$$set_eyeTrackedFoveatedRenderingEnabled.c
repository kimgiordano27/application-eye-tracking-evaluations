/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 07442f5c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 150
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


float Meta_XR_MetaXREyeTrackedFoveationFeature__set_eyeTrackedFoveatedRenderingEnabled(void)

{
  undefined1 in_w8;
  float *pfVar1;
  long lVar2;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s9;
  float fVar7;
  float unaff_s11;
  float fVar8;
  float unaff_s12;
  float fVar9;
  float unaff_s13;
  float unaff_s14;
  float fVar10;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000058;
  
  *(undefined1 *)(unaff_x24 + 0x37d) = in_w8;
  if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
                    /* try { // try from 07442f78 to 07542f7b has its CatchHandler @ 07442fb0 */
                    /* try { // try from 07442f7c to 07542f87 has its CatchHandler @ 07442fb4 */
                    /* try { // try from 07442f88 to 07542fcf has its CatchHandler @ 07442eec */
  fVar3 = SQRT(unaff_s12 * unaff_s12 + unaff_s11 * unaff_s11 + unaff_s14 * unaff_s14);
  if (fVar3 <= DAT_0191476c) {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    pfVar1 = *(float **)(*unaff_x22 + 0xb8);
    fVar8 = *pfVar1;
    fVar10 = pfVar1[1];
    fVar3 = pfVar1[2];
  }
  else {
    fVar8 = unaff_s11 / fVar3;
    fVar10 = unaff_s14 / fVar3;
    fVar3 = unaff_s12 / fVar3;
  }
  if (*(char *)(unaff_x23 + 0x325) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a0f88);
    *(undefined1 *)(unaff_x23 + 0x325) = 1;
  }
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  fVar9 = *(float *)(lVar2 + 0x18);
  fVar6 = *(float *)(lVar2 + 0x1c);
  fVar7 = *(float *)(lVar2 + 0x20);
  if (*(char *)(unaff_x21 + 0x382) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    *(undefined1 *)(unaff_x21 + 0x382) = 1;
  }
  fVar4 = fVar7 * fVar7 + fVar9 * fVar9 + fVar6 * fVar6;
  fVar5 = unaff_s9;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar4) {
    fVar5 = unaff_s13 * fVar7 + in_stack_00000058._4_4_ * fVar9 + unaff_s9 * fVar6;
    in_stack_00000058._4_4_ = in_stack_00000058._4_4_ - (fVar9 * fVar5) / fVar4;
    unaff_s13 = unaff_s13 - (fVar7 * fVar5) / fVar4;
    fVar5 = unaff_s9 - (fVar6 * fVar5) / fVar4;
  }
  fVar7 = fVar3 * fVar3;
  fVar6 = fVar7 + fVar10 * fVar10 + fVar8 * fVar8;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar6) {
    fVar9 = fVar3 * unaff_s13 + fVar8 * in_stack_00000058._4_4_ + fVar10 * fVar5;
    fVar7 = (fVar8 * fVar9) / fVar6;
    in_stack_00000058._4_4_ = in_stack_00000058._4_4_ - fVar7;
    fVar5 = fVar5 - (fVar10 * fVar9) / fVar6;
    unaff_s13 = unaff_s13 - (fVar3 * fVar9) / fVar6;
  }
  fStack000000000000000c = fStack000000000000000c * unaff_s13;
  if (fStack000000000000000c +
      in_stack_00000000._4_4_ * in_stack_00000058._4_4_ + fStack0000000000000008 * fVar5 <= 0.0) {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    in_stack_00000058._4_4_ = **(float **)(*unaff_x22 + 0xb8);
  }
  if (*(char *)(unaff_x23 + 0x325) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a0f88);
    *(undefined1 *)(unaff_x23 + 0x325) = 1;
  }
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  fVar8 = *(float *)(lVar2 + 0x18);
  fVar10 = *(float *)(lVar2 + 0x1c);
  fVar6 = *(float *)(lVar2 + 0x20);
  fVar3 = (float)FUN_08abdd04();
  if (*(char *)(unaff_x21 + 0x382) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    *(undefined1 *)(unaff_x21 + 0x382) = 1;
  }
  fVar9 = fVar7 * fVar7 + fVar3 * fVar3 + fStack000000000000000c * fStack000000000000000c;
  fVar8 = unaff_s9 * fVar8;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar9) {
    fVar8 = fVar8 - (fVar3 * (unaff_s9 * fVar6 * fVar7 +
                             fVar8 * fVar3 + unaff_s9 * fVar10 * fStack000000000000000c)) / fVar9;
  }
  return in_stack_00000058._4_4_ + fVar8;
}


