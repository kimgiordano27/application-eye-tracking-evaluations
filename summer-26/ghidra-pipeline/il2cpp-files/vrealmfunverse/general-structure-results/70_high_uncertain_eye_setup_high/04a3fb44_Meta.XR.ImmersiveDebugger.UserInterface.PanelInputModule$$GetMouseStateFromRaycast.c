/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$GetMouseStateFromRaycast
ENTRY_POINT: 04a3fb44
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__GetMouseStateFromRaycast
               (long param_1,undefined8 param_2)

{
  long unaff_x19;
  uint unaff_w20;
  
  FUN_046ff520(param_2,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x1a8));
  if (unaff_x19 == 0) {
    return unaff_w20 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cabc();
}


