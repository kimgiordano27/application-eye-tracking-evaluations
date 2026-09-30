/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<XmlTextWriter.Namespace>$$MoveNext
ENTRY_POINT: 052d2580
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<XmlTextWriter_Namespace>__MoveNext(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int *piVar10;
  uint unaff_w19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int iVar11;
  long *unaff_x24;
  uint uVar12;
  undefined8 uVar13;
  long unaff_x26;
  uint uVar14;
  undefined8 unaff_x29;
  uint uStack000000000000000c;
  undefined8 uStack0000000000000020;
  
  uStack0000000000000020 = param_1;
  uVar2 = FUN_059883cc(&stack0x00000018);
  lVar6 = *(long *)(unaff_x21 + 0x10);
  if (lVar6 == 0) goto LAB_052d292c;
  uVar14 = *(uint *)(lVar6 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar11 = 0;
  if (uVar14 != 0) {
    iVar11 = (int)uVar2 / (int)uVar14;
  }
  uVar12 = uVar2 - iVar11 * uVar14;
  if (uVar14 <= uVar12) {
LAB_052d2928:
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
  piVar10 = (int *)(lVar6 + (ulong)uVar12 * 4 + 0x20);
  uVar14 = *piVar10 - 1;
  uStack000000000000000c = unaff_w19;
  if (unaff_x24 == (long *)0x0) {
    if (unaff_x26 == 0) goto LAB_052d292c;
    uVar13 = *(undefined8 *)(unaff_x26 + 0x18);
    uVar12 = (uint)uVar13;
    if (uVar14 < uVar12) {
      iVar11 = 0;
      lVar6 = unaff_x26 + 0x20;
      do {
        uVar12 = (uint)uVar13;
        if (*(uint *)(lVar6 + (long)(int)uVar14 * 0x18) == uVar2) {
          plVar4 = (long *)FUN_052e1048(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(unaff_x26 + 0x18) <= uVar14) goto LAB_052d2928;
          if (plVar4 == (long *)0x0) goto LAB_052d292c;
          uVar8 = (**(code **)(*plVar4 + 0x1b8))
                            (plVar4,*(undefined8 *)(lVar6 + (long)(int)uVar14 * 0x18 + 8));
          if ((uVar8 & 1) != 0) {
            if ((uStack000000000000000c & 0xff) == 2) goto LAB_052d2900;
            if ((uStack000000000000000c & 0xff) != 1) {
              return 0;
            }
            if (uVar14 < *(uint *)(unaff_x26 + 0x18)) {
              *(undefined8 *)(lVar6 + (long)(int)uVar14 * 0x18 + 0x10) = unaff_x29;
              return 1;
            }
            goto LAB_052d2928;
          }
          uVar12 = *(uint *)(unaff_x26 + 0x18);
        }
        if (uVar12 <= uVar14) goto LAB_052d2928;
        uVar14 = *(uint *)(lVar6 + (long)(int)uVar14 * 0x18 + 4);
        if ((int)uVar12 <= iVar11) {
          FUN_05950e8c(0);
        }
        uVar13 = *(undefined8 *)(unaff_x26 + 0x18);
        iVar11 = iVar11 + 1;
        uVar12 = (uint)uVar13;
      } while (uVar14 < uVar12);
    }
  }
  else {
    if (unaff_x26 == 0) goto LAB_052d292c;
    uVar13 = *(undefined8 *)(unaff_x26 + 0x18);
    uVar12 = (uint)uVar13;
    if (uVar14 < uVar12) {
      iVar11 = 0;
      lVar6 = unaff_x26 + 0x20;
      do {
        uVar12 = (uint)uVar13;
        if (*(uint *)(lVar6 + (long)(int)uVar14 * 0x18) == uVar2) {
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_031c09d4(lVar5);
          }
          lVar7 = *unaff_x24;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_052d2694;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_031c0d08();
LAB_052d2694:
          uVar8 = (*(code *)*puVar3)();
          if ((uVar8 & 1) != 0) {
            if ((uStack000000000000000c & 0xff) == 2) {
LAB_052d2900:
              uVar13 = thunk_FUN_031c39fc(*(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x70),
                                          &stack0x00000018);
              FUN_05950d88(uVar13,0);
              return 0;
            }
            if ((uStack000000000000000c & 0xff) != 1) {
              return 0;
            }
            if (uVar14 < *(uint *)(unaff_x26 + 0x18)) {
              *(undefined8 *)(lVar6 + (long)(int)uVar14 * 0x18 + 0x10) = unaff_x29;
              return 1;
            }
            goto LAB_052d2928;
          }
          uVar12 = *(uint *)(unaff_x26 + 0x18);
        }
        if (uVar12 <= uVar14) goto LAB_052d2928;
        uVar14 = *(uint *)(lVar6 + (long)(int)uVar14 * 0x18 + 4);
        if ((int)uVar12 <= iVar11) {
          FUN_05950e8c(0);
        }
        uVar13 = *(undefined8 *)(unaff_x26 + 0x18);
        iVar11 = iVar11 + 1;
        uVar12 = (uint)uVar13;
      } while (uVar14 < uVar12);
    }
  }
  if (*(int *)(unaff_x21 + 0x28) < 1) {
    uVar14 = *(uint *)(unaff_x21 + 0x20);
    if (uVar14 == uVar12) {
      FUN_052d2c98();
      lVar5 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x20) = uVar12 + 1;
      if (lVar5 == 0) goto LAB_052d292c;
      uVar12 = *(uint *)(lVar5 + 0x18);
      iVar11 = 0;
      if (uVar12 != 0) {
        iVar11 = (int)uVar2 / (int)uVar12;
      }
      uVar1 = uVar2 - iVar11 * uVar12;
      if (uVar12 <= uVar1) goto LAB_052d2928;
      lVar6 = *(long *)(unaff_x21 + 0x18);
      piVar10 = (int *)(lVar5 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      lVar6 = *(long *)(unaff_x21 + 0x18);
      *(uint *)(unaff_x21 + 0x20) = uVar14 + 1;
    }
    if (lVar6 == 0) {
LAB_052d292c:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_052d2928;
    lVar6 = lVar6 + (long)(int)uVar14 * 0x18;
  }
  else {
    uVar14 = *(uint *)(unaff_x21 + 0x24);
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
    if (uVar12 <= uVar14) goto LAB_052d2928;
    lVar6 = unaff_x26 + (long)(int)uVar14 * 0x18;
    *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(lVar6 + 0x24);
  }
  *(uint *)(lVar6 + 0x20) = uVar2;
  iVar11 = *piVar10;
  *(undefined8 *)(lVar6 + 0x28) = unaff_x20;
  *(undefined8 *)(lVar6 + 0x30) = unaff_x29;
  *(int *)(lVar6 + 0x24) = iVar11 + -1;
  *piVar10 = uVar14 + 1;
  return 1;
}


