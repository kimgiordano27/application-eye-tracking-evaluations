/*
FUNCTION_NAME: OVRPlugin$$SetTrackingOriginType
ENTRY_POINT: 0531fd38
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin__SetTrackingOriginType(float param_1,float param_2)

{
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x25;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s11;
  float unaff_s13;
  undefined8 in_stack_00000020;
  
  fVar1 = SQRT(unaff_s13 * unaff_s13 + param_1 + param_2);
  if (fVar1 <= *(float *)(unaff_x25 + 0x6e4)) {
    if (*(char *)(unaff_x22 + 0x2c1) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      *(undefined1 *)(unaff_x22 + 0x2c1) = 1;
    }
    fVar1 = **(float **)(*unaff_x21 + 0xb8);
  }
  else {
    fVar1 = unaff_s11 / fVar1;
  }
  fVar2 = (float)FUN_0531ec70();
  fVar3 = (float)FUN_0526fc7c(0);
  fVar3 = fVar3 - (float)(int)(fVar3 / 360.0) * 360.0;
  fVar5 = 360.0;
  if (fVar3 <= 360.0) {
    fVar5 = fVar3;
  }
  fVar4 = 0.0;
  if (0.0 <= fVar3) {
    fVar4 = fVar5;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar5 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
    if ((fVar5 < fVar4) && (fVar1 = fVar2, ABS(fVar4 - fVar5) < ABS(360.0 - fVar4))) {
      fVar1 = (float)FUN_0531ed1c();
    }
    fVar5 = (float)FUN_0531ef30();
    return in_stack_00000020._4_4_ + fVar1 * fVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


