/*
FUNCTION_NAME: System.Collections.Generic.ArraySortHelper<RuleMatcher>$$get_Default
ENTRY_POINT: 02edc918
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02edcc7c) */
/* WARNING: Removing unreachable block (ram,0x02edcd2c) */

void System_Collections_Generic_ArraySortHelper<RuleMatcher>__get_Default(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x23;
  ulong uVar14;
  undefined1 *puVar15;
  long unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  uVar4 = FUN_039dcc94(unaff_x21 & 0xffffffff);
  puVar2 = Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__;
  uVar14 = (ulong)uVar4;
  if ((int)uVar4 < 0x33) {
    uVar14 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar14 << 2;
    if (uVar4 == 0) {
      puVar15 = (undefined1 *)0x0;
    }
    else {
      register0x00000008 = (BADSPACEBASE *)(&stack0x00000000 + -(uVar14 + 0xf & 0xfffffffffffffff0))
      ;
      puVar15 = (undefined1 *)register0x00000008;
    }
    memset(puVar15,0,uVar14);
    lVar6 = thunk_FUN_01f117cc(*unaff_x28);
    FUN_039dcb20(lVar6,puVar15,uVar4,0);
    if (uVar4 == 0) {
      puVar15 = (undefined1 *)0x0;
    }
    else {
      puVar15 = (undefined1 *)((long)register0x00000008 + -(uVar14 + 0xf & 0xfffffffffffffff0));
    }
    memset(puVar15,0,uVar14);
    lVar7 = thunk_FUN_01f117cc(*unaff_x28);
    FUN_039dcb20(lVar7,puVar15,uVar4,0);
  }
  else {
    uVar5 = FUN_01f08890(*(undefined8 *)
                          Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__,
                         uVar14);
    lVar6 = thunk_FUN_01f117cc(*unaff_x28);
    FUN_039dcb58(lVar6,uVar5,uVar14,0);
    uVar5 = FUN_01f08890(*(undefined8 *)puVar2,uVar14);
    lVar7 = thunk_FUN_01f117cc(*unaff_x28);
    FUN_039dcb58(lVar7,uVar5,uVar14,0);
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
          goto LAB_02edcaa0;
        }
        uVar14 = uVar14 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238();
LAB_02edcaa0:
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
            goto LAB_02edcb10;
          }
          uVar14 = uVar14 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_02edcb10:
      uVar14 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      if ((uVar14 & 1) == 0) {
        if (plVar9 == (long *)0x0) goto LAB_02edcc70;
        lVar7 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar14 == 0) goto LAB_02edcc48;
        piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_02edcc30;
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
            goto LAB_02edcb88;
          }
          uVar14 = uVar14 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,lVar11,0);
LAB_02edcb88:
      (*(code *)*puVar8)(plVar9,puVar8[1]);
      *(undefined4 *)(unaff_x29 + -0xc) = 0;
      uVar14 = FUN_02edce00();
      iVar1 = *(int *)(unaff_x29 + -0xc);
      if ((uVar14 & 1) == 0) {
        if (iVar1 < (int)unaff_x21) {
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar14 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar7,iVar1,0);
          if ((uVar14 & 1) == 0) {
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_039dcb94(lVar6,iVar1,0);
          }
        }
      }
      else {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_039dcb94(lVar7,iVar1,0);
      }
    } while( true );
  }
LAB_02edcd18:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar13 = piVar13 + 4;
    if (uVar14 == 0) break;
LAB_02edcc30:
    if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
      puVar8 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_02edcc64;
    }
  }
LAB_02edcc48:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_02edcc64:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
LAB_02edcc70:
  if (0 < (int)unaff_x21) {
    if (lVar6 == 0) goto LAB_02edcd18;
    uVar14 = 0;
    do {
      uVar10 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar6,uVar14 & 0xffffffff,0);
      if ((uVar10 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_02edcd18;
        if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        FUN_02ed9128();
      }
      uVar14 = uVar14 + 1;
    } while (unaff_x21 != uVar14);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


