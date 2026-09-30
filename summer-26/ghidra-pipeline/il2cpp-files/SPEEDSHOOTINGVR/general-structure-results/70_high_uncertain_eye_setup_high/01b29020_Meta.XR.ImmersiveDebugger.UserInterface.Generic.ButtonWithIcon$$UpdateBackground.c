/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$UpdateBackground
ENTRY_POINT: 01b29020
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__UpdateBackground(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  thunk_FUN_0106e12c();
  if (2 < *(uint *)(unaff_x22 + -0x10)) {
    *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)PTR_DAT_0234d9f0;
    thunk_FUN_0106e12c();
    lVar1 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0103c244();
    }
    uVar2 = FUN_01d47d28(unaff_x20 + 4,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0xd0));
    if (3 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
      thunk_FUN_0106e12c((undefined8 *)(unaff_x19 + 0x38),uVar2);
      if (4 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)PTR_DAT_0234d4e0;
        thunk_FUN_0106e12c();
        FUN_01c515a0();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


