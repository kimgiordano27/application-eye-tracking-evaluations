/*
FUNCTION_NAME: FoveationFeature$$SessionCreate
ENTRY_POINT: 085fa3e4
PROGRAM: cac-libil2cpp.so
SCORE: 88
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: validity_gate;telemetry;foveation_rendering;keyword_support
EVIDENCE: validity_or_gating_hits_2;telemetry_or_network_hits_2;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


void FoveationFeature__SessionCreate(void)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  
  uVar1 = FUN_087fdf64();
  if ((uVar1 & 1) == 0) {
    *(undefined4 *)(unaff_x19 + 0x68) = 3;
  }
  else {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    FUN_085d6fac(*(undefined4 *)(unaff_x19 + 0x90));
  }
  *(undefined4 *)(unaff_x19 + 0x90) = 0;
  FUN_08624974();
  if (DAT_0968487f == '\0') {
    FUN_03f13384(PTR_DAT_0910dc68);
    DAT_0968487f = '\x01';
  }
  fVar2 = ABS(unaff_s8);
  if (ABS(unaff_s8) <= 0.0) {
    fVar2 = 0.0;
  }
  fVar4 = **(float **)(*(long *)PTR_DAT_0910dc68 + 0xb8) * 8.0;
  fVar3 = fVar2 * DAT_01928e1c;
  if (fVar2 * DAT_01928e1c <= fVar4) {
    fVar3 = fVar4;
  }
  if (ABS(0.0 - unaff_s8) < fVar3) {
    *(undefined4 *)(unaff_x19 + 0x68) = 3;
  }
  return;
}


