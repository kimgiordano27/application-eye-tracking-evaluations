/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 07443030
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 147
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


float Meta_XR_MetaXREyeTrackedFoveationFeature__get_eyeTrackedFoveatedRenderingSupported
                (long param_1,undefined1 param_2 [16],float param_3)

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
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar7;
  float unaff_s15;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000058;
  
  fVar3 = unaff_s10 * unaff_s10 + param_3 + unaff_s8 * unaff_s8;
  fVar4 = unaff_s9;
  if (**(float **)(param_1 + 0xb8) <= fVar3) {
    fVar4 = unaff_s13 * unaff_s10 + in_stack_00000058._4_4_ * unaff_s12 + unaff_s9 * unaff_s8;
    in_stack_00000058._4_4_ = in_stack_00000058._4_4_ - (unaff_s12 * fVar4) / fVar3;
    unaff_s13 = unaff_s13 - (unaff_s10 * fVar4) / fVar3;
    fVar4 = unaff_s9 - (unaff_s8 * fVar4) / fVar3;
  }
  fVar5 = unaff_s14 * unaff_s14;
  fVar3 = fVar5 + unaff_s15 * unaff_s15 + unaff_s11 * unaff_s11;
  if (**(float **)(param_1 + 0xb8) <= fVar3) {
    fVar2 = unaff_s14 * unaff_s13 + unaff_s11 * in_stack_00000058._4_4_ + unaff_s15 * fVar4;
    fVar5 = (unaff_s11 * fVar2) / fVar3;
    in_stack_00000058._4_4_ = in_stack_00000058._4_4_ - fVar5;
    fVar4 = fVar4 - (unaff_s15 * fVar2) / fVar3;
    unaff_s13 = unaff_s13 - (unaff_s14 * fVar2) / fVar3;
  }
  fStack000000000000000c = fStack000000000000000c * unaff_s13;
  if (fStack000000000000000c +
      in_stack_00000000._4_4_ * in_stack_00000058._4_4_ + fStack0000000000000008 * fVar4 <= 0.0) {
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
  fVar3 = *(float *)(lVar1 + 0x18);
  fVar2 = *(float *)(lVar1 + 0x1c);
  fVar7 = *(float *)(lVar1 + 0x20);
  fVar4 = (float)FUN_08abdd04();
  if (*(char *)(unaff_x21 + 0x382) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    *(undefined1 *)(unaff_x21 + 0x382) = 1;
  }
  fVar6 = fVar5 * fVar5 + fVar4 * fVar4 + fStack000000000000000c * fStack000000000000000c;
  fVar3 = unaff_s9 * fVar3;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar6) {
    fVar3 = fVar3 - (fVar4 * (unaff_s9 * fVar7 * fVar5 +
                             fVar3 * fVar4 + unaff_s9 * fVar2 * fStack000000000000000c)) / fVar6;
  }
  return in_stack_00000058._4_4_ + fVar3;
}


