/*
FUNCTION_NAME: FUN_05e63f74
ENTRY_POINT: 05e63f74
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05e63f74(long param_1)

{
  if ((DAT_066dc65a & 1) == 0) {
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_97__);
    DAT_066dc65a = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_03abe9f0(*(long *)(param_1 + 0x20),*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_97__);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_05e53440(*(long *)(param_1 + 0x28),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


