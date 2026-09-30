/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 04439ef4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__Dispose(long param_1,int param_2)

{
  int unaff_w21;
  
  if (param_2 < 0) {
    FUN_05950c74(0);
  }
  if (unaff_w21 < 0) {
    LipSyncMicInput__CanStartMic(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - param_2 < unaff_w21) {
    FUN_0595040c(0x17,0);
  }
  if (1 < unaff_w21) {
    FUN_039b13ec(*(undefined8 *)(param_1 + 0x10),param_2,unaff_w21);
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return;
}


