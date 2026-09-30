/*
FUNCTION_NAME: OVRManager$$add_HSWDismissed
ENTRY_POINT: 033a7db0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_HSWDismissed(void)

{
  long lVar1;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  
  while( true ) {
    lVar1 = FUN_033dc8e8(unaff_x20,0);
    unaff_x20 = unaff_x20 - 8;
    *(undefined8 *)(unaff_x28 + lVar1 * 8) = 0;
    if (unaff_x20 < 8) break;
    lVar1 = FUN_033dc8e8(unaff_x20,0);
    *(undefined8 *)(unaff_x21 + lVar1 * 8) = 0;
    lVar1 = FUN_033dc8e8(unaff_x20,0);
    *(undefined8 *)(unaff_x22 + lVar1 * 8) = 0;
    lVar1 = FUN_033dc8e8(unaff_x20,0);
    *(undefined8 *)(unaff_x23 + lVar1 * 8) = 0;
    lVar1 = FUN_033dc8e8(unaff_x20,0);
    *(undefined8 *)(unaff_x24 + lVar1 * 8) = 0;
    lVar1 = FUN_033dc8e8(unaff_x20,0);
    *(undefined8 *)(unaff_x25 + lVar1 * 8) = 0;
    lVar1 = FUN_033dc8e8(unaff_x20,0);
    *(undefined8 *)(unaff_x26 + lVar1 * 8) = 0;
    lVar1 = FUN_033dc8e8(unaff_x20,0);
    *(undefined8 *)(unaff_x27 + lVar1 * 8) = 0;
  }
  if (unaff_x20 < 4) {
    if (unaff_x20 < 2) {
      if (unaff_x20 == 0) {
        return;
      }
      goto LAB_033a7e28;
    }
  }
  else {
    unaff_x19[2] = 0;
    unaff_x19[3] = 0;
    lVar1 = FUN_033dc8e8(unaff_x20,0);
    unaff_x19[lVar1 + -3] = 0;
    lVar1 = FUN_033dc8e8(unaff_x20,0);
    unaff_x19[lVar1 + -2] = 0;
  }
  unaff_x19[1] = 0;
  lVar1 = FUN_033dc8e8(unaff_x20,0);
  unaff_x19[lVar1 + -1] = 0;
LAB_033a7e28:
  *unaff_x19 = 0;
  return;
}


