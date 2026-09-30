/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$UpdateBackground
ENTRY_POINT: 06d922c8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__UpdateBackground
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  int in_w10;
  undefined4 in_register_00004054;
  long unaff_x19;
  long *plVar3;
  uint uVar4;
  long unaff_x20;
  
  *(int *)(unaff_x20 + 0x18) = in_w10 + 1;
  *(undefined8 *)(param_1 + CONCAT44(in_register_00004054,in_w10) * 8 + 0x20) = param_3;
  thunk_FUN_03d233cc();
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
LAB_06d92370:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


