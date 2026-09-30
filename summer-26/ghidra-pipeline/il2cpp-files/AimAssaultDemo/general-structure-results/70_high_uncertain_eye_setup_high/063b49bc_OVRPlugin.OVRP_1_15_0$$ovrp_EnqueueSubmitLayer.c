/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_EnqueueSubmitLayer
ENTRY_POINT: 063b49bc
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


void OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSubmitLayer(void)

{
  long unaff_x19;
  undefined4 uVar1;
  
  uVar1 = FUN_054d3f84();
  *(undefined4 *)(unaff_x19 + 0x28) = uVar1;
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    thunk_FUN_07546028(*(long *)(unaff_x19 + 0x90),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


