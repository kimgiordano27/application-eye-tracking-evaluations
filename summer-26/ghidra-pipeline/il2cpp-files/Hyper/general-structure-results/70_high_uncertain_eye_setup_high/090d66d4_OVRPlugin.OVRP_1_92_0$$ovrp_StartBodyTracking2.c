/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_StartBodyTracking2
ENTRY_POINT: 090d66d4
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_92_0__ovrp_StartBodyTracking2(void)

{
  long lVar1;
  undefined8 unaff_x19;
  undefined8 *unaff_x21;
  
  lVar1 = thunk_FUN_04983f60(*unaff_x21);
  FUN_090d6824();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = unaff_x19;
    thunk_FUN_049ee3d8();
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


