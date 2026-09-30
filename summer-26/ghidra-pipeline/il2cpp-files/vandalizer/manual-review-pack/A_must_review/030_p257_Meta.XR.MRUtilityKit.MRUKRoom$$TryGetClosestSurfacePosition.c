/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSurfacePosition
ENTRY_POINT: 05b014d0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 148
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MRUtilityKit_MRUKRoom__TryGetClosestSurfacePosition(long param_1)

{
  uint in_w9;
  uint in_w10;
  uint uVar1;
  int in_w11;
  long in_x12;
  uint in_w13;
  long in_x14;
  long unaff_x19;
  
  do {
    uVar1 = in_w13 + 1;
    if (-1 < *(int *)(in_x14 + 0x20)) {
      *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(in_x12 + (long)(int)in_w10 * 0x18 + 0x30);
      uVar1 = in_w10;
LAB_05b01500:
      return uVar1 < in_w9;
    }
    if (in_w9 <= uVar1) {
      *(uint *)(unaff_x19 + 8) = in_w9 + 1;
      *(undefined4 *)(unaff_x19 + 0x10) = 0;
      goto LAB_05b01500;
    }
    in_x12 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 8) = in_w13 + 2;
    if (in_x12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    in_w13 = in_w13 + 1;
    if (*(uint *)(in_x12 + 0x18) <= in_w13) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    in_x14 = in_x12 + (long)(int)uVar1 * (long)in_w11;
    in_w10 = uVar1;
  } while( true );
}


