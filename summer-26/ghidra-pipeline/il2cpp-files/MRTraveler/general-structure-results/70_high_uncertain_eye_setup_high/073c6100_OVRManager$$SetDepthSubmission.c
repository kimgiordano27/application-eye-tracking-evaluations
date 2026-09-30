/*
FUNCTION_NAME: OVRManager$$SetDepthSubmission
ENTRY_POINT: 073c6100
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetDepthSubmission(float param_1,long param_2)

{
  long lVar1;
  
  if (param_1 <= 0.0) {
    if (0.0 <= param_1) {
      return;
    }
    lVar1 = *(long *)(param_2 + 0x30);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x28);
  }
  if (lVar1 != 0) {
    FUN_085f3110(lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


