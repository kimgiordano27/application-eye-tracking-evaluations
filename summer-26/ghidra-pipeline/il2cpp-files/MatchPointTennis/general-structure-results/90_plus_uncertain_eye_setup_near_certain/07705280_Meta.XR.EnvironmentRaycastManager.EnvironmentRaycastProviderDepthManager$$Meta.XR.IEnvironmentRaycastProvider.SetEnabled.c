/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderDepthManager$$Meta.XR.IEnvironmentRaycastProvider.SetEnabled
ENTRY_POINT: 07705280
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__Meta_XR_IEnvironmentRaycastProvider_SetEnabled
               (void)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_076fe350();
  if (unaff_x20 != 0) {
    FUN_076fbfc4();
    if (*(char *)(unaff_x19 + 0x50) != '\0') {
      return;
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_0952a454(*(long *)(unaff_x19 + 0x20),0,0);
      FUN_077052e4();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


