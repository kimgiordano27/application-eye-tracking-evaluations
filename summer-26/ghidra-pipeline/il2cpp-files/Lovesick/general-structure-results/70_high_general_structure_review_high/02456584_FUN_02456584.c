/*
FUNCTION_NAME: FUN_02456584
ENTRY_POINT: 02456584
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_8
*/


void FUN_02456584(long param_1,int param_2,int param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  float fVar15;
  
  if ((DAT_037824cf & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Vector3>__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_037824cf = 1;
  }
  if (param_3 < 4) {
    param_3 = 3;
  }
  if (3 < param_3) {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_02456970;
    FUN_02452b54(*(long *)(param_1 + 0x10),param_3);
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if ((lVar7 != 0) && (lVar8 = *(long *)(lVar7 + 0x10), lVar8 != 0)) {
    plVar2 = (long *)System_Threading_Timer_TimerComparer_TypeInfo;
    puVar3 = (undefined8 *)
             Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Vector3>__
    ;
    puVar4 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
    for (lVar9 = *(long *)(lVar8 + 0x18);
        System_Threading_Timer_TimerComparer_TypeInfo = (undefined *)plVar2,
        Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Vector3>__
             = (undefined *)puVar3,
        Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__ = (undefined *)puVar4, lVar9 != lVar8;
        lVar9 = *(long *)(lVar9 + 0x18)) {
      if (lVar9 == 0) goto LAB_02456970;
      *(undefined4 *)(lVar9 + 0x40) = 0xffffffff;
      plVar2 = (long *)System_Threading_Timer_TimerComparer_TypeInfo;
      puVar3 = (undefined8 *)
               Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<Vector3>__
      ;
      puVar4 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
    }
    lVar8 = *(long *)(lVar7 + 0x18);
    if (lVar8 != 0) {
      iVar13 = 0;
      iVar11 = 0;
      do {
        lVar8 = *(long *)(lVar8 + 0x18);
        if (lVar8 == *(long *)(lVar7 + 0x18)) {
          *(int *)(param_1 + 0x88) = iVar13;
          uVar5 = FUN_00da4fb8(*puVar4,(iVar13 << (param_2 == 1)) * param_3);
          *(undefined8 *)(param_1 + 0x80) = uVar5;
          *(int *)(param_1 + 0x78) = iVar11;
          lVar8 = FUN_00da4fb8(*puVar3,iVar11);
          lVar7 = *(long *)(param_1 + 0x10);
          *(long *)(param_1 + 0x70) = lVar8;
          if (lVar7 != 0) {
            lVar9 = *(long *)(lVar7 + 0x10);
            lVar10 = lVar9;
            goto joined_r0x0245674c;
          }
          break;
        }
        if (lVar8 == 0) break;
        *(undefined4 *)(lVar8 + 0x30) = 0xffffffff;
        if (*(char *)(lVar8 + 0x35) != '\0') {
          if (*(char *)(param_1 + 0x98) != '\0') {
            fVar15 = (float)FUN_02453144(lVar8);
            if (*(int *)(*plVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (ABS(fVar15) < 1.4013e-45) goto LAB_02456700;
          }
          lVar9 = *(long *)(lVar8 + 0x20);
          lVar7 = lVar9;
          do {
            if ((lVar7 == 0) || (lVar10 = *(long *)(lVar7 + 0x40), lVar10 == 0)) goto LAB_02456970;
            if (*(int *)(lVar10 + 0x40) == -1) {
              *(int *)(lVar10 + 0x40) = iVar11;
              iVar11 = iVar11 + 1;
            }
            lVar7 = *(long *)(lVar7 + 0x38);
          } while (lVar7 != lVar9);
          *(int *)(lVar8 + 0x30) = iVar13;
          iVar13 = iVar13 + 1;
        }
LAB_02456700:
        lVar7 = *(long *)(param_1 + 0x10);
      } while (lVar7 != 0);
    }
  }
  goto LAB_02456970;
joined_r0x0245674c:
  if (lVar10 != 0) {
    lVar9 = *(long *)(lVar9 + 0x18);
    if (lVar9 == *(long *)(lVar7 + 0x10)) {
      lVar9 = *(long *)(lVar7 + 0x18);
      if (lVar9 != 0) {
        uVar12 = 0;
        goto LAB_024567f4;
      }
      goto LAB_02456970;
    }
    if (lVar9 == 0) goto LAB_02456970;
    uVar12 = *(uint *)(lVar9 + 0x40);
    lVar10 = lVar7;
    if (uVar12 != 0xffffffff) {
      if (lVar8 == 0) goto LAB_02456970;
      uVar5 = *(undefined8 *)(lVar9 + 0x28);
      if (*(uint *)(lVar8 + 0x18) <= uVar12) {
LAB_02456998:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar8 = lVar8 + (long)(int)uVar12 * 0x18;
      *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)(lVar9 + 0x30);
      *(undefined8 *)(lVar8 + 0x20) = uVar5;
      lVar8 = *(long *)(param_1 + 0x70);
      if (lVar8 == 0) goto LAB_02456970;
      if (*(uint *)(lVar8 + 0x18) <= *(uint *)(lVar9 + 0x40)) goto LAB_02456998;
      *(undefined8 *)(lVar8 + (long)(int)*(uint *)(lVar9 + 0x40) * 0x18 + 0x30) =
           *(undefined8 *)(lVar9 + 0x48);
      lVar7 = *(long *)(param_1 + 0x10);
      lVar10 = lVar7;
    }
    goto joined_r0x0245674c;
  }
  goto LAB_02456970;
LAB_024567f4:
  do {
    lVar9 = *(long *)(lVar9 + 0x18);
    if (lVar9 == *(long *)(lVar7 + 0x18)) {
      return;
    }
    if (lVar9 == 0) break;
    if (*(char *)(lVar9 + 0x35) != '\0') {
      if (*(char *)(param_1 + 0x98) != '\0') {
        fVar15 = (float)FUN_02453144(lVar9);
        lVar8 = *plVar2;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          lVar8 = thunk_FUN_00d32864();
        }
        if (ABS(fVar15) < 1.4013e-45) goto LAB_02456968;
      }
      lVar10 = *(long *)(lVar9 + 0x20);
      iVar11 = 0;
      lVar7 = lVar10;
      do {
        if (((lVar7 == 0) || (*(long *)(lVar7 + 0x40) == 0)) ||
           (lVar14 = *(long *)(param_1 + 0x80), lVar14 == 0)) goto LAB_02456970;
        uVar1 = uVar12 + iVar11;
        uVar6 = (uint)*(undefined8 *)(lVar14 + 0x18);
        if (uVar6 <= uVar1) goto LAB_02456998;
        iVar11 = iVar11 + 1;
        *(undefined4 *)(lVar14 + (long)(int)uVar1 * 4 + 0x20) =
             *(undefined4 *)(*(long *)(lVar7 + 0x40) + 0x40);
        lVar7 = *(long *)(lVar7 + 0x38);
        iVar13 = iVar11;
      } while (lVar7 != lVar10);
      for (; iVar13 < param_3; iVar13 = iVar13 + 1) {
        if (uVar6 <= uVar12 + iVar13) goto LAB_02456998;
        *(undefined4 *)(lVar14 + (long)(int)(uVar12 + iVar13) * 4 + 0x20) = 0xffffffff;
      }
      uVar12 = uVar12 + iVar13;
      if (param_2 == 1) {
        lVar8 = FUN_0245654c(lVar8,lVar10);
        while( true ) {
          if (*(uint *)(lVar14 + 0x18) <= uVar12) goto LAB_02456998;
          *(int *)(lVar14 + (long)(int)uVar12 * 4 + 0x20) = (int)lVar8;
          if (lVar10 == 0) goto LAB_02456970;
          lVar10 = *(long *)(lVar10 + 0x38);
          if (lVar10 == *(long *)(lVar9 + 0x20)) break;
          lVar14 = *(long *)(param_1 + 0x80);
          uVar12 = uVar12 + 1;
          lVar8 = FUN_0245654c(lVar8,lVar10);
          if (lVar14 == 0) goto LAB_02456970;
        }
        if (iVar11 < param_3) {
          lVar7 = *(long *)(param_1 + 0x80);
          if (lVar7 == 0) break;
          uVar1 = *(uint *)(lVar7 + 0x18);
          iVar13 = 0;
          do {
            uVar6 = uVar12 + iVar13 + 1;
            if (uVar1 <= uVar6) goto LAB_02456998;
            iVar13 = iVar13 + 1;
            *(undefined4 *)(lVar7 + (long)(int)uVar6 * 4 + 0x20) = 0xffffffff;
          } while (iVar11 + iVar13 < param_3);
          uVar12 = uVar12 + iVar13 + 1;
        }
        else {
          uVar12 = uVar12 + 1;
        }
      }
    }
LAB_02456968:
    lVar7 = *(long *)(param_1 + 0x10);
  } while (lVar7 != 0);
LAB_02456970:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


