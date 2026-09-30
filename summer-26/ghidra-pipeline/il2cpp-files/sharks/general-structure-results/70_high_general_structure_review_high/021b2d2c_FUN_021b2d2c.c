/*
FUNCTION_NAME: FUN_021b2d2c
ENTRY_POINT: 021b2d2c
PROGRAM: sharks-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
FUN_021b2d2c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            long param_5,undefined4 param_6,char param_7,long param_8)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  int *piVar17;
  int iVar18;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  
  *(int *)(param_5 + 0x2c) = *(int *)(param_5 + 0x2c) + 1;
  local_84 = param_6;
  if (*(long *)(param_5 + 0x10) == 0) {
    FUN_021b2c4c(param_5,0,*(undefined8 *)(*(long *)(*(long *)(param_8 + 0x20) + 0xc0) + 0x10));
  }
  plVar14 = *(long **)(param_5 + 0x30);
  lVar16 = *(long *)(param_5 + 0x18);
  if (plVar14 == (long *)0x0) {
    uVar4 = FUN_02bccfd0(&local_84,0);
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(param_8 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0185daa4(lVar6);
    }
    lVar9 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto System_Array_EmptyInternalEnumerator<UIRenderDevice_AllocToUpdate>__MoveNext;
        }
        uVar12 = uVar12 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_0185dba8(plVar14,lVar6,1);
System_Array_EmptyInternalEnumerator<UIRenderDevice_AllocToUpdate>__MoveNext:
    uVar4 = (*(code *)*puVar5)(plVar14,param_6,puVar5[1]);
  }
  lVar6 = *(long *)(param_5 + 0x10);
  if (lVar6 == 0)
  goto System_Array_EmptyInternalEnumerator<UnitySynchronizationContext_WorkRequest>__Dispose;
  uVar15 = *(uint *)(lVar6 + 0x18);
  uVar4 = uVar4 & 0x7fffffff;
  iVar18 = 0;
  if (uVar15 != 0) {
    iVar18 = (int)uVar4 / (int)uVar15;
  }
  uVar8 = uVar4 - iVar18 * uVar15;
  if (uVar8 < uVar15) {
    piVar17 = (int *)(lVar6 + (ulong)uVar8 * 4 + 0x20);
    uVar15 = *piVar17 - 1;
    if (plVar14 == (long *)0x0) {
      if (lVar16 == 0)
      goto System_Array_EmptyInternalEnumerator<UnitySynchronizationContext_WorkRequest>__Dispose;
      uVar10 = *(undefined8 *)(lVar16 + 0x18);
      uVar8 = (uint)uVar10;
      if (uVar15 < uVar8) {
        iVar18 = 0;
        do {
          uVar8 = (uint)uVar10;
          lVar6 = (long)(int)uVar15;
          if (*(uint *)(lVar16 + (long)(int)uVar15 * 0x1c + 0x20) == uVar4) {
            plVar14 = (long *)FUN_01abe62c(*(undefined8 *)
                                            (*(long *)(*(long *)(param_8 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(lVar16 + 0x18) <= uVar15) goto LAB_021b31b0;
            if (plVar14 == (long *)0x0)
            goto 
            System_Array_EmptyInternalEnumerator<UnitySynchronizationContext_WorkRequest>__Dispose;
            uVar12 = (**(code **)(*plVar14 + 0x1b8))
                               (plVar14,*(undefined4 *)(lVar16 + lVar6 * 0x1c + 0x28),local_84,
                                *(undefined8 *)(*plVar14 + 0x1c0));
            if ((uVar12 & 1) != 0) {
              if (param_7 == '\x02') {
                puVar7 = &local_88;
                local_88 = local_84;
                goto LAB_021b3190;
              }
              if (param_7 != '\x01') {
                return 0;
              }
              if (uVar15 < *(uint *)(lVar16 + 0x18)) goto LAB_021b3168;
              goto LAB_021b31b0;
            }
            uVar8 = *(uint *)(lVar16 + 0x18);
          }
          if (uVar8 <= uVar15) goto LAB_021b31b0;
          uVar15 = *(uint *)(lVar16 + lVar6 * 0x1c + 0x24);
          if ((int)uVar8 <= iVar18) {
            FUN_02befd44(0);
          }
          uVar10 = *(undefined8 *)(lVar16 + 0x18);
          iVar18 = iVar18 + 1;
          uVar8 = (uint)uVar10;
        } while (uVar15 < uVar8);
      }
    }
    else {
      if (lVar16 == 0)
      goto System_Array_EmptyInternalEnumerator<UnitySynchronizationContext_WorkRequest>__Dispose;
      uVar10 = *(undefined8 *)(lVar16 + 0x18);
      uVar8 = (uint)uVar10;
      if (uVar15 < uVar8) {
        iVar18 = 0;
        do {
          uVar3 = local_84;
          uVar8 = (uint)uVar10;
          lVar6 = (long)(int)uVar15;
          if (*(uint *)(lVar16 + (long)(int)uVar15 * 0x1c + 0x20) == uVar4) {
            lVar9 = *(long *)(*(long *)(*(long *)(param_8 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar16 + lVar6 * 0x1c + 0x28);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_0185daa4(lVar9);
            }
            lVar11 = *plVar14;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar9) {
                  puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_021b2f14;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)FUN_0185dba8(plVar14,lVar9,0);
LAB_021b2f14:
            uVar12 = (*(code *)*puVar5)(plVar14,uVar1,uVar3,puVar5[1]);
            if ((uVar12 & 1) != 0) {
              if (param_7 == '\x02') {
                puVar7 = &local_8c;
                local_8c = local_84;
LAB_021b3190:
                uVar10 = thunk_FUN_018617ec(*(undefined8 *)
                                             (*(long *)(*(long *)(param_8 + 0x20) + 0xc0) + 0x70),
                                            puVar7);
                FUN_02befc40(uVar10,0);
                return 0;
              }
              if (param_7 != '\x01') {
                return 0;
              }
              if (uVar15 < *(uint *)(lVar16 + 0x18)) {
LAB_021b3168:
                lVar16 = lVar16 + lVar6 * 0x1c;
                *(undefined4 *)(lVar16 + 0x2c) = param_1;
                *(undefined4 *)(lVar16 + 0x30) = param_2;
                *(undefined4 *)(lVar16 + 0x34) = param_3;
                *(undefined4 *)(lVar16 + 0x38) = param_4;
                return 1;
              }
              goto LAB_021b31b0;
            }
            uVar8 = *(uint *)(lVar16 + 0x18);
          }
          if (uVar8 <= uVar15) goto LAB_021b31b0;
          uVar15 = *(uint *)(lVar16 + lVar6 * 0x1c + 0x24);
          if ((int)uVar8 <= iVar18) {
            FUN_02befd44(0);
          }
          uVar10 = *(undefined8 *)(lVar16 + 0x18);
          iVar18 = iVar18 + 1;
          uVar8 = (uint)uVar10;
        } while (uVar15 < uVar8);
      }
    }
    if (*(int *)(param_5 + 0x28) < 1) {
      uVar15 = *(uint *)(param_5 + 0x20);
      if (uVar15 == uVar8) {
        FUN_021b3558(param_5,*(undefined8 *)(*(long *)(*(long *)(param_8 + 0x20) + 0xc0) + 0x1a0));
        lVar6 = *(long *)(param_5 + 0x10);
        *(uint *)(param_5 + 0x20) = uVar15 + 1;
        if (lVar6 == 0)
        goto System_Array_EmptyInternalEnumerator<UnitySynchronizationContext_WorkRequest>__Dispose;
        uVar8 = *(uint *)(lVar6 + 0x18);
        iVar18 = 0;
        if (uVar8 != 0) {
          iVar18 = (int)uVar4 / (int)uVar8;
        }
        uVar2 = uVar4 - iVar18 * uVar8;
        if (uVar8 <= uVar2) goto LAB_021b31b0;
        lVar16 = *(long *)(param_5 + 0x18);
        piVar17 = (int *)(lVar6 + (ulong)uVar2 * 4 + 0x20);
      }
      else {
        lVar16 = *(long *)(param_5 + 0x18);
        *(uint *)(param_5 + 0x20) = uVar15 + 1;
      }
      if (lVar16 == 0) {
System_Array_EmptyInternalEnumerator<UnitySynchronizationContext_WorkRequest>__Dispose:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      if (*(uint *)(lVar16 + 0x18) <= uVar15) goto LAB_021b31b0;
      lVar6 = (long)(int)uVar15;
    }
    else {
      *(int *)(param_5 + 0x28) = *(int *)(param_5 + 0x28) + -1;
      uVar15 = *(uint *)(param_5 + 0x24);
      if (*(uint *)(lVar16 + 0x18) <= uVar15) goto LAB_021b31b0;
      lVar6 = (long)(int)uVar15;
      *(undefined4 *)(param_5 + 0x24) = *(undefined4 *)(lVar16 + lVar6 * 0x1c + 0x24);
    }
    lVar16 = lVar16 + lVar6 * 0x1c;
    *(uint *)(lVar16 + 0x20) = uVar4;
    *(int *)(lVar16 + 0x24) = *piVar17 + -1;
    *(undefined4 *)(lVar16 + 0x2c) = param_1;
    *(undefined4 *)(lVar16 + 0x30) = param_2;
    *(undefined4 *)(lVar16 + 0x34) = param_3;
    *(undefined4 *)(lVar16 + 0x38) = param_4;
    *(undefined4 *)(lVar16 + 0x28) = local_84;
    *piVar17 = uVar15 + 1;
    return 1;
  }
LAB_021b31b0:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


