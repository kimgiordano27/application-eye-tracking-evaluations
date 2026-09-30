/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<FrameTimeSample>$$Dispose
ENTRY_POINT: 02b02f5c
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


void System_Array_EmptyInternalEnumerator<FrameTimeSample>__Dispose(void)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long lVar9;
  ulong uVar10;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(3,0);
  }
  iVar1 = thunk_FUN_01dff4e0();
  if (iVar1 != 1) {
    FUN_033b2d60(7,0);
  }
  iVar1 = thunk_FUN_01dff49c();
  if (iVar1 != 0) {
    FUN_033b2d60(6,0);
  }
  uVar2 = FUN_033aadfc();
  if (uVar2 < unaff_w20) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  iVar1 = FUN_033aadfc();
  if ((int)(iVar1 - unaff_w20) < *(int *)(unaff_x21 + 0x20) - *(int *)(unaff_x21 + 0x28)) {
    FUN_033b2d60(5,0);
  }
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    FUN_01dde7f8(lVar8);
  }
  lVar8 = thunk_FUN_01de26bc();
  if (lVar8 != 0) {
    FUN_02b011fc();
    return;
  }
  lVar8 = thunk_FUN_01de26bc();
  if (lVar8 == 0) {
    plVar4 = (long *)thunk_FUN_01de26bc();
    if (plVar4 == (long *)0x0) {
      FUN_033b3618();
    }
    uVar2 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar2) {
      lVar8 = *(long *)(unaff_x21 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar10 = 0;
      lVar9 = lVar8 + 0x40;
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (-1 < *(int *)(lVar9 + -0x20)) {
          in_stack_00000048 = 0;
          in_stack_00000040 = 0;
          in_stack_00000058 = 0;
          in_stack_00000050 = 0;
          FUN_0306df40(&stack0x00000040);
          lVar5 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_01de26bc(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
            uVar7 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar7,0);
          }
          if (*(uint *)(plVar4 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          plVar4[(long)(int)unaff_w20 + 4] = lVar5;
          thunk_FUN_01e10808(plVar4 + (long)(int)unaff_w20 + 4,lVar5);
          unaff_w20 = unaff_w20 + 1;
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x28;
      } while (uVar2 != uVar10);
    }
  }
  else {
    iVar1 = *(int *)(unaff_x21 + 0x20);
    if (0 < iVar1) {
      lVar9 = *(long *)(unaff_x21 + 0x18);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar10 = 0;
      lVar5 = lVar9 + 0x40;
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_02b03234:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (-1 < *(int *)(lVar5 + -0x20)) {
          in_stack_00000050 = *(undefined8 *)(lVar5 + -8);
          in_stack_00000048 = *(undefined8 *)(lVar5 + -0x10);
          in_stack_00000040 = *(undefined8 *)(lVar5 + -0x18);
          thunk_FUN_01de23e8(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70),
                             &stack0x00000040);
          if ((*(uint *)(lVar9 + 0x18) <= uVar10) ||
             (FUN_0336f7b8(), *(uint *)(lVar8 + 0x18) <= unaff_w20)) goto LAB_02b03234;
          lVar6 = lVar8 + (long)(int)unaff_w20 * 0x10;
          puVar3 = (undefined8 *)(lVar6 + 0x20);
          *(undefined8 *)(lVar6 + 0x28) = 0;
          *puVar3 = 0;
          unaff_w20 = unaff_w20 + 1;
          thunk_FUN_01e10808(puVar3,0);
          iVar1 = *(int *)(unaff_x21 + 0x20);
        }
        uVar10 = uVar10 + 1;
        lVar5 = lVar5 + 0x28;
      } while ((long)uVar10 < (long)iVar1);
    }
  }
  return;
}


