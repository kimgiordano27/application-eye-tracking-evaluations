/*
FUNCTION_NAME: FUN_04199f4c
ENTRY_POINT: 04199f4c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0419a5d8) */

void FUN_04199f4c(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  int *piVar15;
  undefined1 auVar16 [16];
  long local_70;
  long local_68;
  
  if ((DAT_04840c97 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<Toggle>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponentInChildren<WindmillBladesController>__
                      );
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Any<FieldInfo>__);
    DAT_04840c97 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  if ((*(long *)(param_1 + 0x420) != 0) &&
     (plVar6 = (long *)FUN_041a7930(*(long *)(param_1 + 0x420),0), plVar6 != (long *)0x0)) {
    lVar11 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0419a044;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__
                          ,0);
LAB_0419a044:
    puVar4 = Method_UnityEngine_Component_GetComponentInChildren<WindmillBladesController>__;
    plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    puVar3 = Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    bVar1 = false;
    lVar11 = 0;
    do {
      lVar12 = *plVar6;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0419a0c8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_0419a0c8:
      uVar14 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar14 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_0419a3c0;
        lVar12 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 == 0) goto LAB_0419a398;
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_0419a380;
      }
      lVar11 = *plVar6;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0419a124;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_0419a124:
      lVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      local_68 = 0;
      bVar1 = (bool)(bVar1 | *(char *)(lVar11 + 0x60) != '\0');
      if (*(long *)(param_1 + 0x400) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar14 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                         (*(long *)(param_1 + 0x400),lVar11,&local_68,
                          *(undefined8 *)
                           Method_UnityEngine_Component_GetComponentInChildren<Toggle>__);
      if ((uVar14 & 1) != 0) {
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(local_68 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar8 = (long *)FUN_04220be0(*(long *)(local_68 + 0x10),0);
        auVar16 = FUN_042381bc(*(undefined8 *)(lVar11 + 0x4c),0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar12 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar12 + (long)(*piVar15 + 0x20) * 0x10 + 0x138);
              goto FUN_0419a1f4;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0x20);
FUN_0419a1f4:
        (*(code *)*puVar7)(plVar8,auVar16._0_8_,auVar16._8_8_ & 0xffffffff,puVar7[1]);
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(local_68 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar8 = (long *)FUN_04220be0(*(long *)(local_68 + 0x10),0);
        auVar16 = FUN_042381bc(*(undefined8 *)(lVar11 + 0x54),0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar12 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar12 + (long)(*piVar15 + 0x1f) * 0x10 + 0x138);
              goto LAB_0419a28c;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0x1f);
LAB_0419a28c:
        (*(code *)*puVar7)(plVar8,auVar16._0_8_,auVar16._8_8_ & 0xffffffff,puVar7[1]);
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(local_68 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar8 = (long *)FUN_04220be0(*(long *)(local_68 + 0x18),0);
        if (*(long *)(param_1 + 0x420) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(char *)(*(long *)(param_1 + 0x420) + 0x31) == '\0') {
          bVar5 = 1;
        }
        else {
          bVar5 = *(byte *)(lVar11 + 99) ^ 1;
        }
        uVar9 = FUN_02766f28(bVar5,*(undefined8 *)Method_System_Linq_Enumerable_Any<FieldInfo>__);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar12 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar12 + (long)(*piVar15 + 0x12) * 0x10 + 0x138);
              goto LAB_0419a344;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0x12);
LAB_0419a344:
        (*(code *)*puVar7)(plVar8,uVar9,puVar7[1]);
      }
    } while( true );
  }
LAB_0419a5d0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
code_r0x0419a538:
  uVar14 = uVar14 - 1;
  piVar15 = piVar15 + 4;
  if (uVar14 == 0) goto LAB_0419a544;
  goto LAB_0419a52c;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0419a380:
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0419a3b4;
    }
  }
LAB_0419a398:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0419a3b4:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_0419a3c0:
  if (*(long *)(param_1 + 0x410) == 0) goto LAB_0419a5d0;
  plVar6 = (long *)FUN_04220be0(*(long *)(param_1 + 0x410),0);
  if (bVar1) {
    uVar9 = FUN_042379d8(0x3f800000,0);
    if (plVar6 == (long *)0x0) goto LAB_0419a5d0;
    lVar12 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar12 + (long)(*piVar15 + 0x15) * 0x10 + 0x138);
          goto LAB_0419a494;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar4,0x15);
LAB_0419a494:
    (*(code *)*puVar7)(plVar6,uVar9,puVar7[1]);
    if (*(long *)(param_1 + 0x420) == 0) goto LAB_0419a5d0;
    if (*(int *)(*(long *)(param_1 + 0x420) + 0x2c) != 1) goto LAB_0419a56c;
    if (*(long *)(param_1 + 0x400) == 0) goto LAB_0419a5d0;
    uVar14 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                       (*(long *)(param_1 + 0x400),lVar11,&local_70,
                        *(undefined8 *)Method_UnityEngine_Component_GetComponentInChildren<Toggle>__
                       );
    if ((uVar14 & 1) == 0) goto LAB_0419a56c;
    if ((local_70 == 0) || (*(long *)(local_70 + 0x18) == 0)) goto LAB_0419a5d0;
    plVar6 = (long *)FUN_04220be0(*(long *)(local_70 + 0x18),0);
    uVar9 = FUN_02766f28(1,*(undefined8 *)Method_System_Linq_Enumerable_Any<FieldInfo>__);
    if (plVar6 == (long *)0x0) goto LAB_0419a5d0;
    lVar12 = *plVar6;
    lVar11 = *(long *)puVar4;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
LAB_0419a52c:
      if (*(long *)(piVar15 + -2) != lVar11) goto code_r0x0419a538;
      iVar13 = *piVar15 + 0x12;
LAB_0419a554:
      puVar7 = (undefined8 *)(lVar12 + (long)iVar13 * 0x10 + 0x138);
      goto LAB_0419a55c;
    }
LAB_0419a544:
    uVar10 = 0x12;
  }
  else {
    uVar9 = FUN_042379d8(0,0);
    if (plVar6 == (long *)0x0) goto LAB_0419a5d0;
    lVar12 = *plVar6;
    lVar11 = *(long *)puVar4;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar11) {
          iVar13 = *piVar15 + 0x15;
          goto LAB_0419a554;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    uVar10 = 0x15;
  }
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar11,uVar10);
LAB_0419a55c:
  (*(code *)*puVar7)(plVar6,uVar9,puVar7[1]);
LAB_0419a56c:
  FUN_04198670(param_1);
  return;
}


