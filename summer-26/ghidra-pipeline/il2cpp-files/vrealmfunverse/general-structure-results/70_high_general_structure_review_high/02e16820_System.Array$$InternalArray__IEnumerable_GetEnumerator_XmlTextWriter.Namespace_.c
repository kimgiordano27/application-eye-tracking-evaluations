/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<XmlTextWriter.Namespace>
ENTRY_POINT: 02e16820
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<XmlTextWriter_Namespace>(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar12;
  long in_stack_00000008;
  char *in_stack_00000010;
  undefined8 *in_stack_00000018;
  
  lVar8 = thunk_FUN_02b79548();
  if (lVar8 == 0) {
    uVar12 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar12,0);
  }
  if (*(uint *)(unaff_x19 + 0x18) < 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  *(undefined8 *)(unaff_x19 + 0x78) = unaff_x20;
  thunk_FUN_02bb0e9c();
  uVar9 = FUN_02e437a4(0);
  bVar1 = (uVar9 & 1) == 0;
  if (bVar1) {
    FUN_02e16c7c(0);
  }
  puVar5 = PTR_DAT_0631cf00;
  puVar4 = PTR_DAT_0631ce38;
  puVar3 = PTR_DAT_0631c908;
  puVar2 = PTR_DAT_06312310;
  if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
    uVar9 = 0;
    uVar10 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
    do {
      if (uVar10 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar8 = *(long *)(unaff_x19 + 0x20 + uVar9 * 8);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar12 = *(undefined8 *)(lVar8 + 0x18);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar12 = FUN_02b3ccac(uVar12,*(undefined8 *)puVar3,*(undefined8 *)puVar4);
      uVar10 = FUN_04d94540(uVar12,0,0);
      bVar7 = FUN_02e16d30(*(undefined8 *)(lVar8 + 0x10));
      puVar11 = (undefined8 *)puVar5;
      if ((uVar10 & 1) == 0) {
        bVar6 = false;
        if ((bVar7 & 1) == 0) goto LAB_02e1697c;
LAB_02e16938:
        uVar12 = FUN_04c0af6c(*(undefined8 *)PTR_DAT_0631cec0,*puVar11,*(undefined8 *)(lVar8 + 0x10)
                              ,*(undefined8 *)(lVar8 + 0x18),0);
        if (*(int *)(*(long *)PTR_DAT_0631ca98 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_02e0fa90(1,uVar12);
      }
      else if (bVar1 || (bVar7 & 1) != 0) {
        if ((bVar7 & 1) == 0) {
LAB_02e1692c:
          bVar6 = true;
          puVar11 = (undefined8 *)PTR_DAT_0631ce88;
          goto LAB_02e16938;
        }
        bVar6 = true;
      }
      else {
        bVar6 = *(char *)(lVar8 + 0x20) != '\0';
        if ((bool)(bVar7 & 1) != bVar6) {
          if (*(char *)(lVar8 + 0x20) == '\0') {
            bVar6 = false;
            goto LAB_02e16938;
          }
          goto LAB_02e1692c;
        }
      }
LAB_02e1697c:
      FUN_02e16df0(*(undefined8 *)(lVar8 + 0x10),bVar6);
      uVar10 = (ulong)*(uint *)(unaff_x19 + 0x18);
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)(int)*(uint *)(unaff_x19 + 0x18));
  }
  puVar2 = PTR_DAT_06315e40;
  lVar8 = *(long *)PTR_DAT_06315e40;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar8 = *(long *)puVar2;
  }
  *(undefined1 *)(*(long *)(lVar8 + 0xb8) + 0x18) = 1;
  if (*in_stack_00000010 != '\0') {
    thunk_FUN_02b4a54c(*in_stack_00000018,0);
  }
  if (in_stack_00000008 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc();
  }
  return;
}


