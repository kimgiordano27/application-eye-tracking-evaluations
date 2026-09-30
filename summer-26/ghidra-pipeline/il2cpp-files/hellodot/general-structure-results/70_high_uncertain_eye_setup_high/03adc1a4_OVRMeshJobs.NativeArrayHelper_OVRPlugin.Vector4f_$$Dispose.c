/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 03adc1a4
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__Dispose(void)

{
  long lVar1;
  long in_x3;
  long *unaff_x19;
  
  FUN_03538f20();
  lVar1 = *(long *)(*(long *)(*(long *)(in_x3 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02ce0978(lVar1);
  }
  if (unaff_x19 != (long *)0x0) {
    if (*(long *)(*unaff_x19 + 0x40) == *(long *)(lVar1 + 0x40)) {
      thunk_FUN_02cea9e8();
      FUN_03adc0ac();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce8018();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


