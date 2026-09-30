/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$set_Icon
ENTRY_POINT: 06d9209c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__set_Icon
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined4 in_w9;
  long in_x10;
  long unaff_x19;
  long *plVar4;
  uint uVar5;
  long unaff_x20;
  
  *(undefined4 *)(unaff_x20 + 0x18) = in_w9;
  *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = param_3;
  thunk_FUN_03d233cc();
  lVar2 = FUN_06d9244c();
  if (lVar2 != 0) {
    if (unaff_x20 == 0) goto LAB_06d92370;
    lVar3 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar3 == 0) goto LAB_06d92370;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = lVar2;
      thunk_FUN_03d233cc();
    }
    else {
      FUN_05212cf4();
    }
  }
  lVar2 = FUN_06d9244c();
  if (lVar2 != 0) {
    if (unaff_x20 == 0) goto LAB_06d92370;
    lVar3 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar3 == 0) goto LAB_06d92370;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = lVar2;
      thunk_FUN_03d233cc();
    }
    else {
      FUN_05212cf4();
    }
  }
  lVar2 = FUN_06d9244c();
  if (lVar2 != 0) {
    if (unaff_x20 == 0) goto LAB_06d92370;
    lVar3 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar3 == 0) goto LAB_06d92370;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = lVar2;
      thunk_FUN_03d233cc();
    }
    else {
      FUN_05212cf4();
    }
  }
  lVar2 = FUN_06d9244c();
  if (lVar2 != 0) {
    if (unaff_x20 == 0) goto LAB_06d92370;
    lVar3 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar3 == 0) goto LAB_06d92370;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = lVar2;
      thunk_FUN_03d233cc();
    }
    else {
      FUN_05212cf4();
    }
  }
  lVar2 = FUN_06d9244c();
  if (lVar2 == 0) {
    if (unaff_x20 == 0) goto LAB_06d92370;
  }
  else {
    if (unaff_x20 == 0) goto LAB_06d92370;
    lVar3 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar3 == 0) goto LAB_06d92370;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = lVar2;
      thunk_FUN_03d233cc();
    }
    else {
      FUN_05212cf4();
    }
  }
  lVar2 = FUN_05214770();
  plVar4 = (long *)(unaff_x19 + 0x50);
  *plVar4 = lVar2;
  thunk_FUN_03d233cc(plVar4,lVar2);
  lVar2 = *plVar4;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        if (*(long *)(lVar2 + (long)(int)uVar5 * 8 + 0x20) == 0) goto LAB_06d92370;
        Meta_XR_ImmersiveDebugger_UserInterface_Generic_Icon__set_RaycastTarget();
        uVar1 = *(uint *)(lVar2 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar1);
    }
    return;
  }
LAB_06d92370:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


