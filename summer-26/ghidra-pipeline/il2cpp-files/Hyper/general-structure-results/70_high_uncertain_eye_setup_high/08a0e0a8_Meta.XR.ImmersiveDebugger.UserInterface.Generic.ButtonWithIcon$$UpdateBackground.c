/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$UpdateBackground
ENTRY_POINT: 08a0e0a8
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__UpdateBackground(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar3 = FUN_088e7824();
  puVar2 = PTR_DAT_0ac4cec0;
  puVar1 = PTR_DAT_0ac3f9d0;
  while ((uVar3 != 0 && ((uVar3 & 7) != 4))) {
    if (uVar3 == 10) {
      if (*(long *)(unaff_x20 + 0x18) == 0) {
        uVar4 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
        FUN_0897522c(uVar4,0);
        *(undefined8 *)(unaff_x20 + 0x18) = uVar4;
        thunk_FUN_049ee3d8(unaff_x20 + 0x18,uVar4);
      }
      if (DAT_0b325c32 == '\0') {
        FUN_04947ee4(puVar1);
        DAT_0b325c32 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_088e96e0();
    }
    else {
      uVar4 = FUN_088ed628(*(undefined8 *)(unaff_x20 + 0x10));
      *(undefined8 *)(unaff_x20 + 0x10) = uVar4;
      thunk_FUN_049ee3d8(unaff_x20 + 0x10,uVar4);
    }
    uVar3 = FUN_088e7824();
  }
  return;
}


