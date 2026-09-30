/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$GetClosestSurfacePosition
ENTRY_POINT: 06e2e384
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 142
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__GetClosestSurfacePosition
               (long *param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *param_1 = param_2;
  thunk_FUN_03d1023c();
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0xd) = param_3;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    *(undefined4 *)(param_1 + 1) = uVar1;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    param_1[0xc] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


