/*
FUNCTION_NAME: OVRManager$$SetCurrentXRDevice
ENTRY_POINT: 05ff71c4
PROGRAM: vandalizer-libil2cpp.so
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
  undefined4 *in_x9;
  undefined4 *in_x10;
  undefined4 *in_x11;
  undefined4 *in_x12;
  long unaff_x19;
  long unaff_x21;
  
  if (unaff_x21 != 0) {
    thunk_FUN_06e01bd0(*in_x9,*in_x10,*in_x11,*in_x12);
    if (*(long *)(unaff_x19 + 0x50) != 0) {
      FUN_05f946fc(*(long *)(unaff_x19 + 0x50),0);
      if (*(long *)(unaff_x19 + 0x58) != 0) {
        FUN_05f946fc(*(long *)(unaff_x19 + 0x58),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


