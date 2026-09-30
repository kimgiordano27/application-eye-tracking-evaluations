/*
FUNCTION_NAME: FUN_05e564b4
ENTRY_POINT: 05e564b4
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


void FUN_05e564b4(long param_1,ulong param_2)

{
  if ((DAT_066dc603 & 1) == 0) {
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_103__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_104__);
    DAT_066dc603 = 1;
  }
  if (*(char *)(param_1 + 0x2c) == '\0') {
    if ((param_2 & 1) != 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
LAB_05e56540:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_03f46944(*(long *)(param_1 + 0x10),
                   *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_103__);
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_05e56540;
      FUN_03f46268(*(long *)(param_1 + 0x18),
                   *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_104__);
    }
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  return;
}


