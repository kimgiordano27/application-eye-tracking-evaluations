/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 04b4a54c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__Dispose(void)

{
  int unaff_w22;
  int unaff_w24;
  long unaff_x25;
  
  if (*(int *)(unaff_x25 + 0x18) - unaff_w24 < unaff_w22) {
    FUN_062638b4(0x17,0);
  }
  FUN_04173e44(*(undefined8 *)(unaff_x25 + 0x10),unaff_w24,unaff_w22);
  return;
}


