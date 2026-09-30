/*
FUNCTION_NAME: OVRManager$$add_VrFocusLost
ENTRY_POINT: 076aaee8
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


void OVRManager__add_VrFocusLost(void)

{
  byte bVar1;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_0403162c();
  *(undefined1 *)(unaff_x21 + 0x59) = 1;
  *(long **)(unaff_x19 + 0x28) = unaff_x20;
  if (unaff_x20 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_08f65598 + 0x130);
    if (bVar1 <= *(byte *)(*unaff_x20 + 0x130)) {
      if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)PTR_DAT_08f65598) {
        unaff_x20 = (long *)0x0;
      }
      goto LAB_076aaf38;
    }
  }
  unaff_x20 = (long *)0x0;
LAB_076aaf38:
  *(long **)(unaff_x19 + 0x20) = unaff_x20;
  return;
}


