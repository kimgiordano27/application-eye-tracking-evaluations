/*
FUNCTION_NAME: OVRManager$$set_headPoseRelativeOffsetRotation
ENTRY_POINT: 06926224
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_headPoseRelativeOffsetRotation(long param_1,long param_2,undefined8 param_3)

{
  *(undefined8 *)(param_2 + 0x1c) = *(undefined8 *)(param_1 + 0x9c0);
  FUN_06779364(param_2,0);
  *(undefined8 *)(param_2 + 0x10) = param_3;
  thunk_FUN_03afed3c((undefined8 *)(param_2 + 0x10),param_3);
  return;
}


