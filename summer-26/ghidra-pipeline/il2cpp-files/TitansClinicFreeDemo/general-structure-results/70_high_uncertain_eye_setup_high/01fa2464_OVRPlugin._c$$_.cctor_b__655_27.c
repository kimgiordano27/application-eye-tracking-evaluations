/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__655_27
ENTRY_POINT: 01fa2464
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__655_27(void)

{
  uint in_w8;
  long unaff_x20;
  long unaff_x21;
  ulong uVar1;
  long *unaff_x24;
  
                    /* try { // try from 01fa2468 to 020a246b has its CatchHandler @ 01fa2488 */
  if (0 < (int)in_w8) {
    uVar1 = 0;
    do {
                    /* try { // try from 01fa2478 to 020a249f has its CatchHandler @ 01fa24b4 */
      if (in_w8 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
                    /* catch() { ... } // from try @ 01fa23c8 with catch @ 01fa2480 */
                    /* catch() { ... } // from try @ 01fa2468 with catch @ 01fa2488 */
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      FUN_01f99958();
                    /* try { // try from 01fa24a0 to 020a24ab has its CatchHandler @ 01fa1fac */
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
                    /* try { // try from 01fa24ac to 020a24b3 has its CatchHandler @ 01fa24b4 */
                    /* catch() { ... } // from try @ 01fa23e4 with catch @ 01fa24b4
                       catch() { ... } // from try @ 01fa2478 with catch @ 01fa24b4
                       catch() { ... } // from try @ 01fa24ac with catch @ 01fa24b4 */
      FUN_01f89750();
      in_w8 = *(uint *)(unaff_x20 + 0x18);
      uVar1 = uVar1 + 1;
    } while ((long)uVar1 < (long)(int)in_w8);
  }
  return;
}


