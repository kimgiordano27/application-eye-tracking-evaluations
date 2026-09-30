/*
FUNCTION_NAME: OVRPlugin.OpenXREventDelegateType$$Invoke
ENTRY_POINT: 090c5070
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OpenXREventDelegateType__Invoke(long param_1)

{
  long lVar1;
  ulong in_x9;
  ulong in_x10;
  long in_x11;
  long in_x12;
  
                    /* catch() { ... } // from try @ 090c4f64 with catch @ 090c5070 */
                    /* catch() { ... } // from try @ 090c5044 with catch @ 090c5074 */
                    /* catch() { ... } // from try @ 090c4ed8 with catch @ 090c5078 */
  while (in_x9 < *(uint *)(in_x12 + 0x18)) {
                    /* catch() { ... } // from try @ 090c4ef8 with catch @ 090c507c */
    lVar1 = in_x12 + in_x9;
                    /* catch() { ... } // from try @ 090c4f88 with catch @ 090c5080 */
    in_x9 = in_x9 + 1;
    *(undefined1 *)(lVar1 + 0x20) = 0;
    if (in_x9 == 5) {
      return;
    }
                    /* catch() { ... } // from try @ 090c4f18 with catch @ 090c505c */
                    /* catch() { ... } // from try @ 090c5054 with catch @ 090c5060 */
    if (in_x10 == in_x9) break;
                    /* catch() { ... } // from try @ 090c504c with catch @ 090c5064 */
    *(undefined1 *)(in_x11 + in_x9) = 0;
                    /* catch() { ... } // from try @ 090c4f3c with catch @ 090c5068 */
    in_x12 = *(long *)(param_1 + 0x60);
                    /* catch() { ... } // from try @ 090c4f6c with catch @ 090c506c */
    if (in_x12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


