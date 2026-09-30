/*
FUNCTION_NAME: FUN_03a670b8
ENTRY_POINT: 03a670b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 192
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a67468) */
/* WARNING: Removing unreachable block (ram,0x03a673e0) */

undefined4 FUN_03a670b8(long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  long *plVar14;
  
  if ((DAT_04838d79 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_7742);
    thunk_FUN_01efb3a4(Method_Drawing_DrawingManager_PostRender__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04838d79 = 1;
  }
  puVar1 = StringLiteral_7742;
  if ((param_3 & 1) != 0) {
    if (*(int *)(*(long *)StringLiteral_7742 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (DAT_04838e0b == '\0') {
      thunk_FUN_01efb3a4(StringLiteral_7742);
      DAT_04838e0b = '\x01';
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    plVar8 = *(long **)(param_1 + 0x18);
    if (plVar8 != (long *)0x0) {
      plVar14 = *(long **)(*(long *)(lVar5 + 0xb8) + 0x18);
      plVar8 = (long *)(**(code **)(*plVar8 + 0x388))(plVar8,*(undefined8 *)(*plVar8 + 0x390));
      puVar3 = Method_Drawing_DrawingManager_PostRender__;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar12 = 0;
      do {
        lVar9 = *plVar8;
        lVar5 = *(long *)puVar2;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar5) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03a671f8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar8,lVar5,0);
LAB_03a671f8:
        uVar10 = (*(code *)*puVar6)(plVar8,puVar6[1]);
        if ((uVar10 & 1) == 0) {
          uVar13 = 1;
          goto LAB_03a6735c;
        }
        lVar9 = *plVar8;
        lVar5 = *(long *)puVar2;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar5) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_03a67258;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar8,lVar5,1);
LAB_03a67258:
        plVar7 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
        if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)puVar1)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar7);
        }
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = *plVar14;
        uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03a672cc;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar3,0);
LAB_03a672cc:
        iVar4 = (*(code *)*puVar6)(plVar14,param_2,plVar7,puVar6[1]);
        if (iVar4 == 0) goto LAB_03a6731c;
        iVar12 = iVar12 + 1;
      } while( true );
    }
    goto LAB_03a67460;
  }
  plVar8 = *(long **)(param_1 + 0x18);
  if (plVar8 == (long *)0x0) goto LAB_03a67460;
  (**(code **)(*plVar8 + 0x308))(plVar8,param_2,*(undefined8 *)(*plVar8 + 0x310));
  uVar13 = 1;
  goto LAB_03a67420;
LAB_03a6731c:
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((int)plVar7[4] <= *(int *)(param_2 + 0x20)) {
    plVar14 = *(long **)(param_1 + 0x18);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar14 + 0x2f8))(plVar14,iVar12,param_2,*(undefined8 *)(*plVar14 + 0x300));
  }
  uVar13 = 0;
LAB_03a6735c:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*(undefined8 *)
                                              Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                     );
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03a673c8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_03a673c8:
    (*(code *)*puVar6)(plVar8,puVar6[1]);
  }
  plVar8 = *(long **)(param_1 + 0x18);
  if (plVar8 == (long *)0x0) goto LAB_03a67460;
  iVar4 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
  if (iVar12 == iVar4) {
    plVar8 = *(long **)(param_1 + 0x18);
    if (plVar8 == (long *)0x0) goto LAB_03a67460;
    (**(code **)(*plVar8 + 0x308))(plVar8,param_2,*(undefined8 *)(*plVar8 + 0x310));
  }
LAB_03a67420:
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x88) != 1) {
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
    return uVar13;
  }
LAB_03a67460:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


