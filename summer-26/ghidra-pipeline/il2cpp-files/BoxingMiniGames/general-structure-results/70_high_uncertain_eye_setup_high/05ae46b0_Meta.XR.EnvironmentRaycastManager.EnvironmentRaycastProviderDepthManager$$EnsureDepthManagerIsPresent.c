/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderDepthManager$$EnsureDepthManagerIsPresent
ENTRY_POINT: 05ae46b0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__EnsureDepthManagerIsPresent
               (undefined1 *param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  uint unaff_w19;
  void *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  void *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  code *pcVar2;
  
  while( true ) {
    pcVar2 = *(code **)(unaff_x25 + 0x1b8);
    memcpy(param_1,param_2,param_3);
    memcpy(&stack0x00000000,unaff_x20,0x70);
    uVar1 = (*pcVar2)();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x24 = unaff_x24 + -1;
    param_2 = (void *)((long)unaff_x23 + 0x70);
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x24 == 0) break;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    unaff_x25 = *unaff_x22;
    param_1 = &stack0x00000070;
    param_3 = 0x70;
    unaff_x23 = param_2;
  }
  return 0xffffffff;
}


