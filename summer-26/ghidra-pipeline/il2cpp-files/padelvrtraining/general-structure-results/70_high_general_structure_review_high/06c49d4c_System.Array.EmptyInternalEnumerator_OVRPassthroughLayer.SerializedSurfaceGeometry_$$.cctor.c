/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$.cctor
ENTRY_POINT: 06c49d4c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>___cctor
          (long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long in_x10;
  int *piVar7;
  long unaff_x19;
  undefined8 uVar8;
  long unaff_x23;
  uint uVar9;
  int *piVar10;
  long lVar11;
  int unaff_w27;
  ulong uVar12;
  ulong uVar13;
  long lStack0000000000000008;
  undefined8 in_stack_00000018;
  
  uVar9 = *(int *)(param_1 + in_x10 * 4 + 0x20) - 1;
  if (-1 < (int)uVar9) {
    uVar13 = 0xffffffff;
    lStack0000000000000008 = in_x10;
    do {
      lVar11 = *(long *)(unaff_x19 + 0x18);
      if (lVar11 == 0) goto LAB_06c49f54;
      if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_06c49f58;
      piVar10 = (int *)(lVar11 + (ulong)uVar9 * 0x18 + 0x20);
      uVar12 = (ulong)uVar9;
      if (*piVar10 == unaff_w27) {
        plVar4 = *(long **)(unaff_x19 + 0x30);
        if (plVar4 == (long *)0x0) {
          plVar4 = (long *)FUN_04aca658(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
          if (plVar4 == (long *)0x0) goto LAB_06c49f54;
          uVar6 = (**(code **)(*plVar4 + 0x1b8))
                            (plVar4,*(undefined8 *)(lVar11 + uVar12 * 0x18 + 0x28),in_stack_00000018
                             ,*(undefined8 *)(*plVar4 + 0x1c0));
        }
        else {
          if (plVar4 == (long *)0x0) goto LAB_06c49f54;
          lVar3 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
          uVar8 = *(undefined8 *)(lVar11 + uVar12 * 0x18 + 0x28);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03d8f26c(lVar3);
          }
          lVar5 = *plVar4;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar3) {
                puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_06c49e64;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined8 *)FUN_03d8f370(plVar4,lVar3,0);
LAB_06c49e64:
          uVar6 = (*(code *)*puVar2)(plVar4,uVar8,in_stack_00000018,puVar2[1]);
        }
        if ((uVar6 & 1) != 0) {
          if ((int)(uint)uVar13 < 0) {
            lVar3 = *(long *)(unaff_x19 + 0x10);
            if (lVar3 == 0) goto LAB_06c49f54;
            if (*(uint *)(lVar3 + 0x18) <= (uint)lStack0000000000000008) goto LAB_06c49f58;
            *(int *)(lVar3 + lStack0000000000000008 * 4 + 0x20) =
                 *(int *)(lVar11 + uVar12 * 0x18 + 0x24) + 1;
          }
          else {
            lVar3 = *(long *)(unaff_x19 + 0x18);
            if (lVar3 == 0) {
LAB_06c49f54:
                    /* WARNING: Subroutine does not return */
              FUN_03d2d548();
            }
            if (*(uint *)(lVar3 + 0x18) <= (uint)uVar13) {
LAB_06c49f58:
                    /* WARNING: Subroutine does not return */
              FUN_03d2d550();
            }
            *(undefined4 *)(lVar3 + uVar13 * 0x18 + 0x24) =
                 *(undefined4 *)(lVar11 + uVar12 * 0x18 + 0x24);
          }
          *piVar10 = -1;
          *(undefined4 *)(lVar11 + uVar12 * 0x18 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
          *(uint *)(unaff_x19 + 0x24) = uVar9;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
      uVar1 = *(uint *)(lVar11 + uVar12 * 0x18 + 0x24);
      uVar13 = (ulong)uVar9;
      uVar9 = uVar1;
    } while (-1 < (int)uVar1);
  }
  return 0;
}


