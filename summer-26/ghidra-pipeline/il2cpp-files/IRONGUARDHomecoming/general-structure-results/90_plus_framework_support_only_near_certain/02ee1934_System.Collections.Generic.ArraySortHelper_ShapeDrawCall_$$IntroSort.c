/*
FUNCTION_NAME: System.Collections.Generic.ArraySortHelper<ShapeDrawCall>$$IntroSort
ENTRY_POINT: 02ee1934
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02ee1cf8) */
/* WARNING: Removing unreachable block (ram,0x02ee1da8) */

void System_Collections_Generic_ArraySortHelper<ShapeDrawCall>__IntroSort
               (undefined8 param_1,long param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  long unaff_x21;
  ulong uVar16;
  undefined1 *puVar17;
  long unaff_x27;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  if ((*(byte *)(unaff_x21 + 0x8f0) & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    *(undefined1 *)(unaff_x21 + 0x8f0) = 1;
  }
  *(undefined4 *)(unaff_x29 + -0xc) = 0;
  puVar4 = Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__;
  uVar1 = *(uint *)(param_2 + 0x24);
  uVar5 = FUN_039dcc94((ulong)uVar1,0);
  puVar3 = Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__;
  uVar16 = (ulong)uVar5;
  if ((int)uVar5 < 0x33) {
    uVar16 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar16 << 2;
    if (uVar5 == 0) {
      puVar17 = (undefined1 *)0x0;
    }
    else {
      register0x00000008 = (BADSPACEBASE *)(&stack0x00000000 + -(uVar16 + 0xf & 0xfffffffffffffff0))
      ;
      puVar17 = (undefined1 *)register0x00000008;
    }
    memset(puVar17,0,uVar16);
    lVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
    FUN_039dcb20(lVar8,puVar17,uVar5,0);
    if (uVar5 == 0) {
      puVar17 = (undefined1 *)0x0;
    }
    else {
      puVar17 = (undefined1 *)((long)register0x00000008 + -(uVar16 + 0xf & 0xfffffffffffffff0));
    }
    memset(puVar17,0,uVar16);
    lVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
    FUN_039dcb20(lVar9,puVar17,uVar5,0);
  }
  else {
    uVar7 = FUN_01f08890(*(undefined8 *)
                          Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__,
                         uVar16);
    lVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
    FUN_039dcb58(lVar8,uVar7,uVar16,0);
    uVar7 = FUN_01f08890(*(undefined8 *)puVar3,uVar16);
    lVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
    FUN_039dcb58(lVar9,uVar7,uVar16,0);
  }
  if (param_3 != (long *)0x0) {
    lVar13 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_01ecaf44(lVar13);
    }
    lVar14 = *param_3;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar13) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_02ee1b1c;
        }
        uVar16 = uVar16 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(param_3,lVar13,0);
LAB_02ee1b1c:
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar11 = (long *)(*(code *)*puVar10)(param_3,puVar10[1]);
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
            goto LAB_02ee1b8c;
          }
          uVar16 = uVar16 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar4,0);
LAB_02ee1b8c:
      uVar16 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      if ((uVar16 & 1) == 0) {
        if (plVar11 == (long *)0x0) goto LAB_02ee1cec;
        lVar9 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar16 == 0) goto LAB_02ee1cc4;
        piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_02ee1cac;
      }
      lVar13 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
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
            goto LAB_02ee1c04;
          }
          uVar16 = uVar16 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar11,lVar13,0);
LAB_02ee1c04:
      uVar6 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      *(undefined4 *)(unaff_x29 + -0xc) = 0;
      uVar16 = FUN_02ee1e7c(param_2,uVar6,unaff_x29 + -0xc,
                            *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x1e0));
      iVar2 = *(int *)(unaff_x29 + -0xc);
      if ((uVar16 & 1) == 0) {
        if (iVar2 < (int)uVar1) {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar16 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar9,iVar2,0);
          if ((uVar16 & 1) == 0) {
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_039dcb94(lVar8,iVar2,0);
          }
        }
      }
      else {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_039dcb94(lVar9,iVar2,0);
      }
    } while( true );
  }
LAB_02ee1d94:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar15 = piVar15 + 4;
    if (uVar16 == 0) break;
LAB_02ee1cac:
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_02ee1ce0;
    }
  }
LAB_02ee1cc4:
  puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,0);
LAB_02ee1ce0:
  (*(code *)*puVar10)(plVar11,puVar10[1]);
LAB_02ee1cec:
  if (0 < (int)uVar1) {
    if (lVar8 == 0) goto LAB_02ee1d94;
    uVar16 = 0;
    lVar9 = 0x28;
    do {
      uVar12 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar8,uVar16 & 0xffffffff,0);
      if ((uVar12 & 1) != 0) {
        lVar13 = *(long *)(param_2 + 0x18);
        if (lVar13 == 0) goto LAB_02ee1d94;
        if (*(uint *)(lVar13 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        FUN_02ede1a4(param_2,*(undefined4 *)(lVar13 + lVar9),
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x148));
      }
      uVar16 = uVar16 + 1;
      lVar9 = lVar9 + 0xc;
    } while (uVar1 != uVar16);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


