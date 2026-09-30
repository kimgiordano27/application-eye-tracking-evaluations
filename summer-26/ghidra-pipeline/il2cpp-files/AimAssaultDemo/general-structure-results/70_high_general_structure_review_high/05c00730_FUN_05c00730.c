/*
FUNCTION_NAME: FUN_05c00730
ENTRY_POINT: 05c00730
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8 FUN_05c00730(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  undefined8 uVar15;
  uint uVar16;
  uint *puVar17;
  ulong uVar18;
  undefined8 local_68;
  
                    /* try { // try from 05c00730 to 05d00757 has its CatchHandler @ 05c00900 */
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar14 = *(long **)(param_1 + 0x30);
    local_68 = param_2;
    if (plVar14 == (long *)0x0) {
      uVar6 = FUN_0626059c(&local_68,
                           *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 400));
    }
    else {
      lVar8 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03775678(lVar8);
      }
      lVar9 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar8) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_05c007f0;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c(plVar14,lVar8,1);
LAB_05c007f0:
      uVar6 = (*(code *)*puVar7)(plVar14,param_2,puVar7[1]);
    }
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 == 0) {
LAB_05c00a34:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar16 = *(uint *)(lVar8 + 0x18);
    uVar6 = uVar6 & 0x7fffffff;
    iVar4 = 0;
    if (uVar16 != 0) {
      iVar4 = (int)uVar6 / (int)uVar16;
    }
    uVar3 = uVar6 - iVar4 * uVar16;
    if (uVar16 <= uVar3) {
LAB_05c00a38:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    uVar16 = *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar16) {
      uVar11 = 0xffffffff;
      do {
        uVar5 = local_68;
        lVar8 = *(long *)(param_1 + 0x18);
        if (lVar8 == 0) goto LAB_05c00a34;
        if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_05c00a38;
        puVar17 = (uint *)(lVar8 + (ulong)uVar16 * 0x38 + 0x20);
        uVar18 = (ulong)uVar16;
        if (*puVar17 == uVar6) {
          plVar14 = *(long **)(param_1 + 0x30);
          if (plVar14 == (long *)0x0) {
            plVar14 = (long *)FUN_03e0c914(*(undefined8 *)
                                            (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18));
            if (plVar14 == (long *)0x0) goto LAB_05c00a34;
            uVar12 = (**(code **)(*plVar14 + 0x1b8))
                               (plVar14,*(undefined8 *)(lVar8 + uVar18 * 0x38 + 0x28),local_68,
                                *(undefined8 *)(*plVar14 + 0x1c0));
          }
          else {
            if (plVar14 == (long *)0x0) goto LAB_05c00a34;
            lVar9 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
            uVar15 = *(undefined8 *)(lVar8 + uVar18 * 0x38 + 0x28);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_03775678(lVar9);
            }
            lVar10 = *plVar14;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar9) {
                  puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                  goto 
                  System_Array_EmptyInternalEnumerator<InstanceOcclusionEventDebugArray_Request>__Dispose
                  ;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)FUN_0377596c(plVar14,lVar9,0);
System_Array_EmptyInternalEnumerator<InstanceOcclusionEventDebugArray_Request>__Dispose:
            uVar12 = (*(code *)*puVar7)(plVar14,uVar15,uVar5,puVar7[1]);
          }
          if ((uVar12 & 1) != 0) {
            if ((int)(uint)uVar11 < 0) {
              lVar9 = *(long *)(param_1 + 0x10);
              if (lVar9 == 0) goto LAB_05c00a34;
              if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_05c00a38;
              *(int *)(lVar9 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar8 + uVar18 * 0x38 + 0x24) + 1
              ;
            }
            else {
              lVar9 = *(long *)(param_1 + 0x18);
              if (lVar9 == 0) goto LAB_05c00a34;
              if (*(uint *)(lVar9 + 0x18) <= (uint)uVar11) goto LAB_05c00a38;
              *(undefined4 *)(lVar9 + uVar11 * 0x38 + 0x24) =
                   *(undefined4 *)(lVar8 + uVar18 * 0x38 + 0x24);
            }
            *puVar17 = 0xffffffff;
            uVar2 = *(undefined4 *)(param_1 + 0x24);
            lVar8 = lVar8 + uVar18 * 0x38;
            *(undefined8 *)(lVar8 + 0x38) = 0;
            *(undefined8 *)(lVar8 + 0x30) = 0;
            *(undefined8 *)(lVar8 + 0x48) = 0;
            *(undefined8 *)(lVar8 + 0x40) = 0;
            *(undefined8 *)(lVar8 + 0x50) = 0;
            *(undefined4 *)(lVar8 + 0x24) = uVar2;
            *(uint *)(param_1 + 0x24) = uVar16;
            *(ulong *)(param_1 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_1 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar8 + uVar18 * 0x38 + 0x24);
        uVar11 = (ulong)uVar16;
        uVar16 = uVar1;
      } while (-1 < (int)uVar1);
    }
  }
  return 0;
}


