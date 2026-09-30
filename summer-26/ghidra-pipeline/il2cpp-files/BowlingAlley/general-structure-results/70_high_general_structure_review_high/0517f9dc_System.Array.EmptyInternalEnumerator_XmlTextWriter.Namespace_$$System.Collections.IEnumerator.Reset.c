/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<XmlTextWriter.Namespace>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 0517f9dc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<XmlTextWriter_Namespace>__System_Collections_IEnumerator_Reset
          (long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x23;
  uint uVar14;
  uint *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 in_stack_00000018;
  
  uVar6 = FUN_05940090((long)&stack0x00000018 + 4,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x188)
                      );
  lVar9 = *(long *)(unaff_x19 + 0x10);
  if (lVar9 != 0) {
    uVar14 = *(uint *)(lVar9 + 0x18);
    uVar6 = uVar6 & 0x7fffffff;
    iVar5 = 0;
    if (uVar14 != 0) {
      iVar5 = (int)uVar6 / (int)uVar14;
    }
    uVar4 = uVar6 - iVar5 * uVar14;
    if (uVar14 <= uVar4) {
System_Array_EmptyInternalEnumerator<XmlWellFormedWriter_AttrName>___cctor:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    uVar14 = *(int *)(lVar9 + (ulong)uVar4 * 4 + 0x20) - 1;
    if (-1 < (int)uVar14) {
      uVar17 = 0xffffffff;
      do {
        uVar3 = in_stack_00000018._4_4_;
        lVar9 = *(long *)(unaff_x19 + 0x18);
        if (lVar9 == 0) goto LAB_0517fc44;
        if (*(uint *)(lVar9 + 0x18) <= uVar14)
        goto System_Array_EmptyInternalEnumerator<XmlWellFormedWriter_AttrName>___cctor;
        puVar15 = (uint *)(lVar9 + (ulong)uVar14 * 0x38 + 0x20);
        uVar16 = (ulong)uVar14;
        if (*puVar15 == uVar6) {
          plVar10 = *(long **)(unaff_x19 + 0x30);
          if (plVar10 == (long *)0x0) {
            plVar10 = (long *)FUN_03896198(*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
            if (plVar10 == (long *)0x0) goto LAB_0517fc44;
            uVar12 = (**(code **)(*plVar10 + 0x1b8))
                               (plVar10,*(undefined4 *)(lVar9 + uVar16 * 0x38 + 0x28),
                                in_stack_00000018._4_4_,*(undefined8 *)(*plVar10 + 0x1c0));
          }
          else {
            if (plVar10 == (long *)0x0) goto LAB_0517fc44;
            lVar8 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar9 + uVar16 * 0x38 + 0x28);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_032934b8(lVar8);
            }
            lVar11 = *plVar10;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar8) {
                  puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_0517fb48;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)FUN_032937ac(plVar10,lVar8,0);
LAB_0517fb48:
            uVar12 = (*(code *)*puVar7)(plVar10,uVar1,uVar3,puVar7[1]);
          }
          if ((uVar12 & 1) != 0) {
            if ((int)(uint)uVar17 < 0) {
              lVar8 = *(long *)(unaff_x19 + 0x10);
              if (lVar8 == 0) goto LAB_0517fc44;
              if (*(uint *)(lVar8 + 0x18) <= uVar4)
              goto System_Array_EmptyInternalEnumerator<XmlWellFormedWriter_AttrName>___cctor;
              *(int *)(lVar8 + (ulong)uVar4 * 4 + 0x20) = *(int *)(lVar9 + uVar16 * 0x38 + 0x24) + 1
              ;
            }
            else {
              lVar8 = *(long *)(unaff_x19 + 0x18);
              if (lVar8 == 0) goto LAB_0517fc44;
              if (*(uint *)(lVar8 + 0x18) <= (uint)uVar17)
              goto System_Array_EmptyInternalEnumerator<XmlWellFormedWriter_AttrName>___cctor;
              *(undefined4 *)(lVar8 + uVar17 * 0x38 + 0x24) =
                   *(undefined4 *)(lVar9 + uVar16 * 0x38 + 0x24);
            }
            *puVar15 = 0xffffffff;
            uVar3 = *(undefined4 *)(unaff_x19 + 0x24);
            lVar9 = lVar9 + uVar16 * 0x38;
            *(undefined8 *)(lVar9 + 0x38) = 0;
            *(undefined8 *)(lVar9 + 0x30) = 0;
            *(undefined8 *)(lVar9 + 0x48) = 0;
            *(undefined8 *)(lVar9 + 0x40) = 0;
            *(undefined8 *)(lVar9 + 0x50) = 0;
            *(undefined4 *)(lVar9 + 0x24) = uVar3;
            *(uint *)(unaff_x19 + 0x24) = uVar14;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar2 = *(uint *)(lVar9 + uVar16 * 0x38 + 0x24);
        uVar17 = (ulong)uVar14;
        uVar14 = uVar2;
      } while (-1 < (int)uVar2);
    }
    return 0;
  }
LAB_0517fc44:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


