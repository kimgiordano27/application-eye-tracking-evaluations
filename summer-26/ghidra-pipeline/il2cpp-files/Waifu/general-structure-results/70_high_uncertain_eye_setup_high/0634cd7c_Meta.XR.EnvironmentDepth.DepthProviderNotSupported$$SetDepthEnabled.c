/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.DepthProviderNotSupported$$SetDepthEnabled
ENTRY_POINT: 0634cd7c
PROGRAM: Waifu-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepth_DepthProviderNotSupported__SetDepthEnabled(undefined8 param_1)

{
  long unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  int unaff_w23;
  int unaff_w24;
  
  if (unaff_w24 < 1) {
    if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_0634ce38;
  }
  else {
    FUN_042af274(param_1,unaff_w22,
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083eb368 + 0x20) + 0xc0) + 0x60));
    if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_0634ce38;
    FUN_0429e43c(*(long *)(unaff_x19 + 0x38),unaff_w22,
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083eaff8 + 0x20) + 0xc0) + 0x60));
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    if (0 < unaff_w23) {
      FUN_0429ffd4(*(long *)(unaff_x19 + 0x40),unaff_w21,
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083eb070 + 0x20) + 0xc0) + 0x60));
    }
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_0438c5ac(*(long *)(unaff_x19 + 0x30),unaff_w20,DAT_083eba70);
      return;
    }
  }
LAB_0634ce38:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


