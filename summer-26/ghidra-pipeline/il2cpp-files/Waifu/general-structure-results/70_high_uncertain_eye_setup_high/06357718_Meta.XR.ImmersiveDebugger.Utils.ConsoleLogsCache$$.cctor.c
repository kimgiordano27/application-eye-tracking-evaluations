/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ConsoleLogsCache$$.cctor
ENTRY_POINT: 06357718
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ConsoleLogsCache___cctor(void)

{
  long unaff_x19;
  
  if (*(long *)(unaff_x19 + 0x20) != 0) {
                    /* try { // try from 06357720 to 0645772f has its CatchHandler @ 06357748 */
    FUN_042ba6e8(*(long *)(unaff_x19 + 0x20),DAT_083eb5a8);
                    /* try { // try from 06357730 to 0645774f has its CatchHandler @ 06357758 */
    if (*(long *)(unaff_x19 + 0x28) != 0) {
                    /* catch() { ... } // from try @ 06357580 with catch @ 06357738 */
      FUN_0429d29c(*(long *)(unaff_x19 + 0x28),DAT_083eafa8);
      if (*(long *)(unaff_x19 + 0x30) != 0) {
                    /* catch() { ... } // from try @ 0635761c with catch @ 06357748
                       catch() { ... } // from try @ 06357720 with catch @ 06357748 */
                    /* try { // try from 06357750 to 0645775b has its CatchHandler @ 06357014 */
        FUN_0429ee34(*(long *)(unaff_x19 + 0x30),DAT_083eb038);
                    /* catch() { ... } // from try @ 0635751c with catch @ 06357758
                       catch() { ... } // from try @ 063575dc with catch @ 06357758
                       catch() { ... } // from try @ 06357730 with catch @ 06357758 */
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          FUN_042a52a4(*(long *)(unaff_x19 + 0x38),DAT_083eb140);
          if (*(long *)(unaff_x19 + 0x40) != 0) {
            FUN_04395f90(*(long *)(unaff_x19 + 0x40),DAT_083ebf20);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


