/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeMultiHashMap<__Il2CppFullySharedGenericStructType,-__Il2CppFullySharedGenericStructType>$$ContainsKey
ENTRY_POINT: 02719198
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02719694) */
/* WARNING: Removing unreachable block (ram,0x027197b0) */
/* WARNING: Removing unreachable block (ram,0x027197a4) */

void Unity_Collections_LowLevel_Unsafe_UnsafeMultiHashMap<__Il2CppFullySharedGenericStructType,___Il2CppFullySharedGenericStructType>__ContainsKey
               (void)

{
  undefined *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long *plVar11;
  long *unaff_x20;
  undefined4 unaff_w21;
  void *pvVar12;
  void *unaff_x22;
  void *pvVar13;
  void *unaff_x23;
  void *unaff_x24;
  long lVar14;
  size_t unaff_x25;
  void *unaff_x26;
  void *unaff_x27;
  size_t unaff_x28;
  long unaff_x29;
  
  do {
    pvVar2 = (void *)thunk_FUN_01ee7388(unaff_x24,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x58) + 0x80));
    memcpy(*(void **)(unaff_x29 + -0x48),pvVar2,unaff_x28);
    if ((*(byte *)(*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x68) + 0x135) & 1) == 0) {
      lVar14 = *(long *)(unaff_x29 + -0x70);
      FUN_01ecaf44();
    }
    else {
      lVar14 = *(long *)(unaff_x29 + -0x70);
    }
    uVar3 = thunk_FUN_01f117cc();
    puVar6 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0x70);
    uVar4 = *puVar6;
    *(undefined4 *)(unaff_x29 + -0xc) = unaff_w21;
    *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x48);
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
    (*(code *)puVar6[2])(uVar4,puVar6,uVar3,unaff_x29 + -0x20,unaff_x29 + -0xc);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar6 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0x78);
    uVar4 = *puVar6;
    *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x50);
    *(undefined8 *)(unaff_x29 + -0x18) = uVar3;
    (*(code *)puVar6[2])(uVar4,puVar6,lVar14,unaff_x29 + -0x20,uVar3);
    lVar7 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02719040;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_02719040:
    uVar9 = (*(code *)*puVar6)();
    if ((uVar9 & 1) == 0) break;
    lVar14 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x28);
    if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_01ecaf44(lVar14);
    }
    lVar7 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar14) {
          lVar14 = lVar7 + (long)*piVar10 * 0x10 + 0x138;
          goto LAB_027190b8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    lVar14 = FUN_01ecb238();
LAB_027190b8:
    *(void **)(unaff_x29 + -0x38) = unaff_x23;
    (**(code **)(*(long *)(lVar14 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar14 + 8) + 8));
    memcpy(unaff_x22,unaff_x23,*(size_t *)(unaff_x29 + -0x78));
    puVar6 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0x40);
    (*(code *)puVar6[2])(*puVar6);
    unaff_w21 = *(undefined4 *)(unaff_x29 + -0x20);
    puVar6 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0x50);
    uVar3 = *puVar6;
    *(void **)(unaff_x29 + -0x38) = unaff_x27;
    (*(code *)puVar6[2])(uVar3);
    memcpy(unaff_x26,unaff_x27,unaff_x25);
    pvVar2 = *(void **)(unaff_x29 + -0x58);
    memcpy(pvVar2,unaff_x26,unaff_x25);
    unaff_x28 = *(size_t *)(unaff_x29 + -0x40);
    pvVar2 = (void *)thunk_FUN_01ee7388(pvVar2,*(undefined8 *)
                                                (*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x58) +
                                                0x80));
    memcpy(*(void **)(unaff_x29 + -0x50),pvVar2,unaff_x28);
    unaff_x24 = *(void **)(unaff_x29 + -0x60);
    memcpy(unaff_x24,unaff_x26,unaff_x25);
  } while( true );
  pvVar2 = *(void **)(unaff_x29 + -0x50);
  if (unaff_x19 != (long *)0x0) {
    lVar7 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_027192b4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_027192b4:
    (*(code *)*puVar6)();
  }
  plVar11 = *(long **)(unaff_x29 + -0x80);
  lVar7 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  lVar8 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
        goto LAB_02719334;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(plVar11,lVar7,2);
LAB_02719334:
  plVar11 = (long *)(*(code *)*puVar6)(plVar11,puVar6[1]);
  if (plVar11 != (long *)0x0) {
    lVar7 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x88);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_027193b0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar11,lVar7,0);
LAB_027193b0:
    plVar11 = (long *)(*(code *)*puVar6)(plVar11,puVar6[1]);
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar7 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02719418;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar1,0);
LAB_02719418:
      uVar9 = (*(code *)*puVar6)(plVar11,puVar6[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar11 == (long *)0x0) goto LAB_02719688;
        lVar7 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 == 0) goto LAB_02719660;
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_02719648;
      }
      lVar7 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x98);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            lVar7 = lVar8 + (long)*piVar10 * 0x10 + 0x138;
            goto LAB_02719490;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      lVar7 = FUN_01ecb238(plVar11,lVar7,0);
LAB_02719490:
      *(void **)(unaff_x29 + -0x38) = unaff_x27;
      lVar7 = *(long *)(lVar7 + 8);
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar11,unaff_x29 + -0x38);
      pvVar13 = *(void **)(unaff_x29 + -0x68);
      memcpy(pvVar13,unaff_x27,unaff_x25);
      pvVar12 = *(void **)(unaff_x29 + -0x58);
      memcpy(pvVar12,pvVar13,unaff_x25);
      pvVar12 = (void *)thunk_FUN_01ee7388(pvVar12,*(undefined8 *)
                                                    (*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x58)
                                                    + 0x80));
      memcpy(pvVar2,pvVar12,*(size_t *)(unaff_x29 + -0x40));
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar6 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0xa8);
      uVar3 = *puVar6;
      *(void **)(unaff_x29 + -0x38) = pvVar2;
      (*(code *)puVar6[2])(uVar3,puVar6,lVar14,unaff_x29 + -0x38,unaff_x29 + -0x28);
      pvVar12 = *(void **)(unaff_x29 + -0x60);
      lVar7 = *(long *)(unaff_x29 + -0x28);
      memcpy(pvVar12,*(void **)(unaff_x29 + -0x68),unaff_x25);
      pvVar13 = (void *)thunk_FUN_01ee7388(pvVar12,*(long *)(*(long *)(*(long *)(*unaff_x20 + 0xc0)
                                                                      + 0x58) + 0x80) + 0x20);
      pvVar12 = *(void **)(unaff_x29 + -0x48);
      memcpy(pvVar12,pvVar13,*(size_t *)(unaff_x29 + -0x40));
      puVar6 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0xa8);
      uVar3 = *puVar6;
      *(void **)(unaff_x29 + -0x38) = pvVar12;
      (*(code *)puVar6[2])(uVar3,puVar6,lVar14,unaff_x29 + -0x38,unaff_x29 + -0x28);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_01bc5360(lVar7,*(long *)(*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x68) + 0x80) + 0x40,
                   *(undefined8 *)(unaff_x29 + -0x28));
      puVar6 = (undefined8 *)
               thunk_FUN_01ee7388(lVar7,*(long *)(*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x68) +
                                                 0x80) + 0x40);
      plVar5 = (long *)thunk_FUN_01ee7388(*puVar6,*(long *)(*(long *)(*(long *)(*unaff_x20 + 0xc0) +
                                                                     0x68) + 0x80) + 0x60);
      lVar8 = *plVar5;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar6 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0xb8);
      uVar3 = *puVar6;
      *(long *)(unaff_x29 + -0x38) = lVar7;
      (*(code *)puVar6[2])(uVar3,puVar6,lVar8,unaff_x29 + -0x38,lVar7);
    } while( true );
  }
  goto LAB_0271979c;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_02719648:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0271967c;
    }
  }
LAB_02719660:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar11,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0271967c:
  (*(code *)*puVar6)(plVar11,puVar6[1]);
LAB_02719688:
  if (lVar14 != 0) {
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0xc0))(lVar14);
    lVar7 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0xb0);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    uVar4 = thunk_FUN_01f117cc(lVar7);
    (*(code *)**(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0xd0))(uVar4,uVar3);
    lVar7 = *(long *)(unaff_x29 + -0x90);
    puVar6 = (undefined8 *)(lVar7 + 0x18);
    *puVar6 = uVar4;
    thunk_FUN_01f51358(puVar6,uVar4);
    memcpy(pvVar2,*(void **)(unaff_x29 + -0x98),*(size_t *)(unaff_x29 + -0x40));
    puVar6 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0xa8);
    uVar3 = *puVar6;
    *(void **)(unaff_x29 + -0x38) = pvVar2;
    (*(code *)puVar6[2])(uVar3,puVar6,lVar14,unaff_x29 + -0x38,unaff_x29 + -0x30);
    puVar6 = (undefined8 *)(lVar7 + 0x10);
    *puVar6 = *(undefined8 *)(unaff_x29 + -0x30);
    thunk_FUN_01f51358(puVar6);
    if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_0271979c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


