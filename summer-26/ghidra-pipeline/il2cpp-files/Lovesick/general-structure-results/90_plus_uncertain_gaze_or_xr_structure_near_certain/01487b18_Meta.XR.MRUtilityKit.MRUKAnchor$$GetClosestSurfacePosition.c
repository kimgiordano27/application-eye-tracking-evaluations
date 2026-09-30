/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$GetClosestSurfacePosition
ENTRY_POINT: 01487b18
PROGRAM: Lovesick-libil2cpp.so
SCORE: 163
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__GetClosestSurfacePosition(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  undefined8 in_x9;
  int iVar7;
  int *piVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  
  *(undefined8 *)(unaff_x19 + 0x150) = in_x9;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    if (1 < *(uint *)(lVar5 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x158) = *(undefined8 *)(lVar5 + 0x28);
      lVar5 = *(long *)(unaff_x19 + 0x150);
      if (lVar5 == 0) goto LAB_01487d00;
      if (1 < *(uint *)(lVar5 + 0x18)) {
        lVar10 = *(long *)(unaff_x19 + 0x158);
        if (lVar10 == 0) goto LAB_01487d00;
        if (1 < *(uint *)(lVar10 + 0x18)) {
          uVar9 = *(uint *)(lVar5 + 0x24);
          iVar7 = 0;
          iVar6 = 0;
          uVar11 = *(int *)(lVar10 + 0x24) * 3;
          lVar5 = 0x20;
          do {
            uVar12 = lVar5 - 0x20;
            if (uVar12 == uVar9) {
              lVar10 = *(long *)(unaff_x19 + 0x150);
              if (lVar10 == 0) goto LAB_01487d00;
              if (*(uint *)(lVar10 + 0x18) <= iVar7 + 2U) goto LAB_01487d04;
              uVar9 = *(uint *)(lVar10 + (long)(int)(iVar7 + 2U) * 4 + 0x20);
              iVar7 = iVar7 + 1;
            }
            if (uVar12 == uVar11) {
              lVar10 = *(long *)(unaff_x19 + 0x158);
              if (lVar10 == 0) goto LAB_01487d00;
              uVar11 = iVar6 + 2;
              if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_01487d04;
              iVar6 = iVar6 + 1;
              uVar11 = *(int *)(lVar10 + (long)(int)uVar11 * 4 + 0x20) * 3;
            }
            lVar10 = *(long *)(unaff_x19 + 0x160);
            if (lVar10 == 0) goto LAB_01487d00;
            if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_01487d04;
            *(char *)(lVar10 + lVar5) = (char)iVar7;
            lVar10 = *(long *)(unaff_x19 + 0x168);
            if (lVar10 == 0) goto LAB_01487d00;
            if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_01487d04;
            *(char *)(lVar10 + lVar5) = (char)iVar6;
            lVar5 = lVar5 + 1;
          } while (lVar5 != 0x260);
          uVar9 = 0;
          uVar12 = 0;
          do {
            lVar5 = *(long *)(unaff_x19 + 0x158);
            if (lVar5 == 0) goto LAB_01487d00;
            uVar1 = uVar12 + 1;
            if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_01487d04;
            iVar7 = 0;
            iVar6 = *(int *)(lVar5 + 0x20 + uVar1 * 4) - *(int *)(lVar5 + 0x20 + uVar12 * 4);
            do {
              iVar2 = iVar6;
              if (0 < iVar6) {
                do {
                  lVar5 = *(long *)(unaff_x19 + 0x170);
                  if (lVar5 == 0) goto LAB_01487d00;
                  if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_01487d04;
                  lVar10 = (long)(int)uVar9;
                  iVar2 = iVar2 + -1;
                  uVar9 = uVar9 + 1;
                  *(char *)(lVar5 + lVar10 + 0x20) = (char)iVar7;
                } while (iVar2 != 0);
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 != 3);
            uVar12 = uVar1;
          } while (uVar1 != 0xc);
          lVar5 = *unaff_x20;
          uVar12 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar12 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *unaff_x21) {
                puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_01487ce0;
              }
              uVar12 = uVar12 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar12 != 0);
          }
          puVar4 = (undefined8 *)FUN_00d59724();
LAB_01487ce0:
          uVar3 = (*(code *)*puVar4)();
          *(undefined4 *)(unaff_x19 + 0x178) = uVar3;
          return;
        }
      }
    }
LAB_01487d04:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_01487d00:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


