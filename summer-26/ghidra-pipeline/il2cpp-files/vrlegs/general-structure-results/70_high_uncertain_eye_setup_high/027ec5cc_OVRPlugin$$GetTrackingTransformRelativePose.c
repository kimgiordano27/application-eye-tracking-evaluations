/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRelativePose
ENTRY_POINT: 027ec5cc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackingTransformRelativePose(long param_1)

{
  long unaff_x19;
  
  thunk_FUN_01a4b338();
  if ((*(long *)(param_1 + 0x10) != 0) && (unaff_x19 != 0)) {
    FUN_027ec5f8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


