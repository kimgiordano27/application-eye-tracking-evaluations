/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$set_IconStyle
ENTRY_POINT: 076e8ba8
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__set_IconStyle(long param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  while( true ) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar1 = FUN_076db784(param_1);
    if (lVar1 == 0) break;
    FUN_078a7764(*unaff_x20,lVar1,0);
    Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__Setup();
    param_1 = *(long *)(unaff_x19 + 0x318);
  }
  if ((*(char *)(unaff_x19 + 0x33) != '\0') &&
     (uVar2 = FUN_095a53ac(*(undefined4 *)(unaff_x19 + 0x34),0), (uVar2 & 1) != 0)) {
    if (*(char *)(unaff_x19 + 0x1c0) != '\0') {
      Meta_XR_ImmersiveDebugger_UserInterface_Generic_Button__OnPointerClick();
      return;
    }
    FUN_076e893c();
    return;
  }
  return;
}


