/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$SetProviderEnabled
ENTRY_POINT: 07704850
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__SetProviderEnabled(long param_1)

{
  long unaff_x19;
  long unaff_x21;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0x740));
  *(undefined1 *)(unaff_x21 + 0xf43) = 1;
  FUN_07703288();
  if (*(long *)(unaff_x19 + 0xb0) != 0) {
    FUN_0770721c(*(long *)(unaff_x19 + 0xb0),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


