/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$MoveNext
ENTRY_POINT: 06c49cdc
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
System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__MoveNext
          (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 in_ZR;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long in_x9;
  ulong uVar10;
  int *in_x10;
  int *piVar11;
  long unaff_x19;
  undefined8 uVar12;
  long unaff_x23;
  uint uVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 in_stack_00000018;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar5 = (undefined8 *)(param_1 + (long)(in_x10[4] + 1) * 0x10 + 0x138);
      goto LAB_06c49d1c;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar5 = (undefined8 *)FUN_03d8f370();
LAB_06c49d1c:
  uVar4 = (*(code *)*puVar5)();
  lVar7 = *(long *)(unaff_x19 + 0x10);
  if (lVar7 != 0) {
    uVar13 = *(uint *)(lVar7 + 0x18);
    uVar4 = uVar4 & 0x7fffffff;
    iVar3 = 0;
    if (uVar13 != 0) {
      iVar3 = (int)uVar4 / (int)uVar13;
    }
    uVar2 = uVar4 - iVar3 * uVar13;
    if (uVar13 <= uVar2) {
LAB_06c49f58:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    uVar13 = *(int *)(lVar7 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar13) {
      uVar16 = 0xffffffff;
      do {
        lVar7 = *(long *)(unaff_x19 + 0x18);
        if (lVar7 == 0) goto LAB_06c49f54;
        if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_06c49f58;
        puVar14 = (uint *)(lVar7 + (ulong)uVar13 * 0x18 + 0x20);
        uVar15 = (ulong)uVar13;
        if (*puVar14 == uVar4) {
          plVar8 = *(long **)(unaff_x19 + 0x30);
          if (plVar8 == (long *)0x0) {
            plVar8 = (long *)FUN_04aca658(*(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
            if (plVar8 == (long *)0x0) goto LAB_06c49f54;
            uVar10 = (**(code **)(*plVar8 + 0x1b8))
                               (plVar8,*(undefined8 *)(lVar7 + uVar15 * 0x18 + 0x28),
                                in_stack_00000018,*(undefined8 *)(*plVar8 + 0x1c0));
          }
          else {
            if (plVar8 == (long *)0x0) goto LAB_06c49f54;
            lVar6 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
            uVar12 = *(undefined8 *)(lVar7 + uVar15 * 0x18 + 0x28);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_03d8f26c(lVar6);
            }
            lVar9 = *plVar8;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar6) {
                  puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_06c49e64;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)FUN_03d8f370(plVar8,lVar6,0);
LAB_06c49e64:
            uVar10 = (*(code *)*puVar5)(plVar8,uVar12,in_stack_00000018,puVar5[1]);
          }
          if ((uVar10 & 1) != 0) {
            if ((int)(uint)uVar16 < 0) {
              lVar6 = *(long *)(unaff_x19 + 0x10);
              if (lVar6 == 0) goto LAB_06c49f54;
              if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_06c49f58;
              *(int *)(lVar6 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar7 + uVar15 * 0x18 + 0x24) + 1
              ;
            }
            else {
              lVar6 = *(long *)(unaff_x19 + 0x18);
              if (lVar6 == 0) goto LAB_06c49f54;
              if (*(uint *)(lVar6 + 0x18) <= (uint)uVar16) goto LAB_06c49f58;
              *(undefined4 *)(lVar6 + uVar16 * 0x18 + 0x24) =
                   *(undefined4 *)(lVar7 + uVar15 * 0x18 + 0x24);
            }
            *puVar14 = 0xffffffff;
            *(undefined4 *)(lVar7 + uVar15 * 0x18 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
            *(uint *)(unaff_x19 + 0x24) = uVar13;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar7 + uVar15 * 0x18 + 0x24);
        uVar16 = (ulong)uVar13;
        uVar13 = uVar1;
      } while (-1 < (int)uVar1);
    }
    return 0;
  }
LAB_06c49f54:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


