/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$CreateAlignmentAnchor
ENTRY_POINT: 02533188
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__CreateAlignmentAnchor
               (long param_1,long param_2)

{
  bool bVar1;
  
  if ((((param_1 == 0) && (*(long *)(param_2 + 0x58) == 0)) && (*(long *)(param_2 + 0x68) == 0)) &&
     ((*(long *)(param_2 + 0x20) == 0 && (*(long *)(param_2 + 0x78) == 0)))) {
    bVar1 = *(long *)(param_2 + 0x70) != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


