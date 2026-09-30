/*
FUNCTION_NAME: OVRManager$$Initialize
ENTRY_POINT: 05ff6a24
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__Initialize(void)

{
  undefined8 uVar1;
  long unaff_x19;
  
  uVar1 = FUN_05ff6ac4();
  if (*(long *)(unaff_x19 + 0x40) != 0) {
                    /* catch() { ... } // from try @ 05ff6a20 with catch @ 05ff6a30 */
    FUN_05f20d50(*(long *)(unaff_x19 + 0x40),uVar1,1,0);
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      FUN_05f20d50(*(long *)(unaff_x19 + 0x48),uVar1,1,0);
                    /* try { // try from 05ff6a68 to 060f6a8f has its CatchHandler @ 05ff6aa4 */
      uVar1 = FUN_05ff6ac4(*(undefined4 *)(unaff_x19 + 100),*(undefined4 *)(unaff_x19 + 0x6c));
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_05f20d50(*(long *)(unaff_x19 + 0x30),uVar1,1,0);
                    /* try { // try from 05ff6a90 to 060f6a9b has its CatchHandler @ 05ff667c */
        if (*(long *)(unaff_x19 + 0x38) != 0) {
                    /* try { // try from 05ff6a9c to 060f6aa3 has its CatchHandler @ 05ff6aa4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05ff6a68 with catch @ 05ff6aa4
                       catch(type#2 @ 00000000) { ... } // from try @ 05ff6a9c with catch @ 05ff6aa4
                        */
          FUN_05f20d50(*(long *)(unaff_x19 + 0x38),uVar1,1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


