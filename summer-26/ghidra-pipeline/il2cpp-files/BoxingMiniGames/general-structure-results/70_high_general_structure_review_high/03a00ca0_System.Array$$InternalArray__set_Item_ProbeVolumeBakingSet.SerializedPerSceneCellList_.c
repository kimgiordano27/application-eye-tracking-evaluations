/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 03a00ca0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8
System_Array__InternalArray__set_Item<ProbeVolumeBakingSet_SerializedPerSceneCellList>
          (code *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar7;
  long *unaff_x25;
  undefined8 uVar8;
  long unaff_x27;
  undefined8 uVar9;
  
  (*param_1)();
  FUN_05c8d7b8();
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_036a1978(*unaff_x25);
  }
  FUN_05e8dda4(0);
  uVar9 = *unaff_x21;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if (DAT_07ed8c6b == '\0') {
    FUN_03642964(PTR_DAT_079fd3d0);
    FUN_03642964(PTR_DAT_079f5558);
    DAT_07ed8c6b = '\x01';
  }
  puVar1 = PTR_DAT_079f5558;
  lVar2 = *(long *)PTR_DAT_079f5558;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar2 = *(long *)puVar1;
  }
  if (*(char *)(*(long *)(lVar2 + 0xb8) + 0x10) != '\0') {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_05e8de4c(uVar9,0);
  }
  thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fd3c8);
  FUN_05d86820();
  plVar3 = (long *)(**(code **)(unaff_x27 + 0x18))(*(undefined8 *)(unaff_x27 + 0x40));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar2 = *plVar3;
  uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_079fd3c0) {
        puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 3) * 0x10 + 0x138);
        goto LAB_03a00e10;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_0367cd30(plVar3,*(long *)PTR_DAT_079fd3c0,3);
LAB_03a00e10:
  uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  if ((uVar5 & 1) != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    uVar9 = *unaff_x22;
    uVar7 = *unaff_x23;
    uVar8 = *unaff_x21;
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    FUN_04f3444c(plVar3,uVar9,uVar7,uVar8,0,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x88));
  }
  return *unaff_x21;
}


