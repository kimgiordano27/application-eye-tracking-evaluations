/*
FUNCTION_NAME: OVRManager$$SetCurrentXRDevice
ENTRY_POINT: 051a4c10
PROGRAM: hellodot-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetCurrentXRDevice(void)

{
  long unaff_x19;
  
  FUN_05ec2414();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_05ec2414(*(long *)(unaff_x19 + 0x28),0,0);
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_05ef2234(*(long *)(unaff_x19 + 0x30),0,0);
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        FUN_05ef2234(*(long *)(unaff_x19 + 0x38),0,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


