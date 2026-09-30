/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 05c0428c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_get_Current
          (long param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  uint in_w9;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 uVar11;
  long unaff_x23;
  uint uVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 in_stack_00000018;
  
  param_2 = param_2 & 0x7fffffff;
  iVar4 = 0;
  if (in_w9 != 0) {
    iVar4 = (int)param_2 / (int)in_w9;
  }
  uVar3 = param_2 - iVar4 * in_w9;
  if (in_w9 <= uVar3) {
LAB_05c044b8:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
  uVar12 = *(int *)(param_1 + (ulong)uVar3 * 4 + 0x20) - 1;
  if (-1 < (int)uVar12) {
    uVar16 = 0xffffffff;
    do {
      lVar14 = *(long *)(unaff_x19 + 0x18);
      if (lVar14 == 0) goto LAB_05c044b4;
      if (*(uint *)(lVar14 + 0x18) <= uVar12) goto LAB_05c044b8;
      puVar13 = (uint *)(lVar14 + (ulong)uVar12 * 0x38 + 0x20);
      uVar15 = (ulong)uVar12;
      if (*puVar13 == param_2) {
        plVar7 = *(long **)(unaff_x19 + 0x30);
        if (plVar7 == (long *)0x0) {
          plVar7 = (long *)FUN_03e0c914(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
          if (plVar7 == (long *)0x0) goto LAB_05c044b4;
          uVar9 = (**(code **)(*plVar7 + 0x1b8))
                            (plVar7,*(undefined8 *)(lVar14 + uVar15 * 0x38 + 0x28),in_stack_00000018
                             ,*(undefined8 *)(*plVar7 + 0x1c0));
        }
        else {
          if (plVar7 == (long *)0x0) goto LAB_05c044b4;
          lVar6 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
          uVar11 = *(undefined8 *)(lVar14 + uVar15 * 0x38 + 0x28);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_03775678(lVar6);
          }
          lVar8 = *plVar7;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar6) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_05c043b8;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_0377596c(plVar7,lVar6,0);
LAB_05c043b8:
          uVar9 = (*(code *)*puVar5)(plVar7,uVar11,in_stack_00000018,puVar5[1]);
        }
        if ((uVar9 & 1) != 0) {
          if ((int)(uint)uVar16 < 0) {
            lVar6 = *(long *)(unaff_x19 + 0x10);
            if (lVar6 == 0) goto LAB_05c044b4;
            if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_05c044b8;
            *(int *)(lVar6 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar14 + uVar15 * 0x38 + 0x24) + 1;
          }
          else {
            lVar6 = *(long *)(unaff_x19 + 0x18);
            if (lVar6 == 0) {
LAB_05c044b4:
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            if (*(uint *)(lVar6 + 0x18) <= (uint)uVar16) goto LAB_05c044b8;
            *(undefined4 *)(lVar6 + uVar16 * 0x38 + 0x24) =
                 *(undefined4 *)(lVar14 + uVar15 * 0x38 + 0x24);
          }
          *puVar13 = 0xffffffff;
          uVar2 = *(undefined4 *)(unaff_x19 + 0x24);
          lVar14 = lVar14 + uVar15 * 0x38;
          *(undefined8 *)(lVar14 + 0x38) = 0;
          *(undefined8 *)(lVar14 + 0x30) = 0;
          *(undefined8 *)(lVar14 + 0x48) = 0;
          *(undefined8 *)(lVar14 + 0x40) = 0;
          *(undefined8 *)(lVar14 + 0x50) = 0;
          *(undefined4 *)(lVar14 + 0x24) = uVar2;
          *(uint *)(unaff_x19 + 0x24) = uVar12;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
      uVar1 = *(uint *)(lVar14 + uVar15 * 0x38 + 0x24);
      uVar16 = (ulong)uVar12;
      uVar12 = uVar1;
    } while (-1 < (int)uVar1);
  }
  return 0;
}


