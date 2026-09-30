/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$DeserializeFromString<MatchInfo>
ENTRY_POINT: 05d046e4
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__DeserializeFromString<MatchInfo>(void)

{
  long unaff_x20;
  long unaff_x23;
  
  if (*(int *)(**(long **)(unaff_x23 + 0xa20) + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (*(int *)(*(long *)PTR_DAT_0ac09f18 + 0xe4) == 0) {
    thunk_FUN_049a583c(*(long *)PTR_DAT_0ac09f18);
  }
                    /* WARNING: Could not recover jumptable at 0x05d04750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x20))();
  return;
}


