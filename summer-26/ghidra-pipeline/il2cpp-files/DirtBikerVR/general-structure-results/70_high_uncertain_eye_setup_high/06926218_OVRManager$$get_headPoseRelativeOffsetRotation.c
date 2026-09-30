/*
FUNCTION_NAME: OVRManager$$get_headPoseRelativeOffsetRotation
ENTRY_POINT: 06926218
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_headPoseRelativeOffsetRotation(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1c) = DAT_015c49c0;
  FUN_06779364(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x10),param_2);
  return;
}


