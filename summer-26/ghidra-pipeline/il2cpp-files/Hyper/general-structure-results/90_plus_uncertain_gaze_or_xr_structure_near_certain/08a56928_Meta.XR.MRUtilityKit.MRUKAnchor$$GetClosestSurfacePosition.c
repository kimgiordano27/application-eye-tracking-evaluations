/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$GetClosestSurfacePosition
ENTRY_POINT: 08a56928
PROGRAM: Hyper-libil2cpp.so
SCORE: 145
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__GetClosestSurfacePosition(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined8 *unaff_x24;
  
  lVar4 = *(long *)(unaff_x20 + 0x98);
  do {
    lVar2 = FUN_08dc2b6c(lVar4);
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      uVar5 = *unaff_x24;
      lVar3 = thunk_FUN_04983e64(lVar2,uVar5);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494850c(lVar2,uVar5);
      }
    }
    lVar2 = FUN_04980500((long *)(unaff_x20 + 0x98),lVar3,lVar4);
    bVar1 = lVar2 != lVar4;
    lVar4 = lVar2;
  } while (bVar1);
  return;
}


