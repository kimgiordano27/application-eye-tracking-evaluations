/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 07442eb0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 152
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


float Meta_XR_MetaXREyeTrackedFoveationFeature__get_eyeTrackedFoveatedRenderingEnabled(void)

{
  undefined1 in_w8;
  long lVar1;
  float *pfVar2;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s9;
  float fVar8;
  float unaff_s11;
  float unaff_s12;
  float fVar9;
  float unaff_s13;
  float unaff_s14;
  float fVar10;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000058;
  
  *(undefined1 *)(unaff_x23 + 0x325) = in_w8;
  lVar1 = *(long *)(*unaff_x22 + 0xb8);
  fVar10 = *(float *)(lVar1 + 0x18);
  fVar7 = *(float *)(lVar1 + 0x1c);
  fVar8 = *(float *)(lVar1 + 0x20);
  if (*(char *)(unaff_x21 + 0x382) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    *(undefined1 *)(unaff_x21 + 0x382) = 1;
  }
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10 + fVar7 * fVar7;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar3) {
    fVar4 = unaff_s12 * fVar8 + unaff_s11 * fVar10 + unaff_s14 * fVar7;
    unaff_s11 = unaff_s11 - (fVar10 * fVar4) / fVar3;
    unaff_s14 = unaff_s14 - (fVar7 * fVar4) / fVar3;
    unaff_s12 = unaff_s12 - (fVar8 * fVar4) / fVar3;
  }
  if (DAT_0983637d == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_0983637d = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  fVar7 = SQRT(unaff_s12 * unaff_s12 + unaff_s11 * unaff_s11 + unaff_s14 * unaff_s14);
  if (fVar7 <= DAT_0191476c) {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x22 + 0xb8);
    fVar8 = *pfVar2;
    fVar10 = pfVar2[1];
    fVar7 = pfVar2[2];
  }
  else {
    fVar8 = unaff_s11 / fVar7;
    fVar10 = unaff_s14 / fVar7;
    fVar7 = unaff_s12 / fVar7;
  }
  if (*(char *)(unaff_x23 + 0x325) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a0f88);
    *(undefined1 *)(unaff_x23 + 0x325) = 1;
  }
  lVar1 = *(long *)(*unaff_x22 + 0xb8);
  fVar9 = *(float *)(lVar1 + 0x18);
  fVar3 = *(float *)(lVar1 + 0x1c);
  fVar4 = *(float *)(lVar1 + 0x20);
  if (*(char *)(unaff_x21 + 0x382) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    *(undefined1 *)(unaff_x21 + 0x382) = 1;
  }
  fVar5 = fVar4 * fVar4 + fVar9 * fVar9 + fVar3 * fVar3;
  fVar6 = unaff_s9;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar5) {
    fVar6 = unaff_s13 * fVar4 + in_stack_00000058._4_4_ * fVar9 + unaff_s9 * fVar3;
    in_stack_00000058._4_4_ = in_stack_00000058._4_4_ - (fVar9 * fVar6) / fVar5;
    unaff_s13 = unaff_s13 - (fVar4 * fVar6) / fVar5;
    fVar6 = unaff_s9 - (fVar3 * fVar6) / fVar5;
  }
  fVar4 = fVar7 * fVar7;
  fVar3 = fVar4 + fVar10 * fVar10 + fVar8 * fVar8;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar3) {
    fVar9 = fVar7 * unaff_s13 + fVar8 * in_stack_00000058._4_4_ + fVar10 * fVar6;
    fVar4 = (fVar8 * fVar9) / fVar3;
    in_stack_00000058._4_4_ = in_stack_00000058._4_4_ - fVar4;
    fVar6 = fVar6 - (fVar10 * fVar9) / fVar3;
    unaff_s13 = unaff_s13 - (fVar7 * fVar9) / fVar3;
  }
  fStack000000000000000c = fStack000000000000000c * unaff_s13;
  if (fStack000000000000000c +
      in_stack_00000000._4_4_ * in_stack_00000058._4_4_ + fStack0000000000000008 * fVar6 <= 0.0) {
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
  lVar1 = *(long *)(*unaff_x22 + 0xb8);
  fVar8 = *(float *)(lVar1 + 0x18);
  fVar10 = *(float *)(lVar1 + 0x1c);
  fVar3 = *(float *)(lVar1 + 0x20);
  fVar7 = (float)FUN_08abdd04();
  if (*(char *)(unaff_x21 + 0x382) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    *(undefined1 *)(unaff_x21 + 0x382) = 1;
  }
  fVar9 = fVar4 * fVar4 + fVar7 * fVar7 + fStack000000000000000c * fStack000000000000000c;
  fVar8 = unaff_s9 * fVar8;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar9) {
    fVar8 = fVar8 - (fVar7 * (unaff_s9 * fVar3 * fVar4 +
                             fVar8 * fVar7 + unaff_s9 * fVar10 * fStack000000000000000c)) / fVar9;
  }
  return in_stack_00000058._4_4_ + fVar8;
}


