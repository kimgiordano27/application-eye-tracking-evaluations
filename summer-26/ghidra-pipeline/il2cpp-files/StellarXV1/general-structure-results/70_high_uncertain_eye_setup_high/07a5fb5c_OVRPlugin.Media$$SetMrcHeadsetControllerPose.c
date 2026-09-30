/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcHeadsetControllerPose
ENTRY_POINT: 07a5fb5c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetMrcHeadsetControllerPose
               (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  *(long *)(param_1 + 0x28) = param_2._8_8_;
  *(long *)(param_1 + 0x20) = param_2._0_8_;
  FUN_07a5fbd8(param_3,param_4,*(undefined8 *)(unaff_x20 + 0x48));
  return;
}


