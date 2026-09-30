/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$.ctor
ENTRY_POINT: 074430dc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


float Meta_XR_MetaXREyeTrackedFoveationFeature___ctor
                (float param_1,float param_2,undefined1 param_3 [16],float param_4,float param_5,
                float param_6)

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
  float unaff_s10;
  float unaff_s11;
  float unaff_s14;
  float fVar6;
  float unaff_s15;
  float fVar7;
  undefined8 in_stack_00000000;
  float in_stack_00000008;
  float in_stack_00000058;
  float fStack000000000000005c;
  
  param_4 = param_4 + param_1;
  fVar3 = (unaff_s11 * param_4) / param_2;
  fStack000000000000005c = param_5 - fVar3;
  param_6 = param_6 * (unaff_s9 - (unaff_s14 * param_4) / param_2);
  if (param_6 + in_stack_00000000._4_4_ * fStack000000000000005c +
                in_stack_00000008 * (unaff_s10 - (unaff_s15 * param_4) / param_2) <= 0.0) {
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
  fVar7 = *(float *)(lVar1 + 0x18);
  fVar5 = *(float *)(lVar1 + 0x1c);
  fVar6 = *(float *)(lVar1 + 0x20);
  fVar2 = (float)FUN_08abdd04();
  if (*(char *)(unaff_x21 + 0x382) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    *(undefined1 *)(unaff_x21 + 0x382) = 1;
  }
  fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + param_6 * param_6;
  fVar7 = in_stack_00000058 * fVar7;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar4) {
    fVar7 = fVar7 - (fVar2 * (in_stack_00000058 * fVar6 * fVar3 +
                             fVar7 * fVar2 + in_stack_00000058 * fVar5 * param_6)) / fVar4;
  }
  return fStack000000000000005c + fVar7;
}


