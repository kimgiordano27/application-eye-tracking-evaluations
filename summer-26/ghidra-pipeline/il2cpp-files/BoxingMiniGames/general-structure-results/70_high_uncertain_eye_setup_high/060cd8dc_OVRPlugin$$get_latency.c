/*
FUNCTION_NAME: OVRPlugin$$get_latency
ENTRY_POINT: 060cd8dc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__get_latency(void)

{
  long unaff_x20;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s11;
  undefined8 in_stack_00000020;
  
                    /* catch() { ... } // from try @ 060cd8d4 with catch @ 060cd8e4 */
                    /* try { // try from 060cd8e8 to 061cd8ef has its CatchHandler @ 060cd8f8 */
  fVar1 = (float)FUN_060cc724();
                    /* try { // try from 060cd8f0 to 061cd8fb has its CatchHandler @ 060cd71c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 060cd8e8 with catch @ 060cd8f8
                        */
  fVar2 = (float)FUN_060389e8(0);
  fVar2 = fVar2 - (float)(int)(fVar2 / 360.0) * 360.0;
  fVar4 = 360.0;
  if (fVar2 <= 360.0) {
    fVar4 = fVar2;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar4;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar4 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
    if ((fVar4 < fVar3) && (unaff_s11 = fVar1, ABS(fVar3 - fVar4) < ABS(360.0 - fVar3))) {
      unaff_s11 = (float)FUN_060cc7d0();
    }
    fVar4 = (float)FUN_060cc9e4();
    return in_stack_00000020._4_4_ + unaff_s11 * fVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


