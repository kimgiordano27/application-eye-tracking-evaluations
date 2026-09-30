/*
FUNCTION_NAME: OVRPlugin.Quatf$$ToString
ENTRY_POINT: 07401098
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Quatf__ToString(long param_1,long param_2)

{
  long lVar1;
  
  if ((DAT_0941e9b5 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eb61d0);
    FUN_03c8f898(PTR_DAT_08eb61d8);
    DAT_0941e9b5 = 1;
  }
  *(long *)(param_1 + 0x30) = param_2;
  thunk_FUN_03d233cc((long *)(param_1 + 0x30),param_2);
  if ((param_2 != 0) && (lVar1 = *(long *)(param_1 + 0x20), lVar1 != 0)) {
    FUN_067d4e88(lVar1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x28),
                 *(undefined4 *)(lVar1 + 0x24),*(undefined8 *)PTR_DAT_08eb61d0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


