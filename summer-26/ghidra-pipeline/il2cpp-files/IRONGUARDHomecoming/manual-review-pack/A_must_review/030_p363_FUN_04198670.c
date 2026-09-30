/*
FUNCTION_NAME: FUN_04198670
ENTRY_POINT: 04198670
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 232
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04198b50) */
/* WARNING: Type propagation algorithm not settling */

void FUN_04198670(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long local_60 [2];
  
  if ((DAT_04840ca3 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<Toggle>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_0458ddc0);
    DAT_04840ca3 = 1;
  }
  local_60[0] = 0;
  local_60[1] = 0;
  if ((*(long *)(param_1 + 0x420) != 0) &&
     (plVar7 = (long *)FUN_041a7930(*(long *)(param_1 + 0x420),0),
     puVar5 = Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__,
     plVar7 != (long *)0x0)) {
    lVar10 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_04198758;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__
                          ,0);
LAB_04198758:
    puVar6 = Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__;
    puVar4 = Method_UnityEngine_Component_GetComponentInChildren<Toggle>__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    bVar1 = false;
    do {
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = *plVar7;
      lVar10 = *(long *)puVar3;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_041987dc;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,0);
LAB_041987dc:
      uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar7 == (long *)0x0) goto LAB_041988e0;
        lVar11 = *plVar7;
        lVar10 = *(long *)puVar2;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 == 0) goto LAB_041988b8;
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_041988a0;
      }
      lVar11 = *plVar7;
      lVar10 = *(long *)puVar6;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_04198838;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,0);
LAB_04198838:
      lVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (*(long *)(param_1 + 0x400) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar12 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                         (*(long *)(param_1 + 0x400),lVar10,local_60 + 1,*(undefined8 *)puVar4);
      if (((uVar12 & 1) != 0) && (*(char *)(param_1 + 0x3c8) != '\0')) {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(char *)(lVar10 + 0x61) != '\0') {
          bVar1 = true;
        }
      }
    } while( true );
  }
  goto LAB_04198b4c;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_04198acc:
    if (*(long *)(piVar13 + -2) == lVar10) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_04198b00;
    }
  }
LAB_04198ae4:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,0);
LAB_04198b00:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_041988a0:
    if (*(long *)(piVar13 + -2) == lVar10) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_041988d4;
    }
  }
LAB_041988b8:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,0);
LAB_041988d4:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_041988e0:
  if ((*(long *)(param_1 + 0x420) != 0) &&
     (plVar7 = (long *)FUN_041a7930(*(long *)(param_1 + 0x420),0), plVar7 != (long *)0x0)) {
    lVar10 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_04198948;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar5,0);
LAB_04198948:
    plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    puVar5 = PTR_DAT_0458ddc0;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar11 = *plVar7;
      lVar10 = *(long *)puVar3;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_041989b0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,0);
LAB_041989b0:
      uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar7 == (long *)0x0) {
          return;
        }
        lVar11 = *plVar7;
        lVar10 = *(long *)puVar2;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 == 0) goto LAB_04198ae4;
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_04198acc;
      }
      lVar11 = *plVar7;
      lVar10 = *(long *)puVar6;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto UnityEngine_Networking_UnityWebRequest__set_uploadHandler;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,0);
UnityEngine_Networking_UnityWebRequest__set_uploadHandler:
      uVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (*(long *)(param_1 + 0x400) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(0,uVar9);
      }
      uVar12 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                         (*(long *)(param_1 + 0x400),uVar9,local_60,*(undefined8 *)puVar4);
      if ((uVar12 & 1) != 0) {
        if (bVar1) {
          if (local_60[0] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar10 = *(long *)(local_60[0] + 0x10);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_0422aa74(lVar10,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8),0);
        }
        else {
          if (local_60[0] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar10 = *(long *)(local_60[0] + 0x10);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_0422a94c(lVar10,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8),0);
        }
      }
    } while( true );
  }
LAB_04198b4c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


