/*
FUNCTION_NAME: FUN_0347bf44
ENTRY_POINT: 0347bf44
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_0347bf44(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  
  if ((DAT_04832a55 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    DAT_04832a55 = 1;
  }
  if (*(int *)(param_1 + 0x20) != -2) {
    iVar1 = *(int *)(param_1 + 0x20) + 1;
    *(int *)(param_1 + 0x20) = iVar1;
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar7 == 0)) goto LAB_0347c0e8;
    if (iVar1 < *(int *)(lVar7 + 0x18)) {
      uVar5 = 1;
      goto LAB_0347c0f0;
    }
    *(undefined4 *)(param_1 + 0x20) = 0xfffffffe;
  }
  puVar4 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__;
  puVar3 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  plVar10 = *(long **)(param_1 + 0x18);
  uVar5 = 0;
  if (plVar10 == (long *)0x0) {
LAB_0347c0f0:
    return uVar5 & 1;
  }
  do {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0347c03c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_0347c03c:
    uVar5 = (*(code *)*puVar6)(plVar10,puVar6[1]);
    if ((uVar5 & 1) == 0) {
      uVar5 = 0;
      goto LAB_0347c0f0;
    }
    plVar10 = *(long **)(param_1 + 0x18);
    if (plVar10 == (long *)0x0) break;
    lVar7 = *plVar10;
    lVar11 = *(long *)(param_1 + 0x10);
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0347c0a8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar4,0);
LAB_0347c0a8:
    plVar10 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
    if (lVar11 == 0) break;
    if ((plVar10 != (long *)0x0) && (*plVar10 != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar10);
    }
    uVar8 = FUN_0347ab00(lVar11,plVar10);
    if ((uVar8 & 1) == 0) goto LAB_0347c0f0;
    plVar10 = *(long **)(param_1 + 0x18);
  } while (plVar10 != (long *)0x0);
LAB_0347c0e8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


