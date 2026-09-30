/*
FUNCTION_NAME: System.Array$$IndexOf<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 023ce424
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Array__IndexOf<ProbeVolumeBakingSet_SerializedPerSceneCellList>(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  undefined8 in_stack_00000008;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02091334();
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02091334();
  }
  lVar5 = *(long *)(unaff_x22 + 0x38);
  if (*(char *)(*(long *)(lVar2 + 0xb8) + 0xc) != '\0') {
    plVar3 = (long *)FUN_023db124(*(undefined8 *)(lVar5 + 0x38));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0206154c();
    }
    uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if ((uVar4 & 1) != 0) goto LAB_023ce514;
    lVar5 = *(long *)(unaff_x22 + 0x38);
  }
  uVar4 = FUN_02545ba8(&stack0x0000001c,&stack0x00000008,*(undefined8 *)(lVar5 + 0x58));
  uVar1 = in_stack_00000008;
  if ((uVar4 & 1) != 0) {
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x68);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02091334(lVar2);
    }
    plVar3 = (long *)thunk_FUN_02094664(uVar1,lVar2);
    if (plVar3 == (long *)0x0) {
      FUN_0256a818();
      return;
    }
    lVar2 = *plVar3;
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x70);
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(lVar5 + 0x20)) {
          lVar2 = lVar2 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 + 0x138;
          goto 
          System_Array__IndexOf<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    lVar2 = FUN_02091668(plVar3);
System_Array__IndexOf<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>:
    lVar2 = thunk_FUN_0207caf4(*(undefined8 *)(lVar2 + 8),lVar5);
    (**(code **)(lVar2 + 8))(plVar3);
    return;
  }
LAB_023ce514:
  FUN_0287c924();
  FUN_042cfe5c();
  return;
}


