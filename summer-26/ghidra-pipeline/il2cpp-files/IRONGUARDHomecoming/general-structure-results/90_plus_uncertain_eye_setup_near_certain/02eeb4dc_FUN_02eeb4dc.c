/*
FUNCTION_NAME: FUN_02eeb4dc
ENTRY_POINT: 02eeb4dc
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


/* WARNING: Removing unreachable block (ram,0x02eeb8c0) */

void FUN_02eeb4dc(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  undefined1 *__s;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((DAT_0483190b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    DAT_0483190b = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar5 = FUN_039dcc94((ulong)uVar1,0);
  uVar15 = (ulong)uVar5;
  if ((int)uVar5 < 0x65) {
    uVar15 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
    if (uVar5 == 0) {
      __s = (undefined1 *)0x0;
    }
    else {
      __s = auStack_60 + -(uVar15 + 0xf & 0xfffffffffffffff0);
    }
    memset(__s,0,uVar15);
    lVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__
                              );
    FUN_039dcb20(lVar8,__s,uVar5,0);
  }
  else {
    uVar7 = FUN_01f08890(*(undefined8 *)
                          Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__,
                         uVar15);
    lVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__
                              );
    FUN_039dcb58(lVar8,uVar7,uVar15,0);
  }
  if (param_2 != (long *)0x0) {
    lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01ecaf44(lVar12);
    }
    lVar13 = *param_2;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar12) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_02eeb674;
        }
        uVar15 = uVar15 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(param_2,lVar12,0);
LAB_02eeb674:
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar10 = (long *)(*(code *)*puVar9)(param_2,puVar9[1]);
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar12 = *plVar10;
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02eeb6e4;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar4,0);
LAB_02eeb6e4:
      uVar15 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if ((uVar15 & 1) == 0) {
        if (plVar10 == (long *)0x0) goto LAB_02eeb7fc;
        lVar12 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar15 == 0) goto LAB_02eeb7d4;
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_02eeb7bc;
      }
      lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01ecaf44(lVar12);
      }
      lVar13 = *plVar10;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar12) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02eeb75c;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar12,0);
LAB_02eeb75c:
      uVar7 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      iVar6 = FUN_02eeb97c(param_1,uVar7,
                           *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x1d8));
      if (-1 < iVar6) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_039dcb94(lVar8,iVar6,0);
      }
    } while( true );
  }
LAB_02eeb8b0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar14 = piVar14 + 4;
    if (uVar15 == 0) break;
LAB_02eeb7bc:
    if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_02eeb7f0;
    }
  }
LAB_02eeb7d4:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,0);
LAB_02eeb7f0:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_02eeb7fc:
  if (0 < (int)uVar1) {
    uVar15 = 0;
    lVar12 = 0x20;
    do {
      lVar13 = *(long *)(param_1 + 0x18);
      if (lVar13 == 0) goto LAB_02eeb8b0;
      if (*(uint *)(lVar13 + 0x18) <= uVar15) {
LAB_02eeb8b4:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (-1 < *(int *)(lVar13 + lVar12)) {
        if (lVar8 == 0) goto LAB_02eeb8b0;
        uVar11 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar8,uVar15 & 0xffffffff,0);
        if ((uVar11 & 1) == 0) {
          lVar13 = *(long *)(param_1 + 0x18);
          if (lVar13 == 0) goto LAB_02eeb8b0;
          if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_02eeb8b4;
          FUN_02ee84d0(param_1,*(undefined8 *)(lVar13 + lVar12 + 8),
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x148));
        }
      }
      uVar15 = uVar15 + 1;
      lVar12 = lVar12 + 0x10;
    } while (uVar1 != uVar15);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


