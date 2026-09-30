/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 06c49d2c
PROGRAM: padelvrtraining-libil2cpp.so
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
System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_get_Current
          (uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 uVar11;
  long unaff_x23;
  uint uVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 in_stack_00000018;
  
  lVar6 = *(long *)(unaff_x19 + 0x10);
  if (lVar6 != 0) {
    uVar12 = *(uint *)(lVar6 + 0x18);
    param_1 = param_1 & 0x7fffffff;
    iVar3 = 0;
    if (uVar12 != 0) {
      iVar3 = (int)param_1 / (int)uVar12;
    }
    uVar2 = param_1 - iVar3 * uVar12;
    if (uVar12 <= uVar2) {
LAB_06c49f58:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    uVar12 = *(int *)(lVar6 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar12) {
      uVar15 = 0xffffffff;
      do {
        lVar6 = *(long *)(unaff_x19 + 0x18);
        if (lVar6 == 0) goto LAB_06c49f54;
        if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_06c49f58;
        puVar13 = (uint *)(lVar6 + (ulong)uVar12 * 0x18 + 0x20);
        uVar14 = (ulong)uVar12;
        if (*puVar13 == param_1) {
          plVar7 = *(long **)(unaff_x19 + 0x30);
          if (plVar7 == (long *)0x0) {
            plVar7 = (long *)FUN_04aca658(*(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
            if (plVar7 == (long *)0x0) goto LAB_06c49f54;
            uVar9 = (**(code **)(*plVar7 + 0x1b8))
                              (plVar7,*(undefined8 *)(lVar6 + uVar14 * 0x18 + 0x28),
                               in_stack_00000018,*(undefined8 *)(*plVar7 + 0x1c0));
          }
          else {
            if (plVar7 == (long *)0x0) goto LAB_06c49f54;
            lVar5 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
            uVar11 = *(undefined8 *)(lVar6 + uVar14 * 0x18 + 0x28);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_03d8f26c(lVar5);
            }
            lVar8 = *plVar7;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == lVar5) {
                  puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_06c49e64;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar4 = (undefined8 *)FUN_03d8f370(plVar7,lVar5,0);
LAB_06c49e64:
            uVar9 = (*(code *)*puVar4)(plVar7,uVar11,in_stack_00000018,puVar4[1]);
          }
          if ((uVar9 & 1) != 0) {
            if ((int)(uint)uVar15 < 0) {
              lVar5 = *(long *)(unaff_x19 + 0x10);
              if (lVar5 == 0) goto LAB_06c49f54;
              if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_06c49f58;
              *(int *)(lVar5 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar6 + uVar14 * 0x18 + 0x24) + 1
              ;
            }
            else {
              lVar5 = *(long *)(unaff_x19 + 0x18);
              if (lVar5 == 0) goto LAB_06c49f54;
              if (*(uint *)(lVar5 + 0x18) <= (uint)uVar15) goto LAB_06c49f58;
              *(undefined4 *)(lVar5 + uVar15 * 0x18 + 0x24) =
                   *(undefined4 *)(lVar6 + uVar14 * 0x18 + 0x24);
            }
            *puVar13 = 0xffffffff;
            *(undefined4 *)(lVar6 + uVar14 * 0x18 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
            *(uint *)(unaff_x19 + 0x24) = uVar12;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar6 + uVar14 * 0x18 + 0x24);
        uVar15 = (ulong)uVar12;
        uVar12 = uVar1;
      } while (-1 < (int)uVar1);
    }
    return 0;
  }
LAB_06c49f54:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


