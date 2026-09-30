/*
FUNCTION_NAME: OVRManager$$UpdateBoundary
ENTRY_POINT: 01d71aec
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateBoundary(void)

{
  byte bVar1;
  long *in_x9;
  long *unaff_x20;
  
  bVar1 = *(byte *)(*in_x9 + 0x130);
  if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) == *in_x9)) {
    FUN_01d717d8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc8d0();
}


