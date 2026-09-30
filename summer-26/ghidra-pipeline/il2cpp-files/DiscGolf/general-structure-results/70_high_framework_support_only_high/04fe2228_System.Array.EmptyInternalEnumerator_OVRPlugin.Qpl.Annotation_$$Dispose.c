/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation>$$Dispose
ENTRY_POINT: 04fe2228
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation>__Dispose
               (long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long lStack0000000000000068;
  
  lStack0000000000000068 = param_1;
  if ((*(byte *)(unaff_x23 + 0x584) & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a10490);
    FUN_02d965b8(PTR_DAT_069fc180);
    *(undefined1 *)(unaff_x23 + 0x584) = 1;
  }
  in_stack_00000028 = 0;
  if (unaff_x22 == 0) {
    if (*(long *)(unaff_x24 + 0x28) == lStack0000000000000068) {
                    /* WARNING: Subroutine does not return */
      FUN_054fa008(3,0);
    }
  }
  else {
    iVar2 = thunk_FUN_02da56d8();
    if (iVar2 != 1) {
      FUN_05508fa4(7,0);
    }
    iVar2 = thunk_FUN_02da5698();
    if (iVar2 != 0) {
      FUN_05508fa4(6,0);
    }
    uVar3 = FUN_0550100c();
    if (uVar3 < unaff_w19) {
      FUN_0550980c(0);
    }
    iVar2 = FUN_0550100c();
    if ((int)(iVar2 - unaff_w19) < *(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x28)) {
      FUN_05508fa4(5,0);
    }
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      FUN_02dcfd18(lVar7);
    }
    lVar7 = thunk_FUN_02dd3048();
    if (lVar7 == 0) {
      lVar7 = thunk_FUN_02dd3048();
      if (lVar7 == 0) {
        plVar4 = (long *)thunk_FUN_02dd3048();
        if (plVar4 == (long *)0x0) {
          FUN_05509844();
        }
        uVar3 = *(uint *)(param_2 + 0x20);
        if (0 < (int)uVar3) {
          lVar7 = *(long *)(param_2 + 0x18);
          if (lVar7 == 0) {
            if (*(long *)(unaff_x24 + 0x28) == lStack0000000000000068) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            goto LAB_04fe26ec;
          }
          uVar9 = 0;
          puVar10 = (undefined8 *)(lVar7 + 0x38);
          do {
            if (*(uint *)(lVar7 + 0x18) <= uVar9) {
              if (*(long *)(unaff_x24 + 0x28) == lStack0000000000000068) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              goto LAB_04fe26ec;
            }
            if (-1 < *(int *)(puVar10 + -3)) {
              in_stack_00000050 = 0;
              in_stack_00000058 = 0;
              in_stack_00000060 = 0;
              FUN_03e874d8(&stack0x00000050,puVar10[-2],puVar10[-1],*puVar10,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x158));
              in_stack_00000038 = in_stack_00000058;
              in_stack_00000030 = in_stack_00000050;
              in_stack_00000040 = in_stack_00000060;
              lVar8 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                          (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa8),
                                         &stack0x00000030);
              if (plVar4 == (long *)0x0) {
                if (*(long *)(unaff_x24 + 0x28) == lStack0000000000000068) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                goto LAB_04fe26ec;
              }
              if ((lVar8 != 0) &&
                 (lVar5 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
                uVar6 = thunk_FUN_02de0bec();
                if (*(long *)(unaff_x24 + 0x28) == lStack0000000000000068) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96724(uVar6,0);
                }
                goto LAB_04fe26ec;
              }
              if (*(uint *)(plVar4 + 3) <= unaff_w19) {
                if (*(long *)(unaff_x24 + 0x28) == lStack0000000000000068) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96868();
                }
                goto LAB_04fe26ec;
              }
              plVar4[(long)(int)unaff_w19 + 4] = lVar8;
              LeanTween__value(plVar4 + (long)(int)unaff_w19 + 4,lVar8);
              unaff_w19 = unaff_w19 + 1;
            }
            uVar9 = uVar9 + 1;
            puVar10 = puVar10 + 4;
          } while (uVar3 != uVar9);
        }
      }
      else {
        iVar2 = *(int *)(param_2 + 0x20);
        if (0 < iVar2) {
          lVar8 = *(long *)(param_2 + 0x18);
          if (lVar8 == 0) {
            if (*(long *)(unaff_x24 + 0x28) == lStack0000000000000068) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            goto LAB_04fe26ec;
          }
          uVar9 = 0;
          puVar10 = (undefined8 *)(lVar8 + 0x30);
          do {
            if (*(uint *)(lVar8 + 0x18) <= uVar9) {
LAB_04fe2578:
              if (*(long *)(unaff_x24 + 0x28) == lStack0000000000000068) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              goto LAB_04fe26ec;
            }
            if (-1 < *(int *)(puVar10 + -2)) {
              in_stack_00000018 = puVar10[-1];
              thunk_FUN_02dd2d7c(*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70),
                                 &stack0x00000018);
              if (uVar9 < *(uint *)(lVar8 + 0x18)) {
                in_stack_00000038 = puVar10[1];
                in_stack_00000030 = *puVar10;
                in_stack_00000050 = in_stack_00000030;
                in_stack_00000058 = in_stack_00000038;
                thunk_FUN_02dd2d7c(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78),
                                   &stack0x00000030);
                FUN_05488220();
                if (unaff_w19 < *(uint *)(lVar7 + 0x18)) {
                  lVar1 = lVar7 + (long)(int)unaff_w19 * 0x10;
                  lVar5 = (long)(int)unaff_w19;
                  unaff_w19 = unaff_w19 + 1;
                  *(undefined8 *)(lVar1 + 0x28) = 0;
                  *(undefined8 *)(lVar1 + 0x20) = 0;
                  LeanTween__value(lVar7 + 0x20 + lVar5 * 0x10,0);
                  iVar2 = *(int *)(param_2 + 0x20);
                  goto LAB_04fe2444;
                }
              }
              goto LAB_04fe2578;
            }
LAB_04fe2444:
            uVar9 = uVar9 + 1;
            puVar10 = puVar10 + 4;
          } while ((long)uVar9 < (long)iVar2);
        }
      }
      if (*(long *)(unaff_x24 + 0x28) == lStack0000000000000068) {
        return;
      }
    }
    else if (*(long *)(unaff_x24 + 0x28) == lStack0000000000000068) {
      FUN_04fe09f4(param_2,lVar7,unaff_w19,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180));
      return;
    }
  }
LAB_04fe26ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


