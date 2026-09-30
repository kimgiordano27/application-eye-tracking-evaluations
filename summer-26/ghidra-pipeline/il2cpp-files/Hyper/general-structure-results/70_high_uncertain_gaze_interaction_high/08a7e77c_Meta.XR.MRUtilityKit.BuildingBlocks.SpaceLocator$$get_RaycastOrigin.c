/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.SpaceLocator$$get_RaycastOrigin
ENTRY_POINT: 08a7e77c
PROGRAM: Hyper-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


void Meta_XR_MRUtilityKit_BuildingBlocks_SpaceLocator__get_RaycastOrigin(void)

{
  long unaff_x19;
  ulong unaff_x21;
  
  if (*(int *)(*(long *)PTR_DAT_0ac111a0 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_05a4a634(unaff_x21 | 8,&stack0x00000020,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
  FUN_08c7f818(unaff_x21 | 8,0);
  return;
}


