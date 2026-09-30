/*
FUNCTION_NAME: OVRPlugin$$RetrieveSpaceQueryResults
ENTRY_POINT: 05bd1694
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__RetrieveSpaceQueryResults(void)

{
  long unaff_x20;
  float fVar1;
  float fVar2;
  float fVar3;
  float unaff_s11;
  float unaff_s14;
  undefined8 in_stack_00000020;
  
  fVar1 = (float)FUN_05a73c9c();
  fVar1 = fVar1 - (float)(int)(fVar1 / 360.0) * 360.0;
  fVar3 = 360.0;
  if (fVar1 <= 360.0) {
    fVar3 = fVar1;
  }
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar3;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar3 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
    if ((fVar3 < fVar2) && (unaff_s11 = unaff_s14, ABS(fVar2 - fVar3) < ABS(360.0 - fVar2))) {
      unaff_s11 = (float)FUN_05bd05e8();
    }
    fVar3 = (float)FUN_05bd07fc();
    return in_stack_00000020._4_4_ + unaff_s11 * fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


