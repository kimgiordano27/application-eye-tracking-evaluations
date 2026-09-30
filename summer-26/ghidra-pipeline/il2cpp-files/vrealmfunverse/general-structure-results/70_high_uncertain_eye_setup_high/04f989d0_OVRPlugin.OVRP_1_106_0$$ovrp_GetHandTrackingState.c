/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetHandTrackingState
ENTRY_POINT: 04f989d0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_GetHandTrackingState(float param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f98958 with catch @ 04f989d0
                        */
  *(float *)(unaff_x19 + 0x28) = *(float *)(unaff_x19 + 0x28) + param_1;
  if ((param_2 != 0) && (lVar1 = FUN_05c31ee4(param_2,0), lVar1 != 0)) {
                    /* try { // try from 04f989ec to 050989ef has its CatchHandler @ 04f98a08 */
                    /* try { // try from 04f989f0 to 05098a0b has its CatchHandler @ 04f9884c */
    FUN_05c30f20(lVar1,*(undefined8 *)(unaff_x19 + 0x18),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 04f989ec with catch @ 04f98a08 */
  FUN_02b3cac4();
}


