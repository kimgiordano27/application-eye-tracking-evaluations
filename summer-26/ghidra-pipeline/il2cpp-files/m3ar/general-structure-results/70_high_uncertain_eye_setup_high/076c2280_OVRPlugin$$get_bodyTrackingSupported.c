/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingSupported
ENTRY_POINT: 076c2280
PROGRAM: m3ar-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_bodyTrackingSupported(void)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x21;
  
  lVar1 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x18);
  if (lVar1 != 0) {
    if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    if (*(long *)(lVar1 + 0x28) != 0) {
      *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(*(long *)(lVar1 + 0x28) + 0x10);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


