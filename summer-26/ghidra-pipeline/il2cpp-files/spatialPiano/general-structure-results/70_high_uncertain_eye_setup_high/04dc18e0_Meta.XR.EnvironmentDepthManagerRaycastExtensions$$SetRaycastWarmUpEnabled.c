/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$SetRaycastWarmUpEnabled
ENTRY_POINT: 04dc18e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthManagerRaycastExtensions__SetRaycastWarmUpEnabled(long param_1)

{
  long lVar1;
  undefined8 unaff_x20;
  undefined4 unaff_w24;
  long unaff_x25;
  long unaff_x29;
  
  *(undefined4 *)(unaff_x29 + -0xc) = unaff_w24;
  lVar1 = *(long *)(param_1 + 0xb0);
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
  *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
  (**(code **)(lVar1 + 0x10))();
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


