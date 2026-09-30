/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.PointAndLocate$$get_RaycastOrigin
ENTRY_POINT: 05b27b64
PROGRAM: vandalizer-libil2cpp.so
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
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_0322bef4(param_1);
  }
  FUN_05da3e28();
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  thunk_FUN_0322ed78(*(undefined8 *)PTR_DAT_075a9098,&stack0x00000030);
  return;
}


