/*
FUNCTION_NAME: System.Collections.Generic.List.Enumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$Dispose
ENTRY_POINT: 026ca390
PROGRAM: FruitBladeVR-libil2cpp.so
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
System_Collections_Generic_List_Enumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__Dispose
          (void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *plVar11;
  long unaff_x23;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  undefined8 in_stack_00000018;
  
  puVar5 = (undefined8 *)FUN_01c8cb54();
  uVar4 = (*(code *)*puVar5)();
  lVar7 = *(long *)(unaff_x23 + 0x10);
  if (lVar7 != 0) {
    uVar12 = *(uint *)(lVar7 + 0x18);
    uVar4 = uVar4 & 0x7fffffff;
    iVar3 = 0;
    if (uVar12 != 0) {
      iVar3 = (int)uVar4 / (int)uVar12;
    }
    uVar2 = uVar4 - iVar3 * uVar12;
    if (uVar12 <= uVar2) {
LAB_026ca5fc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbdc();
    }
    uVar12 = *(int *)(lVar7 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar12) {
      uVar13 = 0xffffffff;
      do {
        lVar7 = *(long *)(unaff_x23 + 0x18);
        if (lVar7 == 0) goto LAB_026ca5f8;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_026ca5fc;
        lVar7 = lVar7 + 0x20;
        puVar15 = (uint *)(lVar7 + (ulong)uVar12 * 0x24);
        uVar14 = (ulong)uVar12;
        if (*puVar15 == uVar4) {
          plVar11 = *(long **)(unaff_x23 + 0x30);
          if (plVar11 == (long *)0x0) {
            plVar11 = (long *)FUN_02001800(*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18));
            if (plVar11 == (long *)0x0) goto LAB_026ca5f8;
            uVar9 = (**(code **)(*plVar11 + 0x1b8))
                              (plVar11,*(undefined4 *)(lVar7 + uVar14 * 0x24 + 8),
                               in_stack_00000018._4_4_,*(undefined8 *)(*plVar11 + 0x1c0));
          }
          else {
            lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar7 + uVar14 * 0x24 + 8);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01c8c820(lVar6);
            }
            lVar8 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == lVar6) {
                  puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_026ca50c;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_01c8cb54(plVar11,lVar6,0);
LAB_026ca50c:
            uVar9 = (*(code *)*puVar5)(plVar11,uVar1,in_stack_00000018._4_4_,puVar5[1]);
          }
          if ((uVar9 & 1) != 0) {
            if ((int)(uint)uVar13 < 0) {
              lVar6 = *(long *)(unaff_x23 + 0x10);
              if (lVar6 == 0) goto LAB_026ca5f8;
              if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_026ca5fc;
              *(int *)(lVar6 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar7 + uVar14 * 0x24 + 4) + 1;
            }
            else {
              lVar6 = *(long *)(unaff_x23 + 0x18);
              if (lVar6 == 0) goto LAB_026ca5f8;
              if (*(uint *)(lVar6 + 0x18) <= (uint)uVar13) goto LAB_026ca5fc;
              *(undefined4 *)(lVar6 + uVar13 * 0x24 + 0x24) =
                   *(undefined4 *)(lVar7 + uVar14 * 0x24 + 4);
            }
            uVar1 = *(undefined4 *)(unaff_x23 + 0x24);
            *puVar15 = 0xffffffff;
            *(uint *)(unaff_x23 + 0x24) = uVar12;
            *(undefined4 *)(lVar7 + uVar14 * 0x24 + 4) = uVar1;
            *(ulong *)(unaff_x23 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x23 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x23 + 0x28) + 1);
            return 1;
          }
        }
        uVar13 = (ulong)uVar12;
        uVar12 = *(uint *)(lVar7 + uVar14 * 0x24 + 4);
      } while (-1 < (int)uVar12);
    }
    return 0;
  }
LAB_026ca5f8:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


