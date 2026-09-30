/*
FUNCTION_NAME: System.Collections.Generic.EqualityComparer<RenderInstancedDataLayout>$$System.Collections.IEqualityComparer.GetHashCode
ENTRY_POINT: 02c62474
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02c629ac) */
/* WARNING: Removing unreachable block (ram,0x02c6288c) */
/* WARNING: Removing unreachable block (ram,0x02c629b4) */

void System_Collections_Generic_EqualityComparer<RenderInstancedDataLayout>__System_Collections_IEqualityComparer_GetHashCode
               (void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  undefined8 unaff_x23;
  long unaff_x25;
  undefined8 uVar18;
  long in_stack_00000008;
  long in_stack_00000020;
  long in_stack_00000038;
  
  FUN_02e6c0a0();
  lVar14 = *(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0);
  lVar8 = *(long *)(lVar14 + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44();
    lVar14 = *(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0);
  }
  *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8) = unaff_x23;
  lVar8 = *(long *)(lVar14 + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44();
  }
  thunk_FUN_01f51358(*(long *)(lVar8 + 0xb8) + 8);
  plVar9 = (long *)FUN_0230b6f4();
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar8 = *plVar9;
  uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar15 != 0) {
    piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)Method_System_Linq_Enumerable_Range__) {
        puVar10 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
        goto FUN_02c62540;
      }
      uVar15 = uVar15 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)Method_System_Linq_Enumerable_Range__,0);
FUN_02c62540:
  plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
  puVar7 = Method_System_Environment_UnixGetFolderPath__;
  puVar6 = Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__;
  puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar4 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  puVar3 = Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar8 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_02c625cc;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar5,0);
LAB_02c625cc:
    uVar15 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    if ((uVar15 & 1) == 0) {
      if (plVar9 == (long *)0x0) goto LAB_02c62880;
      lVar8 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar15 == 0) goto LAB_02c62858;
      piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)Method_System_Linq_Enumerable_Sum__) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_02c62630;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)Method_System_Linq_Enumerable_Sum__,0);
LAB_02c62630:
    plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    lVar8 = FUN_022cd6f8(plVar11,*(undefined8 *)Method_System_Linq_Enumerable_Min__);
    if (lVar8 == 0) {
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44();
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44();
      }
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = **(long **)(lVar8 + 0xb8);
      uVar18 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar18,uVar18);
      }
      uVar18 = FUN_03a136cc(lVar8,uVar18,
                            *(undefined8 *)
                             Method_Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_CheckExactArgumentCount__
                            ,0);
    }
    else {
      uVar18 = *(undefined8 *)(lVar8 + 0x18);
    }
    uVar12 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Linq_Enumerable_Min__);
    FUN_040a5fcc(uVar12,uVar18,0);
    if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *(long *)(in_stack_00000038 + 0x10);
    lVar14 = *(long *)puVar7;
    *(int *)(in_stack_00000038 + 0x1c) = *(int *)(in_stack_00000038 + 0x1c) + 1;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = *(uint *)(in_stack_00000038 + 0x18);
    if (uVar2 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(in_stack_00000038 + 0x18) = uVar2 + 1;
      puVar10 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
      *puVar10 = uVar12;
      thunk_FUN_01f51358(puVar10,uVar12);
    }
    else {
      FUN_030f2bb4(in_stack_00000038,uVar12,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    lVar8 = in_stack_00000020;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar11 = (long *)FUN_0359d458();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    puVar13 = (undefined4 *)thunk_FUN_01f11920();
    uVar1 = *puVar13;
    lVar14 = *(long *)(lVar8 + 0x10);
    lVar16 = *(long *)puVar3;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = *(uint *)(lVar8 + 0x18);
    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar14 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
    }
    else {
      FUN_030ba904(lVar8,uVar1,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar10 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_02c62874;
    }
  }
LAB_02c62858:
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar9,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_02c62874:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_02c62880:
  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar18 = FUN_030f4630(in_stack_00000038,
                        *(undefined8 *)Method_Unity_VisualScripting_EqualityComparison_Equal__);
  *(undefined8 *)(in_stack_00000008 + 0x60) = uVar18;
  thunk_FUN_01f51358();
  if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar18 = FUN_030bc2e0(in_stack_00000020,
                        *(undefined8 *)
                         Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_get_Item__
                       );
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x30))
            (in_stack_00000008,uVar18);
  FUN_025ecba8(&stack0x00000010,
               *(undefined8 *)
                Method_Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_CheckCase__);
  FUN_025ecba8(&stack0x00000028,
               *(undefined8 *)Method_Unity_VisualScripting_EqualityComparison_NotEqual__);
  return;
}


