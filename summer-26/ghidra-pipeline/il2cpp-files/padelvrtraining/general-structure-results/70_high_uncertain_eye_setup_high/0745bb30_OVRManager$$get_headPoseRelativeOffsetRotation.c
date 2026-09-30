/*
FUNCTION_NAME: OVRManager$$get_headPoseRelativeOffsetRotation
ENTRY_POINT: 0745bb30
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_headPoseRelativeOffsetRotation
               (undefined4 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined4 param_4,undefined8 param_5,long param_6)

{
  *(undefined4 *)(param_6 + 100) = param_4;
  *(undefined4 *)(param_6 + 0x68) = param_1;
  FUN_073a483c(param_6,0);
  return;
}


