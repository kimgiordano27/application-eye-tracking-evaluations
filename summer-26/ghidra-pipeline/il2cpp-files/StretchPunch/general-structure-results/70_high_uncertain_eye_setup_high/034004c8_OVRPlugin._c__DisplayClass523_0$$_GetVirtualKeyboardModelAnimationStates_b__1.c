/*
FUNCTION_NAME: OVRPlugin.<>c__DisplayClass523_0$$<GetVirtualKeyboardModelAnimationStates>b__1
ENTRY_POINT: 034004c8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__DisplayClass523_0__<GetVirtualKeyboardModelAnimationStates>b__1(void)

{
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 033fff50 with catch @ 034004c8 */
  plVar1 = (long *)(unaff_x21 + 0x20);
  lVar2 = *plVar1;
                    /* catch() { ... } // from try @ 033fff98 with catch @ 034004cc */
  thunk_FUN_01da0934();
                    /* catch() { ... } // from try @ 034002ac with catch @ 034004d0 */
  if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 034000d4 with catch @ 034004d4 */
    lVar2 = *plVar1;
                    /* catch() { ... } // from try @ 033fff44 with catch @ 034004d8 */
    thunk_FUN_01da0934();
                    /* catch() { ... } // from try @ 03400078 with catch @ 034004dc */
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    FUN_032fa0b0(lVar2,0);
    thunk_FUN_01da0934();
    *plVar1 = 0;
                    /* try { // try from 034004f8 to 035004fb has its CatchHandler @ 03400508 */
    thunk_FUN_01e10808(plVar1,0);
  }
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
  return;
}


