/*
FUNCTION_NAME: FUN_034612d0
ENTRY_POINT: 034612d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_034612d0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  
  if ((DAT_048329fb & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    DAT_048329fb = 1;
  }
  if ((((param_2 == 0) || (param_1 == param_2)) ||
      (plVar5 = *(long **)(param_2 + 0x10), plVar5 == (long *)0x0)) ||
     (iVar4 = (**(code **)(*plVar5 + 0x3c8))(plVar5,*(undefined8 *)(*plVar5 + 0x3d0)), iVar4 < 1)) {
    return;
  }
  plVar5 = (long *)FUN_034721bc(param_2);
  if ((plVar5 != (long *)0x0) &&
     (plVar5 = (long *)(**(code **)(*plVar5 + 0x328))(plVar5,*(undefined8 *)(*plVar5 + 0x330)),
     puVar3 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__,
     puVar2 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__,
     puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__,
     plVar5 != (long *)0x0)) {
    do {
      lVar10 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_034613d4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_034613d4:
      uVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar12 & 1) == 0) {
        return;
      }
      plVar7 = (long *)FUN_034721bc(param_1);
      lVar11 = *plVar5;
      lVar10 = *(long *)puVar3;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0346143c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar10,0);
LAB_0346143c:
      plVar8 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      lVar11 = *plVar5;
      lVar10 = *(long *)puVar3;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_0346149c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar10,1);
LAB_0346149c:
      uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if (plVar7 == (long *)0x0) break;
      if ((plVar8 != (long *)0x0) && (*plVar8 != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar8,*(long *)puVar2,uVar9);
      }
      (**(code **)(*plVar7 + 0x318))(plVar7,plVar8,uVar9,*(undefined8 *)(*plVar7 + 800));
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


