/*
FUNCTION_NAME: FUN_041969b8
ENTRY_POINT: 041969b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04196c4c) */
/* WARNING: Removing unreachable block (ram,0x04196c6c) */
/* WARNING: Removing unreachable block (ram,0x04196c90) */

void FUN_041969b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((DAT_04840c80 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04840c80 = 1;
  }
  puVar10 = (undefined8 *)(param_1 + 0x68);
  *puVar10 = 0;
  thunk_FUN_01f51358(puVar10,0);
  *(undefined1 *)(param_1 + 0x70) = 0;
  if (((*(long *)(param_1 + 0x78) == 0) ||
      (lVar4 = *(long *)(*(long *)(param_1 + 0x78) + 0x20), lVar4 == 0)) ||
     (plVar5 = (long *)FUN_041a7930(lVar4,0), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar5;
  uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__) {
        puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_04196aa0;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__
                        ,0);
LAB_04196aa0:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
  puVar3 = Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  fVar13 = 0.0;
  do {
    fVar12 = fVar13;
    lVar4 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04196b20;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_04196b20:
    uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar8 & 1) == 0) goto LAB_04196be0;
    lVar4 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04196b7c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_04196b7c:
    uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    *puVar10 = uVar7;
    thunk_FUN_01f51358(puVar10);
    if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    fVar11 = (float)FUN_041a9d80(*(long *)(param_1 + 0x78),*puVar10,0);
    fVar13 = fVar12 + fVar11;
  } while (fVar13 <= *(float *)(param_1 + 0x34));
  *(bool *)(param_1 + 0x70) = *(float *)(param_1 + 0x34) < fVar12 + fVar11 * 0.5;
LAB_04196be0:
  if (plVar5 != (long *)0x0) {
    lVar4 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar10 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04196c34;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_04196c34:
    (*(code *)*puVar10)(plVar5,puVar10[1]);
  }
  FUN_04196d54(param_1);
  return;
}


