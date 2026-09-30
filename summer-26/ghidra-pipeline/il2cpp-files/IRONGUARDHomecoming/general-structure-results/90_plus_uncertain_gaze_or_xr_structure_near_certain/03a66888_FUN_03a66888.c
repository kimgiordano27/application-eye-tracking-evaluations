/*
FUNCTION_NAME: FUN_03a66888
ENTRY_POINT: 03a66888
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 192
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a66b6c) */

int FUN_03a66888(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  long *plVar14;
  
  puVar4 = StringLiteral_7742;
  if ((DAT_04838d7a & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_7742);
    thunk_FUN_01efb3a4(Method_Drawing_DrawingManager_PostRender__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04838d7a = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (DAT_04838e0b == '\0') {
    thunk_FUN_01efb3a4(StringLiteral_7742);
    DAT_04838e0b = '\x01';
  }
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar4;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar9 = *(long **)(param_1 + 0x18);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar14 = *(long **)(*(long *)(lVar6 + 0xb8) + 0x18);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
  puVar3 = Method_Drawing_DrawingManager_PostRender__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar13 = 0;
LAB_03a6697c:
  lVar10 = *plVar9;
  lVar6 = *(long *)puVar2;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar6) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_03a669c8;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ecb238(plVar9,lVar6,0);
LAB_03a669c8:
  uVar11 = (*(code *)*puVar7)(plVar9,puVar7[1]);
  if ((uVar11 & 1) != 0) {
    lVar10 = *plVar9;
    lVar6 = *(long *)puVar2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar6) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_03a66a28;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar9,lVar6,1);
LAB_03a66a28:
    plVar8 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
    if ((plVar8 != (long *)0x0) && (*plVar8 != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar8);
    }
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar14;
    uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03a66a9c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar3,0);
LAB_03a66a9c:
    iVar5 = (*(code *)*puVar7)(plVar14,param_2,plVar8,puVar7[1]);
    if (iVar5 == 0) goto LAB_03a66acc;
    iVar13 = iVar13 + 1;
    goto LAB_03a6697c;
  }
  iVar13 = -1;
LAB_03a66acc:
  plVar9 = (long *)thunk_FUN_01f116d0(plVar9,*(undefined8 *)puVar1);
  if (plVar9 != (long *)0x0) {
    lVar10 = *plVar9;
    lVar6 = *(long *)puVar1;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar6) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03a66b2c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar9,lVar6,0);
LAB_03a66b2c:
    (*(code *)*puVar7)(plVar9,puVar7[1]);
  }
  return iVar13;
}


