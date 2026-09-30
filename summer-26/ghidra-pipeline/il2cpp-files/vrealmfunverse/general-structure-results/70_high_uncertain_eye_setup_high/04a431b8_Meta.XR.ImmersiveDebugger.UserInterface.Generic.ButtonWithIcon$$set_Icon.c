/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$set_Icon
ENTRY_POINT: 04a431b8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__set_Icon(void)

{
  uint uVar1;
  uint in_w8;
  long lVar2;
  undefined4 *puVar3;
  long in_x13;
  undefined4 unaff_w21;
  undefined8 unaff_x25;
  long unaff_x26;
  undefined8 unaff_x28;
  undefined8 in_stack_00000008;
  
  uVar1 = *(uint *)(in_x13 + 0x18);
  if ((in_w8 < uVar1) &&
     (*(undefined4 *)(unaff_x26 + 0x28) = *(undefined4 *)(in_x13 + (ulong)in_w8 * 0x18 + 0x24),
     in_w8 < uVar1)) {
    puVar3 = (undefined4 *)(in_x13 + 0x20 + (long)(int)in_w8 * 0x18);
    *(undefined8 *)(puVar3 + 2) = unaff_x25;
    *(undefined8 *)(puVar3 + 4) = unaff_x28;
    lVar2 = *(long *)(unaff_x26 + 0x10);
    *puVar3 = unaff_w21;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((in_stack_00000008._4_4_ < *(uint *)(lVar2 + 0x18)) && (in_w8 < *(uint *)(in_x13 + 0x18))) {
      lVar2 = lVar2 + (ulong)in_stack_00000008._4_4_ * 4;
      *(int *)(in_x13 + 0x20 + (long)(int)in_w8 * 0x18 + 4) = *(int *)(lVar2 + 0x20) + -1;
      *(uint *)(lVar2 + 0x20) = in_w8 + 1;
      *(int *)(unaff_x26 + 0x20) = *(int *)(unaff_x26 + 0x20) + 1;
      *(int *)(unaff_x26 + 0x38) = *(int *)(unaff_x26 + 0x38) + 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


