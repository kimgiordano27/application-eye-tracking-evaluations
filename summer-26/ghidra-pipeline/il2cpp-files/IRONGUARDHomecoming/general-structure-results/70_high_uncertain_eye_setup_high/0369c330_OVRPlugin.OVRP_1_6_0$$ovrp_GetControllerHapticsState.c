/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetControllerHapticsState
ENTRY_POINT: 0369c330
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0__ovrp_GetControllerHapticsState(undefined4 *param_1,long param_2)

{
  undefined4 *in_x9;
  long unaff_x19;
  long *unaff_x21;
  
  if (param_2 != 0) {
    thunk_FUN_0404b1d4(*param_1,*in_x9,*(undefined4 *)(unaff_x19 + 0xc4),
                       *(undefined4 *)(unaff_x19 + 200),param_2,
                       *(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 0x10),0);
    if (*(long *)(unaff_x19 + 0x80) != 0) {
      FUN_0365109c(*(long *)(unaff_x19 + 0x80),0);
      if (*(long *)(unaff_x19 + 0x88) != 0) {
        FUN_0365109c(*(long *)(unaff_x19 + 0x88),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


