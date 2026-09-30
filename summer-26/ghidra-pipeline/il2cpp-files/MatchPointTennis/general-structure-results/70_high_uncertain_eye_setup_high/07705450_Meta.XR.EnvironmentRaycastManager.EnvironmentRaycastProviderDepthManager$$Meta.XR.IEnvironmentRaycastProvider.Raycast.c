/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderDepthManager$$Meta.XR.IEnvironmentRaycastProvider.Raycast
ENTRY_POINT: 07705450
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__Meta_XR_IEnvironmentRaycastProvider_Raycast
               (long param_1)

{
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_0952a454(*(long *)(param_1 + 0x20),0,0);
  FUN_0952d4b8(param_1,0);
  if (*(char *)(param_1 + 0x50) != '\0') {
    return;
  }
  FUN_077052e4(param_1,1);
  return;
}


