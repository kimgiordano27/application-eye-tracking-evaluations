/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<NudgeJobData>$$Dispose
ENTRY_POINT: 02b4e43c
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


void Unity_Collections_NativeArray_Enumerator<NudgeJobData>__Dispose(void)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  void *pvVar7;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
  FUN_01d7d918(StringLiteral_887);
  *(undefined1 *)(unaff_x23 + 0xe51) = 1;
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
  if (uVar2 < unaff_w19) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  iVar1 = FUN_033aadfc();
  if ((int)(iVar1 - unaff_w19) < *(int *)(unaff_x21 + 0x20) - *(int *)(unaff_x21 + 0x28)) {
    FUN_033b2d60(5,0);
  }
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x120);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    FUN_01dde7f8(lVar6);
  }
  lVar6 = thunk_FUN_01de26bc();
  if (lVar6 != 0) {
    FUN_02b4c95c();
    return;
  }
  lVar6 = thunk_FUN_01de26bc();
  if (lVar6 == 0) {
    plVar4 = (long *)thunk_FUN_01de26bc();
    if (plVar4 == (long *)0x0) {
      FUN_033b3618();
    }
    uVar2 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar2) {
      lVar6 = *(long *)(unaff_x21 + 0x18);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar10 = 0;
      pvVar7 = (void *)(lVar6 + 0x30);
      do {
        if (*(uint *)(lVar6 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (-1 < *(int *)((long)pvVar7 + -0x10)) {
          uVar8 = *(undefined8 *)((long)pvVar7 + -8);
          memcpy(&stack0x00000058,pvVar7,0x48);
          in_stack_000000d8 = 0;
          in_stack_000000d0 = 0;
          in_stack_000000e8 = 0;
          in_stack_000000e0 = 0;
          in_stack_000000b8 = 0;
          in_stack_000000b0 = 0;
          in_stack_000000c8 = 0;
          in_stack_000000c0 = 0;
          in_stack_000000a8 = 0;
          in_stack_000000a0 = 0;
          memcpy(&stack0x00000000,&stack0x00000058,0x48);
          FUN_0306feec(&stack0x000000a0,uVar8);
          memcpy(&stack0x00000000,&stack0x000000a0,0x50);
          lVar9 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa8));
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if ((lVar9 != 0) &&
             (lVar5 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
            uVar8 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar8,0);
          }
          if (*(uint *)(plVar4 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          plVar4[(long)(int)unaff_w19 + 4] = lVar9;
          thunk_FUN_01e10808(plVar4 + (long)(int)unaff_w19 + 4,lVar9);
          unaff_w19 = unaff_w19 + 1;
        }
        uVar10 = uVar10 + 1;
        pvVar7 = (void *)((long)pvVar7 + 0x58);
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
      pvVar7 = (void *)(lVar9 + 0x30);
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_02b4e748:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (-1 < *(int *)((long)pvVar7 + -0x10)) {
          memmove(&stack0x000000a0,pvVar7,0x48);
          thunk_FUN_01de23e8(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78),
                             &stack0x000000a0);
          in_stack_00000000 = 0;
          in_stack_00000008 = 0;
          FUN_0336f7b8();
          if (*(uint *)(lVar6 + 0x18) <= unaff_w19) goto LAB_02b4e748;
          lVar5 = lVar6 + (long)(int)unaff_w19 * 0x10;
          puVar3 = (undefined8 *)(lVar5 + 0x20);
          *(undefined8 *)(lVar5 + 0x28) = in_stack_00000008;
          *puVar3 = in_stack_00000000;
          unaff_w19 = unaff_w19 + 1;
          thunk_FUN_01e10808(puVar3,0);
          iVar1 = *(int *)(unaff_x21 + 0x20);
        }
        uVar10 = uVar10 + 1;
        pvVar7 = (void *)((long)pvVar7 + 0x58);
      } while ((long)uVar10 < (long)iVar1);
    }
  }
  return;
}


