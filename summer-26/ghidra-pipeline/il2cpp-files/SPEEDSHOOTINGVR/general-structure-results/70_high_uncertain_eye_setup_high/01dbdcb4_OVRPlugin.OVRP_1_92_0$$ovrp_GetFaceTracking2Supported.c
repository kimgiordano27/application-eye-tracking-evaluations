/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_GetFaceTracking2Supported
ENTRY_POINT: 01dbdcb4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_92_0__ovrp_GetFaceTracking2Supported(void)

{
  long lVar1;
  int unaff_w23;
  
  thunk_FUN_0106e12c();
  lVar1 = FUN_01dbde94();
  if (unaff_w23 != 0) {
    FUN_01dbd1a8(lVar1,0);
    return;
  }
  if (lVar1 != 0) {
    FUN_01db7f40(lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


