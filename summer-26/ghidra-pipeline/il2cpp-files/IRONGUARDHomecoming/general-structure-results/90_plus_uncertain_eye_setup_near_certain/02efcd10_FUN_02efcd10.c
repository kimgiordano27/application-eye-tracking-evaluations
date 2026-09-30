/*
FUNCTION_NAME: FUN_02efcd10
ENTRY_POINT: 02efcd10
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02efd1ac) */
/* WARNING: Removing unreachable block (ram,0x02efd2b8) */

void FUN_02efcd10(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  void *pvVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  ulong __n;
  undefined8 *__dest;
  undefined1 *__s;
  ulong uVar15;
  undefined8 *puVar16;
  undefined1 *__s_00;
  long alStack_c0 [2];
  long *local_b0;
  long local_a8;
  ulong local_a0;
  int local_94;
  undefined8 *local_90;
  undefined1 auStack_84 [4];
  undefined8 *local_80;
  int *piStack_78;
  char local_6c [4];
  long local_68;
  
  alStack_c0[1] = tpidr_el0;
  local_68 = *(long *)(alStack_c0[1] + 0x28);
  local_b0 = param_2;
  if ((DAT_04831936 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* try { // try from 02efcd74 to 02ffce43 has its CatchHandler @ 02efcd74
                       catch() { ... } // from try @ 02efcd74 with catch @ 02efcd74
                       catch() { ... } // from try @ 02efce64 with catch @ 02efcd74
                       catch() { ... } // from try @ 02efcf14 with catch @ 02efcd74
                       catch() { ... } // from try @ 02efcf3c with catch @ 02efcd74
                       catch() { ... } // from try @ 02efcf7c with catch @ 02efcd74 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    DAT_04831936 = 1;
  }
  puVar2 = Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__;
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x98) + 0xfc);
  uVar13 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)((long)alStack_c0 - uVar13);
  puVar16 = (undefined8 *)((long)__dest - uVar13);
  __s_00 = (undefined1 *)((long)puVar16 - uVar13);
  memset(__s_00,0,__n);
  local_94 = 0;
  local_a0 = (ulong)*(uint *)(param_1 + 0x24);
  uVar4 = FUN_039dcc94(local_a0,0);
  puVar1 = Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__;
  uVar13 = (ulong)uVar4;
  if ((int)uVar4 < 0x33) {
    uVar13 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2;
    if (uVar4 == 0) {
      __s = (undefined1 *)0x0;
      puVar3 = __s_00;
    }
    else {
      __s = __s_00 + -(uVar13 + 0xf & 0xfffffffffffffff0);
      puVar3 = __s;
    }
    memset(__s,0,uVar13);
    local_a8 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    FUN_039dcb20(local_a8,__s,uVar4,0);
    if (uVar4 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = puVar3 + -(uVar13 + 0xf & 0xfffffffffffffff0);
    }
    memset(pvVar10,0,uVar13);
    lVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    FUN_039dcb20(lVar6,pvVar10,uVar4,0);
  }
  else {
    uVar5 = FUN_01f08890(*(undefined8 *)
                          Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__,
                         uVar13);
    local_a8 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    FUN_039dcb58(local_a8,uVar5,uVar13,0);
    uVar5 = FUN_01f08890(*(undefined8 *)puVar1,uVar13);
    lVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    FUN_039dcb58(lVar6,uVar5,uVar13,0);
  }
  plVar8 = local_b0;
  if (local_b0 != (long *)0x0) {
    lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01ecaf44(lVar11);
    }
    lVar12 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_02efcf78;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar8,lVar11,0);
LAB_02efcf78:
    plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar11 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02efcfe4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_02efcfe4:
      uVar13 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      if ((uVar13 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_02efd19c;
        lVar6 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar13 == 0) goto LAB_02efd174;
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_02efd15c;
      }
      lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01ecaf44(lVar11);
      }
      lVar12 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            lVar11 = lVar12 + (long)*piVar14 * 0x10 + 0x138;
            goto LAB_02efd05c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      lVar11 = FUN_01ecb238(plVar8,lVar11,0);
LAB_02efd05c:
      lVar11 = *(long *)(lVar11 + 8);
      local_90 = __dest;
      (**(code **)(lVar11 + 0x10))(*(undefined8 *)(lVar11 + 8),lVar11,plVar8,&local_90,__dest);
      memcpy(__s_00,__dest,__n);
      local_94 = 0;
      memcpy(puVar16,__s_00,__n);
      lVar11 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
      local_80 = puVar16;
      if (-1 < *(int *)(*(long *)(lVar11 + 0x98) + 0x28)) {
        local_80 = (undefined8 *)*puVar16;
      }
      puVar7 = *(undefined8 **)(lVar11 + 0x1e0);
      piStack_78 = &local_94;
      (*(code *)puVar7[2])(*puVar7,puVar7,param_1,&local_80,local_6c);
      if (local_6c[0] == '\0') {
        if (local_94 < (int)local_a0) {
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar13 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar6,local_94,0);
          if ((uVar13 & 1) == 0) {
            if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_039dcb94(local_a8,local_94,0);
          }
        }
      }
      else {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_039dcb94(lVar6,local_94,0);
      }
    } while( true );
  }
LAB_02efd2a4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_02efd15c:
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar16 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_02efd190;
    }
  }
LAB_02efd174:
  puVar16 = (undefined8 *)
            FUN_01ecb238(plVar8,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_02efd190:
  (*(code *)*puVar16)(plVar8,puVar16[1]);
LAB_02efd19c:
  uVar13 = local_a0;
  lVar6 = local_a8;
  if (0 < (int)local_a0) {
    if (local_a8 == 0) goto LAB_02efd2a4;
    uVar15 = 0;
    do {
      uVar9 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar6,uVar15 & 0xffffffff,0);
      if ((uVar9 & 1) != 0) {
        plVar8 = *(long **)(param_1 + 0x18);
        if (plVar8 == (long *)0x0) goto LAB_02efd2a4;
        if (*(uint *)(plVar8 + 3) <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        pvVar10 = (void *)thunk_FUN_01ee7388((long)plVar8 +
                                             uVar15 * *(uint *)(*plVar8 + 0x104) + 0x20,
                                             *(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20)
                                                                          + 0xc0) + 0x90) + 0x80) +
                                             0x40);
        memcpy(__dest,pvVar10,__n);
        lVar11 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
        local_90 = __dest;
        if (-1 < *(int *)(*(long *)(lVar11 + 0x98) + 0x28)) {
          local_90 = (undefined8 *)*__dest;
        }
        puVar16 = *(undefined8 **)(lVar11 + 0x148);
        (*(code *)puVar16[2])(*puVar16,puVar16,param_1,&local_90,auStack_84);
      }
      uVar15 = uVar15 + 1;
    } while (uVar13 != uVar15);
  }
  if (*(long *)(alStack_c0[1] + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


