/*
FUNCTION_NAME: FUN_05e64048
ENTRY_POINT: 05e64048
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05e64048(long param_1,ulong param_2)

{
  if ((DAT_066dc65c & 1) == 0) {
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_94__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_98__);
    DAT_066dc65c = 1;
  }
  if (*(char *)(param_1 + 0x98) == '\0') {
    if ((param_2 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_03abeafc(*(long *)(param_1 + 0x20),
                     *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_98__);
      }
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_05e5353c(*(long *)(param_1 + 0x28),0);
      FUN_03a94a40(param_1 + 0x30,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_94__);
    }
    *(undefined1 *)(param_1 + 0x98) = 1;
  }
  return;
}


