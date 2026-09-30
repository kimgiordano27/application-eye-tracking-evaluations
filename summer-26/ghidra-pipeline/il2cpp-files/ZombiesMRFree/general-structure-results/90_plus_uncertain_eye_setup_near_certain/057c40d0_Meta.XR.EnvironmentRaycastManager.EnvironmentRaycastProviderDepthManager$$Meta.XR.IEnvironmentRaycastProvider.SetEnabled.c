/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderDepthManager$$Meta.XR.IEnvironmentRaycastProvider.SetEnabled
ENTRY_POINT: 057c40d0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__Meta_XR_IEnvironmentRaycastProvider_SetEnabled
               (long param_1,undefined8 param_2,void *param_3)

{
  long in_x9;
  size_t unaff_x19;
  long unaff_x22;
  long unaff_x29;
  
  if (-1 < *(int *)(param_1 + 0x28)) {
    param_3 = (void *)(unaff_x29 + -0x10);
  }
  memcpy((void *)(in_x9 - (unaff_x19 + 0xf & 0x1fffffff0)),param_3,unaff_x19);
  FUN_02fe9280();
  if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


