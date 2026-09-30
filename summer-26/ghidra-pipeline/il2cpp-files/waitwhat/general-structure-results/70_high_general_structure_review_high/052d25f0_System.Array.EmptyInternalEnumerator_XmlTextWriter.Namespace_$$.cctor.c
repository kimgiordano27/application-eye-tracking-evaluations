/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<XmlTextWriter.Namespace>$$.cctor
ENTRY_POINT: 052d25f0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<XmlTextWriter_Namespace>___cctor(void)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int *in_x11;
  uint unaff_w19;
  uint uVar9;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int iVar10;
  long *unaff_x24;
  uint uVar11;
  undefined8 unaff_x25;
  long unaff_x26;
  int unaff_w27;
  uint unaff_w28;
  undefined8 unaff_x29;
  uint uStack000000000000000c;
  int *piStack0000000000000010;
  undefined8 in_stack_00000018;
  
  iVar10 = 0;
  lVar6 = unaff_x26 + 0x20;
  uStack000000000000000c = unaff_w19;
  piStack0000000000000010 = in_x11;
  do {
    uVar11 = (uint)unaff_x25;
    if (*(int *)(lVar6 + (long)(int)unaff_w28 * 0x18) == unaff_w27) {
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_031c09d4(lVar4);
      }
      lVar5 = *unaff_x24;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_052d2694;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_031c0d08();
LAB_052d2694:
      uVar7 = (*(code *)*puVar2)();
      if ((uVar7 & 1) != 0) {
        if ((uStack000000000000000c & 0xff) == 2) {
          uVar3 = thunk_FUN_031c39fc(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x70),
                                     &stack0x00000018);
          FUN_05950d88(uVar3,0);
        }
        else if ((uStack000000000000000c & 0xff) == 1) {
          if (unaff_w28 < *(uint *)(unaff_x26 + 0x18)) {
            *(undefined8 *)(lVar6 + (long)(int)unaff_w28 * 0x18 + 0x10) = unaff_x29;
            return 1;
          }
          goto LAB_052d2928;
        }
        return 0;
      }
      uVar11 = *(uint *)(unaff_x26 + 0x18);
    }
    if (uVar11 <= unaff_w28) goto LAB_052d2928;
    unaff_w28 = *(uint *)(lVar6 + (long)(int)unaff_w28 * 0x18 + 4);
    if ((int)uVar11 <= iVar10) {
      FUN_05950e8c(0);
    }
    unaff_x25 = *(undefined8 *)(unaff_x26 + 0x18);
    iVar10 = iVar10 + 1;
    uVar11 = (uint)unaff_x25;
  } while (unaff_w28 < uVar11);
  if (*(int *)(unaff_x21 + 0x28) < 1) {
    uVar9 = *(uint *)(unaff_x21 + 0x20);
    if (uVar9 == uVar11) {
      FUN_052d2c98();
      lVar4 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x20) = uVar11 + 1;
      if (lVar4 == 0) goto LAB_052d292c;
      uVar11 = *(uint *)(lVar4 + 0x18);
      iVar10 = 0;
      if (uVar11 != 0) {
        iVar10 = unaff_w27 / (int)uVar11;
      }
      uVar1 = unaff_w27 - iVar10 * uVar11;
      if (uVar11 <= uVar1) goto LAB_052d2928;
      lVar6 = *(long *)(unaff_x21 + 0x18);
      piStack0000000000000010 = (int *)(lVar4 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      lVar6 = *(long *)(unaff_x21 + 0x18);
      *(uint *)(unaff_x21 + 0x20) = uVar9 + 1;
    }
    if (lVar6 == 0) {
LAB_052d292c:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_052d2928;
    lVar6 = lVar6 + (long)(int)uVar9 * 0x18;
  }
  else {
    uVar9 = *(uint *)(unaff_x21 + 0x24);
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
    if (uVar11 <= uVar9) {
LAB_052d2928:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    lVar6 = unaff_x26 + (long)(int)uVar9 * 0x18;
    *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(lVar6 + 0x24);
  }
  *(int *)(lVar6 + 0x20) = unaff_w27;
  iVar10 = *piStack0000000000000010;
  *(undefined8 *)(lVar6 + 0x28) = unaff_x20;
  *(undefined8 *)(lVar6 + 0x30) = unaff_x29;
  *(int *)(lVar6 + 0x24) = iVar10 + -1;
  *piStack0000000000000010 = uVar9 + 1;
  return 1;
}


