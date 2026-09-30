/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Quatf>$$Dispose
ENTRY_POINT: 06c4a3f8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__Dispose(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0xc0) + 0x148);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    FUN_03d8f26c(lVar7);
  }
  lVar7 = thunk_FUN_03d2ee44();
  if (lVar7 != 0) {
    FUN_06c48b28();
    return;
  }
  lVar7 = thunk_FUN_03d2ee44();
  if (lVar7 == 0) {
    plVar5 = (long *)thunk_FUN_03d2ee44();
    if (plVar5 == (long *)0x0) {
      FUN_07199e44();
    }
    uVar1 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar1) {
      lVar7 = *(long *)(unaff_x21 + 0x18);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar10 = 0;
      puVar11 = (undefined4 *)(lVar7 + 0x30);
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        if (-1 < (int)puVar11[-4]) {
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_058198f4(&stack0x00000010,*(undefined8 *)(puVar11 + -2),*puVar11,
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x158));
          lVar9 = thunk_FUN_03d2eb70(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d548();
          }
          if ((lVar9 != 0) &&
             (lVar6 = thunk_FUN_03d2ee44(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
            uVar2 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
            FUN_03d2d414(uVar2,0);
          }
          if (*(uint *)(plVar5 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d550();
          }
          plVar5[(long)(int)unaff_w20 + 4] = lVar9;
          thunk_FUN_03d1023c(plVar5 + (long)(int)unaff_w20 + 4,lVar9);
          unaff_w20 = unaff_w20 + 1;
        }
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 6;
      } while (uVar1 != uVar10);
    }
  }
  else {
    iVar8 = *(int *)(unaff_x21 + 0x20);
    if (0 < iVar8) {
      lVar9 = *(long *)(unaff_x21 + 0x18);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar10 = 0;
      puVar11 = (undefined4 *)(lVar9 + 0x30);
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_06c4a63c;
        if (-1 < (int)puVar11[-4]) {
          uVar2 = thunk_FUN_03d2eb70(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70));
          if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_06c4a63c:
                    /* WARNING: Subroutine does not return */
            FUN_03d2d550();
          }
          in_stack_00000028._4_4_ = *puVar11;
          uVar3 = thunk_FUN_03d2eb70(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78),
                                     (long)&stack0x00000028 + 4);
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_07143704(&stack0x00000010,uVar2,uVar3,0);
          if (*(uint *)(lVar7 + 0x18) <= unaff_w20) goto LAB_06c4a63c;
          lVar6 = lVar7 + (long)(int)unaff_w20 * 0x10;
          puVar4 = (undefined8 *)(lVar6 + 0x20);
          *(undefined8 *)(lVar6 + 0x28) = in_stack_00000018;
          *puVar4 = in_stack_00000010;
          unaff_w20 = unaff_w20 + 1;
          thunk_FUN_03d1023c(puVar4,0);
          iVar8 = *(int *)(unaff_x21 + 0x20);
        }
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 6;
      } while ((long)uVar10 < (long)iVar8);
    }
  }
  return;
}


