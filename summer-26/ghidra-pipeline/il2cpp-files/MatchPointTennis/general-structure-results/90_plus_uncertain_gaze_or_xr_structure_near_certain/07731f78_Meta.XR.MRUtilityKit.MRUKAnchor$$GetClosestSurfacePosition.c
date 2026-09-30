/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$GetClosestSurfacePosition
ENTRY_POINT: 07731f78
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 151
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__GetClosestSurfacePosition(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x25;
  uint uVar11;
  long lVar12;
  long *plVar13;
  
  iVar3 = FUN_094f2700();
  if (*(long *)(unaff_x21 + 0x1a0) != 0) {
    if (iVar3 != *(int *)(*(long *)(unaff_x21 + 0x1a0) + 0x18)) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c6b48(*(undefined8 *)PTR_DAT_09f31800,0);
    }
    puVar2 = PTR_DAT_09f31408;
    puVar1 = PTR_DAT_09f1e6a8;
    if (unaff_x22 != 0) {
      lVar4 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f31408,*(undefined4 *)(unaff_x22 + 0x18));
      lVar5 = FUN_04447c90(*(undefined8 *)puVar1,*(undefined4 *)(unaff_x22 + 0x18));
      lVar6 = FUN_04447c90(*(undefined8 *)puVar2,*(undefined4 *)(unaff_x22 + 0x18));
      lVar7 = FUN_04447c90(*(undefined8 *)puVar1,*(undefined4 *)(unaff_x22 + 0x18));
      if (unaff_x25 != 0) {
        uVar9 = *(uint *)(unaff_x25 + 0x18);
        if (0 < (int)uVar9) {
          uVar11 = 0;
          do {
            if (uVar9 <= uVar11) {
LAB_0773212c:
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            lVar12 = (long)(int)uVar11;
            plVar13 = (long *)(unaff_x25 + lVar12 * 8 + 0x20);
            lVar10 = *plVar13;
            if ((lVar10 == 0) || (lVar4 == 0)) goto LAB_07732128;
            if (*(uint *)(lVar4 + 0x18) <= uVar11) goto LAB_0773212c;
            *(undefined8 *)(lVar4 + lVar12 * 8 + 0x20) = *(undefined8 *)(lVar10 + 0x18);
            thunk_FUN_044bb4b4();
            if (*(uint *)(unaff_x25 + 0x18) <= uVar11) goto LAB_0773212c;
            lVar10 = *plVar13;
            if ((lVar10 == 0) || (lVar5 == 0)) goto LAB_07732128;
            if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_0773212c;
            *(undefined4 *)(lVar5 + lVar12 * 4 + 0x20) = *(undefined4 *)(lVar10 + 0x28);
            if ((unaff_x20 == 0) || (uVar8 = FUN_095259a0(), lVar6 == 0)) goto LAB_07732128;
            if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_0773212c;
            *(undefined8 *)(lVar6 + lVar12 * 8 + 0x20) = uVar8;
            thunk_FUN_044bb4b4();
            if (lVar7 == 0) goto LAB_07732128;
            if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_0773212c;
            *(uint *)(lVar7 + lVar12 * 4 + 0x20) = uVar11;
            uVar9 = *(uint *)(unaff_x25 + 0x18);
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < (int)uVar9);
        }
        if (unaff_x19 != 0) {
          FUN_0775ddf4();
          return;
        }
      }
    }
  }
LAB_07732128:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


