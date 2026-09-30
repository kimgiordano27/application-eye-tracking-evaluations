/*
FUNCTION_NAME: OVRManager$$SetColorScaleAndOffset
ENTRY_POINT: 04f4464c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__SetColorScaleAndOffset(void)

{
  undefined8 uVar1;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  
                    /* try { // try from 04f4464c to 05044667 has its CatchHandler @ 04f447c0 */
  if (in_w8 == 0) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
                    /* try { // try from 04f44680 to 05044683 has its CatchHandler @ 04f447b4 */
                    /* try { // try from 04f44684 to 05044693 has its CatchHandler @ 04f447bc */
    *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x20 + 0xe0);
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x18));
    uVar1 = 1;
    *(undefined4 *)(unaff_x19 + 0x10) = 1;
  }
  else {
    uVar1 = 0;
  }
                    /* try { // try from 04f446a4 to 050446af has its CatchHandler @ 04f447b8 */
  return uVar1;
}


