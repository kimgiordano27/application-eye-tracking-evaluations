/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$get_Current
ENTRY_POINT: 05c04244
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__get_Current
          (undefined8 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 uVar13;
  long unaff_x23;
  uint uVar14;
  uint *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 in_stack_00000018;
  
  uVar5 = (*(code *)*param_1)();
  lVar8 = *(long *)(unaff_x19 + 0x10);
  if (lVar8 != 0) {
    uVar14 = *(uint *)(lVar8 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar4 = 0;
    if (uVar14 != 0) {
      iVar4 = (int)uVar5 / (int)uVar14;
    }
    uVar3 = uVar5 - iVar4 * uVar14;
    if (uVar14 <= uVar3) {
LAB_05c044b8:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    uVar14 = *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar14) {
      uVar17 = 0xffffffff;
      do {
        lVar8 = *(long *)(unaff_x19 + 0x18);
        if (lVar8 == 0) goto LAB_05c044b4;
        if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_05c044b8;
        puVar15 = (uint *)(lVar8 + (ulong)uVar14 * 0x38 + 0x20);
        uVar16 = (ulong)uVar14;
        if (*puVar15 == uVar5) {
          plVar9 = *(long **)(unaff_x19 + 0x30);
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)FUN_03e0c914(*(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
            if (plVar9 == (long *)0x0) goto LAB_05c044b4;
            uVar11 = (**(code **)(*plVar9 + 0x1b8))
                               (plVar9,*(undefined8 *)(lVar8 + uVar16 * 0x38 + 0x28),
                                in_stack_00000018,*(undefined8 *)(*plVar9 + 0x1c0));
          }
          else {
            if (plVar9 == (long *)0x0) goto LAB_05c044b4;
            lVar7 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
            uVar13 = *(undefined8 *)(lVar8 + uVar16 * 0x38 + 0x28);
            if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_03775678(lVar7);
            }
            lVar10 = *plVar9;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar7) {
                  puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_05c043b8;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_0377596c(plVar9,lVar7,0);
LAB_05c043b8:
            uVar11 = (*(code *)*puVar6)(plVar9,uVar13,in_stack_00000018,puVar6[1]);
          }
          if ((uVar11 & 1) != 0) {
            if ((int)(uint)uVar17 < 0) {
              lVar7 = *(long *)(unaff_x19 + 0x10);
              if (lVar7 == 0) goto LAB_05c044b4;
              if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_05c044b8;
              *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar8 + uVar16 * 0x38 + 0x24) + 1
              ;
            }
            else {
              lVar7 = *(long *)(unaff_x19 + 0x18);
              if (lVar7 == 0) goto LAB_05c044b4;
              if (*(uint *)(lVar7 + 0x18) <= (uint)uVar17) goto LAB_05c044b8;
              *(undefined4 *)(lVar7 + uVar17 * 0x38 + 0x24) =
                   *(undefined4 *)(lVar8 + uVar16 * 0x38 + 0x24);
            }
            *puVar15 = 0xffffffff;
            uVar2 = *(undefined4 *)(unaff_x19 + 0x24);
            lVar8 = lVar8 + uVar16 * 0x38;
            *(undefined8 *)(lVar8 + 0x38) = 0;
            *(undefined8 *)(lVar8 + 0x30) = 0;
            *(undefined8 *)(lVar8 + 0x48) = 0;
            *(undefined8 *)(lVar8 + 0x40) = 0;
            *(undefined8 *)(lVar8 + 0x50) = 0;
            *(undefined4 *)(lVar8 + 0x24) = uVar2;
            *(uint *)(unaff_x19 + 0x24) = uVar14;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar8 + uVar16 * 0x38 + 0x24);
        uVar17 = (ulong)uVar14;
        uVar14 = uVar1;
      } while (-1 < (int)uVar1);
    }
    return 0;
  }
LAB_05c044b4:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


