/*
FUNCTION_NAME: FUN_037ba35c
ENTRY_POINT: 037ba35c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 207
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_12;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x037ba694) */
/* WARNING: Removing unreachable block (ram,0x037ba80c) */
/* WARNING: Removing unreachable block (ram,0x037ba804) */

void FUN_037ba35c(long param_1,long *param_2,long param_3)

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
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  int iVar17;
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  
  if ((DAT_048375ca & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_742);
    thunk_FUN_01efb3a4(StringLiteral_752);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_753);
    thunk_FUN_01efb3a4(StringLiteral_754);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Linq_Expressions_ExpressionVisitor_ValidateChildType__);
    thunk_FUN_01efb3a4(StringLiteral_736);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>_GetEnumerator__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Bounds,_Bounds,_bool>__ctor__
                      );
    DAT_048375ca = 1;
  }
  puVar3 = Method_Unity_VisualScripting_StaticFunctionInvoker<Bounds,_Bounds,_bool>__ctor__;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar12 = thunk_FUN_01f117cc();
    uVar10 = thunk_FUN_01efb3a4(
                               Method_UnityEngine_Component_GetComponentInParent<ImmediateModeCanvas>__
                               );
    FUN_034efd20(uVar12,uVar10,0);
    uVar10 = thunk_FUN_01efb3a4(StringLiteral_755);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar12,uVar10);
  }
  if (*(int *)(*(long *)
                Method_Unity_VisualScripting_StaticFunctionInvoker<Bounds,_Bounds,_bool>__ctor__ +
              0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar4 = Method_System_Linq_Expressions_ExpressionVisitor_ValidateChildType__;
  local_70 = FUN_037b90cc(param_1);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar13 = *param_2;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_752) {
        puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_037ba4a4;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238(param_2,*(long *)StringLiteral_752,0);
LAB_037ba4a4:
  uVar7 = (*(code *)*puVar8)(param_2,puVar8[1]);
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_032e9e78(&local_a8,uVar7,2,1,*(undefined8 *)StringLiteral_736);
  uVar12 = uStack_a0;
  lVar13 = local_a8;
  local_80 = local_a8;
  uStack_78 = uStack_a0;
  lVar14 = *param_2;
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)StringLiteral_753) {
        puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_037ba530;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238(param_2,*(long *)StringLiteral_753,0);
LAB_037ba530:
  plVar9 = (long *)(*(code *)*puVar8)(param_2,puVar8[1]);
  puVar5 = StringLiteral_754;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar17 = 0;
  do {
    lVar14 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_037ba5ac;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_037ba5ac:
    uVar15 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    if ((uVar15 & 1) == 0) break;
    lVar14 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
          puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_037ba608;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar5,0);
LAB_037ba608:
    uVar10 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    *(undefined8 *)(lVar13 + (long)iVar17 * 8) = uVar10;
    iVar17 = iVar17 + 1;
  } while( true );
  if (plVar9 != (long *)0x0) {
    lVar14 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_037ba67c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_037ba67c:
    (*(code *)*puVar8)(plVar9,puVar8[1]);
  }
  uVar6 = local_70._8_8_;
  uVar10 = local_70._0_8_;
  if (*(int *)(*(long *)
                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>_GetEnumerator__ + 0xe0
              ) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar15 = FUN_0378f310(uVar10,uVar6,lVar13,uVar12,&local_88,0);
  uVar11 = FUN_0377d3c4(uVar15,0);
  if ((uVar11 & 1) == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x18))
                (*(undefined8 *)(param_3 + 0x40),param_1,uVar15 & 0xffffffff,
                 *(undefined8 *)(param_3 + 0x28));
    }
  }
  else {
    lVar13 = *(long *)puVar3;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar13 = *(long *)puVar3;
    }
    uVar12 = local_88;
    lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x28);
    local_98 = 0;
    local_90 = 0;
    local_98 = FUN_037b97d8(param_1);
    thunk_FUN_01f51358(&local_98);
    local_90 = param_3;
    thunk_FUN_01f51358(&local_90,param_3);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_02be1814(lVar13,uVar12,local_98,local_90,*(undefined8 *)StringLiteral_742);
  }
  FUN_032ea138(&local_80,*(undefined8 *)puVar4);
  FUN_032ea138(local_70,*(undefined8 *)puVar4);
  return;
}


