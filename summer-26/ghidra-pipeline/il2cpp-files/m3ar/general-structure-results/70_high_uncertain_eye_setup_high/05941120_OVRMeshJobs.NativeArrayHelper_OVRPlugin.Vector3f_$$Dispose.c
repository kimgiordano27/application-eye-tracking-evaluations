/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 05941120
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__Dispose
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = FUN_04ea4af4(*(undefined8 *)(param_1 + 0x10),param_2,param_3,0,*(int *)(param_1 + 0x18),
                         *(undefined8 *)
                          (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0)
                                                        + 0xd0) + 0x20) + 0xc0) + 0x150));
    return iVar1 != -1;
  }
  return false;
}


