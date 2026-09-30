/*
FUNCTION_NAME: OVRManager$$GetCurrentInputSubsystem
ENTRY_POINT: 076b21a4
PROGRAM: m3ar-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetCurrentInputSubsystem(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x23;
  undefined8 *unaff_x24;
  
  do {
    lVar2 = FUN_0752a63c(unaff_x20);
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      uVar4 = *unaff_x24;
      lVar3 = thunk_FUN_0406ddbc(lVar2,uVar4);
                    /* try { // try from 076b21c8 to 077b21d7 has its CatchHandler @ 076b21d8 */
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04031c0c(lVar2,uVar4);
      }
    }
                    /* catch() { ... } // from try @ 076b2148 with catch @ 076b21d8
                       catch() { ... } // from try @ 076b21c8 with catch @ 076b21d8 */
                    /* try { // try from 076b21dc to 077b21df has its CatchHandler @ 076b21e8 */
                    /* try { // try from 076b21e0 to 077b21eb has its CatchHandler @ 076b1b0c */
    lVar2 = FUN_0406a6bc(*(undefined8 *)(*unaff_x23 + 0xb8),lVar3,unaff_x20);
                    /* catch() { ... } // from try @ 076b21dc with catch @ 076b21e8 */
    bVar1 = lVar2 != unaff_x20;
    unaff_x20 = lVar2;
  } while (bVar1);
  return;
}


