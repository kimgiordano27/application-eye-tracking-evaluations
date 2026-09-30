/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateHandler$$BeginInvoke
ENTRY_POINT: 057764e0
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateHandler__BeginInvoke
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 05776524 with catch @ 057764e0
                       catch() { ... } // from try @ 05776598 with catch @ 057764e0
                       catch() { ... } // from try @ 057765ec with catch @ 057764e0 */
                    /* try { // try from 057764f4 to 058764ff has its CatchHandler @ 057765a8 */
  if (DAT_071c3c08 == (code *)0x0) {
                    /* try { // try from 05776508 to 0587650b has its CatchHandler @ 057765a4 */
                    /* try { // try from 05776518 to 05876523 has its CatchHandler @ 057765a0 */
                    /* try { // try from 05776524 to 0587654f has its CatchHandler @ 057764e0 */
    DAT_071c3c08 = (code *)thunk_FUN_02ef1ac4();
  }
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x20;
  }
                    /* try { // try from 05776550 to 05876597 has its CatchHandler @ 057765ac */
  (*DAT_071c3c08)(param_1,lVar1,param_3);
  return;
}


