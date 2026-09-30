/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager$$set_AnchorPrefab
ENTRY_POINT: 063885a4
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager__set_AnchorPrefab(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  undefined1 unaff_w22;
  
                    /* catch() { ... } // from try @ 06387c68 with catch @ 063885a4 */
  DataMemoryBarrier(2,3);
                    /* catch() { ... } // from try @ 063883c0 with catch @ 063885a8 */
                    /* catch() { ... } // from try @ 0638852c with catch @ 063885ac */
                    /* catch() { ... } // from try @ 063883b8 with catch @ 063885b0 */
                    /* catch() { ... } // from try @ 063884e4 with catch @ 063885b4 */
  FUN_0335b6c8(&DAT_083ecba8,1);
                    /* catch() { ... } // from try @ 06387bb4 with catch @ 063885b8
                       catch() { ... } // from try @ 0638856c with catch @ 063885b8 */
  DataMemoryBarrier(2,3);
                    /* catch() { ... } // from try @ 06387b94 with catch @ 063885bc */
  *(undefined1 *)(unaff_x21 + 0xa18) = unaff_w22;
                    /* catch() { ... } // from try @ 06388090 with catch @ 063885c0 */
                    /* catch() { ... } // from try @ 063884d4 with catch @ 063885c4 */
  if (*(long *)(unaff_x19 + 0x28) != 0) {
                    /* catch() { ... } // from try @ 063884d0 with catch @ 063885c8 */
                    /* catch() { ... } // from try @ 063884cc with catch @ 063885cc */
                    /* catch() { ... } // from try @ 063884c8 with catch @ 063885d0 */
                    /* catch() { ... } // from try @ 06388038 with catch @ 063885d4 */
    FUN_0457060c();
                    /* catch() { ... } // from try @ 063884c4 with catch @ 063885d8 */
                    /* catch() { ... } // from try @ 06388008 with catch @ 063885dc */
    if (*(long *)(unaff_x19 + 0x28) != 0) {
                    /* catch() { ... } // from try @ 063884bc with catch @ 063885e0 */
                    /* catch() { ... } // from try @ 063884b8 with catch @ 063885e4 */
                    /* catch() { ... } // from try @ 063881c0 with catch @ 063885e8 */
      FUN_0457060c(*(long *)(unaff_x19 + 0x28),0,DAT_083ecba0);
                    /* catch() { ... } // from try @ 06387ff8 with catch @ 063885ec */
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        if (*(int *)(*(long *)(unaff_x19 + 0x20) + 0x20) == 0) {
          if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_06388640;
          if ((*(int *)(*(long *)(unaff_x19 + 0x28) + 0x20) == 0) &&
             (lVar1 = *(long *)(unaff_x19 + 0x38), lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0638863c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28))
            ;
            return;
          }
        }
        return;
      }
    }
  }
LAB_06388640:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


