/*
FUNCTION_NAME: OVRPlugin$$IsMixedRealityInitialized
ENTRY_POINT: 07a399d4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__IsMixedRealityInitialized(void)

{
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  undefined8 in_stack_00000020;
  
  if (*(char *)(unaff_x26 + 0x4e7) == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    *(undefined1 *)(unaff_x26 + 0x4e7) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar1 = SQRT(unaff_s13 * unaff_s13 + unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12);
  if (fVar1 <= *(float *)(unaff_x25 + 0xf88)) {
    if (*(char *)(unaff_x22 + 0x4f1) == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      *(undefined1 *)(unaff_x22 + 0x4f1) = 1;
    }
    fVar1 = **(float **)(*unaff_x21 + 0xb8);
  }
  else {
    fVar1 = unaff_s11 / fVar1;
  }
  fVar2 = (float)FUN_07a388d4();
  fVar3 = (float)FUN_041ee3bc(0);
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
      fVar1 = (float)FUN_07a38980();
    }
    fVar5 = (float)FUN_07a38b94();
    return in_stack_00000020._4_4_ + fVar1 * fVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


