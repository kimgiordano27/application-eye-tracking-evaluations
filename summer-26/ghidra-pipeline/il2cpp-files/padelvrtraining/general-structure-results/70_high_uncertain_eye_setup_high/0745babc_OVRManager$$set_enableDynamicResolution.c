/*
FUNCTION_NAME: OVRManager$$set_enableDynamicResolution
ENTRY_POINT: 0745babc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_enableDynamicResolution(long *param_1,undefined1 param_2 [16])

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = *(long *)(*param_1 + 0xb8);
  FUN_08a449c0(param_2,*(undefined4 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 0x1c),
               *(undefined4 *)(lVar1 + 0x20),0);
  if (unaff_x19 != 0) {
    FUN_08a5d920();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


