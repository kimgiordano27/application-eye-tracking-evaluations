/*
FUNCTION_NAME: OVRManager$$remove_InputFocusAcquired
ENTRY_POINT: 0907f818
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__remove_InputFocusAcquired(void)

{
  long unaff_x19;
  long *unaff_x20;
  float fVar1;
  double dVar2;
  float fVar3;
  float unaff_s8;
  float fVar4;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  
                    /* catch() { ... } // from try @ 0907f810 with catch @ 0907f820 */
  fVar3 = 0.0;
                    /* try { // try from 0907f824 to 0917f82b has its CatchHandler @ 0907f830 */
                    /* catch() { ... } // from try @ 0907f7bc with catch @ 0907f830
                       catch() { ... } // from try @ 0907f824 with catch @ 0907f830 */
  if (DAT_01df450c <= SQRT(unaff_s15 * unaff_s14)) {
                    /* try { // try from 0907f834 to 0917fadf has its CatchHandler @ 0907f834
                       catch() { ... } // from try @ 0907f834 with catch @ 0907f834
                       catch() { ... } // from try @ 0907fc28 with catch @ 0907f834
                       catch() { ... } // from try @ 0907fcf8 with catch @ 0907f834
                       catch() { ... } // from try @ 0907fd64 with catch @ 0907f834
                       catch() { ... } // from try @ 0907fd90 with catch @ 0907f834
                       catch() { ... } // from try @ 0907feb0 with catch @ 0907f834
                       catch() { ... } // from try @ 0907fecc with catch @ 0907f834
                       catch() { ... } // from try @ 0907ff0c with catch @ 0907f834 */
    fVar1 = (unaff_s8 * unaff_s11 + unaff_s10 * unaff_s12 + unaff_s9 * unaff_s13) /
            SQRT(unaff_s15 * unaff_s14);
    fVar3 = 1.0;
    if (fVar1 <= 1.0) {
      fVar3 = fVar1;
    }
    fVar4 = -1.0;
    if (-1.0 <= fVar1) {
      fVar4 = fVar3;
    }
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    dVar2 = acos((double)fVar4);
    fVar3 = (float)dVar2 * DAT_01df4b18;
  }
  return fVar3 <= *(float *)(unaff_x19 + 0x30);
}


