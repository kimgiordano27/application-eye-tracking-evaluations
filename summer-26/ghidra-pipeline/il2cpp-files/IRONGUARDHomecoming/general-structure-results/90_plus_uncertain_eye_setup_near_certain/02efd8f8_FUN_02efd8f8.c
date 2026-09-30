/*
FUNCTION_NAME: FUN_02efd8f8
ENTRY_POINT: 02efd8f8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_20;functionality_eye_api_context_without_clear_sink_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x02efde54) */
/* WARNING: Removing unreachable block (ram,0x02efdf38) */

undefined8 FUN_02efd8f8(long param_1,long *param_2,uint param_3,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  long lVar11;
  void *__s;
  int iVar12;
  ulong __n;
  undefined8 *puVar13;
  void *__s_00;
  long alStack_90 [2];
  uint local_80;
  int local_7c;
  undefined8 *local_78;
  int local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 02efd92c to 02ffd9fb has its CatchHandler @ 02efd92c
                       catch() { ... } // from try @ 02efd92c with catch @ 02efd92c
                       catch() { ... } // from try @ 02efda1c with catch @ 02efd92c
                       catch() { ... } // from try @ 02efdacc with catch @ 02efd92c
                       catch() { ... } // from try @ 02efdaf4 with catch @ 02efd92c
                       catch() { ... } // from try @ 02efdb34 with catch @ 02efd92c */
  local_80 = param_3;
  if ((DAT_04831937 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    DAT_04831937 = 1;
  }
  lVar11 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar11 + 0x98) + 0xfc);
  uVar8 = __n + 0xf & 0x1fffffff0;
  puVar6 = (undefined8 *)((long)alStack_90 - uVar8);
  puVar13 = (undefined8 *)((long)puVar6 - uVar8);
  __s_00 = (void *)((long)puVar13 - uVar8);
  memset(__s_00,0,__n);
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (long *)0x0) {
LAB_02efdf34:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar11 = *(long *)(lVar11 + 0x38);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01ecaf44(lVar11);
    }
    lVar7 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar11) {
          puVar13 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02efdab0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar13 = (undefined8 *)FUN_01ecb238(param_2,lVar11,0);
LAB_02efdab0:
    plVar5 = (long *)(*(code *)*puVar13)(param_2,puVar13[1]);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar11 = *plVar5;
                    /* try { // try from 02efdac8 to 02ffdacb has its CatchHandler @ 02efdad0 */
                    /* try { // try from 02efdacc to 02ffdaef has its CatchHandler @ 02efd92c */
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02efdac8 with catch @ 02efdad0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02efda10 with catch @ 02efdad4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02efd9fc with catch @ 02efdad8
                        */
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02efdb18;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar13 = (undefined8 *)
              FUN_01ecb238(plVar5,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                           ,0);
LAB_02efdb18:
    uVar8 = (*(code *)*puVar13)(plVar5,puVar13[1]);
    if ((uVar8 & 1) == 0) {
      iVar10 = 0;
    }
    else {
      lVar11 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01ecaf44(lVar11);
      }
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar11) {
            lVar11 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
            goto LAB_02efde64;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      lVar11 = FUN_01ecb238(plVar5,lVar11,0);
LAB_02efde64:
      lVar11 = *(long *)(lVar11 + 8);
      local_78 = puVar6;
      (**(code **)(lVar11 + 0x10))(*(undefined8 *)(lVar11 + 8),lVar11,plVar5,&local_78,puVar6);
      iVar10 = 1;
    }
    if (plVar5 != (long *)0x0) {
      lVar11 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02efdee0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02efdee0:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
    iVar12 = 0;
  }
  else {
    uVar1 = FUN_039dcc94(*(undefined4 *)(param_1 + 0x24),0);
    uVar8 = (ulong)uVar1;
    alStack_90[1] = lVar3;
    if ((int)uVar1 < 0x65) {
      uVar8 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | uVar8 << 2;
      if (uVar1 == 0) {
        __s = (void *)0x0;
      }
      else {
        __s = (void *)((long)__s_00 - (uVar8 + 0xf & 0xfffffffffffffff0));
      }
      memset(__s,0,uVar8);
      lVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__
                                );
      FUN_039dcb20(lVar3,__s,uVar1,0);
    }
    else {
      uVar2 = FUN_01f08890(*(undefined8 *)
                            Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__,
                           uVar8);
                    /* try { // try from 02efd9fc to 02ffda03 has its CatchHandler @ 02efdad8 */
                    /* try { // try from 02efda10 to 02ffda1b has its CatchHandler @ 02efdad4 */
      lVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__
                                );
                    /* try { // try from 02efda1c to 02ffdac7 has its CatchHandler @ 02efd92c */
      FUN_039dcb58(lVar3,uVar2,uVar8,0);
    }
    if (param_2 == (long *)0x0) goto LAB_02efdf34;
    lVar11 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01ecaf44(lVar11);
    }
    lVar7 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar11) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02efdc34;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(param_2,lVar11,0);
LAB_02efdc34:
    plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
    iVar10 = 0;
    local_7c = 0;
LAB_02efdc4c:
    do {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar4 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02efdca4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_02efdca4:
      uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar8 & 1) == 0) break;
      lVar11 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01ecaf44(lVar11);
      }
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar11) {
            lVar11 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
            goto LAB_02efdd1c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      lVar11 = FUN_01ecb238(plVar5,lVar11,0);
LAB_02efdd1c:
      lVar11 = *(long *)(lVar11 + 8);
      local_78 = puVar6;
      (**(code **)(lVar11 + 0x10))(*(undefined8 *)(lVar11 + 8),lVar11,plVar5,&local_78,puVar6);
      memcpy(__s_00,puVar6,__n);
      memcpy(puVar13,__s_00,__n);
      lVar11 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
      local_78 = puVar13;
      if (-1 < *(int *)(*(long *)(lVar11 + 0x98) + 0x28)) {
        local_78 = (undefined8 *)*puVar13;
      }
      puVar4 = *(undefined8 **)(lVar11 + 0x1d8);
      (*(code *)puVar4[2])(*puVar4,puVar4,param_1,&local_78,&local_6c);
      iVar12 = local_6c;
      if (-1 < local_6c) {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar8 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar3,local_6c,0);
        if ((uVar8 & 1) == 0) {
          FUN_039dcb94(lVar3,iVar12,0);
          local_7c = local_7c + 1;
        }
        goto LAB_02efdc4c;
      }
      iVar10 = iVar10 + 1;
    } while ((local_80 & 1) == 0);
    iVar12 = local_7c;
    lVar3 = alStack_90[1];
    if (plVar5 != (long *)0x0) {
      lVar11 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02efde44;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02efde44:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT44(iVar10,iVar12);
}


