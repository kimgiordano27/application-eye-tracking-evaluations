/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ManipulatorActivationFilter>$$Dispose
ENTRY_POINT: 02b0698c
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


void System_Array_EmptyInternalEnumerator<ManipulatorActivationFilter>__Dispose(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  
  FUN_01d7d918(*(undefined8 *)(param_1 + 0xa58));
  *(undefined1 *)(unaff_x23 + 0xd82) = 1;
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
  lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    FUN_01dde7f8(lVar9);
  }
  lVar9 = thunk_FUN_01de26bc();
  if (lVar9 != 0) {
    FUN_02b04af4();
    return;
  }
  lVar9 = thunk_FUN_01de26bc();
  if (lVar9 == 0) {
    plVar6 = (long *)thunk_FUN_01de26bc();
    if (plVar6 == (long *)0x0) {
      FUN_033b3618();
    }
    uVar2 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar2) {
      lVar9 = *(long *)(unaff_x21 + 0x18);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar11 = 0;
      lVar10 = lVar9 + 0x40;
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (-1 < *(int *)(lVar10 + -0x20)) {
          in_stack_000000e0 = *(undefined8 *)(lVar10 + -8);
          in_stack_000000d8 = *(undefined8 *)(lVar10 + -0x10);
          in_stack_000000d0 = *(undefined8 *)(lVar10 + -0x18);
          in_stack_000000b8 = 0;
          in_stack_000000b0 = 0;
          in_stack_000000c8 = 0;
          in_stack_000000c0 = 0;
          in_stack_00000098 = 0;
          in_stack_00000090 = 0;
          in_stack_000000a8 = 0;
          in_stack_000000a0 = 0;
          FUN_0306e084(&stack0x00000090,&stack0x000000d0);
          lVar7 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_01de26bc(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
            uVar3 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar3,0);
          }
          if (*(uint *)(plVar6 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          plVar6[(long)(int)unaff_w20 + 4] = lVar7;
          thunk_FUN_01e10808(plVar6 + (long)(int)unaff_w20 + 4,lVar7);
          unaff_w20 = unaff_w20 + 1;
        }
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 0x48;
      } while (uVar2 != uVar11);
    }
  }
  else {
    iVar1 = *(int *)(unaff_x21 + 0x20);
    if (0 < iVar1) {
      lVar10 = *(long *)(unaff_x21 + 0x18);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar11 = 0;
      puVar12 = (undefined8 *)(lVar10 + 0x40);
      do {
        if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_02b06cd4;
        if (-1 < *(int *)(puVar12 + -4)) {
          uVar3 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70));
          if (*(uint *)(lVar10 + 0x18) <= uVar11) {
LAB_02b06cd4:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          in_stack_000000b0 = puVar12[4];
          in_stack_00000098 = puVar12[1];
          in_stack_00000090 = *puVar12;
          in_stack_000000a8 = puVar12[3];
          in_stack_000000a0 = puVar12[2];
          uVar4 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78),
                                     &stack0x00000090);
          in_stack_000000d0 = 0;
          in_stack_000000d8 = 0;
          FUN_0336f7b8(&stack0x000000d0,uVar3,uVar4,0);
          if (*(uint *)(lVar9 + 0x18) <= unaff_w20) goto LAB_02b06cd4;
          lVar7 = lVar9 + (long)(int)unaff_w20 * 0x10;
          puVar5 = (undefined8 *)(lVar7 + 0x20);
          *(undefined8 *)(lVar7 + 0x28) = in_stack_000000d8;
          *puVar5 = in_stack_000000d0;
          unaff_w20 = unaff_w20 + 1;
          thunk_FUN_01e10808(puVar5,0);
          iVar1 = *(int *)(unaff_x21 + 0x20);
        }
        uVar11 = uVar11 + 1;
        puVar12 = puVar12 + 9;
      } while ((long)uVar11 < (long)iVar1);
    }
  }
  return;
}


