/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_OverrideExternalCameraStaticPose
ENTRY_POINT: 02cdb620
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_OverrideExternalCameraStaticPose(undefined8 param_1)

{
  long in_x9;
  long unaff_x29;
  undefined8 in_stack_00000020;
  
  *(undefined8 *)(in_x9 + 0x18) = param_1;
  *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x40) =
       *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x20);
  *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x38) = in_stack_00000020;
  return;
}


