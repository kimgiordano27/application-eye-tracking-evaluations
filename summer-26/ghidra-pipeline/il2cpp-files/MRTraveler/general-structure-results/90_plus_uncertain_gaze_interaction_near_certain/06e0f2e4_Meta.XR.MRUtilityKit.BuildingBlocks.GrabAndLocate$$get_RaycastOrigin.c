/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.GrabAndLocate$$get_RaycastOrigin
ENTRY_POINT: 06e0f2e4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 134
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


void Meta_XR_MRUtilityKit_BuildingBlocks_GrabAndLocate__get_RaycastOrigin(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  
  puVar1 = (undefined8 *)FUN_03cf1348();
  (*(code *)*puVar1)();
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d91ca0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb28();
}


