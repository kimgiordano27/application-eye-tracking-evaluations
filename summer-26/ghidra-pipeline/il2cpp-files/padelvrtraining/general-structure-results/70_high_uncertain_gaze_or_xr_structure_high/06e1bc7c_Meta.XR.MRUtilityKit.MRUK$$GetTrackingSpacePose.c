/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$GetTrackingSpacePose
ENTRY_POINT: 06e1bc7c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 79
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_MRUtilityKit_MRUK__GetTrackingSpacePose(undefined1 param_1 [16])

{
  long unaff_x19;
  
  *(long *)(unaff_x19 + 0x14) = param_1._8_8_;
  *(long *)(unaff_x19 + 0xc) = param_1._0_8_;
  return;
}


