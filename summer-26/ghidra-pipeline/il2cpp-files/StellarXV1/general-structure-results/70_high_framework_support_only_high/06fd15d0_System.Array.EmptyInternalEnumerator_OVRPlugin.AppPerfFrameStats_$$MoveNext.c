/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$MoveNext
ENTRY_POINT: 06fd15d0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__MoveNext(int param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (param_1 != 1) {
    FUN_0769a8c0(7,0);
  }
  iVar2 = thunk_FUN_04086950();
  if (iVar2 != 0) {
    FUN_0769a8c0(6,0);
  }
  uVar3 = FUN_0769286c();
  if (uVar3 < unaff_w20) {
    FUN_0769b128(0);
  }
  iVar2 = FUN_0769286c();
  if ((int)(iVar2 - unaff_w20) < *(int *)(unaff_x21 + 0x20) - *(int *)(unaff_x21 + 0x28)) {
    FUN_0769a8c0(5,0);
  }
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    FUN_040b1acc(lVar7);
  }
  lVar7 = thunk_FUN_040b4e00();
  if (lVar7 != 0) {
    FUN_06fcfcfc();
    return;
  }
  lVar7 = thunk_FUN_040b4e00();
  if (lVar7 == 0) {
    plVar5 = (long *)thunk_FUN_040b4e00();
    if (plVar5 == (long *)0x0) {
      FUN_0769b160();
    }
    uVar3 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar3) {
      lVar7 = *(long *)(unaff_x21 + 0x18);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar9 = 0;
      puVar10 = (undefined8 *)(lVar7 + 0x30);
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        if (-1 < *(int *)(puVar10 + -2)) {
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_059fcee4(&stack0x00000010,*(undefined4 *)(puVar10 + -1),*puVar10,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x150));
          lVar8 = thunk_FUN_040b4b34(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if ((lVar8 != 0) &&
             (lVar6 = thunk_FUN_040b4e00(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
            uVar4 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar4,0);
          }
          if (*(uint *)(plVar5 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar5[(long)(int)unaff_w20 + 4] = lVar8;
          thunk_FUN_040ec700(plVar5 + (long)(int)unaff_w20 + 4,lVar8);
          unaff_w20 = unaff_w20 + 1;
        }
        uVar9 = uVar9 + 1;
        puVar10 = puVar10 + 3;
      } while (uVar3 != uVar9);
    }
  }
  else {
    iVar2 = *(int *)(unaff_x21 + 0x20);
    if (0 < iVar2) {
      lVar8 = *(long *)(unaff_x21 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar9 = 0;
      puVar10 = (undefined8 *)(lVar8 + 0x30);
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_06fd1884;
        if (-1 < *(int *)(puVar10 + -2)) {
          uVar4 = thunk_FUN_040b4b34(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70));
          if (*(uint *)(lVar8 + 0x18) <= uVar9) {
LAB_06fd1884:
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_076102d8(&stack0x00000010,uVar4,*puVar10,0);
          if (*(uint *)(lVar7 + 0x18) <= unaff_w20) goto LAB_06fd1884;
          lVar1 = lVar7 + (long)(int)unaff_w20 * 0x10;
          lVar6 = (long)(int)unaff_w20;
          unaff_w20 = unaff_w20 + 1;
          *(undefined8 *)(lVar1 + 0x28) = in_stack_00000018;
          *(undefined8 *)(lVar1 + 0x20) = in_stack_00000010;
          thunk_FUN_040ec700(lVar7 + 0x20 + lVar6 * 0x10,0);
          iVar2 = *(int *)(unaff_x21 + 0x20);
        }
        uVar9 = uVar9 + 1;
        puVar10 = puVar10 + 3;
      } while ((long)uVar9 < (long)iVar2);
    }
  }
  return;
}


