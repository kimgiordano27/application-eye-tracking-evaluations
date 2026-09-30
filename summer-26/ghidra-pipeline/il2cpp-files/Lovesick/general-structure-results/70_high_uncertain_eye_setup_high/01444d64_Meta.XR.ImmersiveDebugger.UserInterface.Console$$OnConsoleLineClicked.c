/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$OnConsoleLineClicked
ENTRY_POINT: 01444d64
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16] Meta_XR_ImmersiveDebugger_UserInterface_Console__OnConsoleLineClicked(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  ulong in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uStack0000000000000008 = 0;
  uStack0000000000000000 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x18) == 0) {
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
      FUN_0268834c(0,0,0x3f800000,0x3f800000,&stack0x00000020,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = in_stack_00000020 & 0xffffffff;
    }
    else {
      if ((int)*(long *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar1 = *(long *)(lVar1 + 0x20);
      if (lVar1 == 0) goto LAB_01444de0;
      uStack0000000000000008 = *(undefined8 *)(lVar1 + 0x28);
      uStack0000000000000000 = *(undefined8 *)(lVar1 + 0x20);
      uStack0000000000000018 = *(undefined8 *)(lVar1 + 0x38);
      uStack0000000000000010 = *(undefined8 *)(lVar1 + 0x30);
      auVar2 = FUN_014315a4();
    }
    return auVar2;
  }
LAB_01444de0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


