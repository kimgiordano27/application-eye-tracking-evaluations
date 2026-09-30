/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<XmlTextWriter.Namespace>$$.ctor
ENTRY_POINT: 04cb3d60
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<XmlTextWriter_Namespace>___ctor
          (long param_1,undefined8 param_2,long param_3)

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
  long in_x9;
  ulong uVar11;
  int *in_x10;
  int *piVar12;
  long unaff_x19;
  ulong uVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  uint *puVar17;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  
  do {
    in_x9 = in_x9 + -1;
    piVar12 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar6 = (undefined8 *)FUN_02eea86c();
      goto LAB_04cb3da4;
    }
    plVar9 = (long *)(in_x10 + 2);
    in_x10 = piVar12;
  } while (*plVar9 != param_3);
  puVar6 = (undefined8 *)(param_1 + (long)(*piVar12 + 1) * 0x10 + 0x138);
LAB_04cb3da4:
  uVar5 = (*(code *)*puVar6)();
  lVar8 = *(long *)(unaff_x19 + 0x10);
  if (lVar8 != 0) {
    uVar15 = *(uint *)(lVar8 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar4 = 0;
    if (uVar15 != 0) {
      iVar4 = (int)uVar5 / (int)uVar15;
    }
    uVar3 = uVar5 - iVar4 * uVar15;
    if (uVar15 <= uVar3) {
LAB_04cb3ff8:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    uVar15 = *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar15) {
      uVar16 = 0xffffffff;
      do {
        lVar8 = *(long *)(unaff_x19 + 0x18);
        if (lVar8 == 0) goto LAB_04cb3ff4;
        if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_04cb3ff8;
        puVar17 = (uint *)(lVar8 + (ulong)uVar15 * 0x18 + 0x20);
        uVar13 = (ulong)uVar15;
        if (*puVar17 == uVar5) {
          plVar9 = *(long **)(unaff_x19 + 0x30);
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)FUN_03378db8(*(undefined8 *)
                                           (*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) +
                                           0x18));
            if (plVar9 == (long *)0x0) goto LAB_04cb3ff4;
            uVar11 = (**(code **)(*plVar9 + 0x1b8))
                               (plVar9,*(undefined8 *)(lVar8 + uVar13 * 0x18 + 0x28));
          }
          else {
            if (plVar9 == (long *)0x0) goto LAB_04cb3ff4;
            lVar7 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 8);
            uVar14 = *(undefined8 *)(lVar8 + uVar13 * 0x18 + 0x28);
            if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_02eea768(lVar7);
            }
            lVar10 = *plVar9;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar7) {
                  puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto FUN_04cb3ef0;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_02eea86c(plVar9,lVar7,0);
FUN_04cb3ef0:
            uVar11 = (*(code *)*puVar6)(plVar9,uVar14);
          }
          if ((uVar11 & 1) != 0) {
            if ((int)(uint)uVar16 < 0) {
              lVar7 = *(long *)(unaff_x19 + 0x10);
              if (lVar7 == 0) goto LAB_04cb3ff4;
              if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_04cb3ff8;
              *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar8 + uVar13 * 0x18 + 0x24) + 1
              ;
            }
            else {
              lVar7 = *(long *)(unaff_x19 + 0x18);
              if (lVar7 == 0) goto LAB_04cb3ff4;
              if (*(uint *)(lVar7 + 0x18) <= (uint)uVar16) goto LAB_04cb3ff8;
              *(undefined4 *)(lVar7 + uVar16 * 0x18 + 0x24) =
                   *(undefined4 *)(lVar8 + uVar13 * 0x18 + 0x24);
            }
            lVar8 = lVar8 + uVar13 * 0x18;
            *in_stack_00000010 = *(undefined8 *)(lVar8 + 0x30);
            *puVar17 = 0xffffffff;
            uVar2 = *(undefined4 *)(unaff_x19 + 0x24);
            *(undefined8 *)(lVar8 + 0x28) = 0;
            *(undefined4 *)(lVar8 + 0x24) = uVar2;
            *(uint *)(unaff_x19 + 0x24) = uVar15;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar8 + uVar13 * 0x18 + 0x24);
        uVar16 = (ulong)uVar15;
        uVar15 = uVar1;
      } while (-1 < (int)uVar1);
    }
    *in_stack_00000010 = 0;
    return 0;
  }
LAB_04cb3ff4:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


