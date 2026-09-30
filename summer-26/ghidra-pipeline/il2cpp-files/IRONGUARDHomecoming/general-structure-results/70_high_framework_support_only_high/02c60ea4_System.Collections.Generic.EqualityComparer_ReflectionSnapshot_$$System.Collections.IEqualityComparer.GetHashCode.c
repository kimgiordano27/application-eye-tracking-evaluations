/*
FUNCTION_NAME: System.Collections.Generic.EqualityComparer<ReflectionSnapshot>$$System.Collections.IEqualityComparer.GetHashCode
ENTRY_POINT: 02c60ea4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02c610b0) */
/* WARNING: Removing unreachable block (ram,0x02c60fa0) */
/* WARNING: Removing unreachable block (ram,0x02c610b8) */

void System_Collections_Generic_EqualityComparer<ReflectionSnapshot>__System_Collections_IEqualityComparer_GetHashCode
               (void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long unaff_x24;
  undefined8 uVar11;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  long in_stack_00000020;
  long in_stack_00000038;
  
  do {
    plVar5 = (long *)FUN_0359d458();
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar5 + 0x40) != *(long *)(*unaff_x26 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    puVar6 = (undefined4 *)thunk_FUN_01f11920();
    uVar1 = *puVar6;
    lVar7 = *(long *)(unaff_x24 + 0x10);
    lVar9 = *unaff_x27;
    *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = *(uint *)(unaff_x24 + 0x18);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(unaff_x24 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
    }
    else {
      FUN_030ba904(unaff_x24,uVar1,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
    }
    lVar7 = *unaff_x22;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x29) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02c60ce0;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02c60ce0:
    uVar8 = (*(code *)*puVar3)();
    if ((uVar8 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) goto LAB_02c60f94;
      lVar7 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_02c60f6c;
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *unaff_x22;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)Method_System_Linq_Enumerable_Sum__) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02c60d44;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02c60d44:
    plVar5 = (long *)(*(code *)*puVar3)();
    lVar7 = FUN_022cd6f8(plVar5,*(undefined8 *)Method_System_Linq_Enumerable_Min__);
    if (lVar7 == 0) {
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = **(long **)(lVar7 + 0xb8);
      uVar11 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar11,uVar11);
      }
      uVar11 = FUN_03a136cc(lVar7,uVar11,
                            *(undefined8 *)
                             Method_Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_CheckExactArgumentCount__
                            ,0);
    }
    else {
      uVar11 = *(undefined8 *)(lVar7 + 0x18);
    }
    uVar4 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Linq_Enumerable_Min__);
    FUN_040a5fcc(uVar4,uVar11,0);
    if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *(long *)(in_stack_00000038 + 0x10);
    lVar9 = *unaff_x28;
    *(int *)(in_stack_00000038 + 0x1c) = *(int *)(in_stack_00000038 + 0x1c) + 1;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = *(uint *)(in_stack_00000038 + 0x18);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(in_stack_00000038 + 0x18) = uVar2 + 1;
      puVar3 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
      *puVar3 = uVar4;
      thunk_FUN_01f51358(puVar3,uVar4);
    }
    else {
      FUN_030f2bb4(in_stack_00000038,uVar4,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    unaff_x24 = in_stack_00000020;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar10 = piVar10 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_02c60f88;
    }
  }
LAB_02c60f6c:
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02c60f88:
  (*(code *)*puVar3)();
LAB_02c60f94:
  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar11 = FUN_030f4630(in_stack_00000038,
                        *(undefined8 *)Method_Unity_VisualScripting_EqualityComparison_Equal__);
  *(undefined8 *)(in_stack_00000008 + 0x60) = uVar11;
  thunk_FUN_01f51358();
  if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar11 = FUN_030bc2e0(in_stack_00000020,
                        *(undefined8 *)
                         Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_get_Item__
                       );
  FUN_02c60734(in_stack_00000008,uVar11);
  FUN_025ecba8(&stack0x00000010,
               *(undefined8 *)
                Method_Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_CheckCase__);
  FUN_025ecba8(&stack0x00000028,
               *(undefined8 *)Method_Unity_VisualScripting_EqualityComparison_NotEqual__);
  return;
}


