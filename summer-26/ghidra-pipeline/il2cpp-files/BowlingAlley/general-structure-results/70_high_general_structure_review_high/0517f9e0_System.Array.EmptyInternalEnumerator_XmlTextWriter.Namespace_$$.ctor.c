/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<XmlTextWriter.Namespace>$$.ctor
ENTRY_POINT: 0517f9e0
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
System_Array_EmptyInternalEnumerator<XmlTextWriter_Namespace>___ctor
          (long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x23;
  uint uVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 in_stack_00000018;
  
  uVar5 = FUN_05940090(param_2,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x188));
  lVar8 = *(long *)(unaff_x19 + 0x10);
  if (lVar8 != 0) {
    uVar13 = *(uint *)(lVar8 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar4 = 0;
    if (uVar13 != 0) {
      iVar4 = (int)uVar5 / (int)uVar13;
    }
    uVar3 = uVar5 - iVar4 * uVar13;
    if (uVar13 <= uVar3) {
System_Array_EmptyInternalEnumerator<XmlWellFormedWriter_AttrName>___cctor:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    uVar13 = *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar13) {
      uVar16 = 0xffffffff;
      do {
        lVar8 = *(long *)(unaff_x19 + 0x18);
        if (lVar8 == 0) goto LAB_0517fc44;
        if (*(uint *)(lVar8 + 0x18) <= uVar13)
        goto System_Array_EmptyInternalEnumerator<XmlWellFormedWriter_AttrName>___cctor;
        puVar14 = (uint *)(lVar8 + (ulong)uVar13 * 0x38 + 0x20);
        uVar15 = (ulong)uVar13;
        if (*puVar14 == uVar5) {
          plVar9 = *(long **)(unaff_x19 + 0x30);
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)FUN_03896198(*(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x18));
            if (plVar9 == (long *)0x0) goto LAB_0517fc44;
            uVar11 = (**(code **)(*plVar9 + 0x1b8))
                               (plVar9,*(undefined4 *)(lVar8 + uVar15 * 0x38 + 0x28),
                                in_stack_00000018._4_4_,*(undefined8 *)(*plVar9 + 0x1c0));
          }
          else {
            if (plVar9 == (long *)0x0) goto LAB_0517fc44;
            lVar7 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar8 + uVar15 * 0x38 + 0x28);
            if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_032934b8(lVar7);
            }
            lVar10 = *plVar9;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar7) {
                  puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_0517fb48;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_032937ac(plVar9,lVar7,0);
LAB_0517fb48:
            uVar11 = (*(code *)*puVar6)(plVar9,uVar1,in_stack_00000018._4_4_,puVar6[1]);
          }
          if ((uVar11 & 1) != 0) {
            if ((int)(uint)uVar16 < 0) {
              lVar7 = *(long *)(unaff_x19 + 0x10);
              if (lVar7 == 0) goto LAB_0517fc44;
              if (*(uint *)(lVar7 + 0x18) <= uVar3)
              goto System_Array_EmptyInternalEnumerator<XmlWellFormedWriter_AttrName>___cctor;
              *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar8 + uVar15 * 0x38 + 0x24) + 1
              ;
            }
            else {
              lVar7 = *(long *)(unaff_x19 + 0x18);
              if (lVar7 == 0) goto LAB_0517fc44;
              if (*(uint *)(lVar7 + 0x18) <= (uint)uVar16)
              goto System_Array_EmptyInternalEnumerator<XmlWellFormedWriter_AttrName>___cctor;
              *(undefined4 *)(lVar7 + uVar16 * 0x38 + 0x24) =
                   *(undefined4 *)(lVar8 + uVar15 * 0x38 + 0x24);
            }
            *puVar14 = 0xffffffff;
            uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
            lVar8 = lVar8 + uVar15 * 0x38;
            *(undefined8 *)(lVar8 + 0x38) = 0;
            *(undefined8 *)(lVar8 + 0x30) = 0;
            *(undefined8 *)(lVar8 + 0x48) = 0;
            *(undefined8 *)(lVar8 + 0x40) = 0;
            *(undefined8 *)(lVar8 + 0x50) = 0;
            *(undefined4 *)(lVar8 + 0x24) = uVar1;
            *(uint *)(unaff_x19 + 0x24) = uVar13;
            *(ulong *)(unaff_x19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
            return 1;
          }
        }
        uVar2 = *(uint *)(lVar8 + uVar15 * 0x38 + 0x24);
        uVar16 = (ulong)uVar13;
        uVar13 = uVar2;
      } while (-1 < (int)uVar2);
    }
    return 0;
  }
LAB_0517fc44:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


