/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<WordWrapState>$$Dispose
ENTRY_POINT: 02b102bc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array_EmptyInternalEnumerator<WordWrapState>__Dispose(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(3,0);
  }
  iVar2 = thunk_FUN_01dff4e0();
  if (iVar2 != 1) {
    FUN_033b2d60(7,0);
  }
  iVar2 = thunk_FUN_01dff49c();
  if (iVar2 != 0) {
    FUN_033b2d60(6,0);
  }
  uVar3 = FUN_033aadfc();
  if (uVar3 < unaff_w19) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  iVar2 = FUN_033aadfc();
  if ((int)(iVar2 - unaff_w19) < *(int *)(unaff_x21 + 0x20) - *(int *)(unaff_x21 + 0x28)) {
    FUN_033b2d60(5,0);
  }
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x120);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    FUN_01dde7f8(lVar8);
  }
  lVar8 = thunk_FUN_01de26bc();
  if (lVar8 != 0) {
    FUN_02b0e9c8();
    return;
  }
  lVar8 = thunk_FUN_01de26bc();
  if (lVar8 == 0) {
    plVar6 = (long *)thunk_FUN_01de26bc();
    if (plVar6 == (long *)0x0) {
      FUN_033b3618();
    }
    uVar3 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar3) {
      lVar8 = *(long *)(unaff_x21 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar11 = 0;
      puVar12 = (undefined1 *)(lVar8 + 0x30);
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (-1 < *(int *)(puVar12 + -0x10)) {
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_0306e4e8(&stack0x00000010,*(undefined8 *)(puVar12 + -8),*puVar12,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x130));
          lVar10 = thunk_FUN_01de23e8(*(undefined8 *)
                                       (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa8));
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if ((lVar10 != 0) &&
             (lVar7 = thunk_FUN_01de26bc(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
            uVar4 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar4,0);
          }
          if (*(uint *)(plVar6 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          plVar6[(long)(int)unaff_w19 + 4] = lVar10;
          thunk_FUN_01e10808(plVar6 + (long)(int)unaff_w19 + 4,lVar10);
          unaff_w19 = unaff_w19 + 1;
        }
        uVar11 = uVar11 + 1;
        puVar12 = puVar12 + 0x18;
      } while (uVar3 != uVar11);
    }
  }
  else {
    iVar2 = *(int *)(unaff_x21 + 0x20);
    if (0 < iVar2) {
      lVar10 = *(long *)(unaff_x21 + 0x18);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar11 = 0;
      lVar7 = lVar10 + 0x30;
      do {
        if (*(uint *)(lVar10 + 0x18) <= uVar11) {
LAB_02b10568:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (-1 < *(int *)(lVar7 + -0x10)) {
          uVar9 = *(undefined8 *)(lVar7 + -8);
          uVar4 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78));
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_0336f7b8(&stack0x00000010,uVar9,uVar4,0);
          if (*(uint *)(lVar8 + 0x18) <= unaff_w19) goto LAB_02b10568;
          lVar1 = lVar8 + (long)(int)unaff_w19 * 0x10;
          puVar5 = (undefined8 *)(lVar1 + 0x20);
          *(undefined8 *)(lVar1 + 0x28) = in_stack_00000018;
          *puVar5 = in_stack_00000010;
          unaff_w19 = unaff_w19 + 1;
          thunk_FUN_01e10808(puVar5,0);
          iVar2 = *(int *)(unaff_x21 + 0x20);
        }
        uVar11 = uVar11 + 1;
        lVar7 = lVar7 + 0x18;
      } while ((long)uVar11 < (long)iVar2);
    }
  }
  return;
}


