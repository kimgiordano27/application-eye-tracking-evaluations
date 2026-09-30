/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_IsPerfMetricsSupported
ENTRY_POINT: 07a688fc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_IsPerfMetricsSupported(long param_1)

{
  uint unaff_w19;
  long unaff_x20;
  
  if (param_1 != 0) {
    if (*(uint *)(param_1 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      FUN_07a680ec(*(long *)(unaff_x20 + 0x58),
                   *(undefined4 *)(param_1 + (long)(int)unaff_w19 * 4 + 0x20),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


