/*
FUNCTION_NAME: OVRManager$$set_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 09082584
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_eyeFovPremultipliedAlphaModeEnabled(undefined1 param_1 [16],float param_2)

{
  long unaff_x19;
  float fVar1;
  float fVar2;
  float unaff_s9;
  float unaff_s10;
  
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    fVar2 = param_2;
    FUN_0a18a1a0(*(long *)(unaff_x19 + 0x28),0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      fVar1 = (float)FUN_0907ed04(*(long *)(unaff_x19 + 0x20),0);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        fVar2 = unaff_s10 + unaff_s9 + (param_2 - fVar2);
        if (fVar2 <= fVar1 + fVar1) {
          fVar2 = fVar1 + fVar1;
        }
        FUN_0907efd0(fVar2,*(long *)(unaff_x19 + 0x20),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


