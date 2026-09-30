/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.PointAndLocate$$get_RaycastOrigin
ENTRY_POINT: 06e55f20
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


void Meta_XR_MRUtilityKit_BuildingBlocks_PointAndLocate__get_RaycastOrigin(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined4 unaff_w21;
  undefined8 in_stack_00000018;
  
  FUN_058115f0(&stack0x00000018,unaff_w21,*(undefined8 *)(param_1 + 0x38));
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03d8f26c();
  }
  thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x10));
  return;
}


