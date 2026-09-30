/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaGetEyeTrackedFoveationSupported
ENTRY_POINT: 0744304c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 121
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_foveation_hits_4;functionality_foveated_rendering
*/


float Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetEyeTrackedFoveationSupported
                (float param_1,float param_2)

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
  float unaff_s8;
  float fVar6;
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
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  if (param_1 <= param_2) {
    fVar3 = unaff_s13 * unaff_s10 + fStack000000000000005c * unaff_s12 + unaff_s9 * unaff_s8;
    fStack000000000000005c = fStack000000000000005c - (unaff_s12 * fVar3) / param_2;
    unaff_s9 = unaff_s9 - (unaff_s8 * fVar3) / param_2;
    unaff_s13 = unaff_s13 - (unaff_s10 * fVar3) / param_2;
  }
  fVar4 = unaff_s14 * unaff_s14;
  fVar3 = fVar4 + unaff_s15 * unaff_s15 + unaff_s11 * unaff_s11;
  if (param_1 <= fVar3) {
    fVar2 = unaff_s14 * unaff_s13 + unaff_s11 * fStack000000000000005c + unaff_s15 * unaff_s9;
    fVar4 = (unaff_s11 * fVar2) / fVar3;
    fStack000000000000005c = fStack000000000000005c - fVar4;
    unaff_s9 = unaff_s9 - (unaff_s15 * fVar2) / fVar3;
    unaff_s13 = unaff_s13 - (unaff_s14 * fVar2) / fVar3;
  }
  fStack000000000000000c = fStack000000000000000c * unaff_s13;
  if (fStack000000000000000c +
      in_stack_00000000._4_4_ * fStack000000000000005c + fStack0000000000000008 * unaff_s9 <= 0.0) {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    fStack000000000000005c = **(float **)(*unaff_x22 + 0xb8);
  }
  if (*(char *)(unaff_x23 + 0x325) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a0f88);
    *(undefined1 *)(unaff_x23 + 0x325) = 1;
  }
  lVar1 = *(long *)(*unaff_x22 + 0xb8);
  fVar2 = *(float *)(lVar1 + 0x18);
  fVar6 = *(float *)(lVar1 + 0x1c);
  fVar7 = *(float *)(lVar1 + 0x20);
  fVar3 = (float)FUN_08abdd04();
  if (*(char *)(unaff_x21 + 0x382) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    *(undefined1 *)(unaff_x21 + 0x382) = 1;
  }
  fVar5 = fVar4 * fVar4 + fVar3 * fVar3 + fStack000000000000000c * fStack000000000000000c;
  fVar2 = fStack0000000000000058 * fVar2;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar5) {
    fVar2 = fVar2 - (fVar3 * (fStack0000000000000058 * fVar7 * fVar4 +
                             fVar2 * fVar3 + fStack0000000000000058 * fVar6 * fStack000000000000000c
                             )) / fVar5;
  }
  return fStack000000000000005c + fVar2;
}


