/*
FUNCTION_NAME: OVRPlugin.OVRP_1_83_0$$ovrp_GetVirtualKeyboardModelAnimationStates
ENTRY_POINT: 07caf304
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_83_0__ovrp_GetVirtualKeyboardModelAnimationStates(long param_1,long param_2)

{
  long unaff_x19;
  
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    thunk_FUN_044bb4b4();
    FUN_07caf3ec();
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      if (*(int *)(unaff_x19 + 0x30) == *(int *)(*(long *)(unaff_x19 + 0x38) + 0x3c)) {
        return;
      }
      FUN_07cae2f4();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


