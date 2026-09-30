/*
FUNCTION_NAME: OVRPlugin$$get_hasVrFocus
ENTRY_POINT: 09099a30
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_hasVrFocus(void)

{
  uint uVar1;
  uint uVar2;
  long unaff_x19;
  uint unaff_w20;
  
  uVar2 = FUN_0909e41c();
  uVar1 = (*(uint *)(unaff_x19 + 0x178) | unaff_w20) & (uVar2 ^ 0xffffffff);
  *(uint *)(unaff_x19 + 0x178) = uVar1;
                    /* try { // try from 09099a4c to 09199a4f has its CatchHandler @ 09099b04 */
  if ((uVar2 != 0) && (uVar1 == 0)) {
                    /* try { // try from 09099a54 to 09199a5f has its CatchHandler @ 09099af8 */
    *(undefined1 *)(unaff_x19 + 0x169) = 1;
  }
                    /* try { // try from 09099a64 to 09199a6f has its CatchHandler @ 09099af4 */
  return;
}


