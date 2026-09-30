/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$CreateTextureCopyRequestIfNeeded
ENTRY_POINT: 05ae1af0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 90
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_EnvironmentDepthRaycaster__CreateTextureCopyRequestIfNeeded(long param_1)

{
  long lVar1;
  long *unaff_x19;
  long *unaff_x20;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc(lVar1);
  }
  if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar1 + 0x40)) {
    thunk_FUN_0367ff68();
                    /* WARNING: Could not recover jumptable at 0x05ae1b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x1c8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03643084();
}


