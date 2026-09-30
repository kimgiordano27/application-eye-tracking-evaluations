/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 02b4099c
PROGRAM: vrfs-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__Dispose(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  (**(code **)(param_1 + 0x138))();
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  thunk_FUN_01656ef8();
  if (unaff_x19 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02b409e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20) + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


