/*
FUNCTION_NAME: System.Array$$BinarySearch<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 031527ec
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Array__BinarySearch<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_48;
  uint local_34;
  
  puVar4 = *(undefined8 **)(param_4 + 0x38);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_02b76274(param_4);
    puVar4 = *(undefined8 **)(param_4 + 0x38);
  }
  local_48 = 0;
  uVar7 = *puVar4;
  local_34 = 0;
  if (*(int *)(DAT_066dedc0 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar7 = FUN_04d8a7b0(uVar7,0);
  uVar2 = FUN_05d314e0(uVar7,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (param_2 == (long *)0x0) {
LAB_03152a74:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar1 = (**(code **)(*param_2 + 0x218))(param_2,param_3,*(undefined8 *)(*param_2 + 0x220));
  lVar5 = *(long *)(*(long *)(param_4 + 0x38) + 0x30);
  local_34 = uVar1;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar5);
  }
  lVar8 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
  lVar5 = *(long *)(lVar8 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02b76218();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02b76218();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar5 = *(long *)(lVar8 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02b76218();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02b76218();
  }
  lVar8 = *(long *)(param_4 + 0x38);
  if (*(char *)(*(long *)(lVar5 + 0xb8) + 0xc) != '\0') {
    plVar3 = (long *)FUN_030b3814(*(undefined8 *)(lVar8 + 0x38));
    if (plVar3 == (long *)0x0) goto LAB_03152a74;
    uVar2 = (**(code **)(*plVar3 + 0x1b8))(plVar3,uVar1,0,*(undefined8 *)(*plVar3 + 0x1c0));
    if ((uVar2 & 1) != 0) goto LAB_031529e4;
    lVar8 = *(long *)(param_4 + 0x38);
  }
  uVar2 = FUN_032c08d4(&local_34,&local_48,*(undefined8 *)(lVar8 + 0x58));
  uVar7 = local_48;
  if ((uVar2 & 1) != 0) {
    lVar5 = *(long *)(*(long *)(param_4 + 0x38) + 0x68);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02b76218(lVar5);
    }
    plVar3 = (long *)thunk_FUN_02b79548(uVar7,lVar5);
    if (plVar3 == (long *)0x0) {
      FUN_032e71dc(param_1,&local_34,0,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x78));
      return;
    }
    lVar5 = *plVar3;
    lVar8 = *(long *)(*(long *)(param_4 + 0x38) + 0x70);
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(lVar8 + 0x20)) {
          lVar5 = lVar5 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
          goto LAB_03152a30;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    lVar5 = FUN_02b7654c(plVar3);
LAB_03152a30:
    lVar5 = thunk_FUN_02b5b75c(*(undefined8 *)(lVar5 + 8),lVar8);
    (**(code **)(lVar5 + 8))(plVar3,param_1,param_2,param_3,&local_34,lVar5);
    return;
  }
LAB_031529e4:
  uVar7 = System_Collections_ObjectModel_ReadOnlyCollection<float>__System_Collections_IList_Insert
                    (param_2,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x80));
  FUN_05ea48a0(param_1,uVar7,0);
  return;
}


