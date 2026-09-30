/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$ClosestPointOnFirstRay
ENTRY_POINT: 07703910
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 191
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;ray_interaction;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_EnvironmentDepthRaycaster__ClosestPointOnFirstRay(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  undefined8 *unaff_x22;
  
  FUN_076ff588();
  lVar2 = *(long *)(unaff_x19 + 0x80);
  uVar1 = thunk_FUN_0448520c(*unaff_x22);
  FUN_074890f0();
  if (lVar2 != 0) {
    FUN_076ff588(lVar2,uVar1);
    lVar2 = *(long *)(unaff_x19 + 0x88);
    uVar1 = thunk_FUN_0448520c(*unaff_x22);
    FUN_074890f0();
    if (lVar2 != 0) {
      FUN_076ff588(lVar2,uVar1);
      lVar2 = *(long *)(unaff_x19 + 0x90);
      uVar1 = thunk_FUN_0448520c(*unaff_x22);
      FUN_074890f0();
      if (lVar2 != 0) {
        FUN_076ff588(lVar2,uVar1);
        lVar2 = *(long *)(unaff_x19 + 0x98);
        uVar1 = thunk_FUN_0448520c(*unaff_x22);
        FUN_074890f0();
        if (lVar2 != 0) {
          FUN_076ff588(lVar2,uVar1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


