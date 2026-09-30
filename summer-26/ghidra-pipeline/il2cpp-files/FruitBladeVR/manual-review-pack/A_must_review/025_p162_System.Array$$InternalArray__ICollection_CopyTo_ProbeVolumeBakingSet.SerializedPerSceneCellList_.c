/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 02047698
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


bool System_Array__InternalArray__ICollection_CopyTo<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int in_w8;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *unaff_x19;
  undefined4 unaff_w21;
  long unaff_x22;
  long *plVar9;
  undefined4 unaff_w23;
  long unaff_x24;
  undefined8 uVar10;
  undefined8 uStack0000000000000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (in_w8 == 0) {
    thunk_FUN_01cb0d4c();
  }
  lVar6 = *(long *)(unaff_x22 + 0x38);
                    /* try { // try from 020476a4 to 021476ab has its CatchHandler @ 0204781c */
  lVar2 = *(long *)(lVar6 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c8c820();
    lVar6 = *(long *)(unaff_x22 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x18);
                    /* try { // try from 020476c8 to 021476d7 has its CatchHandler @ 02047820 */
  uVar10 = **(undefined8 **)(lVar2 + 0xb8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                    /* try { // try from 020476d8 to 0214770f has its CatchHandler @ 0204757c */
    lVar6 = FUN_01c8c820(lVar6);
  }
  uVar3 = thunk_FUN_01c8fc48(lVar6);
  FUN_02e6744c(uVar3,uVar10,*(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x28),
               *(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x30));
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c8c820();
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8) = uVar3;
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01c8c820();
  }
  thunk_FUN_01cc8040(*(long *)(lVar2 + 0xb8) + 8,uVar3);
  iVar1 = FUN_026f75e0();
  if (iVar1 == -1) {
    if (unaff_x24 == 0) {
LAB_020478c4:
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    if (*(int *)(unaff_x24 + 0x18) == 0) {
      FUN_01efc8a0();
      puVar4 = (undefined4 *)FUN_026f79fc();
      plVar9 = *(long **)(puVar4 + 2);
      *puVar4 = unaff_w23;
      puVar4[1] = unaff_w21;
      if (plVar9 == (long *)0x0) goto LAB_020478c4;
      lVar2 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03cb72d8) {
            puVar5 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02047880;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_01c8cb54(plVar9,*(long *)PTR_DAT_03cb72d8,0);
LAB_02047880:
      (*(code *)*puVar5)(plVar9,puVar5[1]);
      uVar10 = *(undefined8 *)(puVar4 + 2);
    }
    else {
      in_stack_00000008 = 0;
      uStack0000000000000000 = CONCAT44(unaff_w21,unaff_w23);
      in_stack_00000008 = FUN_022e7e58();
      thunk_FUN_01cc8040(&stack0x00000008,in_stack_00000008);
      in_stack_00000018 = in_stack_00000008;
      in_stack_00000010 = uStack0000000000000000;
      FUN_026f7218();
      uVar10 = in_stack_00000018;
    }
    *unaff_x19 = uVar10;
    thunk_FUN_01cc8040();
  }
  else {
    lVar2 = FUN_026f79fc();
    *unaff_x19 = *(undefined8 *)(lVar2 + 8);
    thunk_FUN_01cc8040();
    *(undefined4 *)(lVar2 + 4) = unaff_w21;
  }
  return iVar1 != -1;
}


