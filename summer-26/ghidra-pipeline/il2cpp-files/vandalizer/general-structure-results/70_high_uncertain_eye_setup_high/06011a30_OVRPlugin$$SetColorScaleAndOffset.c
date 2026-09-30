/*
FUNCTION_NAME: OVRPlugin$$SetColorScaleAndOffset
ENTRY_POINT: 06011a30
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetColorScaleAndOffset(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long in_x9;
  int *in_x10;
  long in_x11;
  long unaff_x19;
  long unaff_x22;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_06011a60:
                    /* try { // try from 06011a64 to 06111a97 has its CatchHandler @ 06011b74 */
      uVar2 = (*(code *)*puVar1)();
      if (unaff_x22 != 0) {
        *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
        thunk_FUN_0329bf60((undefined8 *)(unaff_x22 + 0x10),uVar2);
        *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x19 + 0x60);
                    /* try { // try from 06011a98 to 06111b67 has its CatchHandler @ 060119d8 */
        thunk_FUN_0329bf60();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
                    /* try { // try from 06011a4c to 06111a53 has its CatchHandler @ 06011b70 */
      puVar1 = (undefined8 *)FUN_0322c1e8();
      goto LAB_06011a60;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  } while( true );
}


