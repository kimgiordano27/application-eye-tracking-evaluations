/*
FUNCTION_NAME: OVRManager$$add_VrFocusAcquired
ENTRY_POINT: 069232c8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_VrFocusAcquired(ulong param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  
  if ((param_1 & 1) == 0) {
    if (unaff_x20 == 0) {
                    /* try { // try from 06923314 to 06a2331b has its CatchHandler @ 069237e4 */
      uVar1 = thunk_FUN_03ad47ac(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar1,0);
    }
  }
  else {
                    /* try { // try from 069232cc to 06a232cf has its CatchHandler @ 06923808 */
    if (unaff_w22 == 1) {
      *(code **)(unaff_x19 + 0x18) = FUN_039b9308;
                    /* try { // try from 069232e0 to 06a232e7 has its CatchHandler @ 069237b8 */
      goto LAB_069232f8;
    }
  }
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
LAB_069232f8:
                    /* try { // try from 069232f8 to 06a23303 has its CatchHandler @ 069237b4 */
  *(code **)(unaff_x19 + 0x38) = FUN_039b92c0;
  return;
}


