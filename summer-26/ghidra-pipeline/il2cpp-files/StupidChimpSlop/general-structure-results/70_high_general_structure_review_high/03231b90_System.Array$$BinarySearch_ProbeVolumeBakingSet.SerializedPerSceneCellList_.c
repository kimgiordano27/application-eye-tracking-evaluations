/*
FUNCTION_NAME: System.Array$$BinarySearch<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 03231b90
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__BinarySearch<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar12;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(param_1 + 0x28);
  lVar11 = *(long *)(param_5 + 0x38);
  if (lVar11 == 0) {
    FUN_02d87268();
    lVar11 = *(long *)(unaff_x21 + 0x38);
  }
  lVar10 = *(long *)(lVar11 + 8);
  uVar4 = *(ushort *)(lVar10 + 0x135);
  lVar8 = lVar10;
  if ((uVar4 & 1) == 0) {
    lVar10 = FUN_02d8720c(lVar10);
    lVar11 = *(long *)(unaff_x21 + 0x38);
    uVar4 = *(ushort *)(*(long *)(lVar11 + 8) + 0x135);
    lVar8 = *(long *)(lVar11 + 8);
  }
  lVar12 = (long)&stack0x00000000 - ((ulong)(*(int *)(lVar10 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar10 = lVar8;
  if ((uVar4 & 1) == 0) {
    lVar8 = FUN_02d8720c(lVar8);
    lVar11 = *(long *)(unaff_x21 + 0x38);
    uVar4 = *(ushort *)(*(long *)(lVar11 + 8) + 0x135);
    lVar10 = *(long *)(lVar11 + 8);
  }
  iVar1 = *(int *)(lVar8 + 0xfc);
  iVar2 = *unaff_x19;
  if ((uVar4 & 1) == 0) {
    lVar10 = FUN_02d8720c(lVar10);
    lVar11 = *(long *)(unaff_x21 + 0x38);
  }
  FUN_02d4e8bc(lVar10,*(undefined8 *)(lVar11 + 0x10),lVar12,param_2,0,unaff_x29 + -0xc);
  if (iVar2 < *(int *)(unaff_x29 + -0xc)) {
    iVar5 = (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x18))(param_2,*unaff_x19);
    if (iVar5 == 0x2b) {
      lVar11 = 1;
    }
    else {
      iVar5 = (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x18))(param_2,*unaff_x19);
      if (iVar5 != 0x2d) goto LAB_03231ce4;
      lVar11 = -1;
    }
    (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x20))(param_2);
  }
  else {
LAB_03231ce4:
    lVar11 = 1;
  }
  iVar5 = *unaff_x19;
  lVar8 = 0;
  iVar3 = iVar5;
  while( true ) {
    *unaff_x20 = lVar8;
    lVar10 = *(long *)(unaff_x21 + 0x38);
    lVar8 = *(long *)(lVar10 + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02d8720c();
      lVar10 = *(long *)(unaff_x21 + 0x38);
    }
    FUN_02d4e8bc(lVar8,*(undefined8 *)(lVar10 + 0x10),
                 lVar12 - ((ulong)(iVar1 + 0x10) + 0xf & 0x1fffffff0),param_2,0,unaff_x29 + -0xc);
    if (*(int *)(unaff_x29 + -0xc) <= iVar3) break;
    uVar6 = (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x18))(param_2,*unaff_x19);
    uVar9 = FUN_0590572c(uVar6,0);
    if ((uVar9 & 1) == 0) break;
    lVar8 = *unaff_x20;
    *unaff_x20 = lVar8 * 10;
    iVar7 = (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x20))(param_2);
    iVar3 = *unaff_x19;
    lVar8 = lVar8 * 10 + (long)(iVar7 + -0x30);
  }
  *unaff_x20 = *unaff_x20 * lVar11;
  iVar1 = *unaff_x19;
  if (iVar1 == iVar5) {
    *unaff_x19 = iVar2;
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != iVar5);
  }
  return;
}


