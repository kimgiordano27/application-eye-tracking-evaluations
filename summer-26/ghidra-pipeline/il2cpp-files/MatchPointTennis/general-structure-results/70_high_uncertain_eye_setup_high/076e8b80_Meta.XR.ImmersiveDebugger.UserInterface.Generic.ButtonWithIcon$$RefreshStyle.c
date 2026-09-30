/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$RefreshStyle
ENTRY_POINT: 076e8b80
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__RefreshStyle
               (undefined8 param_1,long param_2)

{
  ulong uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  while( true ) {
    FUN_078a7764(param_1,param_2,0);
    Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__Setup();
    if (*(long *)(unaff_x19 + 0x318) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    param_2 = FUN_076db784(*(long *)(unaff_x19 + 0x318));
    if (param_2 == 0) break;
    param_1 = *unaff_x20;
  }
  if ((*(char *)(unaff_x19 + 0x33) != '\0') &&
     (uVar1 = FUN_095a53ac(*(undefined4 *)(unaff_x19 + 0x34),0), (uVar1 & 1) != 0)) {
    if (*(char *)(unaff_x19 + 0x1c0) != '\0') {
      Meta_XR_ImmersiveDebugger_UserInterface_Generic_Button__OnPointerClick();
      return;
    }
    FUN_076e893c();
    return;
  }
  return;
}


