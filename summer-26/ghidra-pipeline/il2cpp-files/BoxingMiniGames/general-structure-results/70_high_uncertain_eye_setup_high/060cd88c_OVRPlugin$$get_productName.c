/*
FUNCTION_NAME: OVRPlugin$$get_productName
ENTRY_POINT: 060cd88c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__get_productName(float param_1)

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
  
  fVar1 = SQRT(unaff_s13 * unaff_s13 + param_1);
                    /* try { // try from 060cd8a0 to 061cd8a3 has its CatchHandler @ 060cd8b8 */
  if (fVar1 <= *(float *)(unaff_x25 + 0x354)) {
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 060cd808 with catch @ 060cd8b4
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 060cd8a0 with catch @ 060cd8b8
                        */
    if (*(char *)(unaff_x22 + 0x6b5) == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      *(undefined1 *)(unaff_x22 + 0x6b5) = 1;
    }
                    /* try { // try from 060cd8d4 to 061cd8d7 has its CatchHandler @ 060cd8e4 */
    fVar1 = **(float **)(*unaff_x21 + 0xb8);
  }
  else {
                    /* try { // try from 060cd8a4 to 061cd8d3 has its CatchHandler @ 060cd71c */
    fVar1 = unaff_s11 / fVar1;
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 060cd7e0 with catch @ 060cd8ac
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 060cd7e4 with catch @ 060cd8b0
                        */
  }
  fVar2 = (float)FUN_060cc724();
  fVar3 = (float)FUN_060389e8(0);
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
      fVar1 = (float)FUN_060cc7d0();
    }
    fVar5 = (float)FUN_060cc9e4();
    return in_stack_00000020._4_4_ + fVar1 * fVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


