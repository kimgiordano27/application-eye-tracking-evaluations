/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$Invoke
ENTRY_POINT: 05cd8a98
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__Invoke(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  uVar11 = *(undefined4 *)(unaff_x19 + 0xc);
  uVar12 = *(undefined4 *)(unaff_x19 + 0x10);
  lVar7 = *unaff_x20;
  uVar14 = *(undefined4 *)(unaff_x19 + 0x14);
  uVar13 = *(undefined4 *)(unaff_x19 + 0x18);
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06fb4b60) {
        puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_05cd8ce0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_02feb5b8();
LAB_05cd8ce0:
  iVar5 = (*(code *)*puVar6)();
  puVar3 = PTR_DAT_06fb4a78;
  lVar7 = *(long *)PTR_DAT_06fb4a78;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar7);
    lVar7 = *(long *)puVar3;
  }
  lVar8 = *(long *)(lVar7 + 0xb8);
  bVar4 = iVar5 != 0;
  lVar7 = 0x74;
  if (bVar4) {
    lVar7 = 0x2c;
  }
  lVar1 = 0x70;
  if (bVar4) {
    lVar1 = 0x28;
  }
  lVar2 = 0x6c;
  if (bVar4) {
    lVar2 = 0x24;
  }
  FUN_068ed2ec(uVar11,uVar12,uVar14,uVar13,*(undefined4 *)(lVar8 + lVar2),
               *(undefined4 *)(lVar8 + lVar1),*(undefined4 *)(lVar8 + lVar7),0);
  return;
}


