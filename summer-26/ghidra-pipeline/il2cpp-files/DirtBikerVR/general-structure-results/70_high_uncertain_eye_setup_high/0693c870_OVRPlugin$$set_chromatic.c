/*
FUNCTION_NAME: OVRPlugin$$set_chromatic
ENTRY_POINT: 0693c870
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_chromatic(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  undefined8 *unaff_x22;
  
                    /* catch() { ... } // from try @ 0693c818 with catch @ 0693c870 */
                    /* catch() { ... } // from try @ 0693c810 with catch @ 0693c874 */
  lVar2 = *(long *)(param_1 + 0x38);
                    /* catch() { ... } // from try @ 0693c75c with catch @ 0693c878 */
                    /* catch() { ... } // from try @ 0693c554 with catch @ 0693c87c */
  uVar1 = thunk_FUN_03ac74bc(*unaff_x22);
                    /* catch() { ... } // from try @ 0693c584 with catch @ 0693c880 */
                    /* catch() { ... } // from try @ 0693c5cc with catch @ 0693c884 */
  FUN_07cb26a0();
  if (lVar2 != 0) {
                    /* try { // try from 0693c8a4 to 06a3c8a7 has its CatchHandler @ 0693c8d4 */
    FUN_07cb2770(lVar2,uVar1,0);
    if (*(long *)(unaff_x19 + 0x10) != 0) {
                    /* try { // try from 0693c8b4 to 06a3c8b7 has its CatchHandler @ 0693c914 */
                    /* try { // try from 0693c8b8 to 06a3c8bb has its CatchHandler @ 0693c908 */
                    /* try { // try from 0693c8bc to 06a3c8bf has its CatchHandler @ 0693c904 */
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x40);
                    /* try { // try from 0693c8c0 to 06a3c8c3 has its CatchHandler @ 0693c8f4 */
      uVar1 = thunk_FUN_03ac74bc(*unaff_x22);
                    /* try { // try from 0693c8c4 to 06a3c8cb has its CatchHandler @ 0693c8f0 */
                    /* try { // try from 0693c8cc to 06a3c8cf has its CatchHandler @ 0693c8ec */
                    /* try { // try from 0693c8d0 to 06a3c8db has its CatchHandler @ 0693bfdc */
                    /* catch() { ... } // from try @ 0693c8a4 with catch @ 0693c8d4 */
      FUN_07cb26a0();
      if (lVar2 != 0) {
                    /* try { // try from 0693c8dc to 06a3c8e3 has its CatchHandler @ 0693c9f4 */
                    /* try { // try from 0693c8e4 to 06a3c93b has its CatchHandler @ 0693bfdc */
                    /* catch() { ... } // from try @ 0693c7fc with catch @ 0693c8e8 */
        FUN_07cb2770(lVar2,uVar1,0);
                    /* catch() { ... } // from try @ 0693c8cc with catch @ 0693c8ec */
                    /* catch() { ... } // from try @ 0693c8c4 with catch @ 0693c8f0 */
        if (*(long *)(unaff_x19 + 0x10) != 0) {
                    /* catch() { ... } // from try @ 0693c8c0 with catch @ 0693c8f4 */
                    /* catch() { ... } // from try @ 0693c7b0 with catch @ 0693c8f8 */
          lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x48);
                    /* catch() { ... } // from try @ 0693c4d0 with catch @ 0693c8fc
                       catch() { ... } // from try @ 0693c508 with catch @ 0693c8fc */
          uVar1 = thunk_FUN_03ac74bc(*unaff_x22);
                    /* catch() { ... } // from try @ 0693c404 with catch @ 0693c900 */
                    /* catch() { ... } // from try @ 0693c8bc with catch @ 0693c904 */
                    /* catch() { ... } // from try @ 0693c8b8 with catch @ 0693c908 */
                    /* catch() { ... } // from try @ 0693c47c with catch @ 0693c90c */
                    /* catch() { ... } // from try @ 0693c41c with catch @ 0693c910
                       catch() { ... } // from try @ 0693c4ec with catch @ 0693c910 */
          FUN_07cb26a0();
                    /* catch() { ... } // from try @ 0693c8b4 with catch @ 0693c914 */
          if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 0693c3cc with catch @ 0693c918 */
                    /* catch() { ... } // from try @ 0693c360 with catch @ 0693c91c */
            FUN_07cb2770(lVar2,uVar1,0);
            if (*(long *)(unaff_x19 + 0x18) != 0) {
                    /* try { // try from 0693c93c to 06a3c93f has its CatchHandler @ 0693c9e0 */
              *(undefined1 *)(*(long *)(unaff_x19 + 0x18) + 0x19) = 1;
                    /* try { // try from 0693c940 to 06a3c9e3 has its CatchHandler @ 0693bfdc */
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


