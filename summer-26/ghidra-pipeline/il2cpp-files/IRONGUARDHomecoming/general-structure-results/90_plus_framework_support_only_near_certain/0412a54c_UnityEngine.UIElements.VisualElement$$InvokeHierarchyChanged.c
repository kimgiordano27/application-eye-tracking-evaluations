/*
FUNCTION_NAME: UnityEngine.UIElements.VisualElement$$InvokeHierarchyChanged
ENTRY_POINT: 0412a54c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 148
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0412a8b8) */
/* WARNING: Removing unreachable block (ram,0x0412a8c4) */

void UnityEngine_UIElements_VisualElement__InvokeHierarchyChanged
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long in_x9;
  ulong uVar10;
  int *in_x10;
  long lVar11;
  int *piVar12;
  long *unaff_x21;
  undefined4 unaff_w22;
  long *unaff_x23;
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
  
  do {
    in_x9 = in_x9 + -1;
    piVar12 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar6 = (undefined8 *)FUN_01ecb238();
      goto LAB_0412a574;
    }
    plVar7 = (long *)(in_x10 + 2);
    in_x10 = piVar12;
  } while (*plVar7 != param_3);
  puVar6 = (undefined8 *)(param_1 + (long)*piVar12 * 0x10 + 0x138);
LAB_0412a574:
  plVar7 = (long *)(*(code *)*puVar6)();
  puVar4 = PTR_DAT_0458a438;
  puVar3 = Method_System_DateTime_AddTicks__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar8 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0412a5f4;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_0412a5f4:
    uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_0412a868;
      lVar8 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 == 0) goto LAB_0412a840;
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0412a650;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_0412a650:
    uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if (unaff_x23[6] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar10 = FUN_02b142d4(unaff_x23[6],uVar5,&stack0x00000030,*(undefined8 *)puVar4);
    if ((uVar10 & 1) != 0) {
      FUN_041bf29c(&stack0x00000018,in_stack_00000030,in_stack_00000038,unaff_w22,0);
      lVar8 = *unaff_x21;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      in_stack_00000048 = in_stack_00000020;
      in_stack_00000040 = in_stack_00000018;
      in_stack_00000050 = in_stack_00000028;
      lVar9 = *(long *)(lVar8 + 0x10);
      lVar11 = *(long *)PTR_DAT_0458a448;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        lVar9 = lVar9 + (long)(int)uVar1 * 0x18;
        *(undefined8 *)(lVar9 + 0x30) = in_stack_00000028;
        *(undefined8 *)(lVar9 + 0x28) = in_stack_00000020;
        *(undefined8 *)(lVar9 + 0x20) = in_stack_00000018;
        thunk_FUN_01f51358(lVar9 + 0x28,0);
      }
      else {
        in_stack_00000068 = in_stack_00000020;
        in_stack_00000060 = in_stack_00000018;
        in_stack_00000070 = in_stack_00000028;
        FUN_03168d38(lVar8,&stack0x00000060,
                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
      if (unaff_x23[9] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_02ed9a64(unaff_x23[9],uVar5,
                   *(undefined8 *)Method_System_Linq_Enumerable_Select<ValueInput,_object>__);
      lVar8 = FUN_04127458();
      if (lVar8 != 0) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(lVar8 + 0x4b0) != 0) {
          lVar8 = FUN_04127458();
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar8 = *(long *)(lVar8 + 0x4b0);
          uVar10 = FUN_041bf288(&stack0x00000018,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(uVar10,uVar10 & 0xffffffff);
          }
          uVar10 = FUN_030bac7c(lVar8,uVar10 & 0xffffffff,
                                *(undefined8 *)
                                 Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__
                               );
          if (((uVar10 & 1) != 0) &&
             (uVar10 = thunk_FUN_041bf220(&stack0x00000018,0), (uVar10 & 1) != 0)) {
            FUN_041bf288(&stack0x00000018,0);
            (**(code **)(*unaff_x23 + 0x2b8))();
            FUN_0412a410();
          }
        }
      }
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0412a85c;
    }
  }
LAB_0412a840:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0412a85c:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_0412a868:
  uVar10 = FUN_035b51f0();
  if ((uVar10 & 1) != 0) {
    FUN_04036ec0();
  }
  return;
}


