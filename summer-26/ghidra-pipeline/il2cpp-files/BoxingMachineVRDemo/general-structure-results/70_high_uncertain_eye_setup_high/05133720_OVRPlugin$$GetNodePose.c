/*
FUNCTION_NAME: OVRPlugin$$GetNodePose
ENTRY_POINT: 05133720
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetNodePose(void)

{
  undefined8 uVar1;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  *(undefined1 *)(unaff_x21 + 0xc7c) = 1;
  uVar1 = thunk_FUN_02d9d534(*unaff_x22);
  FUN_05132670();
  return uVar1;
}


