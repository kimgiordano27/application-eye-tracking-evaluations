/*
FUNCTION_NAME: FUN_02718dd4
ENTRY_POINT: 02718dd4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_9
*/


/* WARNING: Removing unreachable block (ram,0x02719694) */
/* WARNING: Removing unreachable block (ram,0x027197b0) */
/* WARNING: Removing unreachable block (ram,0x027197a4) */

void FUN_02718dd4(long param_1,void *param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  ulong uVar15;
  long *plVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  ulong __n;
  undefined1 *__s;
  undefined1 *__src;
  undefined1 auStack_100 [8];
  void *local_f8;
  long local_f0;
  long local_e8;
  long *local_e0;
  ulong local_d8;
  long local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  ulong local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined4 *puStack_78;
  undefined4 local_6c;
  long local_68;
  
  local_e8 = tpidr_el0;
  local_68 = *(long *)(local_e8 + 0x28);
  local_f8 = param_2;
  local_e0 = param_3;
  if ((DAT_0483024c & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483024c = 1;
  }
  plVar16 = (long *)(param_4 + 0x20);
  lVar11 = *(long *)(*plVar16 + 0xc0);
  local_d8 = (ulong)*(uint *)(*(long *)(lVar11 + 0x38) + 0xfc);
  local_a0 = (ulong)*(uint *)(*(long *)(lVar11 + 0x60) + 0xfc);
  __n = (ulong)*(uint *)(*(long *)(lVar11 + 0x58) + 0xfc);
  uVar13 = local_a0 + 0xf & 0x1fffffff0;
  local_b0 = auStack_100 + -uVar13;
  local_a8 = local_b0 + -uVar13;
  uVar15 = __n + 0xf & 0x1fffffff0;
  __src = local_a8 + -uVar15;
  local_b8 = __src + -uVar15;
  local_c0 = local_b8 + -uVar15;
  uVar13 = local_d8 + 0xf & 0x1fffffff0;
  puVar18 = local_c0 + -uVar13;
  puVar17 = puVar18 + -uVar13;
  memset(puVar17,0,local_d8);
  __s = puVar17 + -uVar15;
  memset(__s,0,__n);
  local_c8 = __s + -uVar15;
  memset(local_c8,0,__n);
  FUN_035ac8e8(param_1,0);
  local_f0 = param_1;
  if ((*(byte *)(**(long **)(*plVar16 + 0xc0) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  plVar5 = local_e0;
  lVar11 = thunk_FUN_01f117cc();
  (*(code *)**(undefined8 **)(*(long *)(*plVar16 + 0xc0) + 8))();
  if (plVar5 != (long *)0x0) {
    lVar10 = *(long *)(*(long *)(*plVar16 + 0xc0) + 0x18);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    lVar12 = *plVar5;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar10) {
          puVar4 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto 
          Unity_Collections_LowLevel_Unsafe_UnsafeMultiHashMap<__Il2CppFullySharedGenericStructType,___Il2CppFullySharedGenericStructType>__TryGetFirstValue
          ;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar10,0);

    Unity_Collections_LowLevel_Unsafe_UnsafeMultiHashMap<__Il2CppFullySharedGenericStructType,___Il2CppFullySharedGenericStructType>__TryGetFirstValue
    :
    plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
    local_d0 = lVar11;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar10 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02719040;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_02719040:
      uVar13 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      puVar2 = local_b0;
      if ((uVar13 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_027192c0;
        lVar10 = *plVar5;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar13 == 0) goto LAB_02719298;
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_02719280;
      }
      lVar11 = *(long *)(*(long *)(*plVar16 + 0xc0) + 0x28);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01ecaf44(lVar11);
      }
      lVar10 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            lVar11 = lVar10 + (long)*piVar14 * 0x10 + 0x138;
            goto LAB_027190b8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      lVar11 = FUN_01ecb238(plVar5,lVar11,0);
LAB_027190b8:
      lVar11 = *(long *)(lVar11 + 8);
      local_98 = puVar18;
      (**(code **)(lVar11 + 0x10))(*(undefined8 *)(lVar11 + 8),lVar11,plVar5,&local_98,puVar18);
      memcpy(puVar17,puVar18,local_d8);
      puVar4 = *(undefined8 **)(*(long *)(*plVar16 + 0xc0) + 0x40);
      (*(code *)puVar4[2])(*puVar4,puVar4,puVar17,0,&local_80);
      uVar3 = local_80._0_4_;
      puVar4 = *(undefined8 **)(*(long *)(*plVar16 + 0xc0) + 0x50);
      local_98 = __src;
      (*(code *)puVar4[2])(*puVar4,puVar4,puVar17,&local_98,__src);
      memcpy(__s,__src,__n);
      puVar2 = local_b8;
      memcpy(local_b8,__s,__n);
      uVar13 = local_a0;
      pvVar6 = (void *)thunk_FUN_01ee7388(puVar2,*(undefined8 *)
                                                  (*(long *)(*(long *)(*plVar16 + 0xc0) + 0x58) +
                                                  0x80));
      memcpy(local_b0,pvVar6,uVar13);
      puVar2 = local_c0;
      memcpy(local_c0,__s,__n);
      pvVar6 = (void *)thunk_FUN_01ee7388(puVar2,*(undefined8 *)
                                                  (*(long *)(*(long *)(*plVar16 + 0xc0) + 0x58) +
                                                  0x80));
      memcpy(local_a8,pvVar6,uVar13);
      lVar11 = local_d0;
      if ((*(byte *)(*(long *)(*(long *)(*plVar16 + 0xc0) + 0x68) + 0x135) & 1) == 0) {
        FUN_01ecaf44();
      }
      uVar7 = thunk_FUN_01f117cc();
      puVar4 = *(undefined8 **)(*(long *)(*plVar16 + 0xc0) + 0x70);
      puStack_78 = &local_6c;
      local_6c = uVar3;
      local_80 = local_a8;
      (*(code *)puVar4[2])(*puVar4,puVar4,uVar7,&local_80,&local_6c);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar4 = *(undefined8 **)(*(long *)(*plVar16 + 0xc0) + 0x78);
      local_80 = local_b0;
      puStack_78 = (undefined4 *)uVar7;
      (*(code *)puVar4[2])(*puVar4,puVar4,lVar11,&local_80,uVar7);
    } while( true );
  }
  goto LAB_0271979c;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_02719280:
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_027192b4;
    }
  }
LAB_02719298:
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_027192b4:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_027192c0:
  plVar5 = local_e0;
  lVar10 = *(long *)(*(long *)(*plVar16 + 0xc0) + 0x10);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01ecaf44(lVar10);
  }
  lVar12 = *plVar5;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == lVar10) {
        puVar4 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
        goto LAB_02719334;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar10,2);
LAB_02719334:
  plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
  if (plVar5 != (long *)0x0) {
    lVar10 = *(long *)(*(long *)(*plVar16 + 0xc0) + 0x88);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    lVar12 = *plVar5;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar10) {
          puVar4 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_027193b0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar10,0);
LAB_027193b0:
    plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar10 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02719418;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_02719418:
      uVar13 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar13 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_02719688;
        lVar10 = *plVar5;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar13 == 0) goto LAB_02719660;
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_02719648;
      }
      lVar10 = *(long *)(*(long *)(*plVar16 + 0xc0) + 0x98);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44(lVar10);
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar10) {
            lVar10 = lVar12 + (long)*piVar14 * 0x10 + 0x138;
            goto LAB_02719490;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      lVar10 = FUN_01ecb238(plVar5,lVar10,0);
LAB_02719490:
      lVar10 = *(long *)(lVar10 + 8);
      local_98 = __src;
      (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,plVar5,&local_98,__src);
      puVar17 = local_c8;
      memcpy(local_c8,__src,__n);
      puVar18 = local_b8;
      memcpy(local_b8,puVar17,__n);
      pvVar6 = (void *)thunk_FUN_01ee7388(puVar18,*(undefined8 *)
                                                   (*(long *)(*(long *)(*plVar16 + 0xc0) + 0x58) +
                                                   0x80));
      memcpy(puVar2,pvVar6,local_a0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar4 = *(undefined8 **)(*(long *)(*plVar16 + 0xc0) + 0xa8);
      local_98 = puVar2;
      (*(code *)puVar4[2])(*puVar4,puVar4,lVar11,&local_98,&local_88);
      puVar18 = local_88;
      puVar17 = local_c0;
      memcpy(local_c0,local_c8,__n);
      pvVar6 = (void *)thunk_FUN_01ee7388(puVar17,*(long *)(*(long *)(*(long *)(*plVar16 + 0xc0) +
                                                                     0x58) + 0x80) + 0x20);
      puVar17 = local_a8;
      memcpy(local_a8,pvVar6,local_a0);
      puVar4 = *(undefined8 **)(*(long *)(*plVar16 + 0xc0) + 0xa8);
      local_98 = puVar17;
      (*(code *)puVar4[2])(*puVar4,puVar4,lVar11,&local_98,&local_88);
      if (puVar18 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_01bc5360(puVar18,*(long *)(*(long *)(*(long *)(*plVar16 + 0xc0) + 0x68) + 0x80) + 0x40,
                   local_88);
      puVar4 = (undefined8 *)
               thunk_FUN_01ee7388(puVar18,*(long *)(*(long *)(*(long *)(*plVar16 + 0xc0) + 0x68) +
                                                   0x80) + 0x40);
      plVar8 = (long *)thunk_FUN_01ee7388(*puVar4,*(long *)(*(long *)(*(long *)(*plVar16 + 0xc0) +
                                                                     0x68) + 0x80) + 0x60);
      if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar4 = *(undefined8 **)(*(long *)(*plVar16 + 0xc0) + 0xb8);
      local_98 = puVar18;
      (*(code *)puVar4[2])(*puVar4,puVar4,*plVar8,&local_98,puVar18);
    } while( true );
  }
  goto LAB_0271979c;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_02719648:
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0271967c;
    }
  }
LAB_02719660:
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0271967c:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_02719688:
  if (lVar11 != 0) {
    uVar7 = (*(code *)**(undefined8 **)(*(long *)(*plVar16 + 0xc0) + 0xc0))(lVar11);
    lVar10 = *(long *)(*(long *)(*plVar16 + 0xc0) + 0xb0);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    uVar9 = thunk_FUN_01f117cc(lVar10);
    (*(code *)**(undefined8 **)(*(long *)(*plVar16 + 0xc0) + 0xd0))(uVar9,uVar7);
    lVar10 = local_f0;
    *(undefined8 *)(local_f0 + 0x18) = uVar9;
    thunk_FUN_01f51358((undefined8 *)(local_f0 + 0x18),uVar9);
    memcpy(puVar2,local_f8,local_a0);
    puVar4 = *(undefined8 **)(*(long *)(*plVar16 + 0xc0) + 0xa8);
    local_98 = puVar2;
    (*(code *)puVar4[2])(*puVar4,puVar4,lVar11,&local_98,&local_90);
    *(undefined8 *)(lVar10 + 0x10) = local_90;
    thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x10));
    if (*(long *)(local_e8 + 0x28) == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_0271979c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


