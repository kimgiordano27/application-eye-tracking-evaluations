/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$op_Implicit
ENTRY_POINT: 01869cc0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<Guid>__op_Implicit(void)

{
  long lVar1;
  long *unaff_x19;
  
  lVar1 = FUN_0103c244();
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  if (*(long *)(*unaff_x19 + 0x40) == *(long *)(lVar1 + 0x40)) {
    thunk_FUN_01040230();
    FUN_01869b58();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc8d0();
}


