/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaGetFoveationEyeTracked
ENTRY_POINT: 07442ecc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 141
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;validity_or_gating_hits_2;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


float Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked(void)

{
  float *pfVar1;
  long lVar2;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float fVar7;
  float unaff_s9;
  float unaff_s10;
  float fVar8;
  float unaff_s11;
  float unaff_s12;
  float fVar9;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar10;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000058;
  
  FUN_03d2d2b0(PTR_DAT_091a2ee8);
  *(undefined1 *)(unaff_x21 + 0x382) = 1;
                    /* try { // try from 07442eec to 07542f53 has its CatchHandler @ 07442eec
                       catch() { ... } // from try @ 07442eec with catch @ 07442eec
                       catch() { ... } // from try @ 07442f88 with catch @ 07442eec
                       catch() { ... } // from try @ 07442fd4 with catch @ 07442eec
                       catch() { ... } // from try @ 0744300c with catch @ 07442eec */
  fVar3 = unaff_s10 * unaff_s10 + unaff_s15 * unaff_s15 + unaff_s8 * unaff_s8;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar3) {
    fVar4 = unaff_s12 * unaff_s10 + unaff_s11 * unaff_s15 + unaff_s14 * unaff_s8;
    unaff_s11 = unaff_s11 - (unaff_s15 * fVar4) / fVar3;
    unaff_s14 = unaff_s14 - (unaff_s8 * fVar4) / fVar3;
    unaff_s12 = unaff_s12 - (unaff_s10 * fVar4) / fVar3;
  }
  if (DAT_0983637d == '\0') {
                    /* try { // try from 07442f54 to 07542f5f has its CatchHandler @ 07442fb8 */
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_0983637d = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  fVar3 = SQRT(unaff_s12 * unaff_s12 + unaff_s11 * unaff_s11 + unaff_s14 * unaff_s14);
  if (fVar3 <= DAT_0191476c) {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    pfVar1 = *(float **)(*unaff_x22 + 0xb8);
    fVar4 = *pfVar1;
    fVar10 = pfVar1[1];
    fVar3 = pfVar1[2];
  }
  else {
    fVar4 = unaff_s11 / fVar3;
    fVar10 = unaff_s14 / fVar3;
    fVar3 = unaff_s12 / fVar3;
  }
  if (*(char *)(unaff_x23 + 0x325) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a0f88);
    *(undefined1 *)(unaff_x23 + 0x325) = 1;
  }
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  fVar9 = *(float *)(lVar2 + 0x18);
  fVar7 = *(float *)(lVar2 + 0x1c);
  fVar8 = *(float *)(lVar2 + 0x20);
  if (*(char *)(unaff_x21 + 0x382) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    *(undefined1 *)(unaff_x21 + 0x382) = 1;
  }
  fVar5 = fVar8 * fVar8 + fVar9 * fVar9 + fVar7 * fVar7;
  fVar6 = unaff_s9;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar5) {
    fVar6 = unaff_s13 * fVar8 + in_stack_00000058._4_4_ * fVar9 + unaff_s9 * fVar7;
    in_stack_00000058._4_4_ = in_stack_00000058._4_4_ - (fVar9 * fVar6) / fVar5;
    unaff_s13 = unaff_s13 - (fVar8 * fVar6) / fVar5;
    fVar6 = unaff_s9 - (fVar7 * fVar6) / fVar5;
  }
  fVar8 = fVar3 * fVar3;
  fVar7 = fVar8 + fVar10 * fVar10 + fVar4 * fVar4;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar7) {
    fVar9 = fVar3 * unaff_s13 + fVar4 * in_stack_00000058._4_4_ + fVar10 * fVar6;
    fVar8 = (fVar4 * fVar9) / fVar7;
    in_stack_00000058._4_4_ = in_stack_00000058._4_4_ - fVar8;
    fVar6 = fVar6 - (fVar10 * fVar9) / fVar7;
    unaff_s13 = unaff_s13 - (fVar3 * fVar9) / fVar7;
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
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  fVar4 = *(float *)(lVar2 + 0x18);
  fVar10 = *(float *)(lVar2 + 0x1c);
  fVar7 = *(float *)(lVar2 + 0x20);
  fVar3 = (float)FUN_08abdd04();
  if (*(char *)(unaff_x21 + 0x382) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    *(undefined1 *)(unaff_x21 + 0x382) = 1;
  }
  fVar9 = fVar8 * fVar8 + fVar3 * fVar3 + fStack000000000000000c * fStack000000000000000c;
  fVar4 = unaff_s9 * fVar4;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar9) {
    fVar4 = fVar4 - (fVar3 * (unaff_s9 * fVar7 * fVar8 +
                             fVar4 * fVar3 + unaff_s9 * fVar10 * fStack000000000000000c)) / fVar9;
  }
  return in_stack_00000058._4_4_ + fVar4;
}


