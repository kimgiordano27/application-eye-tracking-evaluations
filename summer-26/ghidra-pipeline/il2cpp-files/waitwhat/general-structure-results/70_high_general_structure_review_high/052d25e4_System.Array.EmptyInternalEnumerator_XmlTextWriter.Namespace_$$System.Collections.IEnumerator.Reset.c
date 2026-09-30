/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<XmlTextWriter.Namespace>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 052d25e4
PROGRAM: waitwhat-libil2cpp.so
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
System_Array_EmptyInternalEnumerator<XmlTextWriter_Namespace>__System_Collections_IEnumerator_Reset
          (void)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int *in_x11;
  uint unaff_w19;
  uint uVar8;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int iVar9;
  long *unaff_x24;
  uint uVar10;
  undefined8 uVar11;
  long unaff_x26;
  int unaff_w27;
  uint unaff_w28;
  undefined8 unaff_x29;
  uint uStack000000000000000c;
  undefined8 in_stack_00000018;
  
  uVar11 = *(undefined8 *)(unaff_x26 + 0x18);
  uVar10 = (uint)uVar11;
  if (unaff_w28 < uVar10) {
    iVar9 = 0;
    lVar5 = unaff_x26 + 0x20;
    uStack000000000000000c = unaff_w19;
    do {
      uVar10 = (uint)uVar11;
      if (*(int *)(lVar5 + (long)(int)unaff_w28 * 0x18) == unaff_w27) {
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_031c09d4(lVar3);
        }
        lVar4 = *unaff_x24;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_052d2694;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_031c0d08();
LAB_052d2694:
        uVar6 = (*(code *)*puVar2)();
        if ((uVar6 & 1) != 0) {
          if ((uStack000000000000000c & 0xff) == 2) {
            uVar11 = thunk_FUN_031c39fc(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x70),
                                        &stack0x00000018);
            FUN_05950d88(uVar11,0);
          }
          else if ((uStack000000000000000c & 0xff) == 1) {
            if (unaff_w28 < *(uint *)(unaff_x26 + 0x18)) {
              *(undefined8 *)(lVar5 + (long)(int)unaff_w28 * 0x18 + 0x10) = unaff_x29;
              return 1;
            }
            goto LAB_052d2928;
          }
          return 0;
        }
        uVar10 = *(uint *)(unaff_x26 + 0x18);
      }
      if (uVar10 <= unaff_w28) goto LAB_052d2928;
      unaff_w28 = *(uint *)(lVar5 + (long)(int)unaff_w28 * 0x18 + 4);
      if ((int)uVar10 <= iVar9) {
        FUN_05950e8c(0);
      }
      uVar11 = *(undefined8 *)(unaff_x26 + 0x18);
      iVar9 = iVar9 + 1;
      uVar10 = (uint)uVar11;
    } while (unaff_w28 < uVar10);
  }
  if (*(int *)(unaff_x21 + 0x28) < 1) {
    uVar8 = *(uint *)(unaff_x21 + 0x20);
    if (uVar8 == uVar10) {
      FUN_052d2c98();
      lVar3 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x20) = uVar10 + 1;
      if (lVar3 == 0) goto LAB_052d292c;
      uVar10 = *(uint *)(lVar3 + 0x18);
      iVar9 = 0;
      if (uVar10 != 0) {
        iVar9 = unaff_w27 / (int)uVar10;
      }
      uVar1 = unaff_w27 - iVar9 * uVar10;
      if (uVar10 <= uVar1) goto LAB_052d2928;
      lVar5 = *(long *)(unaff_x21 + 0x18);
      in_x11 = (int *)(lVar3 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      lVar5 = *(long *)(unaff_x21 + 0x18);
      *(uint *)(unaff_x21 + 0x20) = uVar8 + 1;
    }
    if (lVar5 == 0) {
LAB_052d292c:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_052d2928;
    lVar5 = lVar5 + (long)(int)uVar8 * 0x18;
  }
  else {
    uVar8 = *(uint *)(unaff_x21 + 0x24);
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
    if (uVar10 <= uVar8) {
LAB_052d2928:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    lVar5 = unaff_x26 + (long)(int)uVar8 * 0x18;
    *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(lVar5 + 0x24);
  }
  *(int *)(lVar5 + 0x20) = unaff_w27;
  iVar9 = *in_x11;
  *(undefined8 *)(lVar5 + 0x28) = unaff_x20;
  *(undefined8 *)(lVar5 + 0x30) = unaff_x29;
  *(int *)(lVar5 + 0x24) = iVar9 + -1;
  *in_x11 = uVar8 + 1;
  return 1;
}


