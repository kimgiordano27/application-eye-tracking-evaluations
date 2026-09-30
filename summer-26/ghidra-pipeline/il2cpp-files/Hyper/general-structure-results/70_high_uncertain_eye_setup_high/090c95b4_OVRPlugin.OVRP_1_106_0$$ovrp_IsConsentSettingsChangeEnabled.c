/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_IsConsentSettingsChangeEnabled
ENTRY_POINT: 090c95b4
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_IsConsentSettingsChangeEnabled(long param_1,uint param_2)

{
  long lVar1;
  long in_x9;
  undefined4 in_s4;
  
  lVar1 = *(long *)(param_1 + 0xd0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if (param_2 < *(uint *)(lVar1 + 0x18)) {
    *(undefined4 *)(lVar1 + in_x9 * 4 + 0x20) = in_s4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


