/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAppHasVrFocus
ENTRY_POINT: 02904774
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin_OVRP_1_1_0__ovrp_GetAppHasVrFocus(ulong param_1)

{
  if ((bRam0000000007233c6b & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06ddaad8);
    bRam0000000007233c6b = 1;
  }
  if (param_1 < 0x8000) {
    return param_1 & 0xffffffff;
  }
  FUN_011aacf4(*(undefined8 *)PTR_DAT_06ddaad8);
                    /* WARNING: Subroutine does not return */
  FUN_02902d14();
}


