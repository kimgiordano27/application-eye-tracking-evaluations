/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 04972ab8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__Dispose
               (ulong param_1,undefined8 param_2,long param_3)

{
  long *unaff_x19;
  
  if ((param_1 & 1) == 0) {
    param_3 = FUN_0322bef4(param_3);
  }
  if (unaff_x19 != (long *)0x0) {
    if (*(long *)(*unaff_x19 + 0x40) == *(long *)(param_3 + 0x40)) {
      thunk_FUN_0322f29c();
      OVRMeshJobs_NativeArrayHelper<__Il2CppFullySharedGenericStructType>__Dispose();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2730();
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


