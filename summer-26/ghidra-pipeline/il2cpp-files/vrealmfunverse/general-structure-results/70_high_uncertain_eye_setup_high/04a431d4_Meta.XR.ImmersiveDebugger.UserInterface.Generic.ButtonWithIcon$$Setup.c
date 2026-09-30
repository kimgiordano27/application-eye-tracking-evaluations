/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$Setup
ENTRY_POINT: 04a431d4
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


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__Setup(void)

{
  uint in_w8;
  uint in_w9;
  undefined4 in_w10;
  long lVar1;
  undefined4 *puVar2;
  uint in_w12;
  long in_x13;
  undefined4 unaff_w21;
  undefined8 unaff_x25;
  long unaff_x26;
  undefined8 unaff_x28;
  
  *(undefined4 *)(unaff_x26 + 0x28) = in_w10;
  if (in_w8 < in_w9) {
    puVar2 = (undefined4 *)(in_x13 + 0x20 + (long)(int)in_w8 * 0x18);
    *(undefined8 *)(puVar2 + 2) = unaff_x25;
    *(undefined8 *)(puVar2 + 4) = unaff_x28;
    lVar1 = *(long *)(unaff_x26 + 0x10);
    *puVar2 = unaff_w21;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((in_w12 < *(uint *)(lVar1 + 0x18)) && (in_w8 < *(uint *)(in_x13 + 0x18))) {
      lVar1 = lVar1 + (ulong)in_w12 * 4;
      *(int *)(in_x13 + 0x20 + (long)(int)in_w8 * 0x18 + 4) = *(int *)(lVar1 + 0x20) + -1;
      *(uint *)(lVar1 + 0x20) = in_w8 + 1;
      *(int *)(unaff_x26 + 0x20) = *(int *)(unaff_x26 + 0x20) + 1;
      *(int *)(unaff_x26 + 0x38) = *(int *)(unaff_x26 + 0x38) + 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


