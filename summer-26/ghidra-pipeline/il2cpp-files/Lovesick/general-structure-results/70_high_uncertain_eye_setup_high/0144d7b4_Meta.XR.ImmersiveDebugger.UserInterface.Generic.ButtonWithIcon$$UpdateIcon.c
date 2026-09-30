/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$UpdateIcon
ENTRY_POINT: 0144d7b4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__UpdateIcon(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long in_x9;
  int in_w10;
  int in_w11;
  long unaff_x19;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + (long)in_w10 * 8 + 0x20);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar2 = in_w11 + *(int *)(unaff_x19 + 0xa0);
  if (uVar2 < *(uint *)(lVar3 + 0x18)) {
    lVar1 = in_x9 + (long)in_w11 * 0x10;
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    lVar3 = lVar3 + (long)(int)uVar2 * 0x10;
    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *(undefined4 *)(unaff_x19 + 0x10) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


