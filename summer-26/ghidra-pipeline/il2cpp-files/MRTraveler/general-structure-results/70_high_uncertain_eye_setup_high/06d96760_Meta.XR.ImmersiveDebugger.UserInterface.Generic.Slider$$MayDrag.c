/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$MayDrag
ENTRY_POINT: 06d96760
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__MayDrag(void)

{
  long *plVar1;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w23;
  int unaff_w24;
  
                    /* try { // try from 06d96760 to 06e96763 has its CatchHandler @ 06d96864 */
  if (unaff_w24 < 0) {
                    /* try { // try from 06d96764 to 06e96767 has its CatchHandler @ 06d9684c */
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 06d96788 with catch @ 06d9681c */
      FUN_03c8fb30();
    }
                    /* try { // try from 06d96768 to 06e9676b has its CatchHandler @ 06d96840 */
                    /* try { // try from 06d9676c to 06e96773 has its CatchHandler @ 06d9685c */
    if (*(long *)(unaff_x20 + 0x40) != 0) {
                    /* try { // try from 06d96774 to 06e96777 has its CatchHandler @ 06d9683c */
      if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 06d96780 with catch @ 06d9682c */
        FUN_03c8fb30();
      }
                    /* try { // try from 06d96778 to 06e9677b has its CatchHandler @ 06d96838 */
                    /* try { // try from 06d9677c to 06e9677f has its CatchHandler @ 06d96834 */
      FUN_07169138(*(long *)(unaff_x20 + 0x48),0);
                    /* try { // try from 06d96780 to 06e96783 has its CatchHandler @ 06d9682c */
      plVar1 = *(long **)(unaff_x20 + 0x40);
                    /* try { // try from 06d96784 to 06e96787 has its CatchHandler @ 06d96824 */
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 06d96510 with catch @ 06d96830 */
        FUN_03c8fb30();
      }
                    /* try { // try from 06d96788 to 06e9678b has its CatchHandler @ 06d9681c */
                    /* try { // try from 06d9678c to 06e9678f has its CatchHandler @ 06d96818 */
      (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined8 *)(*plVar1 + 0x1d0));
    }
  }
  if (unaff_x21 == 0) {
    if ((unaff_w23 == 0) || (unaff_w23 == 0x15)) {
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*(long *)PTR_DAT_08e69550 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0701e078(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb28();
}


