/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<XmlTextWriter.Namespace>
ENTRY_POINT: 0350d854
PROGRAM: beastcraft-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<XmlTextWriter_Namespace>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  long *plVar15;
  long unaff_x21;
  
  FUN_02e3ca1c(PTR_DAT_06a69bc0);
  FUN_02e3ca1c(PTR_DAT_06a5dfa0);
  FUN_02e3ca1c(PTR_DAT_06a5dfb0);
  FUN_02e3ca1c(PTR_DAT_06a5dfb8);
  *(undefined1 *)(unaff_x21 + 0x9cc) = 1;
  FUN_034fe678();
  FUN_0350dacc();
  if (((*(long *)(unaff_x19 + 0x1b8) != 0) &&
      (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x1b8) + 0x68), lVar7 != 0)) &&
     (lVar7 = FUN_06264e10(lVar7,0), lVar7 != 0)) {
    FUN_062681fc(lVar7,1,0);
    FUN_0350db7c();
    *(undefined8 *)(unaff_x19 + 0x1c4) = 0;
    if (unaff_x20 != 0) {
      uVar8 = FUN_060d1d88();
      uVar9 = FUN_054443f0(uVar8,0);
      plVar15 = *(long **)(unaff_x19 + 0x1b0);
      if ((uVar9 & 1) == 0) {
        if (plVar15 == (long *)0x0) goto LAB_0350dac8;
        lVar12 = *plVar15;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
        lVar7 = *(long *)PTR_DAT_06a5df98;
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar7) {
              iVar13 = *piVar14 + 6;
              goto LAB_0350d9a0;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        uVar8 = 6;
      }
      else {
        if (plVar15 == (long *)0x0) goto LAB_0350dac8;
        lVar12 = *plVar15;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
        lVar7 = *(long *)PTR_DAT_06a5df98;
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar7) {
              iVar13 = *piVar14 + 4;
LAB_0350d9a0:
              puVar10 = (undefined8 *)(lVar12 + (long)iVar13 * 0x10 + 0x138);
              goto LAB_0350d9a8;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        uVar8 = 4;
      }
      puVar10 = (undefined8 *)FUN_02e759c0(plVar15,lVar7,uVar8);
LAB_0350d9a8:
      puVar6 = PTR_DAT_06a5dfb8;
      puVar5 = PTR_DAT_06a5dfb0;
      puVar4 = PTR_DAT_06a5dfa0;
      puVar3 = PTR_DAT_06a5df90;
      puVar2 = PTR_DAT_06a5df38;
      puVar1 = PTR_DAT_06a5db48;
      uVar8 = (*(code *)*puVar10)(plVar15,puVar10[1]);
      uVar11 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
      FUN_05285038();
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar8 = FUN_039cdd74(uVar8,uVar11,*(undefined8 *)puVar5);
      uVar11 = thunk_FUN_02e78ab8(*(undefined8 *)puVar2);
      FUN_04e0292c();
      uVar8 = FUN_039d50e8(uVar8,uVar11,*(undefined8 *)puVar4);
      uVar11 = FUN_03519ac4();
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02e9a04c(*(long *)puVar1);
      }
      FUN_05c23ca0(&stack0x00000008,uVar8,uVar11,0);
      return;
    }
  }
LAB_0350dac8:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


