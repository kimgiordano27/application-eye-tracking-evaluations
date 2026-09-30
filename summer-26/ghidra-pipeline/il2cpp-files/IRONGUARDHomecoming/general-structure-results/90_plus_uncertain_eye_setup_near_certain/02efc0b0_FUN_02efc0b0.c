/*
FUNCTION_NAME: FUN_02efc0b0
ENTRY_POINT: 02efc0b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02efc5c4) */

void FUN_02efc0b0(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong __n;
  undefined8 *__dest;
  void *__s;
  undefined8 *puVar13;
  void *pvVar14;
  long alStack_90 [2];
  long *local_80;
  undefined8 *local_78;
  undefined1 auStack_70 [4];
  int local_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if ((DAT_04831935 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    DAT_04831935 = 1;
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x98) + 0xfc);
  uVar12 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)((long)alStack_90 - uVar12);
  puVar13 = (undefined8 *)((long)__dest - uVar12);
  pvVar14 = (void *)((long)puVar13 - uVar12);
  memset(pvVar14,0,__n);
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar3 = FUN_039dcc94((ulong)uVar1,0);
  uVar12 = (ulong)uVar3;
  alStack_90[1] = lVar5;
  local_80 = param_2;
  if ((int)uVar3 < 0x65) {
    uVar12 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2;
    if (uVar3 == 0) {
      __s = (void *)0x0;
    }
    else {
      __s = (void *)((long)pvVar14 - (uVar12 + 0xf & 0xfffffffffffffff0));
    }
    memset(__s,0,uVar12);
    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__
                              );
    FUN_039dcb20(lVar5,__s,uVar3,0);
  }
  else {
    uVar4 = FUN_01f08890(*(undefined8 *)
                          Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__,
                         uVar12);
                    /* try { // try from 02efc1b4 to 02ffc283 has its CatchHandler @ 02efc1b4
                       catch() { ... } // from try @ 02efc1b4 with catch @ 02efc1b4
                       catch() { ... } // from try @ 02efc2a4 with catch @ 02efc1b4
                       catch() { ... } // from try @ 02efc354 with catch @ 02efc1b4
                       catch() { ... } // from try @ 02efc37c with catch @ 02efc1b4
                       catch() { ... } // from try @ 02efc3bc with catch @ 02efc1b4 */
    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__
                              );
    FUN_039dcb58(lVar5,uVar4,uVar12,0);
  }
  plVar7 = local_80;
  if (local_80 != (long *)0x0) {
    lVar10 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar10) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02efc2a0;
        }
        uVar12 = uVar12 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,0);
LAB_02efc2a0:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar10 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02efc308;
          }
          uVar12 = uVar12 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_02efc308:
      uVar12 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar7 == (long *)0x0) goto LAB_02efc47c;
        lVar10 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 == 0) goto LAB_02efc454;
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_02efc43c;
      }
      lVar10 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44(lVar10);
      }
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar10) {
            lVar10 = lVar11 + (long)*piVar8 * 0x10 + 0x138;
            goto LAB_02efc380;
          }
          uVar12 = uVar12 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar12 != 0);
      }
      lVar10 = FUN_01ecb238(plVar7,lVar10,0);
LAB_02efc380:
      lVar10 = *(long *)(lVar10 + 8);
      local_78 = __dest;
      (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,plVar7,&local_78,__dest);
      memcpy(pvVar14,__dest,__n);
      memcpy(puVar13,pvVar14,__n);
      lVar10 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
      local_78 = puVar13;
      if (-1 < *(int *)(*(long *)(lVar10 + 0x98) + 0x28)) {
        local_78 = (undefined8 *)*puVar13;
      }
      puVar6 = *(undefined8 **)(lVar10 + 0x1d8);
      (*(code *)puVar6[2])(*puVar6,puVar6,param_1,&local_78,&local_6c);
      if (-1 < local_6c) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_039dcb94(lVar5,local_6c,0);
      }
    } while( true );
  }
LAB_02efc5b4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar8 = piVar8 + 4;
    if (uVar12 == 0) break;
LAB_02efc43c:
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar13 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
      goto 
      System_Collections_Generic_Dictionary_KeyCollection<InternedString,_object>__System_Collections_Generic_ICollection<TKey>_Remove
      ;
    }
  }
LAB_02efc454:
  puVar13 = (undefined8 *)
            FUN_01ecb238(plVar7,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);

  System_Collections_Generic_Dictionary_KeyCollection<InternedString,_object>__System_Collections_Generic_ICollection<TKey>_Remove
  :
  (*(code *)*puVar13)(plVar7,puVar13[1]);
LAB_02efc47c:
  if (0 < (int)uVar1) {
    uVar12 = 0;
    do {
      plVar7 = *(long **)(param_1 + 0x18);
      if (plVar7 == (long *)0x0) goto LAB_02efc5b4;
      if (*(uint *)(plVar7 + 3) <= uVar12) {
LAB_02efc5b8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      piVar8 = (int *)thunk_FUN_01ee7388((long)plVar7 + uVar12 * *(uint *)(*plVar7 + 0x104) + 0x20,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) +
                                                    0x90) + 0x80));
      if (-1 < *piVar8) {
        if (lVar5 == 0) goto LAB_02efc5b4;
        uVar9 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar5,uVar12 & 0xffffffff,0);
        if ((uVar9 & 1) == 0) {
          plVar7 = *(long **)(param_1 + 0x18);
          if (plVar7 == (long *)0x0) goto LAB_02efc5b4;
          if (*(uint *)(plVar7 + 3) <= uVar12) goto LAB_02efc5b8;
          pvVar14 = (void *)thunk_FUN_01ee7388((long)plVar7 +
                                               uVar12 * *(uint *)(*plVar7 + 0x104) + 0x20,
                                               *(long *)(*(long *)(*(long *)(*(long *)(param_3 +
                                                                                      0x20) + 0xc0)
                                                                  + 0x90) + 0x80) + 0x40);
          memcpy(__dest,pvVar14,__n);
          lVar10 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
          local_78 = __dest;
          if (-1 < *(int *)(*(long *)(lVar10 + 0x98) + 0x28)) {
            local_78 = (undefined8 *)*__dest;
          }
          puVar13 = *(undefined8 **)(lVar10 + 0x148);
          (*(code *)puVar13[2])(*puVar13,puVar13,param_1,&local_78,auStack_70);
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar1 != uVar12);
  }
  if (*(long *)(alStack_90[1] + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


