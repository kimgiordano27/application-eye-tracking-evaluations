/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeMultiHashMap<__Il2CppFullySharedGenericStructType,-__Il2CppFullySharedGenericStructType>$$TryGetFirstValue
ENTRY_POINT: 02718fd4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_14;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x02719694) */
/* WARNING: Removing unreachable block (ram,0x027197b0) */
/* WARNING: Removing unreachable block (ram,0x027197a4) */

void Unity_Collections_LowLevel_Unsafe_UnsafeMultiHashMap<__Il2CppFullySharedGenericStructType,___Il2CppFullySharedGenericStructType>__TryGetFirstValue
               (undefined8 *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x20;
  void *pvVar12;
  void *unaff_x22;
  void *pvVar13;
  void *unaff_x23;
  long unaff_x24;
  size_t unaff_x25;
  void *unaff_x26;
  void *unaff_x27;
  void *pvVar14;
  size_t __n;
  long unaff_x29;
  
  plVar3 = (long *)(*(code *)*param_1)();
  *(long *)(unaff_x29 + -0x70) = unaff_x24;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar8 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02719040;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02719040:
    uVar10 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar10 & 1) == 0) {
      pvVar14 = *(void **)(unaff_x29 + -0x50);
      if (plVar3 == (long *)0x0) goto LAB_027192c0;
      lVar8 = *plVar3;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 == 0) goto LAB_02719298;
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x28);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          lVar8 = lVar9 + (long)*piVar11 * 0x10 + 0x138;
          goto LAB_027190b8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    lVar8 = FUN_01ecb238(plVar3,lVar8,0);
LAB_027190b8:
    *(void **)(unaff_x29 + -0x38) = unaff_x23;
    lVar8 = *(long *)(lVar8 + 8);
    (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar3,unaff_x29 + -0x38);
    memcpy(unaff_x22,unaff_x23,*(size_t *)(unaff_x29 + -0x78));
    puVar4 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0x40);
    (*(code *)puVar4[2])(*puVar4);
    uVar1 = *(undefined4 *)(unaff_x29 + -0x20);
    puVar4 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0x50);
    uVar5 = *puVar4;
    *(void **)(unaff_x29 + -0x38) = unaff_x27;
    (*(code *)puVar4[2])(uVar5);
    memcpy(unaff_x26,unaff_x27,unaff_x25);
    pvVar14 = *(void **)(unaff_x29 + -0x58);
    memcpy(pvVar14,unaff_x26,unaff_x25);
    __n = *(size_t *)(unaff_x29 + -0x40);
    pvVar14 = (void *)thunk_FUN_01ee7388(pvVar14,*(undefined8 *)
                                                  (*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x58) +
                                                  0x80));
    memcpy(*(void **)(unaff_x29 + -0x50),pvVar14,__n);
    pvVar14 = *(void **)(unaff_x29 + -0x60);
    memcpy(pvVar14,unaff_x26,unaff_x25);
    pvVar14 = (void *)thunk_FUN_01ee7388(pvVar14,*(undefined8 *)
                                                  (*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x58) +
                                                  0x80));
    memcpy(*(void **)(unaff_x29 + -0x48),pvVar14,__n);
    if ((*(byte *)(*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x68) + 0x135) & 1) == 0) {
      unaff_x24 = *(long *)(unaff_x29 + -0x70);
      FUN_01ecaf44();
    }
    else {
      unaff_x24 = *(long *)(unaff_x29 + -0x70);
    }
    uVar5 = thunk_FUN_01f117cc();
    puVar4 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0x70);
    uVar6 = *puVar4;
    *(undefined4 *)(unaff_x29 + -0xc) = uVar1;
    *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x48);
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
    (*(code *)puVar4[2])(uVar6,puVar4,uVar5,unaff_x29 + -0x20,unaff_x29 + -0xc);
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar4 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0x78);
    uVar6 = *puVar4;
    *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x50);
    *(undefined8 *)(unaff_x29 + -0x18) = uVar5;
    (*(code *)puVar4[2])(uVar6,puVar4,unaff_x24,unaff_x29 + -0x20,uVar5);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_027192b4;
    }
  }
LAB_02719298:
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar3,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_027192b4:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_027192c0:
  plVar3 = *(long **)(unaff_x29 + -0x80);
  lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
  }
  lVar9 = *plVar3;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar8) {
        puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
        goto LAB_02719334;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(plVar3,lVar8,2);
LAB_02719334:
  plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
  if (plVar3 != (long *)0x0) {
    lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x88);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_027193b0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar3,lVar8,0);
LAB_027193b0:
    plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar8 = *plVar3;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02719418;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar2,0);
LAB_02719418:
      uVar10 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar3 == (long *)0x0) goto LAB_02719688;
        lVar8 = *plVar3;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 == 0) goto LAB_02719660;
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_02719648;
      }
      lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x98);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
      }
      lVar9 = *plVar3;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            lVar8 = lVar9 + (long)*piVar11 * 0x10 + 0x138;
            goto LAB_02719490;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      lVar8 = FUN_01ecb238(plVar3,lVar8,0);
LAB_02719490:
      *(void **)(unaff_x29 + -0x38) = unaff_x27;
      lVar8 = *(long *)(lVar8 + 8);
      (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar3,unaff_x29 + -0x38);
      pvVar13 = *(void **)(unaff_x29 + -0x68);
      memcpy(pvVar13,unaff_x27,unaff_x25);
      pvVar12 = *(void **)(unaff_x29 + -0x58);
      memcpy(pvVar12,pvVar13,unaff_x25);
      pvVar12 = (void *)thunk_FUN_01ee7388(pvVar12,*(undefined8 *)
                                                    (*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x58)
                                                    + 0x80));
      memcpy(pvVar14,pvVar12,*(size_t *)(unaff_x29 + -0x40));
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar4 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0xa8);
      uVar5 = *puVar4;
      *(void **)(unaff_x29 + -0x38) = pvVar14;
      (*(code *)puVar4[2])(uVar5,puVar4,unaff_x24,unaff_x29 + -0x38,unaff_x29 + -0x28);
      pvVar12 = *(void **)(unaff_x29 + -0x60);
      lVar8 = *(long *)(unaff_x29 + -0x28);
      memcpy(pvVar12,*(void **)(unaff_x29 + -0x68),unaff_x25);
      pvVar13 = (void *)thunk_FUN_01ee7388(pvVar12,*(long *)(*(long *)(*(long *)(*unaff_x20 + 0xc0)
                                                                      + 0x58) + 0x80) + 0x20);
      pvVar12 = *(void **)(unaff_x29 + -0x48);
      memcpy(pvVar12,pvVar13,*(size_t *)(unaff_x29 + -0x40));
      puVar4 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0xa8);
      uVar5 = *puVar4;
      *(void **)(unaff_x29 + -0x38) = pvVar12;
      (*(code *)puVar4[2])(uVar5,puVar4,unaff_x24,unaff_x29 + -0x38,unaff_x29 + -0x28);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_01bc5360(lVar8,*(long *)(*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x68) + 0x80) + 0x40,
                   *(undefined8 *)(unaff_x29 + -0x28));
      puVar4 = (undefined8 *)
               thunk_FUN_01ee7388(lVar8,*(long *)(*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x68) +
                                                 0x80) + 0x40);
      plVar7 = (long *)thunk_FUN_01ee7388(*puVar4,*(long *)(*(long *)(*(long *)(*unaff_x20 + 0xc0) +
                                                                     0x68) + 0x80) + 0x60);
      lVar9 = *plVar7;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar4 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0xb8);
      uVar5 = *puVar4;
      *(long *)(unaff_x29 + -0x38) = lVar8;
      (*(code *)puVar4[2])(uVar5,puVar4,lVar9,unaff_x29 + -0x38,lVar8);
    } while( true );
  }
  goto LAB_0271979c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_02719648:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0271967c;
    }
  }
LAB_02719660:
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar3,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0271967c:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_02719688:
  if (unaff_x24 != 0) {
    uVar5 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0xc0))(unaff_x24);
    lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0xb0);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    uVar6 = thunk_FUN_01f117cc(lVar8);
    (*(code *)**(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0xd0))(uVar6,uVar5);
    lVar8 = *(long *)(unaff_x29 + -0x90);
    puVar4 = (undefined8 *)(lVar8 + 0x18);
    *puVar4 = uVar6;
    thunk_FUN_01f51358(puVar4,uVar6);
    memcpy(pvVar14,*(void **)(unaff_x29 + -0x98),*(size_t *)(unaff_x29 + -0x40));
    puVar4 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0xa8);
    uVar5 = *puVar4;
    *(void **)(unaff_x29 + -0x38) = pvVar14;
    (*(code *)puVar4[2])(uVar5,puVar4,unaff_x24,unaff_x29 + -0x38,unaff_x29 + -0x30);
    puVar4 = (undefined8 *)(lVar8 + 0x10);
    *puVar4 = *(undefined8 *)(unaff_x29 + -0x30);
    thunk_FUN_01f51358(puVar4);
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


