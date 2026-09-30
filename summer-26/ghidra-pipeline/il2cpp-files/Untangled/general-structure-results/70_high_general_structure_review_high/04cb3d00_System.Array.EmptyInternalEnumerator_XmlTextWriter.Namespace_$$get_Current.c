/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<XmlTextWriter.Namespace>$$get_Current
ENTRY_POINT: 04cb3d00
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<XmlTextWriter_Namespace>__get_Current
          (undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  ulong uVar13;
  long *unaff_x22;
  long *plVar14;
  undefined8 uVar15;
  uint uVar16;
  uint *puVar17;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_056138a8(5);
  }
                    /* catch() { ... } // from try @ 04cb3c80 with catch @ 04cb3d0c
                       catch() { ... } // from try @ 04cb3cfc with catch @ 04cb3d0c */
                    /* try { // try from 04cb3d10 to 04db3d13 has its CatchHandler @ 04cb3d1c */
  if (*(long *)(unaff_x19 + 0x10) != 0) {
                    /* try { // try from 04cb3d14 to 04db3d1f has its CatchHandler @ 04cb3a84 */
    plVar14 = *(long **)(unaff_x19 + 0x30);
    if (plVar14 == (long *)0x0) {
      if (unaff_x22 == (long *)0x0) goto LAB_04cb3ff4;
      uVar5 = (**(code **)(*unaff_x22 + 0x158))();
    }
    else {
                    /* catch() { ... } // from try @ 04cb3c64 with catch @ 04cb3d1c
                       catch() { ... } // from try @ 04cb3d10 with catch @ 04cb3d1c */
      lVar7 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02eea768(lVar7);
      }
      lVar8 = *plVar14;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_04cb3da4;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02eea86c(plVar14,lVar7,1);
LAB_04cb3da4:
      uVar5 = (*(code *)*puVar6)(plVar14);
    }
    lVar7 = *(long *)(unaff_x19 + 0x10);
    if (lVar7 == 0) {
LAB_04cb3ff4:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar16 = *(uint *)(lVar7 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar4 = 0;
    if (uVar16 != 0) {
      iVar4 = (int)uVar5 / (int)uVar16;
    }
    uVar3 = uVar5 - iVar4 * uVar16;
    if (uVar16 <= uVar3) {
LAB_04cb3ff8:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    uVar16 = *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar16) {
      uVar10 = 0xffffffff;
      do {
        lVar7 = *(long *)(unaff_x19 + 0x18);
        if (lVar7 == 0) goto LAB_04cb3ff4;
        if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_04cb3ff8;
        puVar17 = (uint *)(lVar7 + (ulong)uVar16 * 0x18 + 0x20);
        uVar13 = (ulong)uVar16;
        if (*puVar17 == uVar5) {
          plVar14 = *(long **)(unaff_x19 + 0x30);
          if (plVar14 == (long *)0x0) {
            plVar14 = (long *)FUN_03378db8(*(undefined8 *)
                                            (*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) +
                                            0x18));
            if (plVar14 == (long *)0x0) goto LAB_04cb3ff4;
            uVar11 = (**(code **)(*plVar14 + 0x1b8))
                               (plVar14,*(undefined8 *)(lVar7 + uVar13 * 0x18 + 0x28));
          }
          else {
            if (plVar14 == (long *)0x0) goto LAB_04cb3ff4;
            lVar8 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 8);
            uVar15 = *(undefined8 *)(lVar7 + uVar13 * 0x18 + 0x28);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_02eea768(lVar8);
            }
            lVar9 = *plVar14;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar8) {
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto FUN_04cb3ef0;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_02eea86c(plVar14,lVar8,0);
FUN_04cb3ef0:
            uVar11 = (*(code *)*puVar6)(plVar14,uVar15);
          }
          if ((uVar11 & 1) != 0) {
            if ((int)(uint)uVar10 < 0) {
              lVar8 = *(long *)(unaff_x19 + 0x10);
              if (lVar8 == 0) goto LAB_04cb3ff4;
              if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_04cb3ff8;
              *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar7 + uVar13 * 0x18 + 0x24) + 1
              ;
            }
            else {
              lVar8 = *(long *)(unaff_x19 + 0x18);
              if (lVar8 == 0) goto LAB_04cb3ff4;
              if (*(uint *)(lVar8 + 0x18) <= (uint)uVar10) goto LAB_04cb3ff8;
              *(undefined4 *)(lVar8 + uVar10 * 0x18 + 0x24) =
                   *(undefined4 *)(lVar7 + uVar13 * 0x18 + 0x24);
            }
            lVar7 = lVar7 + uVar13 * 0x18;
            *in_stack_00000010 = *(undefined8 *)(lVar7 + 0x30);
            *puVar17 = 0xffffffff;
            uVar2 = *(undefined4 *)(unaff_x19 + 0x24);
            *(undefined8 *)(lVar7 + 0x28) = 0;
            *(undefined4 *)(lVar7 + 0x24) = uVar2;
            *(uint *)(unaff_x19 + 0x24) = uVar16;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar7 + uVar13 * 0x18 + 0x24);
        uVar10 = (ulong)uVar16;
        uVar16 = uVar1;
      } while (-1 < (int)uVar1);
    }
  }
  *in_stack_00000010 = 0;
  return 0;
}


