/*
FUNCTION_NAME: System.Array$$BinarySearch<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 031513ac
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


void System_Array__BinarySearch<OVRPassthroughLayer_SerializedSurfaceGeometry>(ulong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long *unaff_x20;
  long unaff_x22;
  long lVar7;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    return;
  }
  if (unaff_x20 == (long *)0x0) {
LAB_031515c4:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar2 = (**(code **)(*unaff_x20 + 0x218))();
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x30);
  in_stack_00000018._4_4_ = uVar2;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02b76218(lVar5);
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar5);
  }
  lVar7 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x28);
  lVar5 = *(long *)(lVar7 + 0x20);
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
  lVar5 = *(long *)(lVar7 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02b76218();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02b76218();
  }
  lVar7 = *(long *)(unaff_x22 + 0x38);
  if (*(char *)(*(long *)(lVar5 + 0xb8) + 0xc) != '\0') {
    plVar3 = (long *)FUN_030b3814(*(undefined8 *)(lVar7 + 0x38));
    if (plVar3 == (long *)0x0) goto LAB_031515c4;
    uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,uVar2,0,*(undefined8 *)(*plVar3 + 0x1c0));
    if ((uVar4 & 1) != 0) goto LAB_03151534;
    lVar7 = *(long *)(unaff_x22 + 0x38);
  }
  uVar4 = FUN_032c08d4((long)&stack0x00000018 + 4,&stack0x00000008,*(undefined8 *)(lVar7 + 0x58));
  uVar1 = in_stack_00000008;
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x68);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02b76218(lVar5);
    }
    plVar3 = (long *)thunk_FUN_02b79548(uVar1,lVar5);
    if (plVar3 == (long *)0x0) {
      FUN_032e71dc();
      return;
    }
    lVar5 = *plVar3;
    lVar7 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x70);
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
          lVar5 = lVar5 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
          goto LAB_03151580;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    lVar5 = FUN_02b7654c(plVar3);
LAB_03151580:
    lVar5 = thunk_FUN_02b5b75c(*(undefined8 *)(lVar5 + 8),lVar7);
    (**(code **)(lVar5 + 8))(plVar3);
    return;
  }
LAB_03151534:
  FUN_03c5d150();
  FUN_05ea48a0();
  return;
}


