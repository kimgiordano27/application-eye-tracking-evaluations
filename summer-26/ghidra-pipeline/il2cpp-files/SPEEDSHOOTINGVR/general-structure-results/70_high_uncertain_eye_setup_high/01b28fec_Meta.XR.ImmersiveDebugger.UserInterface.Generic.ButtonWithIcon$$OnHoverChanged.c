/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$OnHoverChanged
ENTRY_POINT: 01b28fec
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__OnHoverChanged(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0103c244();
  }
  uVar1 = FUN_01d47d28();
  if (1 < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
    thunk_FUN_0106e12c((undefined8 *)(unaff_x19 + 0x28),uVar1);
    if (2 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)PTR_DAT_0234d9f0;
      thunk_FUN_0106e12c();
      lVar2 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0103c244();
      }
      uVar1 = FUN_01d47d28(unaff_x20 + 4,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xd0));
      if (3 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x38) = uVar1;
        thunk_FUN_0106e12c((undefined8 *)(unaff_x19 + 0x38),uVar1);
        if (4 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)PTR_DAT_0234d4e0;
          thunk_FUN_0106e12c();
          FUN_01c515a0();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


