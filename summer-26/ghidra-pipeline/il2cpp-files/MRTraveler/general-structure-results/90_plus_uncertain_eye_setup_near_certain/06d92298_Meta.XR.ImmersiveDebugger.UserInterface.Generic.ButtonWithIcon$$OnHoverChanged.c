/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$OnHoverChanged
ENTRY_POINT: 06d92298
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__OnHoverChanged
               (undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long *plVar3;
  uint uVar4;
  long unaff_x20;
  
  if (unaff_x20 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar2 != 0) {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar2 + (long)(int)uVar1 * 8 + 0x20) = param_1;
        thunk_FUN_03d233cc();
      }
      else {
        FUN_05212cf4();
      }
      lVar2 = FUN_05214770();
      plVar3 = (long *)(unaff_x19 + 0x50);
      *plVar3 = lVar2;
      thunk_FUN_03d233cc(plVar3,lVar2);
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        uVar1 = *(uint *)(lVar2 + 0x18);
        if (0 < (int)uVar1) {
          uVar4 = 0;
          do {
            if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
            if (*(long *)(lVar2 + (long)(int)uVar4 * 8 + 0x20) == 0) goto LAB_06d92370;
            Meta_XR_ImmersiveDebugger_UserInterface_Generic_Icon__set_RaycastTarget();
            uVar1 = *(uint *)(lVar2 + 0x18);
            uVar4 = uVar4 + 1;
          } while ((int)uVar4 < (int)uVar1);
        }
        return;
      }
    }
  }
LAB_06d92370:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


