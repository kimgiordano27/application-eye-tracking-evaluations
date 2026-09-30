/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeMultiHashMap<__Il2CppFullySharedGenericStructType,-__Il2CppFullySharedGenericStructType>$$Remove
ENTRY_POINT: 02718ec0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_14;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x02719694) */
/* WARNING: Removing unreachable block (ram,0x027197b0) */
/* WARNING: Removing unreachable block (ram,0x027197a4) */

void Unity_Collections_LowLevel_Unsafe_UnsafeMultiHashMap<__Il2CppFullySharedGenericStructType,___Il2CppFullySharedGenericStructType>__Remove
               (long param_1,undefined8 param_2,undefined8 param_3,size_t param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong in_x9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *plVar12;
  long *unaff_x20;
  undefined8 unaff_x21;
  void *pvVar13;
  void *pvVar14;
  size_t unaff_x25;
  void *pvVar15;
  void *unaff_x27;
  void *pvVar16;
  size_t __n;
  long unaff_x29;
  
  pvVar14 = (void *)(param_1 - (in_x9 & 0x1fffffff0));
  pvVar13 = (void *)((long)pvVar14 - (in_x9 & 0x1fffffff0));
  *(size_t *)(unaff_x29 + -0x78) = param_4;
  memset(pvVar13,0,param_4);
  pvVar15 = (void *)((long)pvVar13 - unaff_x19);
  memset(pvVar15,0,unaff_x25);
  *(void **)(unaff_x29 + -0x68) = (void *)((long)pvVar15 - unaff_x19);
  memset((void *)((long)pvVar15 - unaff_x19),0,unaff_x25);
  FUN_035ac8e8();
  lVar8 = *unaff_x20;
  *(undefined8 *)(unaff_x29 + -0x90) = unaff_x21;
  if ((*(byte *)(**(long **)(lVar8 + 0xc0) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  plVar12 = *(long **)(unaff_x29 + -0x80);
  lVar8 = thunk_FUN_01f117cc();
  (*(code *)**(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 8))();
  if (plVar12 != (long *)0x0) {
    lVar7 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x18);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto 
          Unity_Collections_LowLevel_Unsafe_UnsafeMultiHashMap<__Il2CppFullySharedGenericStructType,___Il2CppFullySharedGenericStructType>__TryGetFirstValue
          ;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar12,lVar7,0);

    Unity_Collections_LowLevel_Unsafe_UnsafeMultiHashMap<__Il2CppFullySharedGenericStructType,___Il2CppFullySharedGenericStructType>__TryGetFirstValue
    :
    plVar12 = (long *)(*(code *)*puVar3)(plVar12,puVar3[1]);
    *(long *)(unaff_x29 + -0x70) = lVar8;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar7 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02719040;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(plVar12,*(long *)
                                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_02719040:
      uVar10 = (*(code *)*puVar3)(plVar12,puVar3[1]);
      if ((uVar10 & 1) == 0) {
        pvVar13 = *(void **)(unaff_x29 + -0x50);
        if (plVar12 == (long *)0x0) goto LAB_027192c0;
        lVar7 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 == 0) goto LAB_02719298;
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_02719280;
      }
      lVar8 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x28);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44(lVar8);
      }
      lVar7 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            lVar8 = lVar7 + (long)*piVar11 * 0x10 + 0x138;
            goto LAB_027190b8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      lVar8 = FUN_01ecb238(plVar12,lVar8,0);
LAB_027190b8:
      *(void **)(unaff_x29 + -0x38) = pvVar14;
      lVar8 = *(long *)(lVar8 + 8);
      (**(code **)(lVar8 + 0x10))
                (*(undefined8 *)(lVar8 + 8),lVar8,plVar12,unaff_x29 + -0x38,pvVar14);
      memcpy(pvVar13,pvVar14,*(size_t *)(unaff_x29 + -0x78));
      puVar3 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0x40);
      (*(code *)puVar3[2])(*puVar3,puVar3,pvVar13,0,unaff_x29 + -0x20);
      uVar1 = *(undefined4 *)(unaff_x29 + -0x20);
      puVar3 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0x50);
      uVar4 = *puVar3;
      *(void **)(unaff_x29 + -0x38) = unaff_x27;
      (*(code *)puVar3[2])(uVar4,puVar3,pvVar13,unaff_x29 + -0x38);
      memcpy(pvVar15,unaff_x27,unaff_x25);
      pvVar16 = *(void **)(unaff_x29 + -0x58);
      memcpy(pvVar16,pvVar15,unaff_x25);
      __n = *(size_t *)(unaff_x29 + -0x40);
      pvVar16 = (void *)thunk_FUN_01ee7388(pvVar16,*(undefined8 *)
                                                    (*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x58)
                                                    + 0x80));
      memcpy(*(void **)(unaff_x29 + -0x50),pvVar16,__n);
      pvVar16 = *(void **)(unaff_x29 + -0x60);
      memcpy(pvVar16,pvVar15,unaff_x25);
      pvVar16 = (void *)thunk_FUN_01ee7388(pvVar16,*(undefined8 *)
                                                    (*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x58)
                                                    + 0x80));
      memcpy(*(void **)(unaff_x29 + -0x48),pvVar16,__n);
      if ((*(byte *)(*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x68) + 0x135) & 1) == 0) {
        lVar8 = *(long *)(unaff_x29 + -0x70);
        FUN_01ecaf44();
      }
      else {
        lVar8 = *(long *)(unaff_x29 + -0x70);
      }
      uVar4 = thunk_FUN_01f117cc();
      puVar3 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0x70);
      uVar5 = *puVar3;
      *(undefined4 *)(unaff_x29 + -0xc) = uVar1;
      *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x48);
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
      (*(code *)puVar3[2])(uVar5,puVar3,uVar4,unaff_x29 + -0x20,unaff_x29 + -0xc);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar3 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0x78);
      uVar5 = *puVar3;
      *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x50);
      *(undefined8 *)(unaff_x29 + -0x18) = uVar4;
      (*(code *)puVar3[2])(uVar5,puVar3,lVar8,unaff_x29 + -0x20,uVar4);
    } while( true );
  }
  goto LAB_0271979c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_02719280:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_027192b4;
    }
  }
LAB_02719298:
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar12,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_027192b4:
  (*(code *)*puVar3)(plVar12,puVar3[1]);
LAB_027192c0:
  plVar12 = *(long **)(unaff_x29 + -0x80);
  lVar7 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  lVar9 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar7) {
        puVar3 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
        goto LAB_02719334;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(plVar12,lVar7,2);
LAB_02719334:
  plVar12 = (long *)(*(code *)*puVar3)(plVar12,puVar3[1]);
  if (plVar12 != (long *)0x0) {
    lVar7 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x88);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_027193b0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar12,lVar7,0);
LAB_027193b0:
    plVar12 = (long *)(*(code *)*puVar3)(plVar12,puVar3[1]);
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar7 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02719418;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar2,0);
LAB_02719418:
      uVar10 = (*(code *)*puVar3)(plVar12,puVar3[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar12 == (long *)0x0) goto LAB_02719688;
        lVar7 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 == 0) goto LAB_02719660;
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_02719648;
      }
      lVar7 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x98);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar7) {
            lVar7 = lVar9 + (long)*piVar11 * 0x10 + 0x138;
            goto LAB_02719490;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      lVar7 = FUN_01ecb238(plVar12,lVar7,0);
LAB_02719490:
      *(void **)(unaff_x29 + -0x38) = unaff_x27;
      lVar7 = *(long *)(lVar7 + 8);
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar12,unaff_x29 + -0x38);
      pvVar15 = *(void **)(unaff_x29 + -0x68);
      memcpy(pvVar15,unaff_x27,unaff_x25);
      pvVar14 = *(void **)(unaff_x29 + -0x58);
      memcpy(pvVar14,pvVar15,unaff_x25);
      pvVar14 = (void *)thunk_FUN_01ee7388(pvVar14,*(undefined8 *)
                                                    (*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x58)
                                                    + 0x80));
      memcpy(pvVar13,pvVar14,*(size_t *)(unaff_x29 + -0x40));
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar3 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0xa8);
      uVar4 = *puVar3;
      *(void **)(unaff_x29 + -0x38) = pvVar13;
      (*(code *)puVar3[2])(uVar4,puVar3,lVar8,unaff_x29 + -0x38,unaff_x29 + -0x28);
      pvVar14 = *(void **)(unaff_x29 + -0x60);
      lVar7 = *(long *)(unaff_x29 + -0x28);
      memcpy(pvVar14,*(void **)(unaff_x29 + -0x68),unaff_x25);
      pvVar15 = (void *)thunk_FUN_01ee7388(pvVar14,*(long *)(*(long *)(*(long *)(*unaff_x20 + 0xc0)
                                                                      + 0x58) + 0x80) + 0x20);
      pvVar14 = *(void **)(unaff_x29 + -0x48);
      memcpy(pvVar14,pvVar15,*(size_t *)(unaff_x29 + -0x40));
      puVar3 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0xa8);
      uVar4 = *puVar3;
      *(void **)(unaff_x29 + -0x38) = pvVar14;
      (*(code *)puVar3[2])(uVar4,puVar3,lVar8,unaff_x29 + -0x38,unaff_x29 + -0x28);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_01bc5360(lVar7,*(long *)(*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x68) + 0x80) + 0x40,
                   *(undefined8 *)(unaff_x29 + -0x28));
      puVar3 = (undefined8 *)
               thunk_FUN_01ee7388(lVar7,*(long *)(*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x68) +
                                                 0x80) + 0x40);
      plVar6 = (long *)thunk_FUN_01ee7388(*puVar3,*(long *)(*(long *)(*(long *)(*unaff_x20 + 0xc0) +
                                                                     0x68) + 0x80) + 0x60);
      lVar9 = *plVar6;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar3 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0xb8);
      uVar4 = *puVar3;
      *(long *)(unaff_x29 + -0x38) = lVar7;
      (*(code *)puVar3[2])(uVar4,puVar3,lVar9,unaff_x29 + -0x38,lVar7);
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
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0271967c;
    }
  }
LAB_02719660:
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar12,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0271967c:
  (*(code *)*puVar3)(plVar12,puVar3[1]);
LAB_02719688:
  if (lVar8 != 0) {
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0xc0))(lVar8);
    lVar7 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0xb0);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    uVar5 = thunk_FUN_01f117cc(lVar7);
    (*(code *)**(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0xd0))(uVar5,uVar4);
    lVar7 = *(long *)(unaff_x29 + -0x90);
    puVar3 = (undefined8 *)(lVar7 + 0x18);
    *puVar3 = uVar5;
    thunk_FUN_01f51358(puVar3,uVar5);
    memcpy(pvVar13,*(void **)(unaff_x29 + -0x98),*(size_t *)(unaff_x29 + -0x40));
    puVar3 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0xa8);
    uVar4 = *puVar3;
    *(void **)(unaff_x29 + -0x38) = pvVar13;
    (*(code *)puVar3[2])(uVar4,puVar3,lVar8,unaff_x29 + -0x38,unaff_x29 + -0x30);
    puVar3 = (undefined8 *)(lVar7 + 0x10);
    *puVar3 = *(undefined8 *)(unaff_x29 + -0x30);
    thunk_FUN_01f51358(puVar3);
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


