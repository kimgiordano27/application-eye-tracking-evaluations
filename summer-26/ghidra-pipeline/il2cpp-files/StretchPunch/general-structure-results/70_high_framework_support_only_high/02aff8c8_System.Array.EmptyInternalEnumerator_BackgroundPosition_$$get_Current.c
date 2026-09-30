/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<BackgroundPosition>$$get_Current
ENTRY_POINT: 02aff8c8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array_EmptyInternalEnumerator<BackgroundPosition>__get_Current(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  FUN_033b2d60();
  iVar2 = thunk_FUN_01dff49c();
  if (iVar2 != 0) {
    FUN_033b2d60(6,0);
  }
  uVar3 = FUN_033aadfc();
  if (uVar3 < unaff_w20) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  iVar2 = FUN_033aadfc();
  if ((int)(iVar2 - unaff_w20) < *(int *)(unaff_x21 + 0x20) - *(int *)(unaff_x21 + 0x28)) {
    FUN_033b2d60(5,0);
  }
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    FUN_01dde7f8(lVar8);
  }
  lVar8 = thunk_FUN_01de26bc();
  if (lVar8 != 0) {
    FUN_02afdf68();
    return;
  }
  lVar8 = thunk_FUN_01de26bc();
  if (lVar8 == 0) {
    plVar5 = (long *)thunk_FUN_01de26bc();
    if (plVar5 == (long *)0x0) {
      FUN_033b3618();
    }
    uVar3 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar3) {
      lVar8 = *(long *)(unaff_x21 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar10 = 0;
      puVar4 = (undefined8 *)(lVar8 + 0x38);
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (-1 < *(int *)(puVar4 + -3)) {
          in_stack_00000020 = 0;
          in_stack_00000028 = 0;
          in_stack_00000030 = 0;
          FUN_0306de20(&stack0x00000020,puVar4[-2],puVar4[-1],*puVar4,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x130));
          lVar9 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if ((lVar9 != 0) &&
             (lVar6 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
            uVar7 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar7,0);
          }
          if (*(uint *)(plVar5 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          plVar5[(long)(int)unaff_w20 + 4] = lVar9;
          thunk_FUN_01e10808(plVar5 + (long)(int)unaff_w20 + 4,lVar9);
          unaff_w20 = unaff_w20 + 1;
        }
        uVar10 = uVar10 + 1;
        puVar4 = puVar4 + 4;
      } while (uVar3 != uVar10);
    }
  }
  else {
    iVar2 = *(int *)(unaff_x21 + 0x20);
    if (0 < iVar2) {
      lVar9 = *(long *)(unaff_x21 + 0x18);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar10 = 0;
      lVar6 = lVar9 + 0x38;
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_02affb6c:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (-1 < *(int *)(lVar6 + -0x18)) {
          in_stack_00000028 = *(undefined8 *)(lVar6 + -8);
          in_stack_00000020 = *(undefined8 *)(lVar6 + -0x10);
          thunk_FUN_01de23e8(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70),
                             &stack0x00000020);
          if ((*(uint *)(lVar9 + 0x18) <= uVar10) ||
             (FUN_0336f7b8(), *(uint *)(lVar8 + 0x18) <= unaff_w20)) goto LAB_02affb6c;
          lVar1 = lVar8 + (long)(int)unaff_w20 * 0x10;
          puVar4 = (undefined8 *)(lVar1 + 0x20);
          *(undefined8 *)(lVar1 + 0x28) = 0;
          *puVar4 = 0;
          unaff_w20 = unaff_w20 + 1;
          thunk_FUN_01e10808(puVar4,0);
          iVar2 = *(int *)(unaff_x21 + 0x20);
        }
        uVar10 = uVar10 + 1;
        lVar6 = lVar6 + 0x20;
      } while ((long)uVar10 < (long)iVar2);
    }
  }
  return;
}


