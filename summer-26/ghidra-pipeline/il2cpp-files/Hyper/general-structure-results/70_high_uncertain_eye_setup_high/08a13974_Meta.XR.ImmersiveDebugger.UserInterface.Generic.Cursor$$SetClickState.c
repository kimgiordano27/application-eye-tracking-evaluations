/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$SetClickState
ENTRY_POINT: 08a13974
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__SetClickState(void)

{
  uint uVar1;
  undefined4 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  do {
    uVar3 = FUN_088e7fc8();
    *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
    while( true ) {
      while( true ) {
        while( true ) {
          uVar1 = FUN_088e7824();
          if ((uVar1 == 0) || ((uVar1 & 7) == 4)) {
            return;
          }
          if (uVar1 != 8) break;
          uVar2 = FUN_088e76b0();
          *(undefined4 *)(unaff_x20 + 0x18) = uVar2;
        }
        if (uVar1 != 0x10) break;
        uVar2 = FUN_088e76b0();
        *(undefined4 *)(unaff_x20 + 0x1c) = uVar2;
      }
      if (uVar1 == 0x19) break;
      uVar3 = FUN_088ed628(*(undefined8 *)(unaff_x20 + 0x10));
      *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
      thunk_FUN_049ee3d8(unaff_x20 + 0x10,uVar3);
    }
  } while( true );
}


