/*
FUNCTION_NAME: OVRPlugin$$set_vsyncCount
ENTRY_POINT: 07c72374
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__set_vsyncCount(ulong param_1,long param_2)

{
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f50558);
    *(undefined1 *)(unaff_x20 + 0x728) = 1;
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    return *(long *)(param_2 + 0x10) != *(long *)(*(long *)(param_2 + 0x18) + 0xd0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


