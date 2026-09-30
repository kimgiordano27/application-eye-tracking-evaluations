/*
FUNCTION_NAME: Shapes.PolylinePath$$AddPoints
ENTRY_POINT: 037ba508
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x037ba694) */
/* WARNING: Removing unreachable block (ram,0x037ba80c) */
/* WARNING: Removing unreachable block (ram,0x037ba804) */

void Shapes_PolylinePath__AddPoints(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  int *in_x10;
  int *piVar10;
  long unaff_x19;
  long unaff_x21;
  int iVar11;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  do {
    in_x9 = in_x9 + -1;
    piVar10 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar5 = (undefined8 *)FUN_01ecb238();
      goto LAB_037ba530;
    }
    plVar6 = (long *)(in_x10 + 2);
    in_x10 = piVar10;
  } while (*plVar6 != param_3);
  puVar5 = (undefined8 *)(param_1 + (long)*piVar10 * 0x10 + 0x138);
LAB_037ba530:
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar3 = StringLiteral_754;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar11 = 0;
  do {
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_037ba5ac;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_037ba5ac:
    uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar9 & 1) == 0) break;
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_037ba608;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_037ba608:
    uVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    *(undefined8 *)(unaff_x21 + (long)iVar11 * 8) = uVar7;
    iVar11 = iVar11 + 1;
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_037ba67c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_037ba67c:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
  }
  uVar4 = in_stack_00000048;
  uVar7 = in_stack_00000040;
  if (*(int *)(*(long *)
                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>_GetEnumerator__ + 0xe0
              ) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar7 = FUN_0378f310(uVar7,uVar4);
  uVar9 = FUN_0377d3c4(uVar7,0);
  if ((uVar9 & 1) == 0) {
    if (unaff_x19 != 0) {
      (**(code **)(unaff_x19 + 0x18))(*(undefined8 *)(unaff_x19 + 0x40));
    }
  }
  else {
    lVar8 = *unaff_x28;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar8 = *unaff_x28;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
    in_stack_00000018 = FUN_037b97d8();
    thunk_FUN_01f51358(&stack0x00000018);
    in_stack_00000020 = unaff_x19;
    thunk_FUN_01f51358(&stack0x00000020);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_02be1814(lVar8,in_stack_00000028,in_stack_00000018,in_stack_00000020,
                 *(undefined8 *)StringLiteral_742);
  }
  FUN_032ea138(&stack0x00000030,*unaff_x27);
  FUN_032ea138(&stack0x00000040,*unaff_x27);
  return;
}


