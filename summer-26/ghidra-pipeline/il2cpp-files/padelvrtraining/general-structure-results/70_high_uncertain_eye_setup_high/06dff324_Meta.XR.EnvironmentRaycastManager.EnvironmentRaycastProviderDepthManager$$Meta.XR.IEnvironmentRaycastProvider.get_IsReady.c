/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderDepthManager$$Meta.XR.IEnvironmentRaycastProvider.get_IsReady
ENTRY_POINT: 06dff324
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__Meta_XR_IEnvironmentRaycastProvider_get_IsReady
          (long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long unaff_x19;
  int unaff_w20;
  
  do {
    iVar1 = unaff_w20 - (int)param_1[1];
    if (unaff_w20 < (int)param_1[1]) {
      if ((*(byte *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
        FUN_03d8f26c();
      }
      *(long *)(unaff_x19 + 0x14) = param_1[(long)unaff_w20 + 2];
      return 1;
    }
    *(int *)(unaff_x19 + 0x10) = iVar1;
    param_1 = (long *)*param_1;
    *(long **)(unaff_x19 + 8) = param_1;
    unaff_w20 = iVar1;
  } while (param_1 != (long *)0x0);
  *(undefined8 *)(unaff_x19 + 0x14) = 0;
  return 0;
}


