/*
FUNCTION_NAME: OVRPlugin.OVRP_1_34_0$$ovrp_EnqueueSubmitLayer2
ENTRY_POINT: 07ca931c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_34_0__ovrp_EnqueueSubmitLayer2(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long *unaff_x23;
  undefined8 *unaff_x24;
  
  uVar1 = FUN_04d0096c();
  uVar1 = FUN_04d10cc0(uVar1,*unaff_x24);
  if (unaff_x19 != 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
    thunk_FUN_044bb4b4();
    *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8) = unaff_x19;
    thunk_FUN_044bb4b4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


