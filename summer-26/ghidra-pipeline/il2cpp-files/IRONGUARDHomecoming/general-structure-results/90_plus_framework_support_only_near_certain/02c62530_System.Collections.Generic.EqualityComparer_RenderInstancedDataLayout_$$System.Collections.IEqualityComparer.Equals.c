/*
FUNCTION_NAME: System.Collections.Generic.EqualityComparer<RenderInstancedDataLayout>$$System.Collections.IEqualityComparer.Equals
ENTRY_POINT: 02c62530
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_12;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02c629ac) */
/* WARNING: Removing unreachable block (ram,0x02c6288c) */
/* WARNING: Removing unreachable block (ram,0x02c629b4) */

void System_Collections_Generic_EqualityComparer<RenderInstancedDataLayout>__System_Collections_IEqualityComparer_Equals
               (undefined8 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long unaff_x25;
  undefined8 uVar18;
  long in_stack_00000008;
  long in_stack_00000020;
  long in_stack_00000038;
  
  plVar8 = (long *)(*(code *)*param_1)();
  puVar7 = Method_System_Environment_UnixGetFolderPath__;
  puVar6 = Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__;
  puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar4 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  puVar3 = Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar13 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_02c625cc;
        }
        uVar14 = uVar14 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar5,0);
LAB_02c625cc:
    uVar14 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if ((uVar14 & 1) == 0) {
      if (plVar8 == (long *)0x0) goto LAB_02c62880;
      lVar13 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 == 0) goto LAB_02c62858;
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    lVar13 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)Method_System_Linq_Enumerable_Sum__) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_02c62630;
        }
        uVar14 = uVar14 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)Method_System_Linq_Enumerable_Sum__,0);
LAB_02c62630:
    plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    lVar13 = FUN_022cd6f8(plVar10,*(undefined8 *)Method_System_Linq_Enumerable_Min__);
    if (lVar13 == 0) {
      lVar13 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_01ecaf44();
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar13 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_01ecaf44();
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar13 = **(long **)(lVar13 + 0xb8);
      uVar18 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar18,uVar18);
      }
      uVar18 = FUN_03a136cc(lVar13,uVar18,
                            *(undefined8 *)
                             Method_Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_CheckExactArgumentCount__
                            ,0);
    }
    else {
      uVar18 = *(undefined8 *)(lVar13 + 0x18);
    }
    uVar11 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Linq_Enumerable_Min__);
    FUN_040a5fcc(uVar11,uVar18,0);
    if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar13 = *(long *)(in_stack_00000038 + 0x10);
    lVar15 = *(long *)puVar7;
    *(int *)(in_stack_00000038 + 0x1c) = *(int *)(in_stack_00000038 + 0x1c) + 1;
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = *(uint *)(in_stack_00000038 + 0x18);
    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(in_stack_00000038 + 0x18) = uVar2 + 1;
      puVar9 = (undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
      *puVar9 = uVar11;
      thunk_FUN_01f51358(puVar9,uVar11);
    }
    else {
      FUN_030f2bb4(in_stack_00000038,uVar11,
                   *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
    }
    lVar13 = in_stack_00000020;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar10 = (long *)FUN_0359d458();
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    puVar12 = (undefined4 *)thunk_FUN_01f11920();
    uVar1 = *puVar12;
    lVar15 = *(long *)(lVar13 + 0x10);
    lVar16 = *(long *)puVar3;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = *(uint *)(lVar13 + 0x18);
    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar15 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
    }
    else {
      FUN_030ba904(lVar13,uVar1,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar17 = piVar17 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_02c62874;
    }
  }
LAB_02c62858:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02c62874:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
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


