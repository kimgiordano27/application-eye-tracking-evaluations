/*
FUNCTION_NAME: OVRManager$$OnApplicationFocus
ENTRY_POINT: 076b5bc0
PROGRAM: m3ar-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnApplicationFocus(void)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  
  uStack0000000000000008 = unaff_x19[1];
  uStack0000000000000000 = *unaff_x19;
  uStack0000000000000018 = unaff_x19[3];
  uStack0000000000000010 = unaff_x19[2];
  uStack0000000000000028 = unaff_x19[5];
  uStack0000000000000020 = unaff_x19[4];
  FUN_06371f70();
  if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  uStack0000000000000008 = unaff_x19[1];
  uStack0000000000000000 = *unaff_x19;
  uStack0000000000000018 = unaff_x19[3];
  uStack0000000000000010 = unaff_x19[2];
  uStack0000000000000028 = unaff_x19[5];
  uStack0000000000000020 = unaff_x19[4];
  FUN_06371f70();
  return;
}


