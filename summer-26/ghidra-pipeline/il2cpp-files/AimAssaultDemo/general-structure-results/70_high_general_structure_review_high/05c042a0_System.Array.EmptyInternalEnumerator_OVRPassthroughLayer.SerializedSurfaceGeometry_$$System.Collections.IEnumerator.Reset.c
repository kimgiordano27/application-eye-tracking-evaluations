/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 05c042a0
PROGRAM: AimAssaultDemo-libil2cpp.so
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
System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_Reset
          (long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long in_x10;
  int *piVar8;
  long unaff_x19;
  undefined8 uVar9;
  long unaff_x23;
  uint uVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  int unaff_w28;
  ulong uVar14;
  long lStack0000000000000008;
  undefined8 in_stack_00000018;
  
  uVar10 = *(int *)(param_1 + in_x10 * 4 + 0x20) - 1;
  if (-1 < (int)uVar10) {
    uVar14 = 0xffffffff;
    lStack0000000000000008 = in_x10;
    do {
      lVar12 = *(long *)(unaff_x19 + 0x18);
      if (lVar12 == 0) goto LAB_05c044b4;
      if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_05c044b8;
      piVar11 = (int *)(lVar12 + (ulong)uVar10 * 0x38 + 0x20);
      uVar13 = (ulong)uVar10;
      if (*piVar11 == unaff_w28) {
        plVar5 = *(long **)(unaff_x19 + 0x30);
        if (plVar5 == (long *)0x0) {
          plVar5 = (long *)FUN_03e0c914(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
          if (plVar5 == (long *)0x0) goto LAB_05c044b4;
          uVar7 = (**(code **)(*plVar5 + 0x1b8))
                            (plVar5,*(undefined8 *)(lVar12 + uVar13 * 0x38 + 0x28),in_stack_00000018
                             ,*(undefined8 *)(*plVar5 + 0x1c0));
        }
        else {
          if (plVar5 == (long *)0x0) goto LAB_05c044b4;
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
          uVar9 = *(undefined8 *)(lVar12 + uVar13 * 0x38 + 0x28);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03775678(lVar4);
          }
          lVar6 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar4) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_05c043b8;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_0377596c(plVar5,lVar4,0);
LAB_05c043b8:
          uVar7 = (*(code *)*puVar3)(plVar5,uVar9,in_stack_00000018,puVar3[1]);
        }
        if ((uVar7 & 1) != 0) {
          if ((int)(uint)uVar14 < 0) {
            lVar4 = *(long *)(unaff_x19 + 0x10);
            if (lVar4 == 0) goto LAB_05c044b4;
            if (*(uint *)(lVar4 + 0x18) <= (uint)lStack0000000000000008) goto LAB_05c044b8;
            *(int *)(lVar4 + lStack0000000000000008 * 4 + 0x20) =
                 *(int *)(lVar12 + uVar13 * 0x38 + 0x24) + 1;
          }
          else {
            lVar4 = *(long *)(unaff_x19 + 0x18);
            if (lVar4 == 0) {
LAB_05c044b4:
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            if (*(uint *)(lVar4 + 0x18) <= (uint)uVar14) {
LAB_05c044b8:
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            *(undefined4 *)(lVar4 + uVar14 * 0x38 + 0x24) =
                 *(undefined4 *)(lVar12 + uVar13 * 0x38 + 0x24);
          }
          *piVar11 = -1;
          uVar2 = *(undefined4 *)(unaff_x19 + 0x24);
          lVar12 = lVar12 + uVar13 * 0x38;
          *(undefined8 *)(lVar12 + 0x38) = 0;
          *(undefined8 *)(lVar12 + 0x30) = 0;
          *(undefined8 *)(lVar12 + 0x48) = 0;
          *(undefined8 *)(lVar12 + 0x40) = 0;
          *(undefined8 *)(lVar12 + 0x50) = 0;
          *(undefined4 *)(lVar12 + 0x24) = uVar2;
          *(uint *)(unaff_x19 + 0x24) = uVar10;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
      uVar1 = *(uint *)(lVar12 + uVar13 * 0x38 + 0x24);
      uVar14 = (ulong)uVar10;
      uVar10 = uVar1;
    } while (-1 < (int)uVar1);
  }
  return 0;
}


