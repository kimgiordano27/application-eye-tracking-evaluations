/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSurfacePosition
ENTRY_POINT: 06de96cc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;pose_vector;data_collection
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKRoom__TryGetClosestSurfacePosition(long param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x21;
  long *unaff_x22;
  
  while( true ) {
    lVar2 = param_1;
    if (unaff_x21 == lVar2) {
      return;
    }
    plVar1 = (long *)FUN_0714874c(lVar2);
    if ((plVar1 != (long *)0x0) && (*plVar1 != *unaff_x22)) break;
    param_1 = FUN_03cab820();
    unaff_x21 = lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fecc(plVar1);
}


