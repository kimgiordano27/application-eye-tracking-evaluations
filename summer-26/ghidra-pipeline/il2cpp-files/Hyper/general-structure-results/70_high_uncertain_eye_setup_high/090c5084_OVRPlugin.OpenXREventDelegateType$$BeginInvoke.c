/*
FUNCTION_NAME: OVRPlugin.OpenXREventDelegateType$$BeginInvoke
ENTRY_POINT: 090c5084
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


void OVRPlugin_OpenXREventDelegateType__BeginInvoke(long param_1)

{
  ulong in_x9;
  ulong in_x10;
  long in_x11;
  long lVar1;
  long in_x12;
  
  while( true ) {
                    /* catch() { ... } // from try @ 090c5038 with catch @ 090c5084 */
                    /* catch() { ... } // from try @ 090c4e78 with catch @ 090c5088 */
    *(undefined1 *)(in_x12 + 0x20) = 0;
                    /* catch() { ... } // from try @ 090c4e14 with catch @ 090c508c */
    if (in_x9 == 5) {
      return;
    }
    if (in_x10 == in_x9) break;
    *(undefined1 *)(in_x11 + in_x9) = 0;
    lVar1 = *(long *)(param_1 + 0x60);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(uint *)(lVar1 + 0x18) <= in_x9) break;
    in_x12 = lVar1 + in_x9;
    in_x9 = in_x9 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


