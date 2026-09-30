/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<NativeArray<CopyClosingMeshJobData>>$$get_Current
ENTRY_POINT: 02af5ad8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array_EmptyInternalEnumerator<NativeArray<CopyClosingMeshJobData>>__get_Current(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long lVar10;
  ulong uVar11;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  OVRManager_PassthroughCapabilities___ctor(0);
  iVar3 = FUN_033aadfc();
  if ((int)(iVar3 - unaff_w20) < *(int *)(unaff_x21 + 0x20) - *(int *)(unaff_x21 + 0x28)) {
    FUN_033b2d60(5,0);
  }
  lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    FUN_01dde7f8(lVar9);
  }
  lVar9 = thunk_FUN_01de26bc();
  if (lVar9 != 0) {
    FUN_02af40f4();
    return;
  }
  lVar9 = thunk_FUN_01de26bc();
  if (lVar9 == 0) {
    plVar7 = (long *)thunk_FUN_01de26bc();
    if (plVar7 == (long *)0x0) {
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
      puVar6 = (undefined8 *)(lVar9 + 0x40);
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (-1 < *(int *)(puVar6 + -4)) {
          in_stack_00000028 = 0;
          in_stack_00000020 = 0;
          in_stack_00000038 = 0;
          in_stack_00000030 = 0;
          FUN_0306d998(&stack0x00000020,puVar6[-3],puVar6[-2],puVar6[-1],*puVar6,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x130));
          lVar10 = thunk_FUN_01de23e8(*(undefined8 *)
                                       (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if ((lVar10 != 0) &&
             (lVar8 = thunk_FUN_01de26bc(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
            uVar4 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar4,0);
          }
          if (*(uint *)(plVar7 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          plVar7[(long)(int)unaff_w20 + 4] = lVar10;
          thunk_FUN_01e10808(plVar7 + (long)(int)unaff_w20 + 4,lVar10);
          unaff_w20 = unaff_w20 + 1;
        }
        uVar11 = uVar11 + 1;
        puVar6 = puVar6 + 5;
      } while (uVar2 != uVar11);
    }
  }
  else {
    iVar3 = *(int *)(unaff_x21 + 0x20);
    if (0 < iVar3) {
      lVar10 = *(long *)(unaff_x21 + 0x18);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar11 = 0;
      lVar8 = lVar10 + 0x38;
      do {
        if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_02af5d5c;
        if (-1 < *(int *)(lVar8 + -0x18)) {
          in_stack_00000028 = *(undefined8 *)(lVar8 + -8);
          in_stack_00000020 = *(undefined8 *)(lVar8 + -0x10);
          uVar4 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70),
                                     &stack0x00000020);
          if (*(uint *)(lVar10 + 0x18) <= uVar11) {
LAB_02af5d5c:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          uVar5 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78));
          in_stack_00000040 = 0;
          in_stack_00000048 = 0;
          FUN_0336f7b8(&stack0x00000040,uVar4,uVar5,0);
          if (*(uint *)(lVar9 + 0x18) <= unaff_w20) goto LAB_02af5d5c;
          lVar1 = lVar9 + (long)(int)unaff_w20 * 0x10;
          puVar6 = (undefined8 *)(lVar1 + 0x20);
          *(undefined8 *)(lVar1 + 0x28) = in_stack_00000048;
          *puVar6 = in_stack_00000040;
          unaff_w20 = unaff_w20 + 1;
          thunk_FUN_01e10808(puVar6,0);
          iVar3 = *(int *)(unaff_x21 + 0x20);
        }
        uVar11 = uVar11 + 1;
        lVar8 = lVar8 + 0x28;
      } while ((long)uVar11 < (long)iVar3);
    }
  }
  return;
}


