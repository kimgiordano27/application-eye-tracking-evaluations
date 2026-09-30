/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager.<RetrieveAnchorsFromGroup>d__23$$MoveNext
ENTRY_POINT: 0530d2b0
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<RetrieveAnchorsFromGroup>d__23__MoveNext
               (void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  undefined8 *unaff_x22;
  
  if (unaff_x20 != 0) {
    FUN_0530980c();
    lVar2 = *(long *)(unaff_x19 + 0xb0);
    uVar1 = thunk_FUN_02ef1808(*unaff_x22);
    FUN_04c07b1c();
    if (lVar2 != 0) {
      FUN_0530980c(lVar2,uVar1);
      lVar2 = *(long *)(unaff_x19 + 0xb8);
      uVar1 = thunk_FUN_02ef1808(*unaff_x22);
      FUN_04c07b1c();
      if (lVar2 != 0) {
        FUN_0530980c(lVar2,uVar1);
        lVar2 = *(long *)(unaff_x19 + 0xc0);
        uVar1 = thunk_FUN_02ef1808(*unaff_x22);
        FUN_04c07b1c();
        if (lVar2 != 0) {
          FUN_0530980c(lVar2,uVar1);
          lVar2 = *(long *)(unaff_x19 + 200);
          uVar1 = thunk_FUN_02ef1808(*unaff_x22);
                    /* try { // try from 0530d388 to 0540d3af has its CatchHandler @ 0530d5a8 */
          FUN_04c07b1c();
          if (lVar2 != 0) {
            FUN_0530980c(lVar2,uVar1);
            lVar2 = *(long *)(unaff_x19 + 0xd0);
            uVar1 = thunk_FUN_02ef1808(*unaff_x22);
            FUN_04c07b1c();
                    /* try { // try from 0530d3c8 to 0540d427 has its CatchHandler @ 0530d5ac */
            if (lVar2 != 0) {
              FUN_0530980c(lVar2,uVar1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


