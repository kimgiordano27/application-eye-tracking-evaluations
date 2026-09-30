/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 03be1bec
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


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__Dispose(undefined8 param_1,long param_2)

{
  int iVar1;
  long unaff_x21;
  
  if ((param_2 != 0) && (iVar1 = thunk_FUN_02f177cc(), iVar1 != 1)) {
    FUN_050f5b58(7,0);
  }
  FUN_050f7d68(*(undefined8 *)(unaff_x21 + 0x10),0);
  return;
}


