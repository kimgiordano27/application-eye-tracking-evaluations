/*
FUNCTION_NAME: OVRPlugin$$GetTrackingOriginType
ENTRY_POINT: 0531fce8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin__GetTrackingOriginType(float param_1,float param_2,float param_3)

{
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  float fVar1;
  float fVar2;
  float unaff_s8;
  float unaff_s10;
  float unaff_s11;
  float fVar3;
  float unaff_s12;
  float fVar4;
  float unaff_s13;
  float fVar5;
  undefined8 in_stack_00000020;
  
  fVar3 = unaff_s11 - param_2 / unaff_s8;
  fVar4 = unaff_s12 - param_3 / unaff_s8;
  fVar5 = unaff_s13 - (unaff_s10 * param_1) / unaff_s8;
  if (*(char *)(unaff_x26 + 0x2bf) == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    *(undefined1 *)(unaff_x26 + 0x2bf) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar4 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4);
  if (fVar4 <= *(float *)(unaff_x25 + 0x6e4)) {
    if (*(char *)(unaff_x22 + 0x2c1) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      *(undefined1 *)(unaff_x22 + 0x2c1) = 1;
    }
    fVar3 = **(float **)(*unaff_x21 + 0xb8);
  }
  else {
    fVar3 = fVar3 / fVar4;
  }
  fVar5 = (float)FUN_0531ec70();
  fVar1 = (float)FUN_0526fc7c(0);
  fVar1 = fVar1 - (float)(int)(fVar1 / 360.0) * 360.0;
  fVar4 = 360.0;
  if (fVar1 <= 360.0) {
    fVar4 = fVar1;
  }
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar4;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar4 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
    if ((fVar4 < fVar2) && (fVar3 = fVar5, ABS(fVar2 - fVar4) < ABS(360.0 - fVar2))) {
      fVar3 = (float)FUN_0531ed1c();
    }
    fVar4 = (float)FUN_0531ef30();
    return in_stack_00000020._4_4_ + fVar3 * fVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


