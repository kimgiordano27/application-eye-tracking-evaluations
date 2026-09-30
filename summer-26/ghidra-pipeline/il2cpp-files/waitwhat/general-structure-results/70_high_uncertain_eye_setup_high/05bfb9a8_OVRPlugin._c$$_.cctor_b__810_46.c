/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_46
ENTRY_POINT: 05bfb9a8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_46(undefined1 param_1 [16],undefined1 param_2 [16])

{
  uint in_w8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uStack00000000000000e0;
  undefined4 uStack00000000000000ec;
  undefined4 uStack00000000000000f0;
  
  uStack00000000000000e0 = param_1._0_8_;
  uStack00000000000000ec = param_2._0_4_;
  uStack00000000000000f0 = param_2._4_4_;
  if (in_w8 < 0x1a) {
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
  *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
  *(long *)(unaff_x20 + 0x358) = param_2._8_8_;
  *(long *)(unaff_x20 + 0x350) = param_2._0_8_;
  *(ulong *)(unaff_x20 + 0x34c) = CONCAT44(uStack00000000000000ec,param_1._8_4_);
  *(undefined8 *)(unaff_x20 + 0x344) = uStack00000000000000e0;
  if (unaff_x19 != 0) {
    lVar1 = *unaff_x21;
    *(long *)(unaff_x19 + 0x10) = unaff_x20;
    *(long *)(*(long *)(lVar1 + 0xb8) + 8) = unaff_x19;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


