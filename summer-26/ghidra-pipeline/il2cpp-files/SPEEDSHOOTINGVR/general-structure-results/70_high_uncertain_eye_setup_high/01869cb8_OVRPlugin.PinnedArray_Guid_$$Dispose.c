/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$Dispose
ENTRY_POINT: 01869cb8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<Guid>__Dispose(ulong param_1,undefined8 param_2,long param_3)

{
  long *unaff_x19;
  
  if ((param_1 & 1) == 0) {
    param_3 = FUN_0103c244(param_3);
  }
  if (unaff_x19 != (long *)0x0) {
    if (*(long *)(*unaff_x19 + 0x40) == *(long *)(param_3 + 0x40)) {
      thunk_FUN_01040230();
      FUN_01869b58();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fdc8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


