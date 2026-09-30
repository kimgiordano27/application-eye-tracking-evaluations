/*
FUNCTION_NAME: OVRPlugin$$GetNodePose
ENTRY_POINT: 0909a7cc
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodePose(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x128) = param_2;
  thunk_FUN_049ee3d8(param_1 + 0x128);
  return;
}


