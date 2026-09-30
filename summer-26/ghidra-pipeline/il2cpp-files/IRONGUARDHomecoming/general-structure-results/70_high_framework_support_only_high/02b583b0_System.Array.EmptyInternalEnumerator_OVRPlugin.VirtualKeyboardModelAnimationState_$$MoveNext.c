/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$MoveNext
ENTRY_POINT: 02b583b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__MoveNext
               (long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  if ((*(byte *)(*(long *)(param_1 + 0x128) + 0x135) & 1) == 0) {
    FUN_01ecaf44(*(long *)(param_1 + 0x128));
  }
  lVar2 = thunk_FUN_01f116d0();
  if (lVar2 != 0) {
    FUN_02b56ca0();
    return;
  }
  lVar2 = thunk_FUN_01f116d0();
  if (lVar2 == 0) {
    plVar4 = (long *)thunk_FUN_01f116d0();
    if (plVar4 == (long *)0x0) {
      FUN_0358ba14();
    }
    uVar1 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar1) {
      lVar2 = *(long *)(unaff_x21 + 0x18);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar10 = 0;
      lVar9 = lVar2 + 0x30;
      do {
        if (*(uint *)(lVar2 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (-1 < *(int *)(lVar9 + -0x10)) {
          in_stack_00000048 = 0;
          in_stack_00000040 = 0;
          in_stack_00000058 = 0;
          in_stack_00000050 = 0;
          FUN_0301af1c(&stack0x00000040,*(undefined8 *)(lVar9 + -8));
          lVar5 = thunk_FUN_01f113fc(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa8));
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
            uVar7 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar7,0);
          }
          if (*(uint *)(plVar4 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar4[(long)(int)unaff_w19 + 4] = lVar5;
          thunk_FUN_01f51358(plVar4 + (long)(int)unaff_w19 + 4,lVar5);
          unaff_w19 = unaff_w19 + 1;
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x28;
      } while (uVar1 != uVar10);
    }
  }
  else {
    iVar8 = *(int *)(unaff_x21 + 0x20);
    if (0 < iVar8) {
      lVar9 = *(long *)(unaff_x21 + 0x18);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar10 = 0;
      puVar11 = (undefined8 *)(lVar9 + 0x30);
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_02b585e8:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (-1 < *(int *)(puVar11 + -2)) {
          in_stack_00000050 = puVar11[2];
          in_stack_00000048 = puVar11[1];
          in_stack_00000040 = *puVar11;
          thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78),
                             &stack0x00000040);
          FUN_0353c748();
          if (*(uint *)(lVar2 + 0x18) <= unaff_w19) goto LAB_02b585e8;
          lVar5 = lVar2 + (long)(int)unaff_w19 * 0x10;
          puVar3 = (undefined8 *)(lVar5 + 0x20);
          *(undefined8 *)(lVar5 + 0x28) = 0;
          *puVar3 = 0;
          unaff_w19 = unaff_w19 + 1;
          thunk_FUN_01f51358(puVar3,0);
          iVar8 = *(int *)(unaff_x21 + 0x20);
        }
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 5;
      } while ((long)uVar10 < (long)iVar8);
    }
  }
  return;
}


