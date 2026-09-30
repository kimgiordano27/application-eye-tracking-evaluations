/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$CreateTextureCopyRequestIfNeeded
ENTRY_POINT: 04dc3028
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 90
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_EnvironmentDepthRaycaster__CreateTextureCopyRequestIfNeeded(undefined8 param_1)

{
  int iVar1;
  code *unaff_x19;
  long unaff_x23;
  long in_stack_00000028;
  
  FUN_02f41e9c(param_1);
  (*unaff_x19)();
  iVar1 = FUN_0609d588();
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000028) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0);
}


