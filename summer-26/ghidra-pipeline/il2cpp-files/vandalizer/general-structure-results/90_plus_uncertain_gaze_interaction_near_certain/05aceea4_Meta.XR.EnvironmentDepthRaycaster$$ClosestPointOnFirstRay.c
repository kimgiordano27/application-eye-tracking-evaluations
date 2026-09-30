/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$ClosestPointOnFirstRay
ENTRY_POINT: 05aceea4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 173
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;ray_interaction;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_EnvironmentDepthRaycaster__ClosestPointOnFirstRay(long *param_1,long param_2)

{
  long lVar1;
  int in_w8;
  
  if (in_w8 != 0) {
    if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (in_w8 != *(int *)(*param_1 + 0x20) + 1) goto LAB_05aceed0;
  }
  FUN_05e22a2c(0);
LAB_05aceed0:
  lVar1 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0322bef4();
  }
  thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x10));
  return;
}


