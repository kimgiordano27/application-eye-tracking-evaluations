/*
FUNCTION_NAME: System.Array.InternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$get_Current
ENTRY_POINT: 0324a818
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8
System_Array_InternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__get_Current
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  int *piVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  long *plVar18;
  long unaff_x25;
  uint uVar19;
  ulong uVar20;
  
  iVar4 = FUN_0324f188();
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
LAB_0324aac0:
                    /* WARNING: Subroutine does not return */
    FUN_0206154c();
  }
  uVar19 = *(uint *)(lVar9 + 0x18);
  iVar16 = 0;
  if (uVar19 != 0) {
    iVar16 = iVar4 / (int)uVar19;
  }
  uVar3 = iVar4 - iVar16 * uVar19;
  if (uVar19 <= uVar3) {
LAB_0324aa80:
                    /* WARNING: Subroutine does not return */
    FUN_02061554();
  }
  uVar19 = *(int *)(lVar9 + (ulong)uVar3 * 4 + 0x20) - 1;
  if (-1 < (int)uVar19) {
    lVar9 = *(long *)(param_1 + 0x18);
    if (lVar9 == 0) goto LAB_0324aac0;
    uVar10 = *(undefined8 *)(lVar9 + 0x18);
    iVar16 = 0;
    lVar1 = lVar9 + 0x20;
    uVar17 = 0xffffffff;
    do {
      if ((uint)uVar10 <= uVar19) goto LAB_0324aa80;
      piVar14 = (int *)(lVar1 + (ulong)uVar19 * 0x18);
      uVar20 = (ulong)uVar19;
      if (*piVar14 == iVar4) {
        plVar18 = *(long **)(param_1 + 0x30);
        if (plVar18 == (long *)0x0) goto LAB_0324aac0;
        lVar15 = lVar1 + uVar20 * 0x18;
        uVar10 = *(undefined8 *)(lVar15 + 8);
        uVar6 = *(undefined8 *)(lVar15 + 0x10);
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02091334(lVar7);
        }
        lVar11 = *plVar18;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0324a92c;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)FUN_02091668(plVar18,lVar7,0);
LAB_0324a92c:
        uVar12 = (*(code *)*puVar5)(plVar18,uVar10,uVar6,param_2,param_3,puVar5[1]);
        if ((uVar12 & 1) != 0) {
          if ((int)(uint)uVar17 < 0) {
            uVar8 = *(uint *)(lVar9 + 0x18);
            if (uVar8 <= uVar19) goto LAB_0324aa80;
            lVar9 = *(long *)(param_1 + 0x10);
            if (lVar9 == 0) goto LAB_0324aac0;
            if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_0324aa80;
            *(int *)(lVar9 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar1 + uVar20 * 0x18 + 4) + 1;
          }
          else {
            uVar8 = *(uint *)(lVar9 + 0x18);
            if ((uVar8 <= uVar19) || (uVar8 <= (uint)uVar17)) goto LAB_0324aa80;
            *(undefined4 *)(lVar1 + uVar17 * 0x18 + 4) = *(undefined4 *)(lVar1 + uVar20 * 0x18 + 4);
          }
          if (uVar19 < uVar8) {
            *(undefined8 *)(lVar15 + 8) = 0;
            *(undefined8 *)(lVar15 + 0x10) = 0;
            uVar2 = *(undefined4 *)(param_1 + 0x28);
            iVar4 = *(int *)(param_1 + 0x20);
            *piVar14 = -1;
            iVar16 = *(int *)(param_1 + 0x38);
            iVar4 = iVar4 + -1;
            *(undefined4 *)(lVar1 + uVar20 * 0x18 + 4) = uVar2;
            *(int *)(param_1 + 0x20) = iVar4;
            *(int *)(param_1 + 0x38) = iVar16 + 1;
            if (iVar4 == 0) {
              uVar19 = 0xffffffff;
              *(undefined4 *)(param_1 + 0x24) = 0;
            }
            *(uint *)(param_1 + 0x28) = uVar19;
            return 1;
          }
          goto LAB_0324aa80;
        }
        uVar10 = *(undefined8 *)(lVar9 + 0x18);
      }
      if ((int)(uint)uVar10 <= iVar16) {
        thunk_FUN_020be230(StringLiteral_8769);
        uVar10 = thunk_FUN_02094760();
        uVar6 = thunk_FUN_020be230(StringLiteral_12127);
        FUN_0382d55c(uVar10,uVar6,0);
                    /* WARNING: Subroutine does not return */
        FUN_02061410(uVar10,unaff_x25);
      }
      if ((uint)uVar10 <= uVar19) goto LAB_0324aa80;
      iVar16 = iVar16 + 1;
      uVar17 = (ulong)uVar19;
      uVar19 = *(uint *)(lVar1 + uVar20 * 0x18 + 4);
    } while (-1 < (int)uVar19);
  }
  return 0;
}


