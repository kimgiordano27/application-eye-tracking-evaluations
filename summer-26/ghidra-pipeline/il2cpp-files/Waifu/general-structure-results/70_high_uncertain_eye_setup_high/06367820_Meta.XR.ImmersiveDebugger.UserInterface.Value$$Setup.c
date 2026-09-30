/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Value$$Setup
ENTRY_POINT: 06367820
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Value__Setup(void)

{
  undefined4 unaff_w19;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  long unaff_x25;
  long unaff_x26;
  int unaff_w28;
  
  if (*(long *)(unaff_x20 + 0x120) != 0) {
    FUN_042a1b6c(*(long *)(unaff_x20 + 0x120),unaff_w22,DAT_083eb0e8);
    if (*(long *)(unaff_x20 + 0x128) != 0) {
      FUN_042a5698(*(long *)(unaff_x20 + 0x128),unaff_w22,*(undefined8 *)(unaff_x25 + 0x150));
      if (*(long *)(unaff_x20 + 0x130) != 0) {
        FUN_042a5698(*(long *)(unaff_x20 + 0x130),unaff_w22,*(undefined8 *)(unaff_x25 + 0x150));
        if (*(long *)(unaff_x20 + 0x138) != 0) {
          FUN_042a64a4(*(long *)(unaff_x20 + 0x138),unaff_w22,*(undefined8 *)(unaff_x26 + 0x198));
          if (0 < unaff_w28) {
            if (*(long *)(unaff_x20 + 0x140) == 0) goto LAB_06367a00;
            FUN_0429bad8(*(long *)(unaff_x20 + 0x140),unaff_w21,
                         *(undefined8 *)(*(long *)(*(long *)(DAT_083eaf38 + 0x20) + 0xc0) + 0x60));
          }
          if (*(long *)(unaff_x20 + 0x118) != 0) {
            FUN_05cb7290(*(long *)(unaff_x20 + 0x118),unaff_w19,DAT_083e2138);
            if (*(long *)(unaff_x20 + 0x110) != 0) {
              FUN_0438e430(*(long *)(unaff_x20 + 0x110),unaff_w19,DAT_083ebb78);
              return;
            }
          }
        }
      }
    }
  }
LAB_06367a00:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


