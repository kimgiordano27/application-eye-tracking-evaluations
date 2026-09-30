/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$set_Visibility
ENTRY_POINT: 06368750
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__set_Visibility(void)

{
  long lVar1;
  uint uVar2;
  long unaff_x19;
  ulong unaff_x21;
  long unaff_x22;
  undefined4 unaff_w23;
  ulong unaff_x24;
  long unaff_x25;
  undefined1 unaff_w26;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x25 + 0x927) = unaff_w26;
  if ((*(long *)(unaff_x22 + 0x118) != 0) &&
     (lVar1 = FUN_05cb5ba0(*(long *)(unaff_x22 + 0x118),unaff_w23,DAT_083e2140), lVar1 != 0)) {
    uVar2 = *(uint *)(lVar1 + 0x10);
    if (((uVar2 >> 1 & 1) != 0) && ((unaff_x24 & 1) != 0)) {
      if ((*(long *)(unaff_x22 + 0x130) == 0) || (unaff_x19 == 0)) goto LAB_06368850;
      FUN_0405338c();
      uVar2 = *(uint *)(lVar1 + 0x10);
    }
    if (((uVar2 >> 2 & 1) == 0) || ((unaff_x21 & 1) == 0)) {
      return;
    }
    if ((*(long *)(unaff_x22 + 0x138) != 0) && (unaff_x19 != 0)) {
      FUN_0405374c();
      return;
    }
  }
LAB_06368850:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


