/*
FUNCTION_NAME: System.Collections.Generic.EqualityComparer<RenderInstancedDataLayout>$$IndexOf
ENTRY_POINT: 02c62334
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_12;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02c629ac) */
/* WARNING: Removing unreachable block (ram,0x02c6288c) */
/* WARNING: Removing unreachable block (ram,0x02c629b4) */

void System_Collections_Generic_EqualityComparer<RenderInstancedDataLayout>__IndexOf(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined4 *puVar15;
  long lVar16;
  int *piVar17;
  long *unaff_x21;
  undefined8 uVar18;
  long unaff_x25;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  uVar8 = (**(code **)(*unaff_x21 + 0x5c8))();
  puVar4 = Method_Meta_WitAi_EnumerableExtensions_Equivalent<WitEntityKeywordInfo>__;
  puVar3 = Method_Meta_WitAi_EnumerableExtensions_Equivalent<string>__;
  if ((uVar8 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar9 = thunk_FUN_01f117cc();
    uVar18 = thunk_FUN_01efb3a4(
                               Method_Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_CheckMinArgumentCount__
                               );
    FUN_034f6754(uVar9,uVar18,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar9);
  }
  if (*(int *)(*(long *)Method_Meta_WitAi_EnumerableExtensions_Equivalent<WitEntityRoleInfo>__ +
              0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  _in_stack_00000028 = FUN_030380ec(&stack0x00000038,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  _in_stack_00000010 =
       FUN_03037d40(&stack0x00000020,
                    *(undefined8 *)Method_Unity_VisualScripting_EnumerableCloner_FillClone__);
  uVar9 = (**(code **)(*unaff_x21 + 0x6d8))();
  lVar10 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01ecaf44();
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar10 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x10);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01ecaf44();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
  if (lVar10 == 0) {
    lVar10 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar10 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44();
    }
    uVar18 = **(undefined8 **)(lVar10 + 0xb8);
    lVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<ParameterExpression>__
                               );
    FUN_02e6c0a0(lVar10,uVar18,*(undefined8 *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x18)
                 ,0);
    lVar16 = *(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0);
    lVar11 = *(long *)(lVar16 + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01ecaf44();
      lVar16 = *(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar11 + 0xb8) + 8) = lVar10;
    lVar11 = *(long *)(lVar16 + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01ecaf44();
    }
    thunk_FUN_01f51358(*(long *)(lVar11 + 0xb8) + 8,lVar10);
  }
  plVar12 = (long *)FUN_0230b6f4(uVar9,lVar10,
                                 *(undefined8 *)
                                  Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<Expression>__
                                );
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar10 = *plVar12;
  uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar8 != 0) {
    piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)Method_System_Linq_Enumerable_Range__) {
        puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
        goto FUN_02c62540;
      }
      uVar8 = uVar8 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar8 != 0);
  }
  puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)Method_System_Linq_Enumerable_Range__,0);
FUN_02c62540:
  plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
  puVar7 = Method_System_Environment_UnixGetFolderPath__;
  puVar6 = Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__;
  puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar4 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  puVar3 = Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar10 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
          puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_02c625cc;
        }
        uVar8 = uVar8 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar8 != 0);
    }
    puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar5,0);
LAB_02c625cc:
    uVar8 = (*(code *)*puVar13)(plVar12,puVar13[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar12 == (long *)0x0) goto LAB_02c62880;
      lVar10 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 == 0) goto LAB_02c62858;
      piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)Method_System_Linq_Enumerable_Sum__) {
          puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_02c62630;
        }
        uVar8 = uVar8 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar8 != 0);
    }
    puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)Method_System_Linq_Enumerable_Sum__,0);
LAB_02c62630:
    plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
    lVar10 = FUN_022cd6f8(plVar14,*(undefined8 *)Method_System_Linq_Enumerable_Min__);
    if (lVar10 == 0) {
      lVar10 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar10 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44();
      }
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = **(long **)(lVar10 + 0xb8);
      uVar9 = (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar9,uVar9);
      }
      uVar9 = FUN_03a136cc(lVar10,uVar9,
                           *(undefined8 *)
                            Method_Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_CheckExactArgumentCount__
                           ,0);
    }
    else {
      uVar9 = *(undefined8 *)(lVar10 + 0x18);
    }
    uVar18 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Linq_Enumerable_Min__);
    FUN_040a5fcc(uVar18,uVar9,0);
    if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = *(long *)(in_stack_00000038 + 0x10);
    lVar11 = *(long *)puVar7;
    *(int *)(in_stack_00000038 + 0x1c) = *(int *)(in_stack_00000038 + 0x1c) + 1;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = *(uint *)(in_stack_00000038 + 0x18);
    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(in_stack_00000038 + 0x18) = uVar2 + 1;
      puVar13 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
      *puVar13 = uVar18;
      thunk_FUN_01f51358(puVar13,uVar18);
    }
    else {
      FUN_030f2bb4(in_stack_00000038,uVar18,
                   *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
    lVar10 = in_stack_00000020;
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar14 = (long *)FUN_0359d458();
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    puVar15 = (undefined4 *)thunk_FUN_01f11920();
    uVar1 = *puVar15;
    lVar11 = *(long *)(lVar10 + 0x10);
    lVar16 = *(long *)puVar3;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = *(uint *)(lVar10 + 0x18);
    if (uVar2 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar11 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
    }
    else {
      FUN_030ba904(lVar10,uVar1,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar17 = piVar17 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_02c62874;
    }
  }
LAB_02c62858:
  puVar13 = (undefined8 *)
            FUN_01ecb238(plVar12,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_02c62874:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_02c62880:
  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar9 = FUN_030f4630(in_stack_00000038,
                       *(undefined8 *)Method_Unity_VisualScripting_EqualityComparison_Equal__);
  *(undefined8 *)(in_stack_00000008 + 0x60) = uVar9;
  thunk_FUN_01f51358();
  if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar9 = FUN_030bc2e0(in_stack_00000020,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_get_Item__
                      );
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x30))
            (in_stack_00000008,uVar9);
  FUN_025ecba8(&stack0x00000010,
               *(undefined8 *)
                Method_Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_CheckCase__);
  FUN_025ecba8(&stack0x00000028,
               *(undefined8 *)Method_Unity_VisualScripting_EqualityComparison_NotEqual__);
  return;
}


