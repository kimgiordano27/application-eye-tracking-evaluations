/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.DepthProviderOpenXR$$Meta.XR.EnvironmentDepth.IDepthProvider.TryGetUpdatedDepthTexture
ENTRY_POINT: 04d8e094
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_EnvironmentDepth_DepthProviderOpenXR__Meta_XR_EnvironmentDepth_IDepthProvider_TryGetUpdatedDepthTexture
               (void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (unaff_x20 != 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
    *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
    *(code **)(unaff_x19 + 0x38) = FUN_02b82a9c;
    return;
  }
  uVar1 = thunk_FUN_02f523a8(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar1,0);
}


