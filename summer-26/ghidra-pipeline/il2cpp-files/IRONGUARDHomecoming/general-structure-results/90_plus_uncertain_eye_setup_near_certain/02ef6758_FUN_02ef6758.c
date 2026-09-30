/*
FUNCTION_NAME: FUN_02ef6758
ENTRY_POINT: 02ef6758
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


/* WARNING: Removing unreachable block (ram,0x02ef6c04) */
/* WARNING: Removing unreachable block (ram,0x02ef6cd8) */

undefined8 FUN_02ef6758(long param_1,long *param_2,ulong param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  int iVar13;
  undefined1 *__s;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_04831929 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    DAT_04831929 = 1;
  }
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (long *)0x0) {
LAB_02ef6cd4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar9 = *param_2;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar6) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto FUN_02ef68d0;
        }
        uVar12 = uVar12 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(param_2,lVar6,0);
FUN_02ef68d0:
    plVar8 = (long *)(*(code *)*puVar7)(param_2,puVar7[1]);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *plVar8;
    lVar6 = *(long *)puVar2;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar6) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02ef6930;
        }
        uVar12 = uVar12 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar8,lVar6,0);
LAB_02ef6930:
    uVar12 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if ((uVar12 & 1) == 0) {
      iVar13 = 0;
    }
    else {
      lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      lVar9 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar6) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02ef6c14;
          }
          uVar12 = uVar12 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar8,lVar6,0);
LAB_02ef6c14:
      (*(code *)*puVar7)(plVar8,puVar7[1]);
      iVar13 = 1;
    }
    if (plVar8 != (long *)0x0) {
      lVar6 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar12 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar7 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02ef6c80;
          }
          uVar12 = uVar12 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar8,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02ef6c80:
      (*(code *)*puVar7)(plVar8,puVar7[1]);
    }
    iVar14 = 0;
  }
  else {
    uVar3 = FUN_039dcc94(*(undefined4 *)(param_1 + 0x24),0);
    uVar12 = (ulong)uVar3;
    if ((int)uVar3 < 0x65) {
      uVar12 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2;
      if (uVar3 == 0) {
        __s = (undefined1 *)0x0;
      }
      else {
        __s = auStack_70 + -(uVar12 + 0xf & 0xfffffffffffffff0);
      }
      memset(__s,0,uVar12);
      lVar6 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__
                                );
      FUN_039dcb20(lVar6,__s,uVar3,0);
    }
    else {
      uVar5 = FUN_01f08890(*(undefined8 *)
                            Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__,
                           uVar12);
      lVar6 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__
                                );
      FUN_039dcb58(lVar6,uVar5,uVar12,0);
    }
    if (param_2 == (long *)0x0) goto LAB_02ef6cd4;
    lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar10 = *param_2;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar9) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02ef6a4c;
        }
        uVar12 = uVar12 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(param_2,lVar9,0);
LAB_02ef6a4c:
    plVar8 = (long *)(*(code *)*puVar7)(param_2,puVar7[1]);
    iVar14 = 0;
    iVar13 = 0;
LAB_02ef6a64:
    do {
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = *plVar8;
      lVar9 = *(long *)puVar2;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar9) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02ef6ab4;
          }
          uVar12 = uVar12 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar8,lVar9,0);
LAB_02ef6ab4:
      uVar12 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      if ((uVar12 & 1) == 0) break;
      lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44(lVar9);
      }
      lVar10 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar9) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02ef6b2c;
          }
          uVar12 = uVar12 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar8,lVar9,0);
LAB_02ef6b2c:
      auVar15 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      iVar4 = FUN_02ef5ba8(param_1,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,
                           *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x1d8));
      if (-1 < iVar4) {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar12 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar6,iVar4,0);
        if ((uVar12 & 1) == 0) {
          FUN_039dcb94(lVar6,iVar4,0);
          iVar14 = iVar14 + 1;
        }
        goto LAB_02ef6a64;
      }
      iVar13 = iVar13 + 1;
    } while ((param_3 & 1) == 0);
    if (plVar8 != (long *)0x0) {
      lVar6 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar12 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar7 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02ef6bf4;
          }
          uVar12 = uVar12 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar8,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02ef6bf4:
      (*(code *)*puVar7)(plVar8,puVar7[1]);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT44(iVar13,iVar14);
}


