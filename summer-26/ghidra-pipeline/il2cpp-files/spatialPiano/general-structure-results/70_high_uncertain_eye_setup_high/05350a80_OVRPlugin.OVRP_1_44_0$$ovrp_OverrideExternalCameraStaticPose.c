/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_OverrideExternalCameraStaticPose
ENTRY_POINT: 05350a80
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_OverrideExternalCameraStaticPose(long param_1)

{
  int in_w9;
  undefined8 unaff_x19;
  long *unaff_x20;
  
  if (in_w9 == 0) {
    thunk_FUN_02f6670c();
    param_1 = *(long *)(*unaff_x20 + 0xb8);
  }
  *(undefined8 *)(param_1 + 0x18) = unaff_x19;
  return;
}


