/*
FUNCTION_NAME: OVRManager$$remove_InputFocusLost
ENTRY_POINT: 036641dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_InputFocusLost(ulong param_1)

{
  long unaff_x21;
  ulong unaff_x22;
  
  param_1 = param_1 & 0xffffffff;
  do {
    if (param_1 <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    FUN_03664228();
    param_1 = (ulong)*(uint *)(unaff_x21 + 0x18);
    unaff_x22 = unaff_x22 + 1;
  } while ((long)unaff_x22 < (long)(int)*(uint *)(unaff_x21 + 0x18));
  return;
}


