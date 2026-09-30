/*
FUNCTION_NAME: UnityEngine.Networking.UnityWebRequest$$set_method
ENTRY_POINT: 041986dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 163
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x04198b50) */
/* WARNING: Removing unreachable block (ram,0x04198a78) */
/* WARNING: Removing unreachable block (ram,0x04198a88) */
/* WARNING: Removing unreachable block (ram,0x04198a8c) */
/* WARNING: Removing unreachable block (ram,0x04198b48) */
/* WARNING: Removing unreachable block (ram,0x04198a90) */
/* WARNING: Removing unreachable block (ram,0x04198a40) */
/* WARNING: Removing unreachable block (ram,0x04198a50) */
/* WARNING: Removing unreachable block (ram,0x04198a54) */
/* WARNING: Removing unreachable block (ram,0x04198b44) */
/* WARNING: Removing unreachable block (ram,0x04198a58) */

void UnityEngine_Networking_UnityWebRequest__set_method(void)

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
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  thunk_FUN_01efb3a4();
  *(undefined1 *)(unaff_x20 + 0xca3) = 1;
  in_stack_00000008 = 0;
  if ((*(long *)(unaff_x19 + 0x420) != 0) &&
     (plVar7 = (long *)FUN_041a7930(*(long *)(unaff_x19 + 0x420),0),
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
      if (*(long *)(unaff_x19 + 0x400) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar12 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                         (*(long *)(unaff_x19 + 0x400),lVar10,&stack0x00000008,*(undefined8 *)puVar4
                         );
      if (((uVar12 & 1) != 0) && (*(char *)(unaff_x19 + 0x3c8) != '\0')) {
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
  if ((*(long *)(unaff_x19 + 0x420) != 0) &&
     (plVar7 = (long *)FUN_041a7930(*(long *)(unaff_x19 + 0x420),0), plVar7 != (long *)0x0)) {
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
      if (*(long *)(unaff_x19 + 0x400) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(0,uVar9);
      }
      uVar12 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset();
      if ((uVar12 & 1) != 0) {
        if (bVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    } while( true );
  }
LAB_04198b4c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


