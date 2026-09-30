/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetTrackingTransformRelativePose
ENTRY_POINT: 02817404
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_GetTrackingTransformRelativePose
               (long param_1,undefined8 param_2,long param_3)

{
  long *unaff_x19;
  long unaff_x22;
  long in_stack_000000b8;
  
  if (param_1 != *(long *)(param_3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0();
  }
  thunk_FUN_01a89fbc();
  (**(code **)(*unaff_x19 + 0x388))();
  if (*(long *)(unaff_x22 + 0x28) == in_stack_000000b8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


