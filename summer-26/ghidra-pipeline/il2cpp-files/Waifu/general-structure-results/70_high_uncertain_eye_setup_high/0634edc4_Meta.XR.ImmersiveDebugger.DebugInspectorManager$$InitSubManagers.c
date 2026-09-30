/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager$$InitSubManagers
ENTRY_POINT: 0634edc4
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_DebugInspectorManager__InitSubManagers(void)

{
  long unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  int unaff_w24;
  int unaff_w25;
  int unaff_w26;
  
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    if (0 < unaff_w26) {
      FUN_0429f208(*(long *)(unaff_x19 + 0x30),unaff_w23,
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083eb040 + 0x20) + 0xc0) + 0x60));
    }
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      if (0 < unaff_w25) {
        FUN_042a5698(*(long *)(unaff_x19 + 0x38),unaff_w22,
                     *(undefined8 *)(*(long *)(*(long *)(DAT_083eb148 + 0x20) + 0xc0) + 0x60));
      }
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        if (0 < unaff_w24) {
          FUN_0429d670(*(long *)(unaff_x19 + 0x28),unaff_w21,
                       *(undefined8 *)(*(long *)(*(long *)(DAT_083eafb8 + 0x20) + 0xc0) + 0x60));
        }
        if (*(long *)(unaff_x19 + 0x40) != 0) {
          FUN_0438cd54(*(long *)(unaff_x19 + 0x40),unaff_w20,DAT_083ebab0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


