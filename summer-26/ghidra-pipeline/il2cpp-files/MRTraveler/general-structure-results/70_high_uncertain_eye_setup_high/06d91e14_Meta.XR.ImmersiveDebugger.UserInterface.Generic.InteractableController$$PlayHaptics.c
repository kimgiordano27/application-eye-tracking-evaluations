/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.InteractableController$$PlayHaptics
ENTRY_POINT: 06d91e14
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_InteractableController__PlayHaptics
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  
  puVar3 = PTR_DAT_08e8f7d8;
  puVar2 = PTR_DAT_08e8f7d0;
  if ((DAT_09419a55 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e8f7e0);
    FUN_03c8f898(PTR_DAT_08e8f7e8);
    FUN_03c8f898(PTR_DAT_08e8f7d8);
    FUN_03c8f898(PTR_DAT_08e8f7d0);
    DAT_09419a55 = 1;
  }
  puVar4 = PTR_DAT_08e8f7e0;
  lVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
  FUN_052124c0(lVar5,*(undefined8 *)puVar3);
  lVar6 = FUN_06d9244c(param_1,*(undefined8 *)(param_1 + 0x30),0x18);
  if (lVar6 != 0) {
    if (lVar5 == 0) goto LAB_06d92370;
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar8 = *(long *)puVar4;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_06d92370;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
      thunk_FUN_03d233cc();
    }
    else {
      FUN_05212cf4(lVar5,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar6 = FUN_06d9244c(param_1,*(undefined8 *)(param_1 + 0x30),0x1b);
  if (lVar6 != 0) {
    if (lVar5 == 0) goto LAB_06d92370;
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar8 = *(long *)puVar4;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_06d92370;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
      thunk_FUN_03d233cc();
    }
    else {
      FUN_05212cf4(lVar5,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar6 = FUN_06d9244c(param_1,*(undefined8 *)(param_1 + 0x30),0x1e);
  if (lVar6 != 0) {
    if (lVar5 == 0) goto LAB_06d92370;
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar8 = *(long *)puVar4;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_06d92370;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
      thunk_FUN_03d233cc();
    }
    else {
      FUN_05212cf4(lVar5,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar6 = FUN_06d9244c(param_1,*(undefined8 *)(param_1 + 0x30),0x21);
  if (lVar6 != 0) {
    if (lVar5 == 0) goto LAB_06d92370;
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar8 = *(long *)puVar4;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_06d92370;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
      thunk_FUN_03d233cc();
    }
    else {
      FUN_05212cf4(lVar5,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar6 = FUN_06d9244c(param_1,*(undefined8 *)(param_1 + 0x30),0x24);
  if (lVar6 != 0) {
    if (lVar5 == 0) goto LAB_06d92370;
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar8 = *(long *)puVar4;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_06d92370;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
      thunk_FUN_03d233cc();
    }
    else {
      FUN_05212cf4(lVar5,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar6 = FUN_06d9244c(param_1,*(undefined8 *)(param_1 + 0x38),0x27);
  if (lVar6 != 0) {
    if (lVar5 == 0) goto LAB_06d92370;
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar8 = *(long *)puVar4;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_06d92370;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
      thunk_FUN_03d233cc();
    }
    else {
      FUN_05212cf4(lVar5,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar6 = FUN_06d9244c(param_1,*(undefined8 *)(param_1 + 0x38),0x2a);
  if (lVar6 != 0) {
    if (lVar5 == 0) goto LAB_06d92370;
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar8 = *(long *)puVar4;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_06d92370;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
      thunk_FUN_03d233cc();
    }
    else {
      FUN_05212cf4(lVar5,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar6 = FUN_06d9244c(param_1,*(undefined8 *)(param_1 + 0x38),0x2d);
  if (lVar6 != 0) {
    if (lVar5 == 0) goto LAB_06d92370;
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar8 = *(long *)puVar4;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_06d92370;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
      thunk_FUN_03d233cc();
    }
    else {
      FUN_05212cf4(lVar5,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar6 = FUN_06d9244c(param_1,*(undefined8 *)(param_1 + 0x38),0x30);
  if (lVar6 != 0) {
    if (lVar5 == 0) goto LAB_06d92370;
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar8 = *(long *)puVar4;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_06d92370;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
      thunk_FUN_03d233cc();
    }
    else {
      FUN_05212cf4(lVar5,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar6 = FUN_06d9244c(param_1,*(undefined8 *)(param_1 + 0x38),0x33);
  if (lVar6 == 0) {
    if (lVar5 == 0) goto LAB_06d92370;
  }
  else {
    if (lVar5 == 0) goto LAB_06d92370;
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar8 = *(long *)puVar4;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_06d92370;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
      thunk_FUN_03d233cc();
    }
    else {
      FUN_05212cf4(lVar5,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar5 = FUN_05214770(lVar5,*(undefined8 *)PTR_DAT_08e8f7e8);
  plVar9 = (long *)(param_1 + 0x50);
  *plVar9 = lVar5;
  thunk_FUN_03d233cc(plVar9,lVar5);
  lVar5 = *plVar9;
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      uVar10 = 0;
      do {
        if (uVar1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        if (*(long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20) == 0) goto LAB_06d92370;
        Meta_XR_ImmersiveDebugger_UserInterface_Generic_Icon__set_RaycastTarget();
        uVar1 = *(uint *)(lVar5 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar1);
    }
    return;
  }
LAB_06d92370:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


