/*
FUNCTION_NAME: UnityEngine.UIElements.VisualElement$$HasEventCallbacksOrDefaultActions
ENTRY_POINT: 0412a494
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0412a8c4) */
/* WARNING: Removing unreachable block (ram,0x0412a8b8) */

void UnityEngine_UIElements_VisualElement__HasEventCallbacksOrDefaultActions(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long *unaff_x19;
  undefined8 uVar13;
  long *unaff_x20;
  long *unaff_x21;
  undefined4 unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  thunk_FUN_01efb3a4(PTR_DAT_0458a448);
  thunk_FUN_01efb3a4(Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__);
  *(undefined1 *)(unaff_x24 + 0x788) = 1;
  lVar6 = *unaff_x19;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *unaff_x19;
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
  uVar7 = FUN_035b51f0(uVar13,0,0);
  if ((uVar7 & 1) != 0) {
    FUN_04036e24(uVar13,0);
  }
  if (((unaff_x20 != (long *)0x0) && (*unaff_x21 != 0)) && (unaff_x23[9] != 0)) {
    lVar6 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
          puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0412a574;
        }
        uVar7 = uVar7 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238();
LAB_0412a574:
    plVar9 = (long *)(*(code *)*puVar8)();
    puVar4 = PTR_DAT_0458a438;
    puVar3 = Method_System_DateTime_AddTicks__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0412a5f4;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_0412a5f4:
      uVar7 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      if ((uVar7 & 1) == 0) {
        if (plVar9 == (long *)0x0) break;
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 == 0) goto LAB_0412a840;
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_0412a828;
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0412a650;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_0412a650:
      uVar5 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      if (unaff_x23[6] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar7 = FUN_02b142d4(unaff_x23[6],uVar5,&stack0x00000030,*(undefined8 *)puVar4);
      if ((uVar7 & 1) != 0) {
        FUN_041bf29c(&stack0x00000018,in_stack_00000030,in_stack_00000038,unaff_w22,0);
        lVar6 = *unaff_x21;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        in_stack_00000048 = in_stack_00000020;
        in_stack_00000040 = in_stack_00000018;
        in_stack_00000050 = in_stack_00000028;
        lVar10 = *(long *)(lVar6 + 0x10);
        lVar11 = *(long *)PTR_DAT_0458a448;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          lVar10 = lVar10 + (long)(int)uVar1 * 0x18;
          *(undefined8 *)(lVar10 + 0x30) = in_stack_00000028;
          *(undefined8 *)(lVar10 + 0x28) = in_stack_00000020;
          *(undefined8 *)(lVar10 + 0x20) = in_stack_00000018;
          thunk_FUN_01f51358(lVar10 + 0x28,0);
        }
        else {
          in_stack_00000068 = in_stack_00000020;
          in_stack_00000060 = in_stack_00000018;
          in_stack_00000070 = in_stack_00000028;
          FUN_03168d38(lVar6,&stack0x00000060,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        if (unaff_x23[9] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02ed9a64(unaff_x23[9],uVar5,
                     *(undefined8 *)Method_System_Linq_Enumerable_Select<ValueInput,_object>__);
        lVar6 = FUN_04127458();
        if (lVar6 != 0) {
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(long *)(lVar6 + 0x4b0) != 0) {
            lVar6 = FUN_04127458();
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar6 = *(long *)(lVar6 + 0x4b0);
            uVar7 = FUN_041bf288(&stack0x00000018,0);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c(uVar7,uVar7 & 0xffffffff);
            }
            uVar7 = FUN_030bac7c(lVar6,uVar7 & 0xffffffff,
                                 *(undefined8 *)
                                  Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__
                                );
            if (((uVar7 & 1) != 0) &&
               (uVar7 = thunk_FUN_041bf220(&stack0x00000018,0), (uVar7 & 1) != 0)) {
              FUN_041bf288(&stack0x00000018,0);
              (**(code **)(*unaff_x23 + 0x2b8))();
              FUN_0412a410();
            }
          }
        }
      }
    } while( true );
  }
  goto LAB_0412a870;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar12 = piVar12 + 4;
    if (uVar7 == 0) break;
LAB_0412a828:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0412a85c;
    }
  }
LAB_0412a840:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar9,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0412a85c:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
LAB_0412a870:
  uVar7 = FUN_035b51f0(uVar13,0,0);
  if ((uVar7 & 1) != 0) {
    FUN_04036ec0(uVar13,0);
  }
  return;
}


