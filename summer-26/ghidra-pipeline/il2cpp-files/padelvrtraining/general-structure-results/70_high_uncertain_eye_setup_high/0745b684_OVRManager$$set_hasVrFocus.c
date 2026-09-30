/*
FUNCTION_NAME: OVRManager$$set_hasVrFocus
ENTRY_POINT: 0745b684
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_hasVrFocus(float param_1,undefined8 param_2)

{
  long unaff_x19;
  int unaff_w21;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  ulong unaff_d11;
  
  FUN_0745ba6c(param_1 - unaff_s9,param_2,*(undefined8 *)(unaff_x19 + 0x40));
  if (0.0 <= unaff_s8) {
    unaff_d11 = (ulong)*(uint *)(unaff_x19 + 0x68);
  }
  else if (unaff_w21 != 0) {
    unaff_d11 = (ulong)(uint)(unaff_s10 + *(float *)(unaff_x19 + 0x68));
  }
  FUN_0745baf4(unaff_d11);
                    /* try { // try from 0745b6dc to 0755b6df has its CatchHandler @ 0745b788 */
                    /* try { // try from 0745b6e0 to 0755b6e3 has its CatchHandler @ 0745b780 */
                    /* try { // try from 0745b6e4 to 0755b6e7 has its CatchHandler @ 0745b788 */
                    /* try { // try from 0745b6e8 to 0755b6eb has its CatchHandler @ 0745b77c */
  FUN_0745bb48();
  return;
}


