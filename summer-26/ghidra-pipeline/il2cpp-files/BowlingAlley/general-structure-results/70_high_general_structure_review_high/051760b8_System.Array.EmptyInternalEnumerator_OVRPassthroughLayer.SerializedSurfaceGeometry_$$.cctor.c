/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$.cctor
ENTRY_POINT: 051760b8
PROGRAM: BowlingAlley-libil2cpp.so
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
System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>___cctor
          (uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  ulong uVar12;
  long unaff_x24;
  uint uVar13;
  ulong uVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000018;
  
  lVar7 = *(long *)(unaff_x19 + 0x10);
  if (lVar7 != 0) {
    uVar13 = *(uint *)(lVar7 + 0x18);
    param_1 = param_1 & 0x7fffffff;
    iVar4 = 0;
    if (uVar13 != 0) {
      iVar4 = (int)param_1 / (int)uVar13;
    }
    uVar3 = param_1 - iVar4 * uVar13;
    if (uVar13 <= uVar3) {
LAB_0517632c:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    uVar13 = *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar13) {
      uVar12 = 0xffffffff;
      do {
        lVar7 = *(long *)(unaff_x19 + 0x18);
        if (lVar7 == 0) goto LAB_05176328;
        if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_0517632c;
        puVar15 = (uint *)(lVar7 + (ulong)uVar13 * 0x24 + 0x20);
        uVar14 = (ulong)uVar13;
        if (*puVar15 == param_1) {
          plVar8 = *(long **)(unaff_x19 + 0x30);
          if (plVar8 == (long *)0x0) {
            plVar8 = (long *)FUN_03896198(*(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x18));
            if (plVar8 == (long *)0x0) goto LAB_05176328;
            uVar10 = (**(code **)(*plVar8 + 0x1b8))
                               (plVar8,*(undefined4 *)(lVar7 + uVar14 * 0x24 + 0x28),
                                in_stack_00000018._4_4_,*(undefined8 *)(*plVar8 + 0x1c0));
          }
          else {
            if (plVar8 == (long *)0x0) goto LAB_05176328;
            lVar6 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar7 + uVar14 * 0x24 + 0x28);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_032934b8(lVar6);
            }
            lVar9 = *plVar8;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar6) {
                  puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_05176218;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)FUN_032937ac(plVar8,lVar6,0);
LAB_05176218:
            uVar10 = (*(code *)*puVar5)(plVar8,uVar1,in_stack_00000018._4_4_,puVar5[1]);
          }
          if ((uVar10 & 1) != 0) {
            if ((int)(uint)uVar12 < 0) {
              lVar6 = *(long *)(unaff_x19 + 0x10);
              if (lVar6 == 0) goto LAB_05176328;
              if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_0517632c;
              *(int *)(lVar6 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar7 + uVar14 * 0x24 + 0x24) + 1
              ;
            }
            else {
              lVar6 = *(long *)(unaff_x19 + 0x18);
              if (lVar6 == 0) goto LAB_05176328;
              if (*(uint *)(lVar6 + 0x18) <= (uint)uVar12) goto LAB_0517632c;
              *(undefined4 *)(lVar6 + uVar12 * 0x24 + 0x24) =
                   *(undefined4 *)(lVar7 + uVar14 * 0x24 + 0x24);
            }
            lVar7 = lVar7 + uVar14 * 0x24;
            uVar17 = *(undefined8 *)(lVar7 + 0x34);
            uVar16 = *(undefined8 *)(lVar7 + 0x2c);
            in_stack_00000008[2] = *(undefined8 *)(lVar7 + 0x3c);
            in_stack_00000008[1] = uVar17;
            *in_stack_00000008 = uVar16;
            *puVar15 = 0xffffffff;
            *(undefined4 *)(lVar7 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
            *(uint *)(unaff_x19 + 0x24) = uVar13;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar2 = *(uint *)(lVar7 + uVar14 * 0x24 + 0x24);
        uVar12 = (ulong)uVar13;
        uVar13 = uVar2;
      } while (-1 < (int)uVar2);
    }
    *in_stack_00000008 = 0;
    in_stack_00000008[1] = 0;
    in_stack_00000008[2] = 0;
    return 0;
  }
LAB_05176328:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


