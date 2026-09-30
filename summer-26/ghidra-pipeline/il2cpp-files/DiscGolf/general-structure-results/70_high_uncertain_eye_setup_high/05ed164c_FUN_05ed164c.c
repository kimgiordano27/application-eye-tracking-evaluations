/*
FUNCTION_NAME: FUN_05ed164c
ENTRY_POINT: 05ed164c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05ed164c(long param_1)

{
  if ((DAT_06dc3eb3 & 1) == 0) {
    FUN_02d965b8(
                Method_System_Collections_Generic_List<MultiColumnCollectionHeader_ViewState_ColumnState>_Add__
                );
    FUN_02d965b8(Method_OVRResult<ulong,_OVRPlugin_Result>_get_Success__);
    DAT_06dc3eb3 = 1;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_04ff1c14(*(long *)(param_1 + 0x78),
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<MultiColumnCollectionHeader_ViewState_ColumnState>_Add__
                );
    if (*(long *)(param_1 + 0x80) != 0) {
      FUN_047cfd1c(*(long *)(param_1 + 0x80),
                   *(undefined8 *)Method_OVRResult<ulong,_OVRPlugin_Result>_get_Success__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


