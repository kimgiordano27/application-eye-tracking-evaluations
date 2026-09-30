/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$<GetClosestSurfacePositionDebugger>b__80_0
ENTRY_POINT: 05ae88dc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 79
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__<GetClosestSurfacePositionDebugger>b__80_0
               (long param_1,long param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_2 + 0xc) != *(int *)(param_1 + 0x2c)) {
      FUN_05e229e0(0);
    }
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


