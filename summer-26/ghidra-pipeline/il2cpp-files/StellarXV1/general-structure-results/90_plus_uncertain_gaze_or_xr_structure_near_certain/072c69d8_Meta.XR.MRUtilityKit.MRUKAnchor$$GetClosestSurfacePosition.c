/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$GetClosestSurfacePosition
ENTRY_POINT: 072c69d8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 145
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_MRUtilityKit_MRUKAnchor__GetClosestSurfacePosition(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long unaff_x19;
  ulong unaff_x20;
  uint unaff_w21;
  float fVar5;
  float unaff_s8;
  
  uVar3 = *(uint *)(unaff_x19 + 0x18);
  uVar4 = 0;
  while( true ) {
    fVar5 = unaff_s8 * (float)(int)uVar4;
    uVar2 = unaff_w21;
    if (fVar5 != INFINITY) {
      uVar2 = (int)fVar5;
    }
    if (uVar3 <= uVar2) break;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(param_1 + 0x18) <= uVar4) break;
    lVar1 = uVar4 * 4;
    uVar4 = uVar4 + 1;
    *(undefined4 *)(param_1 + lVar1 + 0x20) =
         *(undefined4 *)(unaff_x19 + (long)(int)uVar2 * 4 + 0x20);
    if (unaff_x20 == uVar4) {
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


