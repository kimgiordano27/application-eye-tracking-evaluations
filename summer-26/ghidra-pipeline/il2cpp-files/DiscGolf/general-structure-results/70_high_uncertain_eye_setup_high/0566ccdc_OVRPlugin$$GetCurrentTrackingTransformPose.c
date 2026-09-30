/*
FUNCTION_NAME: OVRPlugin$$GetCurrentTrackingTransformPose
ENTRY_POINT: 0566ccdc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__GetCurrentTrackingTransformPose(void)

{
  int iVar1;
  int in_w8;
  undefined4 unaff_w20;
  
  if (in_w8 == 0) {
    thunk_FUN_02df485c();
  }
  iVar1 = OVRInput_OVRControllerTouch__ConfigureNearTouchMap(unaff_w20);
  return iVar1 == 0;
}


