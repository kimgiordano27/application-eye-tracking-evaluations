/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager$$get_AnchorPrefab
ENTRY_POINT: 0638859c
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


void Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager__get_AnchorPrefab(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  
                    /* catch() { ... } // from try @ 06387df4 with catch @ 0638859c */
                    /* catch() { ... } // from try @ 06387d40 with catch @ 063885a0 */
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ecba8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0xa18) = 1;
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_0457060c();
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_0457060c(*(long *)(unaff_x19 + 0x28),0,DAT_083ecba0);
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


