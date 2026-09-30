/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<KeyValuePair<Hash128,-int>>
ENTRY_POINT: 023a6434
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_21;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x023a6c48) */
/* WARNING: Removing unreachable block (ram,0x023a6eb8) */
/* WARNING: Removing unreachable block (ram,0x023a7088) */
/* WARNING: Removing unreachable block (ram,0x023a7200) */
/* WARNING: Removing unreachable block (ram,0x023a7250) */
/* WARNING: Removing unreachable block (ram,0x023a7248) */
/* WARNING: Removing unreachable block (ram,0x023a7180) */
/* WARNING: Removing unreachable block (ram,0x023a71f4) */

void System_Array__InternalArray__ICollection_Contains<KeyValuePair<Hash128,_int>>
               (undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  void *unaff_x19;
  long *unaff_x20;
  int iVar12;
  int iVar13;
  void *unaff_x25;
  void *__dest;
  void *unaff_x27;
  size_t unaff_x28;
  long unaff_x29;
  undefined8 uVar14;
  
  if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
    param_2 = FUN_01ecaf44(param_2);
  }
  __dest = *(void **)(unaff_x29 + -0xf8);
  plVar5 = (long *)thunk_FUN_01f116d0(*(undefined8 *)(unaff_x29 + -0x130),param_2);
  if (plVar5 == (long *)0x0) {
    lVar8 = *(long *)(*unaff_x20 + 0x30);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    plVar5 = (long *)thunk_FUN_01f116d0(*(undefined8 *)(unaff_x29 + -0x130),lVar8);
    if (plVar5 == (long *)0x0) {
      (*(code *)**(undefined8 **)(*unaff_x20 + 0x50))(unaff_x29 + -0xa0,4,2,0);
      lVar8 = *(long *)*unaff_x20;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
      }
      lVar9 = **(long **)(unaff_x29 + -0x130);
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            uVar7 = *(undefined8 *)(unaff_x29 + -0x130);
            goto LAB_023a6ed8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      uVar7 = *(undefined8 *)(unaff_x29 + -0x130);
      puVar6 = (undefined8 *)FUN_01ecb238(uVar7,lVar8,0);
LAB_023a6ed8:
      plVar5 = (long *)(*(code *)*puVar6)(uVar7,puVar6[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar12 = 4;
      iVar13 = 0;
      do {
        lVar8 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__)
            {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_023a6f50;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01ecb238(plVar5,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                              ,0);
LAB_023a6f50:
        uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar10 & 1) == 0) goto LAB_023a7110;
        lVar8 = *(long *)(*unaff_x20 + 0xf8);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01ecaf44(lVar8);
        }
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              lVar8 = lVar9 + (long)*piVar11 * 0x10 + 0x138;
              goto LAB_023a6fc4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        lVar8 = FUN_01ecb238(plVar5,lVar8,0);
LAB_023a6fc4:
        *(void **)(unaff_x29 + -0x28) = unaff_x19;
        lVar8 = *(long *)(lVar8 + 8);
        (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar5,unaff_x29 + -0x28);
        memcpy(*(void **)(unaff_x29 + -0xf0),unaff_x19,unaff_x28);
        if (iVar13 == iVar12) {
          *(undefined8 *)(unaff_x29 + -0x28) = 0;
          *(undefined8 *)(unaff_x29 + -0x20) = 0;
          iVar12 = iVar13 << 1;
          *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x98);
          *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0xa0);
          FUN_032f341c(unaff_x29 + -0x28,iVar12,2,0,*(undefined8 *)(*unaff_x20 + 0x50));
          uVar7 = *(undefined8 *)(unaff_x29 + -0x28);
          uVar1 = *(undefined8 *)(unaff_x29 + -0x20);
          uVar14 = *(undefined8 *)(unaff_x29 + -0xa0);
          uVar2 = *(undefined8 *)(unaff_x29 + -0x98);
          uVar4 = (*(code *)**(undefined8 **)(*unaff_x20 + 0x78))(unaff_x29 + -0xa0);
          (*(code *)**(undefined8 **)(*unaff_x20 + 0x110))(uVar14,uVar2,uVar7,uVar1,uVar4);
          FUN_032f3c24(unaff_x29 + -0xb0,*(undefined8 *)(*unaff_x20 + 0x118));
          *(undefined8 *)(unaff_x29 + -0xa0) = uVar7;
          *(undefined8 *)(unaff_x29 + -0x98) = uVar1;
        }
        memcpy(unaff_x19,*(void **)(unaff_x29 + -0xf0),*(size_t *)(unaff_x29 + -0xd8));
        puVar6 = *(undefined8 **)(*unaff_x20 + 0x70);
        uVar7 = *puVar6;
        *(int *)(unaff_x29 + -0x14) = iVar13;
        *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
        *(void **)(unaff_x29 + -0x20) = unaff_x19;
        (*(code *)puVar6[2])(uVar7,puVar6,unaff_x29 + -0xa0,unaff_x29 + -0x28);
        unaff_x28 = *(size_t *)(unaff_x29 + -0xd8);
        iVar13 = iVar13 + 1;
      } while( true );
    }
    lVar8 = *(long *)(*unaff_x20 + 0x30);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_023a6c60;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,0);
LAB_023a6c60:
    uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    (*(code *)**(undefined8 **)(*unaff_x20 + 0x50))
              (unaff_x29 + -0x90,uVar4,*(undefined4 *)(unaff_x29 + -0xe4),0);
    lVar8 = *(long *)*unaff_x20;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_023a6cf0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,0);
LAB_023a6cf0:
    plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar12 = 0;
    do {
      lVar8 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_023a6d60;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_023a6d60:
      uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar10 & 1) == 0) goto LAB_023a6e40;
      lVar8 = *(long *)(*unaff_x20 + 0xf8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
      }
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            lVar8 = lVar9 + (long)*piVar11 * 0x10 + 0x138;
            goto LAB_023a6dd4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      lVar8 = FUN_01ecb238(plVar5,lVar8,0);
LAB_023a6dd4:
      *(void **)(unaff_x29 + -0x28) = unaff_x19;
      lVar8 = *(long *)(lVar8 + 8);
      (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar5,unaff_x29 + -0x28);
      memcpy(__dest,unaff_x19,unaff_x28);
      memcpy(unaff_x27,__dest,unaff_x28);
      puVar6 = *(undefined8 **)(*unaff_x20 + 0x70);
      uVar7 = *puVar6;
      *(int *)(unaff_x29 + -0x14) = iVar12;
      *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
      *(void **)(unaff_x29 + -0x20) = unaff_x27;
      (*(code *)puVar6[2])(uVar7,puVar6,unaff_x29 + -0x90,unaff_x29 + -0x28);
      iVar12 = iVar12 + 1;
    } while( true );
  }
  lVar8 = *(long *)(*unaff_x20 + 0x28);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
  }
  lVar9 = *plVar5;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar8) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_023a6968;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,0);
LAB_023a6968:
  uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
  (*(code *)**(undefined8 **)(*unaff_x20 + 0x50))
            (unaff_x29 + -0x80,uVar4,*(undefined4 *)(unaff_x29 + -0xe4),0);
  lVar8 = *(long *)*unaff_x20;
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
  }
  lVar9 = *plVar5;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar8) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_023a69f8;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,0);
LAB_023a69f8:
  plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar12 = 0;
  do {
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_023a6a68;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_023a6a68:
    uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar10 & 1) == 0) goto LAB_023a6b48;
    lVar8 = *(long *)(*unaff_x20 + 0xf8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          lVar8 = lVar9 + (long)*piVar11 * 0x10 + 0x138;
          goto LAB_023a6adc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    lVar8 = FUN_01ecb238(plVar5,lVar8,0);
LAB_023a6adc:
    *(void **)(unaff_x29 + -0x28) = unaff_x19;
    lVar8 = *(long *)(lVar8 + 8);
    (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar5,unaff_x29 + -0x28);
    memcpy(unaff_x25,unaff_x19,unaff_x28);
    memcpy(unaff_x27,unaff_x25,unaff_x28);
    puVar6 = *(undefined8 **)(*unaff_x20 + 0x70);
    uVar7 = *puVar6;
    *(int *)(unaff_x29 + -0x14) = iVar12;
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
    *(void **)(unaff_x29 + -0x20) = unaff_x27;
    (*(code *)puVar6[2])(uVar7,puVar6,unaff_x29 + -0x80,unaff_x29 + -0x28);
    iVar12 = iVar12 + 1;
  } while( true );
LAB_023a7110:
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_023a7168;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_023a7168:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x98);
  *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0xa0);
  (*(code *)**(undefined8 **)(*unaff_x20 + 0x50))
            (unaff_x29 + -0xc0,iVar13,*(undefined4 *)(unaff_x29 + -0xe4),0);
  (*(code *)**(undefined8 **)(*unaff_x20 + 0x110))
            (*(undefined8 *)(unaff_x29 + -0xa0),*(undefined8 *)(unaff_x29 + -0x98),
             *(undefined8 *)(unaff_x29 + -0xc0),*(undefined8 *)(unaff_x29 + -0xb8),iVar13);
  *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(unaff_x29 + -0xb8);
  *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x29 + -0xc0);
  FUN_032f3c24(unaff_x29 + -0xb0,*(undefined8 *)(*unaff_x20 + 0x118));
  uVar14 = *(undefined8 *)(unaff_x29 + -200);
  uVar7 = *(undefined8 *)(unaff_x29 + -0xd0);
  goto LAB_023a65e4;
LAB_023a6e40:
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_023a6ea0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_023a6ea0:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  uVar14 = *(undefined8 *)(unaff_x29 + -0x88);
  uVar7 = *(undefined8 *)(unaff_x29 + -0x90);
  goto LAB_023a65e4;
LAB_023a6b48:
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto FUN_023a6c30;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
FUN_023a6c30:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  uVar14 = *(undefined8 *)(unaff_x29 + -0x78);
  uVar7 = *(undefined8 *)(unaff_x29 + -0x80);
LAB_023a65e4:
  *(undefined8 *)(unaff_x29 + -0x38) = uVar14;
  *(undefined8 *)(unaff_x29 + -0x40) = uVar7;
  if (*(long *)(*(long *)(unaff_x29 + -0xe0) + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x38));
  }
  return;
}


