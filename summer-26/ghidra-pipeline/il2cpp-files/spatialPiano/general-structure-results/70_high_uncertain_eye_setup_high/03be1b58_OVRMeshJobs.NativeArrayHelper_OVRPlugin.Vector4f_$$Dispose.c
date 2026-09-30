/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 03be1b58
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__Dispose(long param_1)

{
  uint uVar1;
  void *__src;
  long in_x9;
  
  if (*(long *)(param_1 + 0x40) == in_x9) {
    __src = (void *)thunk_FUN_02f453b8();
    memcpy(&stack0x00000008,__src,0xa8);
    uVar1 = FUN_03be1a50();
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f08d48();
}


