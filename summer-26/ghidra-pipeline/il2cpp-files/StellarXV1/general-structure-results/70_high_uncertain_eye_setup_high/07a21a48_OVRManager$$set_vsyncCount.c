/*
FUNCTION_NAME: OVRManager$$set_vsyncCount
ENTRY_POINT: 07a21a48
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_vsyncCount(void)

{
  undefined8 uVar1;
  long unaff_x19;
  
  FUN_07979dfc();
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_07979dfc();
    uVar1 = FUN_07a21ad4(*(undefined4 *)(unaff_x19 + 100),*(undefined4 *)(unaff_x19 + 0x6c));
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_07979dfc(*(long *)(unaff_x19 + 0x30),uVar1,1,0);
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        FUN_07979dfc(*(long *)(unaff_x19 + 0x38),uVar1,1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


