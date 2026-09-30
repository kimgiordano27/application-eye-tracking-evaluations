/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$GetClosestSurfacePosition
ENTRY_POINT: 04a8be84
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 163
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__GetClosestSurfacePosition(void)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  FUN_02b3c81c(PTR_DAT_06313588);
  *(undefined1 *)(unaff_x21 + 0xafa) = 1;
  iVar6 = *(int *)(unaff_x19 + 0x20);
  if (iVar6 == 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x10),0);
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x18),0);
    *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_06322378 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar5 = PTR_DAT_06313588;
    iVar6 = FUN_04d21b24(iVar6,0);
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x118);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02b76218(lVar9);
    }
    lVar9 = FUN_02b3c908(lVar9,iVar6);
    lVar7 = FUN_02b3c908(*(undefined8 *)puVar5,iVar6);
    iVar12 = *(int *)(unaff_x19 + 0x24);
    if (iVar12 < 1) {
      uVar8 = 0;
    }
    else {
      uVar10 = 0;
      uVar8 = 0;
      lVar11 = 0x20;
      do {
        lVar13 = *(long *)(unaff_x19 + 0x18);
        if (lVar13 == 0) {
LAB_04a8c060:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_04a8c05c;
        if (-1 < *(int *)(lVar13 + lVar11)) {
          if (lVar9 == 0) goto LAB_04a8c060;
          if (*(uint *)(lVar9 + 0x18) <= uVar8) {
LAB_04a8c05c:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          puVar1 = (undefined8 *)(lVar13 + lVar11);
          uVar19 = puVar1[3];
          uVar18 = puVar1[2];
          uVar15 = puVar1[5];
          uVar14 = puVar1[4];
          lVar13 = lVar9 + (long)(int)uVar8 * 0x38;
          uVar17 = puVar1[1];
          uVar16 = *puVar1;
          *(undefined8 *)(lVar13 + 0x50) = puVar1[6];
          *(undefined8 *)(lVar13 + 0x38) = uVar19;
          *(undefined8 *)(lVar13 + 0x30) = uVar18;
          *(undefined8 *)(lVar13 + 0x48) = uVar15;
          *(undefined8 *)(lVar13 + 0x40) = uVar14;
          *(undefined8 *)(lVar13 + 0x28) = uVar17;
          *(undefined8 *)(lVar13 + 0x20) = uVar16;
          if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_04a8c05c;
          if (lVar7 == 0) goto LAB_04a8c060;
          iVar12 = *(int *)(lVar9 + 0x20 + (long)(int)uVar8 * 0x38);
          iVar3 = 0;
          if (iVar6 != 0) {
            iVar3 = iVar12 / iVar6;
          }
          uVar2 = iVar12 - iVar3 * iVar6;
          if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_04a8c05c;
          lVar13 = lVar7 + (long)(int)uVar2 * 4;
          lVar4 = (long)(int)uVar8;
          uVar8 = uVar8 + 1;
          *(int *)(lVar9 + 0x20 + lVar4 * 0x38 + 4) = *(int *)(lVar13 + 0x20) + -1;
          *(uint *)(lVar13 + 0x20) = uVar8;
          iVar12 = *(int *)(unaff_x19 + 0x24);
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x38;
      } while ((long)uVar10 < (long)iVar12);
    }
    *(uint *)(unaff_x19 + 0x24) = uVar8;
    *(long *)(unaff_x19 + 0x18) = lVar9;
    thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x18),lVar9);
    *(long *)(unaff_x19 + 0x10) = lVar7;
    thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10),lVar7);
    *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
  }
  return;
}


