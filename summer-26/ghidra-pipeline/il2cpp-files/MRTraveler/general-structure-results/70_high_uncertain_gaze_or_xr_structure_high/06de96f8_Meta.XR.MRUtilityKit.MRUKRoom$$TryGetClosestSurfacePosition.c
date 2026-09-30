/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSurfacePosition
ENTRY_POINT: 06de96f8
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


void Meta_XR_MRUtilityKit_MRUKRoom__TryGetClosestSurfacePosition(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_09419deb & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e912d0);
    DAT_09419deb = 1;
  }
  puVar1 = PTR_DAT_08e912d0;
  lVar5 = *(long *)(param_1 + 0x68);
  while ((plVar3 = (long *)FUN_07148944(lVar5,param_2,0), plVar3 == (long *)0x0 ||
         (*plVar3 == *(long *)puVar1))) {
    lVar4 = FUN_03cab820((long *)(param_1 + 0x68),plVar3,lVar5);
    bVar2 = lVar5 == lVar4;
    lVar5 = lVar4;
    if (bVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fecc(plVar3);
}


