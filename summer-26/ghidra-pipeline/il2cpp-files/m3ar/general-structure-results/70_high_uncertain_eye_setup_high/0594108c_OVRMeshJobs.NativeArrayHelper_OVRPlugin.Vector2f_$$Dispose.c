/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 0594108c
PROGRAM: m3ar-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__Dispose(void)

{
  int unaff_w22;
  int unaff_w23;
  long unaff_x25;
  
  FUN_07506bd4();
  if (unaff_w23 < 0) {
    FUN_07506818(0x10,4,0);
  }
  if (*(int *)(unaff_x25 + 0x18) - unaff_w22 < unaff_w23) {
    FUN_0750636c(0x17,0);
  }
  FUN_04d3c018(*(undefined8 *)(unaff_x25 + 0x10),unaff_w22,unaff_w23);
  return;
}


