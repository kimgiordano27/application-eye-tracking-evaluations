/*
FUNCTION_NAME: OVRManager$$set_enableDynamicResolution
ENTRY_POINT: 060b9f74
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_enableDynamicResolution(undefined8 param_1)

{
  ulong uVar1;
  long unaff_x19;
  
  uVar1 = FUN_071c24dc(param_1,0,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0xd0) != 0) {
    FUN_06063b44(*(long *)(unaff_x19 + 0xd0),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


