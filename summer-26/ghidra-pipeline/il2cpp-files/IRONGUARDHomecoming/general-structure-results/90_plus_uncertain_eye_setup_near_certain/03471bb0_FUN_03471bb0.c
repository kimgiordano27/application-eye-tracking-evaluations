/*
FUNCTION_NAME: FUN_03471bb0
ENTRY_POINT: 03471bb0
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


long FUN_03471bb0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  
  puVar1 = Method_System_Reflection_SignatureType_GetEnumNames__;
  if ((DAT_048329f7 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_GetEnumNames__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    DAT_048329f7 = 1;
  }
  lVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_035ac8e8(lVar5,0);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    thunk_FUN_01f51358();
    plVar6 = *(long **)(param_1 + 0x10);
    if ((plVar6 == (long *)0x0) ||
       (iVar4 = (**(code **)(*plVar6 + 0x3c8))(plVar6,*(undefined8 *)(*plVar6 + 0x3d0)), iVar4 < 1))
    {
      return lVar5;
    }
    plVar6 = *(long **)(param_1 + 0x10);
    if ((plVar6 != (long *)0x0) &&
       (plVar6 = (long *)(**(code **)(*plVar6 + 0x328))(plVar6,*(undefined8 *)(*plVar6 + 0x330)),
       puVar3 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__,
       puVar2 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__,
       puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__,
       plVar6 != (long *)0x0)) {
      do {
        lVar11 = *plVar6;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03471cdc;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_03471cdc:
        uVar13 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar13 & 1) == 0) {
          return lVar5;
        }
        plVar8 = (long *)FUN_03471b04(lVar5);
        lVar12 = *plVar6;
        lVar11 = *(long *)puVar3;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03471d44;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar11,0);
LAB_03471d44:
        plVar9 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        lVar12 = *plVar6;
        lVar11 = *(long *)puVar3;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_03471da4;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar11,1);
LAB_03471da4:
        uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if (plVar8 == (long *)0x0) break;
        if ((plVar9 != (long *)0x0) && (*plVar9 != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar9,*(long *)puVar2,uVar10);
        }
        (**(code **)(*plVar8 + 0x318))(plVar8,plVar9,uVar10,*(undefined8 *)(*plVar8 + 800));
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


