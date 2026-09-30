/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<XmlTextWriter.Namespace>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 0603cbc8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<XmlTextWriter_Namespace>__System_Collections_IEnumerator_Reset
          (void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint in_w8;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  ulong unaff_x20;
  long unaff_x23;
  uint unaff_w24;
  uint uVar9;
  uint unaff_w25;
  ulong uVar10;
  int *piVar11;
  int unaff_w29;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    uVar9 = unaff_w24;
    if ((int)in_w8 < 0) {
      return 0;
    }
    lVar4 = *(long *)(unaff_x23 + 0x18);
    if (lVar4 == 0) goto LAB_0603cc84;
    if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_0603cc88;
    lVar4 = lVar4 + 0x20;
    piVar11 = (int *)(lVar4 + (ulong)uVar9 * (unaff_x20 & 0xffffffff));
    uVar10 = (ulong)uVar9;
    if (*piVar11 == unaff_w29) {
      plVar8 = *(long **)(unaff_x23 + 0x30);
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)FUN_04039e78(*(undefined8 *)
                                       (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18
                                       ));
        if (plVar8 == (long *)0x0) goto LAB_0603cc84;
        uVar6 = (**(code **)(*plVar8 + 0x1b8))
                          (plVar8,*(undefined4 *)(lVar4 + uVar10 * (unaff_x20 & 0xffffffff) + 8),
                           in_stack_00000018._4_4_,*(undefined8 *)(*plVar8 + 0x1c0));
      }
      else {
        lVar3 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
        uVar1 = *(undefined4 *)(lVar4 + uVar10 * (unaff_x20 & 0xffffffff) + 8);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03ac4090(lVar3);
        }
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0603cb98;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_03ac43c4(plVar8,lVar3,0);
LAB_0603cb98:
        uVar6 = (*(code *)*puVar2)(plVar8,uVar1,in_stack_00000018._4_4_,puVar2[1]);
        unaff_x23 = in_stack_00000008;
      }
      if ((uVar6 & 1) != 0) {
        if ((int)unaff_w25 < 0) {
          lVar3 = *(long *)(unaff_x23 + 0x10);
          if (lVar3 == 0) goto LAB_0603cc84;
          if (*(uint *)(lVar3 + 0x18) <= (uint)in_stack_00000000) goto LAB_0603cc88;
          *(int *)(lVar3 + in_stack_00000000 * 4 + 0x20) = *(int *)(lVar4 + uVar10 * 100 + 4) + 1;
        }
        else {
          lVar3 = *(long *)(unaff_x23 + 0x18);
          if (lVar3 == 0) {
LAB_0603cc84:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          if (*(uint *)(lVar3 + 0x18) <= unaff_w25) {
LAB_0603cc88:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          *(undefined4 *)(lVar3 + (ulong)unaff_w25 * 100 + 0x24) =
               *(undefined4 *)(lVar4 + uVar10 * 100 + 4);
        }
        uVar1 = *(undefined4 *)(unaff_x23 + 0x24);
        *piVar11 = -1;
        *(uint *)(unaff_x23 + 0x24) = uVar9;
        *(undefined4 *)(lVar4 + uVar10 * 100 + 4) = uVar1;
        *(ulong *)(unaff_x23 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x23 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x23 + 0x28) + 1);
        return 1;
      }
    }
    in_w8 = *(uint *)(lVar4 + uVar10 * (unaff_x20 & 0xffffffff) + 4);
    unaff_w24 = in_w8;
    unaff_w25 = uVar9;
  } while( true );
}


