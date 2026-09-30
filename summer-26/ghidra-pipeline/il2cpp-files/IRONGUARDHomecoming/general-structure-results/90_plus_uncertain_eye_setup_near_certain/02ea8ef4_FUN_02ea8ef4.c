/*
FUNCTION_NAME: FUN_02ea8ef4
ENTRY_POINT: 02ea8ef4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_14;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x02ea9398) */
/* WARNING: Removing unreachable block (ram,0x02ea946c) */

undefined8 FUN_02ea8ef4(long param_1,long *param_2,ulong param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  int iVar14;
  undefined1 *__s;
  int iVar15;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_048318c7 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    DAT_048318c7 = 1;
  }
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (long *)0x0) {
LAB_02ea9468:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar10 = *param_2;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar7) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02ea906c;
        }
        uVar13 = uVar13 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(param_2,lVar7,0);
LAB_02ea906c:
    plVar9 = (long *)(*(code *)*puVar8)(param_2,puVar8[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = *plVar9;
    lVar7 = *(long *)puVar2;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar7) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02ea90cc;
        }
        uVar13 = uVar13 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar9,lVar7,0);
LAB_02ea90cc:
    uVar13 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    if ((uVar13 & 1) == 0) {
      iVar14 = 0;
    }
    else {
      lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar10 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar7) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02ea93a8;
          }
          uVar13 = uVar13 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,lVar7,0);
LAB_02ea93a8:
      (*(code *)*puVar8)(plVar9,puVar8[1]);
      iVar14 = 1;
    }
    if (plVar9 != (long *)0x0) {
      lVar7 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar13 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar8 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02ea9414;
          }
          uVar13 = uVar13 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar9,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02ea9414:
      (*(code *)*puVar8)(plVar9,puVar8[1]);
    }
    iVar15 = 0;
  }
  else {
    uVar3 = FUN_039dcc94(*(undefined4 *)(param_1 + 0x24),0);
    uVar13 = (ulong)uVar3;
    if ((int)uVar3 < 0x65) {
      uVar13 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2;
      if (uVar3 == 0) {
        __s = (undefined1 *)0x0;
      }
      else {
        __s = auStack_70 + -(uVar13 + 0xf & 0xfffffffffffffff0);
      }
      memset(__s,0,uVar13);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__
                                );
      FUN_039dcb20(lVar7,__s,uVar3,0);
    }
    else {
      uVar6 = FUN_01f08890(*(undefined8 *)
                            Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__,
                           uVar13);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__
                                );
      FUN_039dcb58(lVar7,uVar6,uVar13,0);
    }
    if (param_2 == (long *)0x0) goto LAB_02ea9468;
    lVar10 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    lVar11 = *param_2;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar10) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02ea91e8;
        }
        uVar13 = uVar13 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(param_2,lVar10,0);
LAB_02ea91e8:
    plVar9 = (long *)(*(code *)*puVar8)(param_2,puVar8[1]);
    iVar15 = 0;
    iVar14 = 0;
LAB_02ea9200:
    do {
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = *plVar9;
      lVar10 = *(long *)puVar2;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar10) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02ea9250;
          }
          uVar13 = uVar13 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,lVar10,0);
LAB_02ea9250:
      uVar13 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      if ((uVar13 & 1) == 0) break;
      lVar10 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44(lVar10);
      }
      lVar11 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar10) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02ea92c8;
          }
          uVar13 = uVar13 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,lVar10,0);
LAB_02ea92c8:
      uVar4 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      iVar5 = FUN_02ea83b0(param_1,uVar4,
                           *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x1d8));
      if (-1 < iVar5) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar13 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar7,iVar5,0);
        if ((uVar13 & 1) == 0) {
          FUN_039dcb94(lVar7,iVar5,0);
          iVar15 = iVar15 + 1;
        }
        goto LAB_02ea9200;
      }
      iVar14 = iVar14 + 1;
    } while ((param_3 & 1) == 0);
    if (plVar9 != (long *)0x0) {
      lVar7 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar13 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar8 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02ea9388;
          }
          uVar13 = uVar13 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar9,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02ea9388:
      (*(code *)*puVar8)(plVar9,puVar8[1]);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT44(iVar14,iVar15);
}


