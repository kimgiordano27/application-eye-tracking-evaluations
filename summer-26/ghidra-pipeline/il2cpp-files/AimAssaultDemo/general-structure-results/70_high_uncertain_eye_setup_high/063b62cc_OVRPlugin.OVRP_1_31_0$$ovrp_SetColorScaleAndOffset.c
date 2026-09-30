/*
FUNCTION_NAME: OVRPlugin.OVRP_1_31_0$$ovrp_SetColorScaleAndOffset
ENTRY_POINT: 063b62cc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_31_0__ovrp_SetColorScaleAndOffset(long param_1)

{
  if (param_1 != 0) {
                    /* try { // try from 063b62d0 to 064b62d7 has its CatchHandler @ 063b62d8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 063b62b8 with catch @ 063b62d8
                       catch(type#2 @ 00000000) { ... } // from try @ 063b62d0 with catch @ 063b62d8
                        */
                    /* catch() { ... } // from try @ 063b62f0 with catch @ 063b62e0
                       catch() { ... } // from try @ 063b6320 with catch @ 063b62e0
                       catch() { ... } // from try @ 063b635c with catch @ 063b62e0 */
                    /* try { // try from 063b62ec to 064b62ef has its CatchHandler @ 063b6304 */
                    /* try { // try from 063b62f0 to 064b631b has its CatchHandler @ 063b62e0 */
    FUN_054d3fe8(param_1,*(undefined8 *)PTR_DAT_07db71c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


