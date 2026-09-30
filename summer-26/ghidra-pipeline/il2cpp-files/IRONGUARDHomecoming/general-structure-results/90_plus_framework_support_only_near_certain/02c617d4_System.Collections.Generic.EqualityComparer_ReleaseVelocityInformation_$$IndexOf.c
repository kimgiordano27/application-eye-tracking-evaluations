/*
FUNCTION_NAME: System.Collections.Generic.EqualityComparer<ReleaseVelocityInformation>$$IndexOf
ENTRY_POINT: 02c617d4
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


/* WARNING: Removing unreachable block (ram,0x02c61d28) */
/* WARNING: Removing unreachable block (ram,0x02c61c18) */
/* WARNING: Removing unreachable block (ram,0x02c61d30) */

void System_Collections_Generic_EqualityComparer<ReleaseVelocityInformation>__IndexOf
               (ulong param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  undefined8 uVar18;
  long unaff_x25;
  long in_stack_00000008;
  long in_stack_00000020;
  long in_stack_00000038;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_01ecaf44();
  }
  uVar18 = **(undefined8 **)(param_2 + 0xb8);
  uVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<ParameterExpression>__
                            );
  FUN_02e6c0a0(uVar8,uVar18,*(undefined8 *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x18),0)
  ;
  lVar14 = *(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0);
  lVar9 = *(long *)(lVar14 + 0x10);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                    /* try { // try from 02c61824 to 02d61833 has its CatchHandler @ 02c61834 */
    lVar9 = FUN_01ecaf44();
    lVar14 = *(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0);
  }
                    /* catch() { ... } // from try @ 02c617a4 with catch @ 02c61834
                       catch() { ... } // from try @ 02c61824 with catch @ 02c61834 */
  *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8) = uVar8;
                    /* try { // try from 02c61838 to 02d6183b has its CatchHandler @ 02c61844 */
  lVar9 = *(long *)(lVar14 + 0x10);
                    /* try { // try from 02c6183c to 02d61847 has its CatchHandler @ 02c615a8 */
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02c61788 with catch @ 02c61844
                       catch(type#2 @ 00000000) { ... } // from try @ 02c61838 with catch @ 02c61844
                        */
    lVar9 = FUN_01ecaf44();
  }
  thunk_FUN_01f51358(*(long *)(lVar9 + 0xb8) + 8,uVar8);
  plVar10 = (long *)FUN_0230b6f4();
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = *plVar10;
  uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar15 != 0) {
    piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)Method_System_Linq_Enumerable_Range__) {
        puVar11 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_02c618cc;
      }
      uVar15 = uVar15 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar15 != 0);
  }
                    /* try { // try from 02c618b0 to 02d61907 has its CatchHandler @ 02c618b0
                       catch() { ... } // from try @ 02c618b0 with catch @ 02c618b0
                       catch() { ... } // from try @ 02c619c8 with catch @ 02c618b0
                       catch() { ... } // from try @ 02c61a50 with catch @ 02c618b0
                       catch() { ... } // from try @ 02c61a94 with catch @ 02c618b0
                       catch() { ... } // from try @ 02c61ac4 with catch @ 02c618b0
                       catch() { ... } // from try @ 02c61b44 with catch @ 02c618b0 */
  puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)Method_System_Linq_Enumerable_Range__,0);
LAB_02c618cc:
  plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
  puVar7 = Method_System_Environment_UnixGetFolderPath__;
  puVar6 = Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__;
  puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar4 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  puVar3 = Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar9 = *plVar10;
    uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
          puVar11 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_02c61958;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar5,0);
LAB_02c61958:
    uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    if ((uVar15 & 1) == 0) {
      if (plVar10 == (long *)0x0) goto LAB_02c61c0c;
      lVar9 = *plVar10;
      uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar15 == 0) goto LAB_02c61be4;
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar10;
    uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)Method_System_Linq_Enumerable_Sum__) {
          puVar11 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_02c619bc;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)Method_System_Linq_Enumerable_Sum__,0);
LAB_02c619bc:
    plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
    lVar9 = FUN_022cd6f8(plVar12,*(undefined8 *)Method_System_Linq_Enumerable_Min__);
    if (lVar9 == 0) {
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar9 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44();
      }
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = **(long **)(lVar9 + 0xb8);
      uVar8 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar8,uVar8);
      }
      uVar8 = FUN_03a136cc(lVar9,uVar8,
                           *(undefined8 *)
                            Method_Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_CheckExactArgumentCount__
                           ,0);
    }
    else {
      uVar8 = *(undefined8 *)(lVar9 + 0x18);
    }
    uVar18 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Linq_Enumerable_Min__);
    FUN_040a5fcc(uVar18,uVar8,0);
    if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *(long *)(in_stack_00000038 + 0x10);
    lVar14 = *(long *)puVar7;
    *(int *)(in_stack_00000038 + 0x1c) = *(int *)(in_stack_00000038 + 0x1c) + 1;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = *(uint *)(in_stack_00000038 + 0x18);
    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(in_stack_00000038 + 0x18) = uVar2 + 1;
      puVar11 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
      *puVar11 = uVar18;
      thunk_FUN_01f51358(puVar11,uVar18);
    }
    else {
      FUN_030f2bb4(in_stack_00000038,uVar18,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    lVar9 = in_stack_00000020;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar12 = (long *)FUN_0359d458();
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar12 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    puVar13 = (undefined4 *)thunk_FUN_01f11920();
    uVar1 = *puVar13;
    lVar14 = *(long *)(lVar9 + 0x10);
    lVar16 = *(long *)puVar3;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = *(uint *)(lVar9 + 0x18);
    if (uVar2 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar14 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
    }
    else {
      FUN_030ba904(lVar9,uVar1,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar11 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_02c61c00;
    }
  }
LAB_02c61be4:
  puVar11 = (undefined8 *)
            FUN_01ecb238(plVar10,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_02c61c00:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_02c61c0c:
  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar8 = FUN_030f4630(in_stack_00000038,
                       *(undefined8 *)Method_Unity_VisualScripting_EqualityComparison_Equal__);
  *(undefined8 *)(in_stack_00000008 + 0x60) = uVar8;
  thunk_FUN_01f51358();
  if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar8 = FUN_030bc2e0(in_stack_00000020,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_get_Item__
                      );
  FUN_02c613ac(in_stack_00000008,uVar8);
  FUN_025ecba8(&stack0x00000010,
               *(undefined8 *)
                Method_Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_CheckCase__);
  FUN_025ecba8(&stack0x00000028,
               *(undefined8 *)Method_Unity_VisualScripting_EqualityComparison_NotEqual__);
  return;
}


