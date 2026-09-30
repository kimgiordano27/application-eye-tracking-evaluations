/*
FUNCTION_NAME: OVREyeGaze$$CalculateEyeRotation
ENTRY_POINT: 04eddae0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 90
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;pose_vector;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__CalculateEyeRotation(undefined1 param_1 [16],undefined1 param_2 [16])

{
  long unaff_x20;
  
  *(long *)(unaff_x20 + 0x164) = param_1._8_8_;
  *(long *)(unaff_x20 + 0x15c) = param_1._0_8_;
  *(long *)(unaff_x20 + 0x170) = param_2._8_8_;
  *(long *)(unaff_x20 + 0x168) = param_2._0_8_;
  FUN_03bf32e8();
  return;
}


