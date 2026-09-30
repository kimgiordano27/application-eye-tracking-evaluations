/*
FUNCTION_NAME: System.Array.InternalEnumerator<SplineInstantiate.InstantiableItem>$$.ctor
ENTRY_POINT: 02ea7f40
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02ea82f4) */

void System_Array_InternalEnumerator<SplineInstantiate_InstantiableItem>___ctor
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x23;
  ulong uVar15;
  undefined1 *__s;
  long unaff_x26;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  if ((*(byte *)(unaff_x21 + 0x8c5) & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    *(undefined1 *)(unaff_x21 + 0x8c5) = 1;
  }
  uVar1 = *(uint *)(param_2 + 0x24);
  uVar4 = FUN_039dcc94((ulong)uVar1,0);
  uVar15 = (ulong)uVar4;
  if ((int)uVar4 < 0x65) {
    uVar15 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
    if (uVar4 == 0) {
      __s = (undefined1 *)0x0;
    }
    else {
      __s = &stack0x00000000 + -(uVar15 + 0xf & 0xfffffffffffffff0);
    }
    memset(__s,0,uVar15);
    lVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__
                              );
    FUN_039dcb20(lVar8,__s,uVar4,0);
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
  if (unaff_x23 != (long *)0x0) {
    lVar12 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01ecaf44(lVar12);
    }
    lVar13 = *unaff_x23;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar12) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_02ea80a8;
        }
        uVar15 = uVar15 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238();
LAB_02ea80a8:
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar10 = (long *)(*(code *)*puVar9)();
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
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
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02ea8118;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,0);
LAB_02ea8118:
      uVar15 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if ((uVar15 & 1) == 0) {
        if (plVar10 == (long *)0x0) goto LAB_02ea8230;
        lVar12 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar15 == 0) goto LAB_02ea8208;
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_02ea81f0;
      }
      lVar12 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
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
            goto LAB_02ea8190;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar12,0);
LAB_02ea8190:
      uVar5 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      iVar6 = FUN_02ea83b0(param_2,uVar5,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x1d8));
      if (-1 < iVar6) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_039dcb94(lVar8,iVar6,0);
      }
    } while( true );
  }
LAB_02ea82e4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar14 = piVar14 + 4;
    if (uVar15 == 0) break;
LAB_02ea81f0:
    if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_02ea8224;
    }
  }
LAB_02ea8208:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_02ea8224:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_02ea8230:
  if (0 < (int)uVar1) {
    uVar15 = 0;
    lVar12 = 0x20;
    do {
      lVar13 = *(long *)(param_2 + 0x18);
      if (lVar13 == 0) goto LAB_02ea82e4;
      if (*(uint *)(lVar13 + 0x18) <= uVar15) {
LAB_02ea82e8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (-1 < *(int *)(lVar13 + lVar12)) {
        if (lVar8 == 0) goto LAB_02ea82e4;
        uVar11 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar8,uVar15 & 0xffffffff,0);
        if ((uVar11 & 1) == 0) {
          lVar13 = *(long *)(param_2 + 0x18);
          if (lVar13 == 0) goto LAB_02ea82e4;
          if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_02ea82e8;
          FUN_02ea4f4c(param_2,*(undefined2 *)(lVar13 + lVar12 + 8),
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x148));
        }
      }
      uVar15 = uVar15 + 1;
      lVar12 = lVar12 + 0xc;
    } while (uVar1 != uVar15);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


