/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaSetFoveationEyeTracked
ENTRY_POINT: 07442fac
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 138
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;validity_or_gating_hits_1;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


float Meta_XR_MetaXREyeTrackedFoveationFeature__MetaSetFoveationEyeTracked(void)

{
  long lVar1;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s9;
  float fVar6;
  float unaff_s11;
  float fVar7;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000058;
  
  if (*(char *)(unaff_x23 + 0x325) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a0f88);
    *(undefined1 *)(unaff_x23 + 0x325) = 1;
  }
  lVar1 = *(long *)(*unaff_x22 + 0xb8);
  fVar7 = *(float *)(lVar1 + 0x18);
  fVar5 = *(float *)(lVar1 + 0x1c);
  fVar6 = *(float *)(lVar1 + 0x20);
  if (*(char *)(unaff_x21 + 0x382) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    *(undefined1 *)(unaff_x21 + 0x382) = 1;
  }
  fVar2 = fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5;
  fVar3 = unaff_s9;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar2) {
    fVar3 = unaff_s13 * fVar6 + in_stack_00000058._4_4_ * fVar7 + unaff_s9 * fVar5;
    in_stack_00000058._4_4_ = in_stack_00000058._4_4_ - (fVar7 * fVar3) / fVar2;
    unaff_s13 = unaff_s13 - (fVar6 * fVar3) / fVar2;
    fVar3 = unaff_s9 - (fVar5 * fVar3) / fVar2;
  }
  fVar6 = unaff_s14 * unaff_s14;
  fVar5 = fVar6 + unaff_s15 * unaff_s15 + unaff_s11 * unaff_s11;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar5) {
    fVar7 = unaff_s14 * unaff_s13 + unaff_s11 * in_stack_00000058._4_4_ + unaff_s15 * fVar3;
    fVar6 = (unaff_s11 * fVar7) / fVar5;
    in_stack_00000058._4_4_ = in_stack_00000058._4_4_ - fVar6;
    fVar3 = fVar3 - (unaff_s15 * fVar7) / fVar5;
    unaff_s13 = unaff_s13 - (unaff_s14 * fVar7) / fVar5;
  }
  fStack000000000000000c = fStack000000000000000c * unaff_s13;
  if (fStack000000000000000c +
      in_stack_00000000._4_4_ * in_stack_00000058._4_4_ + fStack0000000000000008 * fVar3 <= 0.0) {
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
  fVar7 = *(float *)(lVar1 + 0x18);
  fVar3 = *(float *)(lVar1 + 0x1c);
  fVar2 = *(float *)(lVar1 + 0x20);
  fVar5 = (float)FUN_08abdd04();
  if (*(char *)(unaff_x21 + 0x382) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    *(undefined1 *)(unaff_x21 + 0x382) = 1;
  }
  fVar4 = fVar6 * fVar6 + fVar5 * fVar5 + fStack000000000000000c * fStack000000000000000c;
  fVar7 = unaff_s9 * fVar7;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar4) {
    fVar7 = fVar7 - (fVar5 * (unaff_s9 * fVar2 * fVar6 +
                             fVar7 * fVar5 + unaff_s9 * fVar3 * fStack000000000000000c)) / fVar4;
  }
  return in_stack_00000058._4_4_ + fVar7;
}


