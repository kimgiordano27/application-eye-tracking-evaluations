/*
FUNCTION_NAME: Shapes.PolylinePath$$AddPoints
ENTRY_POINT: 037ba3d8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 165
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x037ba694) */
/* WARNING: Removing unreachable block (ram,0x037ba80c) */
/* WARNING: Removing unreachable block (ram,0x037ba804) */

void Shapes_PolylinePath__AddPoints(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  int iVar16;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  thunk_FUN_01efb3a4(Method_System_Linq_Expressions_ExpressionVisitor_ValidateChildType__);
  thunk_FUN_01efb3a4(StringLiteral_736);
  thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>_GetEnumerator__);
  thunk_FUN_01efb3a4(
                    Method_Unity_VisualScripting_StaticFunctionInvoker<Bounds,_Bounds,_bool>__ctor__
                    );
  *(undefined1 *)(unaff_x21 + 0x5ca) = 1;
  puVar3 = Method_Unity_VisualScripting_StaticFunctionInvoker<Bounds,_Bounds,_bool>__ctor__;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  if (unaff_x20 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar11 = thunk_FUN_01f117cc();
    uVar10 = thunk_FUN_01efb3a4(
                               Method_UnityEngine_Component_GetComponentInParent<ImmediateModeCanvas>__
                               );
    FUN_034efd20(uVar11,uVar10,0);
    uVar10 = thunk_FUN_01efb3a4(StringLiteral_755);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar11,uVar10);
  }
  if (*(int *)(*(long *)
                Method_Unity_VisualScripting_StaticFunctionInvoker<Bounds,_Bounds,_bool>__ctor__ +
              0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar4 = Method_System_Linq_Expressions_ExpressionVisitor_ValidateChildType__;
  _in_stack_00000040 = FUN_037b90cc();
  if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar12 = *unaff_x23;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_752) {
        puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_037ba4a4;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238();
LAB_037ba4a4:
  uVar7 = (*(code *)*puVar8)();
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  FUN_032e9e78(&stack0x00000008,uVar7,2,1,*(undefined8 *)StringLiteral_736);
  uVar11 = in_stack_00000010;
  lVar12 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000008;
  in_stack_00000038 = in_stack_00000010;
  lVar13 = *unaff_x23;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_753) {
        puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_037ba530;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238();
LAB_037ba530:
  plVar9 = (long *)(*(code *)*puVar8)();
  puVar5 = StringLiteral_754;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar16 = 0;
  do {
    lVar13 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_037ba5ac;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_037ba5ac:
    uVar14 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    if ((uVar14 & 1) == 0) break;
    lVar13 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_037ba608;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar5,0);
LAB_037ba608:
    uVar10 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    *(undefined8 *)(lVar12 + (long)iVar16 * 8) = uVar10;
    iVar16 = iVar16 + 1;
  } while( true );
  if (plVar9 != (long *)0x0) {
    lVar13 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_037ba67c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_037ba67c:
    (*(code *)*puVar8)(plVar9,puVar8[1]);
  }
  uVar6 = in_stack_00000048;
  uVar10 = in_stack_00000040;
  if (*(int *)(*(long *)
                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>_GetEnumerator__ + 0xe0
              ) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar11 = FUN_0378f310(uVar10,uVar6,lVar12,uVar11,&stack0x00000028,0);
  uVar14 = FUN_0377d3c4(uVar11,0);
  if ((uVar14 & 1) == 0) {
    if (unaff_x19 != 0) {
      (**(code **)(unaff_x19 + 0x18))(*(undefined8 *)(unaff_x19 + 0x40));
    }
  }
  else {
    lVar12 = *(long *)puVar3;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar12 = *(long *)puVar3;
    }
    uVar11 = in_stack_00000028;
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x28);
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
    in_stack_00000018 = FUN_037b97d8();
    thunk_FUN_01f51358(&stack0x00000018);
    in_stack_00000020 = unaff_x19;
    thunk_FUN_01f51358(&stack0x00000020);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_02be1814(lVar12,uVar11,in_stack_00000018,in_stack_00000020,*(undefined8 *)StringLiteral_742)
    ;
  }
  FUN_032ea138(&stack0x00000030,*(undefined8 *)puVar4);
  FUN_032ea138(&stack0x00000040,*(undefined8 *)puVar4);
  return;
}


