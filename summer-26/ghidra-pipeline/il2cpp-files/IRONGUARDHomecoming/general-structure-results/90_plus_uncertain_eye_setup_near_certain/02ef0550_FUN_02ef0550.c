/*
FUNCTION_NAME: FUN_02ef0550
ENTRY_POINT: 02ef0550
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02ef0934) */

void FUN_02ef0550(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  undefined1 *__s;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((DAT_04831919 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    DAT_04831919 = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar5 = FUN_039dcc94((ulong)uVar1,0);
  uVar16 = (ulong)uVar5;
  if ((int)uVar5 < 0x65) {
    uVar16 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar16 << 2;
    if (uVar5 == 0) {
      __s = (undefined1 *)0x0;
    }
    else {
      __s = auStack_60 + -(uVar16 + 0xf & 0xfffffffffffffff0);
    }
    memset(__s,0,uVar16);
    lVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__
                              );
    FUN_039dcb20(lVar9,__s,uVar5,0);
  }
  else {
    uVar8 = FUN_01f08890(*(undefined8 *)
                          Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__,
                         uVar16);
    lVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__
                              );
    FUN_039dcb58(lVar9,uVar8,uVar16,0);
  }
  if (param_2 != (long *)0x0) {
    lVar13 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_01ecaf44(lVar13);
    }
    lVar14 = *param_2;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar13) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_02ef06e8;
        }
        uVar16 = uVar16 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(param_2,lVar13,0);
LAB_02ef06e8:
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar11 = (long *)(*(code *)*puVar10)(param_2,puVar10[1]);
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar13 = *plVar11;
      uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar16 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_02ef0758;
          }
          uVar16 = uVar16 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar4,0);
LAB_02ef0758:
      uVar16 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      if ((uVar16 & 1) == 0) {
        if (plVar11 == (long *)0x0) goto LAB_02ef0870;
        lVar13 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar16 == 0) goto LAB_02ef0848;
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_02ef0830;
      }
      lVar13 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_01ecaf44(lVar13);
      }
      lVar14 = *plVar11;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar13) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_02ef07d0;
          }
          uVar16 = uVar16 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar11,lVar13,0);
LAB_02ef07d0:
      uVar6 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      iVar7 = FUN_02ef09f0(param_1,uVar6,
                           *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x1d8));
      if (-1 < iVar7) {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_039dcb94(lVar9,iVar7,0);
      }
    } while( true );
  }
LAB_02ef0924:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar15 = piVar15 + 4;
    if (uVar16 == 0) break;
LAB_02ef0830:
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_02ef0864;
    }
  }
LAB_02ef0848:
  puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,0);
LAB_02ef0864:
  (*(code *)*puVar10)(plVar11,puVar10[1]);
LAB_02ef0870:
  if (0 < (int)uVar1) {
    uVar16 = 0;
    lVar13 = 0x20;
    do {
      lVar14 = *(long *)(param_1 + 0x18);
      if (lVar14 == 0) goto LAB_02ef0924;
      if (*(uint *)(lVar14 + 0x18) <= uVar16) {
LAB_02ef0928:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (-1 < *(int *)(lVar14 + lVar13)) {
        if (lVar9 == 0) goto LAB_02ef0924;
        uVar12 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar9,uVar16 & 0xffffffff,0);
        if ((uVar12 & 1) == 0) {
          lVar14 = *(long *)(param_1 + 0x18);
          if (lVar14 == 0) goto LAB_02ef0924;
          if (*(uint *)(lVar14 + 0x18) <= uVar16) goto LAB_02ef0928;
          FUN_02eed588(param_1,*(undefined4 *)(lVar14 + lVar13 + 8),
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x148));
        }
      }
      uVar16 = uVar16 + 1;
      lVar13 = lVar13 + 0xc;
    } while (uVar1 != uVar16);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


