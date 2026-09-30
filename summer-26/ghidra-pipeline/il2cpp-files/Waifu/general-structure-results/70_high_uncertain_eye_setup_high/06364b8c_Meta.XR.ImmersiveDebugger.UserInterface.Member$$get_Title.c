/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Member$$get_Title
ENTRY_POINT: 06364b8c
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


void Meta_XR_ImmersiveDebugger_UserInterface_Member__get_Title(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined4 unaff_w27;
  undefined4 unaff_w28;
  undefined8 in_stack_00000008;
  
  if (*(long *)(unaff_x22 + 0x18) != 0) {
    lVar1 = *(long *)(unaff_x20 + 0x48);
    if (lVar1 == 0) goto LAB_06364c44;
    FUN_0405d5ec(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),unaff_w28);
  }
  if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x18) != 0)) {
    lVar1 = *(long *)(unaff_x20 + 0x50);
    if (lVar1 == 0) goto LAB_06364c44;
    FUN_0405d51c(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),unaff_w27);
  }
  if ((unaff_x19 == 0) || (*(long *)(unaff_x19 + 0x18) == 0)) {
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 0x40);
  if (lVar1 != 0) {
    FUN_0405d51c(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),in_stack_00000008._4_4_
                );
    return;
  }
LAB_06364c44:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


