/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 038b1d84
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8
System_Array__InternalArray__IReadOnlyList_get_Item<ProbeVolumeBakingSet_SerializedPerSceneCellList>
          (void)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (*(long *)(unaff_x19 + 0x38) == 0) {
    FUN_0367ca58();
  }
  if ((unaff_x20 != 0) && (lVar5 = *(long *)(unaff_x20 + 0x10), lVar5 != 0)) {
    lVar7 = *(long *)(lVar5 + 0x60);
    *(undefined4 *)(lVar5 + 0x50) = 1;
    if (lVar7 != 0) {
      iVar1 = *(int *)(lVar7 + 0x18);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_05e3b0f4(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
        lVar5 = *(long *)(unaff_x20 + 0x10);
        if (lVar5 == 0) goto LAB_038b1ec8;
      }
      lVar5 = *(long *)(lVar5 + 0x60);
      uVar9 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(DAT_07ef5fb8 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar9 = FUN_05e26f18(uVar9,0);
      lVar7 = DAT_07b8c028;
      if (lVar5 != 0) {
        lVar6 = *(long *)(lVar5 + 0x10);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar3 = *(uint *)(lVar5 + 0x18);
          if (uVar3 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar3 + 1;
            *(undefined8 *)(lVar6 + (long)(int)uVar3 * 8 + 0x20) = uVar9;
            thunk_FUN_036b7ad0();
          }
          else {
            FUN_0459f03c(lVar5,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
          uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
          uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
          if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 8) + 0x135) & 1) == 0) {
            FUN_0367c9fc();
          }
          uVar4 = thunk_FUN_0367fe20();
          (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))(uVar4,uVar9,uVar8,uVar2);
          return uVar4;
        }
      }
    }
  }
LAB_038b1ec8:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


