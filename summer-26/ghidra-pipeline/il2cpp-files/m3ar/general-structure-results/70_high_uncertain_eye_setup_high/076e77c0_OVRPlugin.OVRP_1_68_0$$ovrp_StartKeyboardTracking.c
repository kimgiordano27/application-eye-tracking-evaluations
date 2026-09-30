/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_StartKeyboardTracking
ENTRY_POINT: 076e77c0
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_68_0__ovrp_StartKeyboardTracking(void)

{
  long lVar1;
  
  lVar1 = thunk_FUN_0406ddbc();
  if (lVar1 == 0) {
                    /* try { // try from 076e77d0 to 077e77db has its CatchHandler @ 076e7f88 */
                    /* WARNING: Subroutine does not return */
    FUN_04031c0c();
  }
                    /* try { // try from 076e77ec to 077e77f3 has its CatchHandler @ 076e7f7c */
  return;
}


