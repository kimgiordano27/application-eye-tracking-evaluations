/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$.cctor
ENTRY_POINT: 05c042ac
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>___cctor(void)

{
  uint uVar1;
  undefined4 uVar2;
  bool in_NG;
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
  uint unaff_w24;
  int *piVar10;
  long lVar11;
  ulong uVar12;
  int unaff_w28;
  ulong uVar13;
  long lStack0000000000000008;
  undefined8 in_stack_00000018;
  
  if (!in_NG) {
    uVar13 = 0xffffffff;
    lStack0000000000000008 = in_x10;
    do {
      lVar11 = *(long *)(unaff_x19 + 0x18);
      if (lVar11 == 0) goto LAB_05c044b4;
      if (*(uint *)(lVar11 + 0x18) <= unaff_w24) goto LAB_05c044b8;
      piVar10 = (int *)(lVar11 + (ulong)unaff_w24 * 0x38 + 0x20);
      uVar12 = (ulong)unaff_w24;
      if (*piVar10 == unaff_w28) {
        plVar5 = *(long **)(unaff_x19 + 0x30);
        if (plVar5 == (long *)0x0) {
          plVar5 = (long *)FUN_03e0c914(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
          if (plVar5 == (long *)0x0) goto LAB_05c044b4;
          uVar7 = (**(code **)(*plVar5 + 0x1b8))
                            (plVar5,*(undefined8 *)(lVar11 + uVar12 * 0x38 + 0x28),in_stack_00000018
                             ,*(undefined8 *)(*plVar5 + 0x1c0));
        }
        else {
          if (plVar5 == (long *)0x0) goto LAB_05c044b4;
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
          uVar9 = *(undefined8 *)(lVar11 + uVar12 * 0x38 + 0x28);
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
          if ((int)(uint)uVar13 < 0) {
            lVar4 = *(long *)(unaff_x19 + 0x10);
            if (lVar4 == 0) goto LAB_05c044b4;
            if (*(uint *)(lVar4 + 0x18) <= (uint)lStack0000000000000008) goto LAB_05c044b8;
            *(int *)(lVar4 + lStack0000000000000008 * 4 + 0x20) =
                 *(int *)(lVar11 + uVar12 * 0x38 + 0x24) + 1;
          }
          else {
            lVar4 = *(long *)(unaff_x19 + 0x18);
            if (lVar4 == 0) {
LAB_05c044b4:
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            if (*(uint *)(lVar4 + 0x18) <= (uint)uVar13) {
LAB_05c044b8:
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            *(undefined4 *)(lVar4 + uVar13 * 0x38 + 0x24) =
                 *(undefined4 *)(lVar11 + uVar12 * 0x38 + 0x24);
          }
          *piVar10 = -1;
          uVar2 = *(undefined4 *)(unaff_x19 + 0x24);
          lVar11 = lVar11 + uVar12 * 0x38;
          *(undefined8 *)(lVar11 + 0x38) = 0;
          *(undefined8 *)(lVar11 + 0x30) = 0;
          *(undefined8 *)(lVar11 + 0x48) = 0;
          *(undefined8 *)(lVar11 + 0x40) = 0;
          *(undefined8 *)(lVar11 + 0x50) = 0;
          *(undefined4 *)(lVar11 + 0x24) = uVar2;
          *(uint *)(unaff_x19 + 0x24) = unaff_w24;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
      uVar1 = *(uint *)(lVar11 + uVar12 * 0x38 + 0x24);
      uVar13 = (ulong)unaff_w24;
      unaff_w24 = uVar1;
    } while (-1 < (int)uVar1);
  }
  return 0;
}


