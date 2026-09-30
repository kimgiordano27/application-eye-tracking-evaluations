/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 02fa00cc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_CopyTo<ProbeVolumeBakingSet_SerializedPerSceneCellList>
          (void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  *(undefined1 *)(unaff_x20 + 0xce5) = 1;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    iVar2 = FUN_02fb63a4();
    iVar1 = *(int *)(unaff_x19 + 0x20) + 1;
    if ((iVar2 <= iVar1) || (iVar2 != *(int *)(unaff_x19 + 0x30))) {
      *(undefined8 *)(unaff_x19 + 0x28) = 0;
      thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x28),0);
      return 0;
    }
    plVar9 = *(long **)(unaff_x19 + 0x18);
    *(int *)(unaff_x19 + 0x20) = iVar1;
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06763f58) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02fa0174;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)PTR_DAT_06763f58,0);
LAB_02fa0174:
      uVar4 = (*(code *)*puVar3)(plVar9,iVar1,puVar3[1]);
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        uVar5 = FUN_02fb5f5c(*(long *)(unaff_x19 + 0x10),uVar4);
        in_stack_00000010 = 0;
        in_stack_00000018 = 0;
        FUN_0390bf6c(&stack0x00000010,uVar4,uVar5,*(undefined8 *)PTR_DAT_06763f60);
        uVar4 = thunk_FUN_02d9d164(*(undefined8 *)PTR_DAT_06763f48);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar4;
        thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x28),uVar4);
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


