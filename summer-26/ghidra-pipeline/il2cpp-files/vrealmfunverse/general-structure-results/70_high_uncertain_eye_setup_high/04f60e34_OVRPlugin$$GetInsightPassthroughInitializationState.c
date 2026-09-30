/*
FUNCTION_NAME: OVRPlugin$$GetInsightPassthroughInitializationState
ENTRY_POINT: 04f60e34
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__GetInsightPassthroughInitializationState(void)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_02b3c81c(
              System_Collections_Generic_Dictionary<TypeConverterRegistry_ConverterKey,_Delegate>_TypeInfo
              );
  *(undefined1 *)(unaff_x20 + 0xae6) = 1;
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    return *(long *)(unaff_x19 + 0x10) == *(long *)(*(long *)(unaff_x19 + 0x18) + 200);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


