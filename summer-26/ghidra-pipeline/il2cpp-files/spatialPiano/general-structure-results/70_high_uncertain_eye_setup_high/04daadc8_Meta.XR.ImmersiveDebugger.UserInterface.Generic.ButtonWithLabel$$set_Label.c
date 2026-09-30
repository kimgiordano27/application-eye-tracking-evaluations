/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$set_Label
ENTRY_POINT: 04daadc8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__set_Label(int param_1)

{
  int iVar1;
  int iVar2;
  long *unaff_x19;
  int unaff_w22;
  
  if (param_1 != unaff_w22) {
    iVar1 = (**(code **)(*unaff_x19 + 0x198))();
    iVar2 = (**(code **)(*unaff_x19 + 0x198))();
    if (unaff_w22 < iVar2) {
      iVar1 = iVar1 - unaff_w22;
      if (0 < iVar1) {
        do {
          if (unaff_x19[5] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          (**(code **)(*unaff_x19 + 0x2b8))();
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    else {
      iVar1 = (**(code **)(*unaff_x19 + 0x198))();
      iVar1 = unaff_w22 - iVar1;
      if (0 < iVar1) {
        do {
          (**(code **)(*unaff_x19 + 0x178))();
          (**(code **)(*unaff_x19 + 0x2a8))();
          FUN_04656298();
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x04daaed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x2c8))();
  return;
}


