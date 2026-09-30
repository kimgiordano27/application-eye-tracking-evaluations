/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<int,-float>$$System.Collections.ICollection.CopyTo
ENTRY_POINT: 02ef5770
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02ef5aec) */

void System_Collections_Generic_Dictionary_KeyCollection<int,_float>__System_Collections_ICollection_CopyTo
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined1 in_w8;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  ulong uVar14;
  undefined1 *__s;
  long unaff_x26;
  long unaff_x29;
  
  *(undefined1 *)(unaff_x21 + 0x927) = in_w8;
  uVar1 = *(uint *)(unaff_x20 + 0x24);
  uVar4 = FUN_039dcc94((ulong)uVar1,0);
  uVar14 = (ulong)uVar4;
  if ((int)uVar4 < 0x65) {
    uVar14 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar14 << 2;
    if (uVar4 == 0) {
      __s = (undefined1 *)0x0;
    }
    else {
      __s = &stack0x00000000 + -(uVar14 + 0xf & 0xfffffffffffffff0);
    }
    memset(__s,0,uVar14);
    lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__
                              );
    FUN_039dcb20(lVar7,__s,uVar4,0);
  }
  else {
    uVar6 = FUN_01f08890(*(undefined8 *)
                          Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__,
                         uVar14);
    lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Dynamic_Utils_ExpressionUtils_SameElements<CatchBlock>__
                              );
    FUN_039dcb58(lVar7,uVar6,uVar14,0);
  }
  if (unaff_x23 != (long *)0x0) {
    lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01ecaf44(lVar11);
    }
    lVar12 = *unaff_x23;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar11) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02ef5894;
        }
        uVar14 = uVar14 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238();
LAB_02ef5894:
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar9 = (long *)(*(code *)*puVar8)();
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar11 = *plVar9;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_02ef5904;
          }
          uVar14 = uVar14 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_02ef5904:
      uVar14 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      if ((uVar14 & 1) == 0) {
        if (plVar9 == (long *)0x0) goto LAB_02ef5a24;
        lVar11 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 == 0) goto LAB_02ef59fc;
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_02ef59e4;
      }
      lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01ecaf44(lVar11);
      }
      lVar12 = *plVar9;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar11) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_02ef597c;
          }
          uVar14 = uVar14 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,lVar11,0);
LAB_02ef597c:
      (*(code *)*puVar8)(plVar9,puVar8[1]);
      iVar5 = FUN_02ef5ba8();
      if (-1 < iVar5) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_039dcb94(lVar7,iVar5,0);
      }
    } while( true );
  }
LAB_02ef5adc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar13 = piVar13 + 4;
    if (uVar14 == 0) break;
LAB_02ef59e4:
    if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_02ef5a18;
    }
  }
LAB_02ef59fc:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_02ef5a18:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
LAB_02ef5a24:
  if (0 < (int)uVar1) {
    uVar14 = 0;
    lVar11 = 0x20;
    do {
      lVar12 = *(long *)(unaff_x20 + 0x18);
      if (lVar12 == 0) goto LAB_02ef5adc;
      if (*(uint *)(lVar12 + 0x18) <= uVar14) {
LAB_02ef5ae0:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (-1 < *(int *)(lVar12 + lVar11)) {
        if (lVar7 == 0) goto LAB_02ef5adc;
        uVar10 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar7,uVar14 & 0xffffffff,0);
        if ((uVar10 & 1) == 0) {
          if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_02ef5adc;
          if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar14) goto LAB_02ef5ae0;
          FUN_02ef263c();
        }
      }
      uVar14 = uVar14 + 1;
      lVar11 = lVar11 + 0x14;
    } while (uVar1 != uVar14);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


