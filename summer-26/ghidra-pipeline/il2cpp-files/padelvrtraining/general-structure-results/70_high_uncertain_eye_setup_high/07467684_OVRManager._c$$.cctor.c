/*
FUNCTION_NAME: OVRManager.<>c$$.cctor
ENTRY_POINT: 07467684
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager_<>c___cctor(long param_1)

{
  long unaff_x20;
  
                    /* try { // try from 07467684 to 0756768b has its CatchHandler @ 074676a0 */
                    /* try { // try from 0746768c to 07567697 has its CatchHandler @ 07467510 */
  if ((*(byte *)(unaff_x20 + 0x863) & 1) == 0) {
                    /* try { // try from 07467698 to 0756769f has its CatchHandler @ 074676a0 */
    FUN_03d2d2b0(PTR_DAT_092230d8);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07467684 with catch @ 074676a0
                       catch(type#2 @ 00000000) { ... } // from try @ 07467698 with catch @ 074676a0
                        */
    *(undefined1 *)(unaff_x20 + 0x863) = 1;
  }
                    /* try { // try from 074676a4 to 07567767 has its CatchHandler @ 074676a4
                       catch() { ... } // from try @ 074676a4 with catch @ 074676a4
                       catch() { ... } // from try @ 07467794 with catch @ 074676a4
                       catch() { ... } // from try @ 074677c0 with catch @ 074676a4
                       catch() { ... } // from try @ 074677e8 with catch @ 074676a4
                       catch() { ... } // from try @ 07467828 with catch @ 074676a4 */
  if (*(long *)(param_1 + 0x18) != 0) {
    return *(long *)(param_1 + 0x10) == *(long *)(*(long *)(param_1 + 0x18) + 200);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


