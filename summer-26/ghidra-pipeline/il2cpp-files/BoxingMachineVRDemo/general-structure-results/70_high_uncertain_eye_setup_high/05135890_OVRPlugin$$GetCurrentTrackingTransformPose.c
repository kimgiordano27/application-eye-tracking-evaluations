/*
FUNCTION_NAME: OVRPlugin$$GetCurrentTrackingTransformPose
ENTRY_POINT: 05135890
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetCurrentTrackingTransformPose(void)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_05148530();
  if ((unaff_x20 != 0) && (unaff_x21 != 0)) {
    FUN_05133b80();
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


