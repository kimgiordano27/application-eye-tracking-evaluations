/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$Dispose
ENTRY_POINT: 02b583ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__Dispose
               (long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
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
  
  lVar7 = *(long *)(*(long *)(param_1 + 0xc0) + 0x128);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    FUN_01ecaf44(lVar7);
  }
  lVar7 = thunk_FUN_01f116d0();
  if (lVar7 != 0) {
    FUN_02b56ca0();
    return;
  }
  lVar7 = thunk_FUN_01f116d0();
  if (lVar7 == 0) {
    plVar3 = (long *)thunk_FUN_01f116d0();
    if (plVar3 == (long *)0x0) {
      FUN_0358ba14();
    }
    uVar1 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar1) {
      lVar7 = *(long *)(unaff_x21 + 0x18);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar10 = 0;
      lVar9 = lVar7 + 0x30;
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (-1 < *(int *)(lVar9 + -0x10)) {
          in_stack_00000048 = 0;
          in_stack_00000040 = 0;
          in_stack_00000058 = 0;
          in_stack_00000050 = 0;
          FUN_0301af1c(&stack0x00000040,*(undefined8 *)(lVar9 + -8));
          lVar4 = thunk_FUN_01f113fc(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa8));
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
            uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar6,0);
          }
          if (*(uint *)(plVar3 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar3[(long)(int)unaff_w19 + 4] = lVar4;
          thunk_FUN_01f51358(plVar3 + (long)(int)unaff_w19 + 4,lVar4);
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
          if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_02b585e8;
          lVar4 = lVar7 + (long)(int)unaff_w19 * 0x10;
          puVar2 = (undefined8 *)(lVar4 + 0x20);
          *(undefined8 *)(lVar4 + 0x28) = 0;
          *puVar2 = 0;
          unaff_w19 = unaff_w19 + 1;
          thunk_FUN_01f51358(puVar2,0);
          iVar8 = *(int *)(unaff_x21 + 0x20);
        }
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 5;
      } while ((long)uVar10 < (long)iVar8);
    }
  }
  return;
}


