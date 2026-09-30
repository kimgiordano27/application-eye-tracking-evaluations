/*
FUNCTION_NAME: FoveationFeature$$setFoveationEyeTracked
ENTRY_POINT: 085fa494
PROGRAM: cac-libil2cpp.so
SCORE: 138
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_1;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FoveationFeature__setFoveationEyeTracked(void)

{
  long unaff_x19;
  float fVar1;
  float fVar2;
  float fVar3;
  float unaff_s8;
  
  FUN_08624974();
  if (DAT_0968487f == '\0') {
    FUN_03f13384(PTR_DAT_0910dc68);
    DAT_0968487f = '\x01';
  }
  fVar1 = ABS(unaff_s8);
  if (ABS(unaff_s8) <= 0.0) {
    fVar1 = 0.0;
  }
  fVar3 = **(float **)(*(long *)PTR_DAT_0910dc68 + 0xb8) * 8.0;
  fVar2 = fVar1 * DAT_01928e1c;
  if (fVar1 * DAT_01928e1c <= fVar3) {
    fVar2 = fVar3;
  }
  if (ABS(0.0 - unaff_s8) < fVar2) {
    *(undefined4 *)(unaff_x19 + 0x68) = 3;
  }
  return;
}


