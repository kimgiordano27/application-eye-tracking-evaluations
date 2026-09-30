/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$CreateInternalEyeTrackingContext
ENTRY_POINT: 05597a28
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Oculus_Avatar2_OvrPluginTracking__CreateInternalEyeTrackingContext(ushort *param_1)

{
  long unaff_x21;
  
  if ((*param_1 & 1) == 0) {
    FUN_02dcfd18();
  }
  if (unaff_x21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x05597a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 05597a5c to 05697a5f has its CatchHandler @ 05597a64 */
    (**(code **)(unaff_x21 + 0x18))(*(undefined8 *)(unaff_x21 + 0x40));
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 055979f0 with catch @ 05597a60
                       try { // try from 05597a60 to 05697a7f has its CatchHandler @ 055979a0 */
  FUN_02d96860();
}


