/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrpi_SetTrackingCalibratedOrigin
ENTRY_POINT: 06af6aa8
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


uint OVRPlugin_OVRP_1_2_0__ovrpi_SetTrackingCalibratedOrigin(undefined1 param_1 [16])

{
  undefined8 *unaff_x19;
  uint unaff_w21;
  
  unaff_x19[1] = param_1._8_8_;
  *unaff_x19 = param_1._0_8_;
  return unaff_w21 & 1;
}


